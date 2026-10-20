/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004aa0b0` (_code @ 0x4aa0b0, 0x11c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
} param_3_stack;

extern int DAT_0057a9c8; /* 0x57a9c8 */


unsigned int FUN_004aa0b0(unsigned int param_1,unsigned char param_2,unsigned char param_3)

{
/* irregular: 1 goto(s); irregular input(s): in_s0, in_s1, in_s2; 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned char temp_v5;
  unsigned char temp_v6;
  float in_s0;
  float in_s1;
  float in_s2;
  
  temp_v0 = 0xffffffff;
  temp_v1 = 0;
  do {
    temp_v4 = (int)*(char *)(DAT_0057a9c8 + temp_v1 + 0x11884);
    if (temp_v4 - 1U < 0x1f) {
      temp_v4 = DAT_0057a9c8 + temp_v1 * 0x280 + temp_v4 * 0x14;
      temp_v5 = 0;
      if (*(float *)(temp_v4 + 0xf060) == in_s0) {
        temp_v5 = *(float *)(temp_v4 + 0xf064) == in_s1;
      }
      temp_v6 = 0;
      if (temp_v5) {
        temp_v6 = *(float *)(temp_v4 + 0xf068) == in_s2;
      }
      if (temp_v6) {
        temp_v0 = temp_v1;
        if (-1 < (int)temp_v1) goto LAB_004aa15c;
        break;
      }
    }
    temp_v1 = temp_v1 + 1;
  } while ((int)temp_v1 < 0x10);
  temp_v2 = 0;
  do {
    temp_v1 = temp_v2;
    if (*(char *)(DAT_0057a9c8 + temp_v1 + 0x11884) < '\x01') break;
    temp_v2 = temp_v1 + 1;
    temp_v1 = temp_v0;
  } while ((int)temp_v2 < 0x10);
LAB_004aa15c:
  if (temp_v1 < 0x11) {
    temp_v4 = DAT_0057a9c8 + temp_v1;
    if (*(char *)(temp_v4 + 0x11884) < 0x20) {
      temp_v3 = DAT_0057a9c8 + temp_v1 * 0x280 + *(char *)(temp_v4 + 0x11884) * 0x14;
      *(unsigned char *)(temp_v3 + 0xf080) = 1;
      *(unsigned char *)(temp_v3 + 0xf081) = param_3;
      *(float *)(temp_v3 + 0xf074) = in_s0;
      *(float *)(temp_v3 + 0xf078) = in_s1;
      *(float *)(temp_v3 + 0xf07c) = in_s2;
      *(unsigned char *)(temp_v3 + 0xf082) = param_2;
      *(char *)(temp_v4 + 0x11884) = *(char *)(temp_v4 + 0x11884) + '\x01';
      return temp_v1;
    }
  }
  return 0xffffffff;
}

} /* extern "C" */
