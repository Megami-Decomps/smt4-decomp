/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e4308` (_code @ 0x2e4308, 0x68 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001aba54(void);

extern int DAT_0057f56c; /* 0x57f56c */

/* Supplied declaration required: FUN_001aba54. */


void FUN_002e4308(int param_1,unsigned char param_2,int param_3)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = DAT_0057f56c;
  *(unsigned int *)(DAT_0057f56c + 0x14) = 2;
  *(short *)(temp_v0 + 0x18) = (short)param_1;
  *(unsigned char *)(temp_v0 + 0x11) = param_2;
  *(unsigned char *)(temp_v0 + 0x2b8) = 0;
  if (param_3 != 0) {
    FUN_001aba54();
    if (param_1 == 0) {
      param_3 = 0;
    }
    else {
      if (*(short *)(param_1 + 0x86) == 0) {
        param_3 = 0;
      }
      if ((*(unsigned char *)(param_1 + 0x39) & 0x80) != 0) {
        *(unsigned char *)(temp_v0 + 0x2b8) = 1;
      }
    }
  }
  *(unsigned int *)(temp_v0 + 0x2ac) = 0;
  *(char *)(temp_v0 + 0x2b1) = (char)param_3;
  *(unsigned char *)(temp_v0 + 0x2b0) = 1;
  return;
}

} /* extern "C" */
