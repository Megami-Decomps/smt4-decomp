/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00229c5c` (_code @ 0x229c5c, 0x30 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_3_stack;

extern int DAT_00439ca8; /* 0x439ca8 */

/* Supplied declaration required: FUN_00297f1c. */


void FUN_00229c5c(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = DAT_00439ca8;
  *(unsigned int *)(DAT_00439ca8 + 0x7e38) = 7;
  FUN_00297f1c(temp_v0 + 0x2460,param_2,0xffffffff,param_3);
  return;
}
