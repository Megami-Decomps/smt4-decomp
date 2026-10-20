/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004b93a8` (_code @ 0x4b93a8, 0x64 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00100388(unsigned char [36], unsigned char *, int);
int FUN_00275f44(unsigned int, unsigned int);

extern unsigned char LAB_004b940c; /* 0x4b940c */

/* Supplied declaration required: FUN_00100388. */
/* Supplied declaration required: FUN_00275f44. */
extern unsigned int FUN_00357bc8(unsigned int, unsigned char *);
extern int FUN_004ba698(int);


void FUN_004b93a8(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned char temp_v2 [36];
  
  temp_v0 = FUN_004ba698(param_1 + 0x9c);
  if (temp_v0 != 0) {
    FUN_00100388(temp_v2,&LAB_004b940c,*(int *)(param_1 + 0x1118) + 0x20);
    temp_v1 = FUN_00357bc8(*(unsigned int *)(param_1 + 0x1128),temp_v2);
    FUN_00275f44(*(unsigned int *)(param_1 + 0x1130),temp_v1);
    *(unsigned int *)(param_1 + 0x28) = 4;
    *(unsigned int *)(param_1 + 0x2c) = 0;
  }
  return;
}

} /* extern "C" */
