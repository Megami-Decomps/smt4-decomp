/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003dd8ac` (_code @ 0x3dd8ac, 0x354 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0023ce64. */
/* Supplied declaration required: FUN_0024d648. */
/* Supplied declaration required: FUN_00282b94. */
extern unsigned int FUN_00293c98(void);


void FUN_003dd8ac(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  
  switch(param_2) {
  case 0:
    temp_v0 = FUN_00293c98();
    FUN_0023ce64(temp_v0,param_3,0);
    break;
  case 1:
    temp_v0 = FUN_00293c98();
    FUN_0024d648(temp_v0,param_3,0);
    break;
  case 2:
    temp_v0 = FUN_00293c98();
    FUN_00282b94(temp_v0,param_3);
    break;
  case 3:
    temp_v0 = FUN_00293c98();
    FUN_0023ce64(temp_v0,param_4,0);
    break;
  case 4:
    temp_v0 = FUN_00293c98();
    FUN_0024d648(temp_v0,param_4,0);
    break;
  case 5:
    temp_v0 = FUN_00293c98();
    FUN_00282b94(temp_v0,param_4);
    break;
  case 6:
    break;
  case 8:
    break;
  case 9:
    break;
  case 0xc:
    break;
  case 0xd:
    temp_v0 = FUN_00293c98();
    FUN_0023ce64(temp_v0,param_4,1);
  }
  return;
}
