/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004f85c8` (_code @ 0x4f85c8, 0x1c0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00100388. */
extern int FUN_00100d60(unsigned char *, unsigned int);
/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_002804b0. */
/* Supplied declaration required: FUN_002e342c. */
/* Supplied declaration required: FUN_002e6354. */
extern int FUN_0035bcdc(int);


unsigned int FUN_004f85c8(int param_1,int param_2)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned char temp_v3 [128];
  unsigned char temp_v4 [140];
  
  if (param_2 != 0) {
    temp_v2 = 0;
    do {
      temp_v1 = param_1 + temp_v2 * 0x8c;
      *(unsigned char *)(temp_v1 + 0x30e0) = 0xff;
      FUN_002e6354(temp_v1 + 0x30e8,0x80);
      if (*(int *)(temp_v1 + 0x30e4) != 0) {
        FUN_0019a5a0();
        *(unsigned int *)(temp_v1 + 0x30e4) = 0;
      }
      *(unsigned char *)(temp_v1 + 0x3168) = 0;
      FUN_002e6354(temp_v4,0x80);
      FUN_002e6354(temp_v3,0x80);
      FUN_00100388(temp_v3,"battle/effect/%s.eft","ef_Assist_01" + temp_v2 * 0x20);
      FUN_002e342c(temp_v4,temp_v3);
      temp_v0 = FUN_00100d60(temp_v4,0x2f);
      FUN_002e342c(temp_v1 + 0x30e8,temp_v0 + 1);
      temp_v0 = FUN_0035bcdc(temp_v1 + 0x30e8);
      if (temp_v0 == 0xff) {
        FUN_002804b0(temp_v4,temp_v1 + 0x30e4,1);
        *(unsigned char *)(temp_v1 + 0x3168) = *(unsigned char *)(temp_v1 + 0x3168) | 1;
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 3);
  }
  else {
    *(unsigned char *)(param_1 + 0x31f8) = 0xff;
    FUN_002e6354(param_1 + 0x3200,0x80);
    if (*(int *)(param_1 + 0x31fc) != 0) {
      FUN_0019a5a0();
      *(unsigned int *)(param_1 + 0x31fc) = 0;
    }
    *(unsigned char *)(param_1 + 0x3280) = 0;
    FUN_002e6354(temp_v4,0x80);
    FUN_002e6354(temp_v3,0x80);
    FUN_00100388(temp_v3,"battle/effect/%s.eft","ef_Assist_03");
    FUN_002e342c(temp_v4,temp_v3);
    temp_v2 = FUN_00100d60(temp_v4,0x2f);
    FUN_002e342c(param_1 + 0x3200,temp_v2 + 1);
    temp_v2 = FUN_0035bcdc(param_1 + 0x3200);
    if (temp_v2 == 0xff) {
      FUN_002804b0(temp_v4,param_1 + 0x31fc,1);
      *(unsigned char *)(param_1 + 0x3280) = *(unsigned char *)(param_1 + 0x3280) | 1;
    }
  }
  return 1;
}
