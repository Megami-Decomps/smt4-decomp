/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00234330` (_code @ 0x234330, 0xa8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0023a198. */
extern unsigned int FUN_0035a010(unsigned int);
extern unsigned int FUN_0035a060(unsigned int);
/* Supplied declaration required: rt_memcpy. */


void FUN_00234330(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3 [68];
  
  temp_v0 = FUN_0035a060(param_4);
  temp_v1 = FUN_0035a010(param_3);
  switch(param_2) {
  case 0:
    temp_v2 = 0x2343d8;
    break;
  case 1:
    temp_v2 = 0x2343e8;
    break;
  case 2:
    temp_v2 = 0x2343fc;
    break;
  case 3:
    temp_v2 = 0x234418;
    break;
  case 4:
    temp_v2 = 0x234434;
    break;
  case 5:
    temp_v2 = 0x234448;
    break;
  default:
    temp_v2 = 0;
  }
  FUN_0023a198(temp_v3,temp_v2,temp_v1,temp_v0);
  rt_memcpy(param_1,temp_v3,0x40);
  return;
}
