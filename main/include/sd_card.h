#ifndef SD_CARD
#define SD_CARD

void init_sd(void);
FILE* open_file(char * filename);
void write_data_to_file(void *data, int data_length, FILE *f);
void close_file(FILE *f);
void unmount();

#endif