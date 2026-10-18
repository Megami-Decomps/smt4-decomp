/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013d0f0` (_code @ 0x13d0f0, 0x1cc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0014aa9c. */
/* Supplied declaration required: FUN_001536e4. */
/* Supplied declaration required: FUN_00163aa4. */
extern int FUN_00164a9c(void);


unsigned char FUN_0013d0f0(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  float temp_v2;
  float temp_v3;
  float temp_v4;
  
  temp_v0 = FUN_00164a9c();
  if (((*(char *)(temp_v0 + 0x1040) != '\0') && (*(char *)(temp_v0 + 0x1043) != '\0')) &&
     (*(char *)(temp_v0 + 0x1c) != '\0')) {
    if (*(char *)(temp_v0 + 0x24) != '\0') {
      temp_v2 = *(float *)(temp_v0 + 0x28);
      *(int *)(temp_v0 + 0x20) = *(int *)(temp_v0 + 0x20) + 1;
      if ((int)temp_v2 >= 0x3e800001) {
        temp_v2 = temp_v2 - 0.13f / *(float *)(temp_v0 + 0x30);
        *(float *)(temp_v0 + 0x28) = temp_v2;
      }
      if ((int)temp_v2 < 0x3e800001) {
        temp_v2 = 0.25f;
      }
      temp_v3 = *(float *)(temp_v0 + 0x2c);
      *(float *)(temp_v0 + 0x28) = temp_v2;
      if ((int)temp_v3 >= 0x3e800001) {
        temp_v3 = temp_v3 - 0.110000014f / *(float *)(temp_v0 + 0x30);
        *(float *)(temp_v0 + 0x2c) = temp_v3;
      }
      temp_v1 = 0;
      if ((int)temp_v3 < 0x3e800001) {
        temp_v3 = 0.25f;
      }
      *(float *)(temp_v0 + 0x2c) = temp_v3;
      do {
        FUN_00163aa4(temp_v0 + temp_v1 * 0x8c + 0x54);
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < 0x18);
      FUN_00163aa4(temp_v0 + 0xe8c);
      FUN_00163aa4();
      if (*(char *)(temp_v0 + 0xfa2) != '\0') {
        FUN_00163aa4(temp_v0 + 0xd74);
      }
    }
    else {
      temp_v2 = *(float *)(temp_v0 + 0x28);
      if ((int)temp_v2 < 0x3ec28f5c) {
        temp_v2 = 0.13f / *(float *)(temp_v0 + 0x30) + temp_v2;
        *(float *)(temp_v0 + 0x28) = temp_v2;
      }
      temp_v3 = 0.13f;
      if ((int)temp_v2 < 0x3ec28f5d) {
        temp_v3 = temp_v2;
      }
      temp_v4 = *(float *)(temp_v0 + 0x2c);
      if ((int)temp_v2 >= 0x3ec28f5d) {
        temp_v3 = 0.38f;
      }
      *(float *)(temp_v0 + 0x28) = temp_v3;
      if ((int)temp_v4 < 0x3eb851ec) {
        temp_v4 = 0.110000014f / *(float *)(temp_v0 + 0x30) + temp_v4;
        *(float *)(temp_v0 + 0x2c) = temp_v4;
      }
      if ((int)temp_v4 >= 0x3eb851ed) {
        temp_v4 = 0.36f;
      }
      *(float *)(temp_v0 + 0x2c) = temp_v4;
      FUN_001536e4(temp_v0);
    }
    FUN_0014aa9c(1);
  }
  return 0;
}
