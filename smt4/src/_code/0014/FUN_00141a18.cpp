/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00141a18` (_code @ 0x141a18, 0xc4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001473e8(unsigned int, int, int, int, int, int, int, int);
int FUN_002bfe28(int, int);
int nn_math_ARMv6_MTX34CopyAsm(int, int);

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

/* Supplied declaration required: FUN_001473e8. */
/* Supplied declaration required: FUN_002bfe28. */
/* Supplied declaration required: nn_math_ARMv6_MTX34CopyAsm. */


void FUN_00141a18(int param_1,int param_2,int param_3,int param_4)

{
/* irregular: 3 native warning(s); review required */
  *(unsigned int *)(param_2 + 0x294) = *(unsigned int *)(param_4 + 0x294);
  *(unsigned int *)(param_3 + 0x294) = *(unsigned int *)(param_4 + 0x294);
  if ((*(unsigned int *)(*(int *)(param_4 + 8) + 0xb8) & 0xff) != 2) {
    FUN_001473e8(*(unsigned int *)(param_1 + 0x70),param_2 + 0x1a8,param_2 + 0x148,param_3 + 0x1a8,
                 param_3 + 0x148,param_4 + 0x1a8,param_4 + 0x148,0);
    return;
  }
  FUN_002bfe28(param_2 + 0x1a8,param_4 + 0x1a8);
  nn_math_ARMv6_MTX34CopyAsm(param_2 + 0x148,param_4 + 0x148);
  FUN_002bfe28(param_3 + 0x1a8,param_4 + 0x1a8);
  nn_math_ARMv6_MTX34CopyAsm(param_3 + 0x148,param_4 + 0x148);
  *(unsigned char *)(*(int *)(param_4 + 0x260) + 8) = 1;
  *(unsigned char *)(*(int *)(param_2 + 0x260) + 8) = 1;
  *(unsigned char *)(*(int *)(param_3 + 0x260) + 8) = 1;
  return;
}

} /* extern "C" */
