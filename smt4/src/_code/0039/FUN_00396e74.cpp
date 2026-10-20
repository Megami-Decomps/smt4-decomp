/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00396e74` (_code @ 0x396e74, 0x60 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0029bb3c(unsigned char *, int);

extern unsigned char LAB_00396ed4; /* 0x396ed4 */
extern unsigned char LAB_00396eec; /* 0x396eec */

/* Supplied declaration required: FUN_0029bb3c. */


void FUN_00396e74(int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)&LAB_00396ed4;
  FUN_0029bb3c(&LAB_00396ed4,0x1c0);
  *(unsigned int **)(param_1 + 0x98) = puVar1;
  *puVar1 = *puVar1 | 2;
  *(unsigned char *)(*(int *)(puVar1[2] + 0x2c) + 0x1f6) = 0;
  puVar1 = (unsigned int *)&LAB_00396eec;
  FUN_0029bb3c(&LAB_00396eec,0x1c0);
  *(unsigned int **)(param_1 + 0x9c) = puVar1;
  *puVar1 = *puVar1 | 2;
  *(unsigned char *)(*(int *)(puVar1[2] + 0x2c) + 0x1f6) = 0;
  return;
}

} /* extern "C" */
