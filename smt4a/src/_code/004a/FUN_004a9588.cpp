/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004a9588` (_code @ 0x4a9588, 0x12c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_6: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_6_stack;

extern int g_btlUiBlock; /* 0x57a9c8 */


unsigned int FUN_004a9588(unsigned int param_1,unsigned int param_2,unsigned char param_3,unsigned char param_4,
                 int param_5,unsigned char param_6)

{
/* irregular: 1 goto(s); irregular input(s): in_s0, in_s1, in_s2; 3 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned char temp_v5;
  unsigned char temp_v6;
  float in_s0;
  float in_s1;
  float in_s2;
  
  if (param_5 != 0) {
    temp_v0 = 0xffffffff;
    temp_v2 = 0;
    do {
      temp_v1 = (int)*(char *)(g_btlUiBlock + temp_v2 + 0xf064);
      if (temp_v1 - 1U < 0x1f) {
        temp_v1 = g_btlUiBlock + temp_v2 * 0x300 + temp_v1 * 0x18;
        temp_v5 = 0;
        if (*(float *)(temp_v1 + 0xc03c) == in_s0) {
          temp_v5 = *(float *)(temp_v1 + 0xc040) == in_s1;
        }
        temp_v6 = 0;
        if (temp_v5) {
          temp_v6 = *(float *)(temp_v1 + 0xc044) == in_s2;
        }
        if (temp_v6) {
          temp_v0 = temp_v2;
          if (-1 < (int)temp_v2) goto LAB_004a9644;
          break;
        }
      }
      temp_v2 = temp_v2 + 1;
    } while ((int)temp_v2 < 0x10);
    temp_v3 = 0;
    do {
      temp_v2 = temp_v3;
      if (*(char *)(g_btlUiBlock + temp_v2 + 0xf064) < '\x01') break;
      temp_v3 = temp_v2 + 1;
      temp_v2 = temp_v0;
    } while ((int)temp_v3 < 0x10);
LAB_004a9644:
    if (temp_v2 < 0x10) {
      temp_v1 = g_btlUiBlock + temp_v2;
      if (*(char *)(temp_v1 + 0xf064) < 0x20) {
        temp_v4 = g_btlUiBlock + temp_v2 * 0x300 + *(char *)(temp_v1 + 0xf064) * 0x18;
        *(unsigned char *)(temp_v4 + 0xc060) = 1;
        *(unsigned char *)(temp_v4 + 0xc061) = param_6;
        *(float *)(temp_v4 + 0xc054) = in_s0;
        *(float *)(temp_v4 + 0xc058) = in_s1;
        *(float *)(temp_v4 + 0xc05c) = in_s2;
        *(unsigned int *)(temp_v4 + 0xc064) = param_2;
        *(unsigned char *)(temp_v4 + 0xc06a) = param_3;
        *(unsigned char *)(temp_v4 + 0xc06b) = param_4;
        *(char *)(temp_v1 + 0xf064) = *(char *)(temp_v1 + 0xf064) + '\x01';
        return temp_v2;
      }
    }
  }
  return 0xffffffff;
}

} /* extern "C" */
