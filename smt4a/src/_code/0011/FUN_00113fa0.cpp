/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00113fa0` (_code @ 0x113fa0, 0x42 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e9318(int *);
int FUN_002fecdc(int *, unsigned int, unsigned char *);
int FUN_002fed24(int, int *);

extern unsigned char LAB_00113fe4; /* 0x113fe4 */
extern unsigned char LAB_00113ff8; /* 0x113ff8 */

/* Supplied declaration required: FUN_002e9318. */
/* Supplied declaration required: FUN_002fecdc. */
/* Supplied declaration required: FUN_002fed24. */


int FUN_00113fa0(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int iStack_20;
  unsigned int uStack_1c;
  int uStack_18;
  unsigned int uStack_14;
  
  iStack_20 = param_1;
  uStack_1c = param_2;
  uStack_18 = param_3;
  uStack_14 = param_4;
  FUN_002fecdc(&iStack_20,param_2,&LAB_00113fe4);
  temp_v0 = FUN_002fed24(param_1 + 4,&iStack_20);
  FUN_002e9318(&iStack_20);
  FUN_002fecdc(&uStack_18,param_2,&LAB_00113ff8);
  temp_v0 = FUN_002fed24(temp_v0 + 0x24,&uStack_18);
  FUN_002e9318(&uStack_18);
  return temp_v0 - 0x28;
}

} /* extern "C" */
