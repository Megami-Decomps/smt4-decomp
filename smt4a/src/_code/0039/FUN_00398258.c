/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00398258` (_code @ 0x398258, 0x98 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_5: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp18; /* 0x18: local_18 */
} param_5_stack;

extern int DAT_0058103c; /* 0x58103c */

/* Supplied declaration required: FUN_002392b8. */
/* Supplied declaration required: FUN_002c2cc4. */
/* Supplied declaration required: FUN_002c2d5c. */


void FUN_00398258(unsigned int param_1,unsigned int param_2,int param_3,unsigned int param_4,
                 unsigned int param_5)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = DAT_0058103c;
  if (param_3 != 0) {
    *(unsigned char *)(DAT_0058103c + 0x1d) = 1;
    *(unsigned int *)(temp_v0 + 0x20) = 0;
    FUN_002392b8(param_2);
    FUN_002c2cc4(param_1,0,1,param_4,param_5);
    return;
  }
  FUN_002392b8(param_2);
  FUN_002c2cc4(param_1,1,1,param_4,param_5);
  FUN_002c2d5c(0xffffffff);
  return;
}
