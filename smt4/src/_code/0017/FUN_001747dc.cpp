/* NON_MATCHING: unit starts mid-flow using incoming r5/sl/lr and ends through an interior-register return; not a standalone C function. */
#include "romwright_types.h"

extern "C" {

int FUN_00174b68(void);

/* Supplied declaration required: FUN_00174b68. */


void FUN_001747dc(unsigned int param_1,unsigned int param_2,int param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  unsigned char *unaff_r5;
  int temp_v0;
  unsigned char temp_v1;
  unsigned int temp_v2;
  
  temp_v2 = (unsigned int)(unsigned char)unaff_r5[-8];
  if ((unsigned int)(unsigned char)unaff_r5[-1] < (unsigned int)(unsigned char)unaff_r5[-8]) {
    temp_v2 = (unsigned int)(unsigned char)unaff_r5[-1];
  }
  if (temp_v2 == 9) {
    temp_v2 = 3;
  }
  temp_v1 = (unsigned char)temp_v2;
  param_4 = param_4 >> 0x1c;
  if (temp_v2 <= param_4) {
    param_4 = param_4 + 1;
  }
  if (param_4 < 9) {
    temp_v0 = 4;
    temp_v1 = (char)param_4;
  }
  else {
    temp_v0 = 1;
  }
  *unaff_r5 = temp_v1;
  if (param_3 < temp_v0) {
    FUN_00174b68();
  }
                    /* WARNING: Treating indirect jump as return */
  return;
}

} /* extern "C" */
