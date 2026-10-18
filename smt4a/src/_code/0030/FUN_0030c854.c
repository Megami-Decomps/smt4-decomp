/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030c854` (_code @ 0x30c854, 0x2a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

extern unsigned char LAB_0030c880; /* 0x30c880 */

/* Supplied declaration required: FUN_002e32a4. */
/* Supplied declaration required: FUN_0030c8ce. */


int FUN_0030c854(int *param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_0030c8ce();
  if (temp_v0 <= param_2) {
    temp_v1 = FUN_0030c8ce(param_1);
    FUN_002e32a4(9,&LAB_0030c880,&LAB_0030c880,param_2,temp_v1);
  }
  return *param_1 + param_2 * 4;
}
