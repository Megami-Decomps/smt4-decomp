/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037c15c` (_code @ 0x37c15c, 0x54 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp40; /* 0x40: local_40 */
} param_4_stack;

/* Supplied declaration required: FUN_0035ff3c. */


void FUN_0037c15c(unsigned int param_1,unsigned int param_2,unsigned int param_3,int param_4)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned char temp_v1 [32];
  
  temp_v0 = 0;
  if (temp_v0 < param_3) {
    do {
      FUN_0035ff3c(param_4,temp_v1,param_2,param_1,0xe);
      temp_v0 = temp_v0 + 0xe;
      param_4 = param_4 + 8;
    } while (temp_v0 < param_3);
  }
  return;
}
