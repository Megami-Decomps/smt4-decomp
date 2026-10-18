/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037b94c` (_code @ 0x37b94c, 0xc bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_001404ac. */
extern int FUN_002ac614(unsigned char *, unsigned int *, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002ac6d0. */


void FUN_0037b94c(unsigned int param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int uStack_30;
  unsigned int uStack_2c;
  unsigned char uStack_28;
  unsigned char uStack_27;
  unsigned char uStack_26;
  unsigned char uStack_25;
  unsigned char uStack_24;
  unsigned char temp_v3 [8];
  
  if (param_2 == 0) {
    return;
  }
  FUN_002ac6d0(temp_v3);
  uStack_28 = 0;
  uStack_27 = 0;
  uStack_26 = 0;
  uStack_25 = 0;
  uStack_24 = 0;
  temp_v2 = FUN_002ac614(temp_v3,(unsigned int *)&uStack_30,param_3,0);
  temp_v1 = uStack_2c;
  temp_v0 = uStack_30;
  if (temp_v2 != 0) {
    uStack_30 = 8;
    uStack_2c = 0;
    FUN_001404ac(param_1,temp_v0,temp_v1,param_4);
  }
  return;
}
