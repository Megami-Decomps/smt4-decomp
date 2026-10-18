/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00288790` (_code @ 0x288790, 0xb4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp10; /* 0x10: local_10 */
} param_4_stack;

/* Supplied declaration required: FUN_002ae9ec. */


void FUN_00288790(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  
  if (param_1 == 0) {
    return;
  }
  temp_v0 = 0;
  switch(param_1) {
  case 1:
    temp_v0 = 5;
    break;
  case 2:
    temp_v0 = 6;
    break;
  case 3:
    temp_v0 = 0x22;
    break;
  case 4:
    temp_v0 = 8;
    break;
  case 5:
    temp_v0 = 2;
    break;
  case 6:
    temp_v0 = 1;
    break;
  case 8:
    temp_v0 = 3;
    break;
  case 9:
    temp_v0 = 4;
    break;
  case 10:
    temp_v0 = 0x13;
  }
  FUN_002ae9ec(2,0x13,temp_v0,param_2,param_3,param_4);
                    /* WARNING: Treating indirect jump as return */
  return;
}
