/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0036333c` (_code @ 0x36333c, 0x54 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_6: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_6_stack;

/* Supplied declaration required: FUN_003f7ff0. */


void FUN_0036333c(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                 unsigned int param_5,unsigned int param_6)

{
/* irregular: 1 native warning(s); review required */
  unsigned char temp_v0 [4];
  
  FUN_003f7ff0(*(unsigned int *)(param_1 + 8),*(unsigned int *)(param_1 + 0x18),param_2,param_3,param_4,
               param_5,param_5,param_6,*(unsigned char *)(param_1 + 0x20),temp_v0);
  return;
}
