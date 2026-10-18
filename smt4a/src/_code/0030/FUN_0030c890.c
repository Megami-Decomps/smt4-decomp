/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030c890` (_code @ 0x30c890, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

extern unsigned char LAB_0030c8bc; /* 0x30c8bc */

/* Supplied declaration required: FUN_002e32a4. */
/* Supplied declaration required: FUN_0030c8c0. */


int FUN_0030c890(int *param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_0030c8c0();
  if (temp_v0 <= param_2) {
    temp_v1 = FUN_0030c8c0(param_1);
    FUN_002e32a4(9,&LAB_0030c8bc,&LAB_0030c8bc,param_2,temp_v1);
  }
  return *param_1 + param_2 * 0x18;
}
