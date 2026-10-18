/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0022a824` (_code @ 0x22a824, 0x21c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_0043427c; /* 0x43427c */

extern unsigned int *FUN_0027eb98(unsigned int);
/* Supplied declaration required: FUN_00282b94. */
extern unsigned int FUN_00293c98(void);


void FUN_0022a824(int param_1)

{
/* irregular: irregular input(s): in_s0; 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int *puVar2;
  float in_s0;
  int temp_v1;
  int temp_v2;
  
  temp_v2 = (int)in_s0;
  temp_v0 = FUN_00293c98();
  FUN_00282b94(temp_v0,(int)in_s0);
  temp_v0 = FUN_00293c98();
  FUN_00282b94(temp_v0,temp_v2);
  switch(param_1) {
  case 7:
  case 8:
    break;
  case 9:
    temp_v1 = temp_v2;
    temp_v0 = FUN_00293c98();
    FUN_00282b94(temp_v0,temp_v2);
    temp_v2 = temp_v1;
    break;
  case 10:
    break;
  case 0xb:
    temp_v1 = temp_v2;
    temp_v0 = FUN_00293c98();
    FUN_00282b94(temp_v0,temp_v2);
    temp_v2 = temp_v1;
  }
  puVar2 = (unsigned int *)FUN_0027eb98(DAT_0043427c);
  if ((*puVar2 & 0x200) == 0) {
    if (param_1 != 8) {
      if (param_1 == 7) {
        temp_v1 = temp_v2;
        temp_v0 = FUN_00293c98();
        FUN_00282b94(temp_v0,temp_v2);
        temp_v0 = FUN_00293c98();
        FUN_00282b94(temp_v0,temp_v1);
      }
    }
    else {
      temp_v1 = temp_v2;
      temp_v0 = FUN_00293c98();
      FUN_00282b94(temp_v0,temp_v2);
      temp_v2 = temp_v1;
      temp_v0 = FUN_00293c98();
      FUN_00282b94(temp_v0,temp_v1);
      temp_v0 = FUN_00293c98();
      FUN_00282b94(temp_v0,temp_v2);
    }
  }
  return;
}
