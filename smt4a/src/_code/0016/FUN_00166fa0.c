/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00166fa0` (_code @ 0x166fa0, 0x23c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0057f0c8; /* 0x57f0c8 */

extern int FUN_001822ec(int);


unsigned int FUN_00166fa0(unsigned int param_1)

{
/* irregular: 4 goto(s) */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  
  temp_v0 = DAT_0057f0c8;
  if (DAT_0057f0c8 != 0) {
    temp_v3 = 0;
    do {
      temp_v4 = temp_v0 + temp_v3 * 4;
      if (((*(unsigned char *)(temp_v4 + 0x5ac) == param_1) && (*(char *)(temp_v0 + temp_v3 + 0x5d4) != '\0')) &&
         (temp_v1 = FUN_001822ec((int)*(short *)(temp_v0 + temp_v3 * 2 + 0x5c4)), temp_v1 != 0)) {
        return 1;
      }
      if (*(char *)(temp_v4 + 0x5ac) == '\b') {
        if ((param_1 == 4) && (*(char *)(temp_v0 + temp_v3 + 0x5d4) != '\0')) {
          temp_v1 = temp_v0 + temp_v3 * 2;
          temp_v2 = FUN_001822ec((int)*(short *)(temp_v1 + 0x5c4));
          if (temp_v2 != 0) {
            return 1;
          }
          temp_v2 = FUN_001822ec((int)*(short *)(temp_v1 + 0x5c6));
          if (temp_v2 != 0) {
            return 1;
          }
          temp_v1 = FUN_001822ec((int)*(short *)(temp_v1 + 0x5c6));
          if (temp_v1 != 0) {
            return 1;
          }
          goto LAB_00167060;
        }
      }
      else {
LAB_00167060:
        if (*(char *)(temp_v4 + 0x5ac) == '\t') {
          if ((param_1 != 3) || (*(char *)(temp_v0 + temp_v3 + 0x5d4) == '\0')) goto LAB_001671c8;
          temp_v1 = temp_v0 + temp_v3 * 2;
          temp_v2 = FUN_001822ec((int)*(short *)(temp_v1 + 0x5c4));
          if (temp_v2 != 0) {
            return 1;
          }
          temp_v2 = FUN_001822ec((int)*(short *)(temp_v1 + 0x5c6));
          if (temp_v2 != 0) {
            return 1;
          }
          temp_v1 = FUN_001822ec((int)*(short *)(temp_v1 + 0x5c6));
          if (temp_v1 != 0) {
            return 1;
          }
        }
        if (*(char *)(temp_v4 + 0x5ac) == '\x14') {
          if (param_1 != 1) {
            if ((param_1 == 2) && (*(char *)(temp_v0 + temp_v3 + 0x5d5) != '\0')) {
              temp_v1 = FUN_001822ec((int)*(short *)(temp_v0 + temp_v3 * 2 + 0x5c6));
joined_r0x00167110:
              if (temp_v1 != 0) {
                return 1;
              }
              goto LAB_00167144;
            }
          }
          else if (*(char *)(temp_v0 + temp_v3 + 0x5d4) != '\0') {
            temp_v1 = FUN_001822ec((int)*(short *)(temp_v0 + temp_v3 * 2 + 0x5c4));
            goto joined_r0x00167110;
          }
        }
        else {
LAB_00167144:
          if (*(char *)(temp_v4 + 0x5ac) == '\x15') {
            if (param_1 != 5) {
              if ((param_1 == 6) && (*(char *)(temp_v0 + temp_v3 + 0x5d5) != '\0')) {
                temp_v4 = FUN_001822ec((int)*(short *)(temp_v0 + temp_v3 * 2 + 0x5c6));
                if (temp_v4 != 0) {
                  return 1;
                }
              }
            }
            else if (*(char *)(temp_v0 + temp_v3 + 0x5d4) != '\0') {
              temp_v4 = FUN_001822ec((int)*(short *)(temp_v0 + temp_v3 * 2 + 0x5c4));
              if (temp_v4 != 0) {
                return 1;
              }
            }
          }
        }
      }
LAB_001671c8:
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 6);
  }
  return 0;
}
