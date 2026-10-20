/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00426eb8` (_code @ 0x426eb8, 0xa8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0043c2d4(unsigned char [68], unsigned int, unsigned int, unsigned int);
int rt_memcpy(unsigned int, unsigned char [68], int);

extern unsigned int FUN_00431140(unsigned int);
extern unsigned int FUN_004311a8(unsigned int);
/* Supplied declaration required: FUN_0043c2d4. */
/* Supplied declaration required: rt_memcpy. */


void FUN_00426eb8(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3 [68];
  
  temp_v0 = FUN_004311a8(param_4);
  temp_v1 = FUN_00431140(param_3);
  switch(param_2) {
  case 0:
    temp_v2 = 0x426f60;
    break;
  case 1:
    temp_v2 = 0x426f70;
    break;
  case 2:
    temp_v2 = 0x426f84;
    break;
  case 3:
    temp_v2 = 0x426fa0;
    break;
  case 4:
    temp_v2 = 0x426fbc;
    break;
  case 5:
    temp_v2 = 0x426fd0;
    break;
  default:
    temp_v2 = 0;
  }
  FUN_0043c2d4(temp_v3,temp_v2,temp_v1,temp_v0);
  rt_memcpy(param_1,temp_v3,0x40);
  return;
}

} /* extern "C" */
