#ifndef OPTION_H
#define OPTION_H

#include <stdbool.h>
int options(char *fid, char *password);
int optiont(char *femail, char *password);
//int gpcal();
int cgpcal();
int elect_cr();
int course_reg(char *fid);
bool vote (char name[]);
int searchstd();
int editstdinfo(char *fid,char *password);
int edittcrinfo(char *femail, char *password);
int dlt(char *fid, char *password);
bool vote(char name[]);
void print_winner(void);
bool check_tie(int most_votes);
void reset_votes(void);

#endif
