/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0017addc` (_code @ 0x17addc, 0x58 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0017b168(void);

/* Supplied declaration required: FUN_0017b168. */


void FUN_0017addc(unsigned int param_1,unsigned int param_2,int param_3,unsigned int param_4)

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
    FUN_0017b168();
  }
                    /* WARNING: Treating indirect jump as return */
  return;
}

} /* extern "C" */
