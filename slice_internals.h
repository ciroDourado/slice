#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* _slice           (int, char*);
int   _is_out_of_bonds (int, char*);
char* _get_from        (int, char*);

char* _slice_or_copy   (int, char*);
char* _copy            (char*);
