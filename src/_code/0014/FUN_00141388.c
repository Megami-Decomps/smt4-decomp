/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00141388` (_code @ 0x141388, 0xc4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

/* Supplied declaration required: FUN_00147300. */
/* Supplied declaration required: FUN_002c0000. */
/* Supplied declaration required: FUN_002c00b4. */


void FUN_00141388(int param_1,int param_2,int param_3,int param_4)

{
/* irregular: 3 native warning(s); review required */
  *(unsigned int *)(param_2 + 0x294) = *(unsigned int *)(param_4 + 0x294);
  *(unsigned int *)(param_3 + 0x294) = *(unsigned int *)(param_4 + 0x294);
  if ((*(unsigned int *)(*(int *)(param_4 + 8) + 0xb8) & 0xff) != 2) {
    FUN_00147300(*(unsigned int *)(param_1 + 0x70),param_2 + 0x1a8,param_2 + 0x148,param_3 + 0x1a8,
                 param_3 + 0x148,param_4 + 0x1a8,param_4 + 0x148,0);
    return;
  }
  FUN_002c0000(param_2 + 0x1a8,param_4 + 0x1a8);
  FUN_002c00b4(param_2 + 0x148,param_4 + 0x148);
  FUN_002c0000(param_3 + 0x1a8,param_4 + 0x1a8);
  FUN_002c00b4(param_3 + 0x148,param_4 + 0x148);
  *(unsigned char *)(*(int *)(param_4 + 0x260) + 8) = 1;
  *(unsigned char *)(*(int *)(param_2 + 0x260) + 8) = 1;
  *(unsigned char *)(*(int *)(param_3 + 0x260) + 8) = 1;
  return;
}
