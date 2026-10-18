/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e77cc` (_code @ 0x3e77cc, 0x74 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_5: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_5_stack;


void FUN_003e77cc(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                 unsigned int param_5)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = (int *)(param_1 + 0x2410);
  piVar1 = (int *)(param_1 + 0x2414);
  *(unsigned int *)(*piVar2 + *piVar1 * 0x10) = param_2;
  *(unsigned int *)(*piVar2 + *piVar1 * 0x10 + 4) = param_3;
  *(unsigned int *)(*piVar2 + *piVar1 * 0x10 + 8) = param_4;
  *(unsigned int *)(*piVar2 + *piVar1 * 0x10 + 0xc) = param_5;
  *piVar1 = *piVar1 + 1;
  return;
}
