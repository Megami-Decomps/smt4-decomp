/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00289fa8` (_code @ 0x289fa8, 0x120 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
} param_3_stack;

extern int DAT_00439ca8; /* 0x439ca8 */


unsigned int FUN_00289fa8(unsigned int param_1,unsigned char param_2,unsigned char param_3)

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
    temp_v4 = (int)*(char *)(DAT_00439ca8 + temp_v1 + 0xe01c);
    if (temp_v4 - 1U < 7) {
      temp_v4 = DAT_00439ca8 + temp_v1 * 0xa0 + temp_v4 * 0x14;
      temp_v5 = 0;
      if (*(float *)(temp_v4 + 0xd5f8) == in_s0) {
        temp_v5 = *(float *)(temp_v4 + 0xd5fc) == in_s1;
      }
      temp_v6 = 0;
      if (temp_v5) {
        temp_v6 = *(float *)(temp_v4 + 0xd600) == in_s2;
      }
      if (temp_v6) {
        temp_v0 = temp_v1;
        if (-1 < (int)temp_v1) goto LAB_0028a054;
        break;
      }
    }
    temp_v1 = temp_v1 + 1;
  } while ((int)temp_v1 < 0x10);
  temp_v2 = 0;
  do {
    temp_v1 = temp_v2;
    if (*(char *)(DAT_00439ca8 + temp_v1 + 0xe01c) < '\x01') break;
    temp_v2 = temp_v1 + 1;
    temp_v1 = temp_v0;
  } while ((int)temp_v2 < 0x10);
LAB_0028a054:
  if (temp_v1 < 0x11) {
    temp_v4 = DAT_00439ca8 + temp_v1;
    if (*(char *)(temp_v4 + 0xe01c) < 8) {
      temp_v3 = DAT_00439ca8 + temp_v1 * 0xa0 + *(char *)(temp_v4 + 0xe01c) * 0x14;
      *(unsigned char *)(temp_v3 + 0xd618) = 1;
      *(unsigned char *)(temp_v3 + 0xd619) = param_3;
      *(float *)(temp_v3 + 0xd60c) = in_s0;
      *(float *)(temp_v3 + 0xd610) = in_s1;
      *(float *)(temp_v3 + 0xd614) = in_s2;
      *(unsigned char *)(temp_v3 + 0xd61a) = param_2;
      *(char *)(temp_v4 + 0xe01c) = *(char *)(temp_v4 + 0xe01c) + '\x01';
      return temp_v1;
    }
  }
  return 0xffffffff;
}

} /* extern "C" */
