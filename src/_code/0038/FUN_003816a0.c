/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003816a0` (_code @ 0x3816a0, 0x44 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_6: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_6_stack;

/* Supplied declaration required: FUN_003816e4. */


void FUN_003816a0(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,unsigned int param_5,
                 unsigned int param_6)

{
/* irregular: 1 native warning(s); review required */
  FUN_003816e4(param_1,param_2,param_3,0xffffffff,param_4,param_5,param_6);
  *(unsigned char *)(param_1 + 9) = *(unsigned char *)(param_1 + 9) | (unsigned char)(1 << (param_2 & 0xff));
  return;
}
