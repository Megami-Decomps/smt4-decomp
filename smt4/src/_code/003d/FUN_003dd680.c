/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003dd680` (_code @ 0x3dd680, 0x354 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0023cd08. */
/* Supplied declaration required: FUN_0024d434. */
/* Supplied declaration required: FUN_00282924. */
extern unsigned int FUN_002939f4(void);


void FUN_003dd680(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  
  switch(param_2) {
  case 0:
    temp_v0 = FUN_002939f4();
    FUN_0023cd08(temp_v0,param_3,0);
    break;
  case 1:
    temp_v0 = FUN_002939f4();
    FUN_0024d434(temp_v0,param_3,0);
    break;
  case 2:
    temp_v0 = FUN_002939f4();
    FUN_00282924(temp_v0,param_3);
    break;
  case 3:
    temp_v0 = FUN_002939f4();
    FUN_0023cd08(temp_v0,param_4,0);
    break;
  case 4:
    temp_v0 = FUN_002939f4();
    FUN_0024d434(temp_v0,param_4,0);
    break;
  case 5:
    temp_v0 = FUN_002939f4();
    FUN_00282924(temp_v0,param_4);
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
    temp_v0 = FUN_002939f4();
    FUN_0023cd08(temp_v0,param_4,1);
  }
  return;
}
