/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002eeb98` (_code @ 0x2eeb98, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002eeccc(int, int *, unsigned char [20], int);
int FUN_002eed44(unsigned char [20], unsigned int, unsigned int);

/* Supplied declaration required: FUN_002eeccc. */
/* Supplied declaration required: FUN_002eed44. */


unsigned char FUN_002eeb98(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  unsigned char temp_v0 [20];
  unsigned int uStack_1c;
  int uStack_18;
  unsigned int uStack_14;
  unsigned int uStack_10;
  
  if (param_4 >= 0x11) {
    uStack_1c = param_1;
    uStack_18 = param_2;
    uStack_14 = param_3;
    uStack_10 = param_4;
    FUN_002eeccc(2,&uStack_18,temp_v0,0x14);
    FUN_002eed44(temp_v0,param_3,param_4);
  }
  return param_4 >= 0x11;
}

} /* extern "C" */
