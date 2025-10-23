#ifndef _STRMET_H
#define _STRMET_H

typedef struct {
    char **str;
    void (*p_func)(char ***, char *);
} String;


int strfind(char *, char *);
void strsplit(char *, char ***, char *);

#endif