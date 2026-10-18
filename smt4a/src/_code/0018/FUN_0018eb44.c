/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0018eb44` (_code @ 0x18eb44, 0x60 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_1_stack;


void FUN_0018eb44(int param_1)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  
  puVar1 = *(unsigned int **)(param_1 + 0xc);
  puVar3 = puVar1 + *(int *)(param_1 + 0x10) * 0x10;
  for (; puVar1 != puVar3; puVar1 = puVar1 + 0x10) {
    puVar2 = puVar1 + 1;
    if (((~*puVar1 & 0x2800000) != 0) && (*puVar2 == 0x3f800000)) {
      if (puVar1[2] == 0x3f800000) {
        puVar2 = (unsigned int *)puVar1[3];
      }
      if (puVar1[2] == 0x3f800000 && puVar2 == (unsigned int *)0x3f800000) {
        *puVar1 = *puVar1 | 0x2800000;
      }
    }
  }
  return;
}
