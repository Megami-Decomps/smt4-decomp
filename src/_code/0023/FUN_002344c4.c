/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002344c4` (_code @ 0x2344c4, 0xa8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0023a330. */
/* Supplied declaration required: FUN_002c5ff4. */
extern unsigned int FUN_0035a220(unsigned int);
extern unsigned int FUN_0035a270(unsigned int);


void FUN_002344c4(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3 [68];
  
  temp_v0 = FUN_0035a270(param_4);
  temp_v1 = FUN_0035a220(param_3);
  switch(param_2) {
  case 0:
    temp_v2 = 0x23456c;
    break;
  case 1:
    temp_v2 = 0x23457c;
    break;
  case 2:
    temp_v2 = 0x234590;
    break;
  case 3:
    temp_v2 = 0x2345ac;
    break;
  case 4:
    temp_v2 = 0x2345c8;
    break;
  case 5:
    temp_v2 = 0x2345dc;
    break;
  default:
    temp_v2 = 0;
  }
  FUN_0023a330(temp_v3,temp_v2,temp_v1,temp_v0);
  FUN_002c5ff4(param_1,temp_v3,0x40);
  return;
}
