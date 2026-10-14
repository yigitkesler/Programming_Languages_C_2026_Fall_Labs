// week5_task1_file_io.c
// Name: Yigit  Surname: Kesler  Student ID: 251ADB030
//
// Task 1: Read and write data from text files
// Week 5 - Files & Modular Programming

#include <stdio.h>
#include <stdlib.h>

#define DEFAULT_FILENAME "data.txt"
#define LINE_LEN 256

int main(int argc, char* argv[]) {
  FILE* fp = NULL;
  const char* filename = DEFAULT_FILENAME;
  char line[LINE_LEN];
  int line_count = 0;

  // Use the provided filename if there is one
  if (argc > 1) {
    filename = argv[1];
  }

  // Open the file for writing
  printf("Writing lines to %s...\n", filename);

  fp = fopen(filename, "w");

  if (fp == NULL) {
    perror(filename);
    return EXIT_FAILURE;
  }

  fprintf(fp, "Hello, file I/O in C!\n");
  fprintf(fp, "This is another line.\n");

  fclose(fp);

  // Open the file for reading
  fp = fopen(filename, "r");

  if (fp == NULL) {
    perror(filename);
    return EXIT_FAILURE;
  }

  printf("Reading contents:\n");

  while (fgets(line, LINE_LEN, fp) != NULL) {
    printf("%s", line);
    line_count++;
  }

  fclose(fp);

  printf("Lines read: %d\n", line_count);

  return EXIT_SUCCESS;
}