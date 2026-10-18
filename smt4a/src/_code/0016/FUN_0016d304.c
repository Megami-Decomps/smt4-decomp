/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0016d304` (_code @ 0x16d304, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern int FUN_0017db04(int);


void FUN_0016d304(int param_1)

{
  int temp_v0;
  int *piVar2;
  
  temp_v0 = FUN_0017db04(param_1 + *(int *)(param_1 + 0x9c) * 0x4c + 4);
  piVar2 = *(int **)(param_1 + 0xa8);
  *piVar2 = temp_v0;
  if ((unsigned int *)piVar2[3] != (unsigned int *)0x0) {
    *(unsigned int *)piVar2[3] = (unsigned int)(temp_v0 - piVar2[2]) >> 3;
  }
  piVar2[1] = *piVar2;
  piVar2[3] = 0;
  piVar2[2] = *piVar2;
  piVar2[4] = 0;
  return;
}
