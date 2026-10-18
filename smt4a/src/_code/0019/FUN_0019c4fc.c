/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0019c4fc` (_code @ 0x19c4fc, 0x178 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern signed char DAT_005c1460; /* 0x5c1460 */
extern signed char DAT_005c1461; /* 0x5c1461 */
extern int DAT_005c1464; /* 0x5c1464 */
extern int DAT_005c1468; /* 0x5c1468 */

extern int FUN_0019be8c(unsigned int);


void FUN_0019c4fc(unsigned int param_1)

{
  char temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v1 = DAT_005c1468;
  temp_v0 = '\0';
  if (DAT_005c1460 != '\0') {
    temp_v0 = DAT_005c1461;
  }
  if (DAT_005c1460 == '\0' || temp_v0 == '\0') {
    return;
  }
  if (*(short *)(DAT_005c1464 + 0x4e06) == 2) {
    if (param_1 != 0) {
      *(unsigned short *)(DAT_005c1468 + (unsigned int)*(unsigned short *)(DAT_005c1468 + 0x34) * 2 + 4) =
           (unsigned short)((param_1 & 0xff) << 8) | ((unsigned short)(param_1 >> 8) & 0xff);
      *(short *)(temp_v1 + 0x34) = *(short *)(temp_v1 + 0x34) + 1;
      return;
    }
    *(unsigned short *)(DAT_005c1464 + 0x4e06) = 0;
    return;
  }
  if (*(short *)(DAT_005c1464 + 0x4e02) >= 0x7e) {
    return;
  }
  temp_v2 = FUN_0019be8c(param_1);
  temp_v1 = DAT_005c1464;
  if ((temp_v2 != 0) && (param_1 != 0xf816)) {
    if ((int)param_1 < 0xf816) {
      if ((param_1 != 0xf801) && (param_1 == 0xf812)) {
        *(unsigned short *)(DAT_005c1468 + 0x34) = 0;
        *(unsigned short *)(DAT_005c1464 + 0x4e06) = 2;
        return;
      }
    }
    else {
      if (param_1 == 0xf817) {
        *(unsigned short *)
         (DAT_005c1464 + *(short *)(DAT_005c1464 + 0x4e00) * 0x138 +
          *(short *)(DAT_005c1464 + 0x4e02) * 2 + 0xc) = 0xf817;
        *(unsigned short *)(temp_v1 + 0x4e06) = 1;
        *(short *)(DAT_005c1464 + 0x4e02) = *(short *)(DAT_005c1464 + 0x4e02) + 1;
        return;
      }
      if (param_1 == 0xf818) {
        *(unsigned short *)
         (DAT_005c1464 + *(short *)(DAT_005c1464 + 0x4e00) * 0x138 +
          *(short *)(DAT_005c1464 + 0x4e02) * 2 + 0xc) = 0xf818;
        *(unsigned short *)(temp_v1 + 0x4e06) = 0;
        *(short *)(DAT_005c1464 + 0x4e02) = *(short *)(DAT_005c1464 + 0x4e02) + 1;
        return;
      }
    }
  }
  *(short *)(DAT_005c1464 + *(short *)(DAT_005c1464 + 0x4e00) * 0x138 +
             *(short *)(DAT_005c1464 + 0x4e02) * 2 + 0xc) = (short)param_1;
  *(short *)(DAT_005c1464 + 0x4e02) = *(short *)(DAT_005c1464 + 0x4e02) + 1;
  return;
}
