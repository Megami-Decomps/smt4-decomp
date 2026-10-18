/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003243bc` (_code @ 0x3243bc, 0x60 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_0032441c; /* 0x32441c */

/* Supplied declaration required: FUN_002be7fc. */
extern unsigned int FUN_002c3290(int);


unsigned int FUN_003243bc(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  FUN_002be7fc(param_2,&LAB_0032441c,*(int *)(param_1 + 0x30) + 0xc);
  temp_v0 = FUN_002c3290(param_2);
  for (temp_v1 = 0; (temp_v1 < temp_v0 && (*(char *)(param_2 + temp_v1) != '.')); temp_v1 = temp_v1 + 1) {
  }
  if (temp_v0 != temp_v1) {
    *(unsigned char *)(param_2 + temp_v1) = 0;
  }
  return **(unsigned int **)(param_1 + 0x30);
}
