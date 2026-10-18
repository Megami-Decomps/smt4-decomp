/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00438944` (_code @ 0x438944, 0x104 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_1_stack;


int FUN_00438944(unsigned short *param_1)

{
  unsigned short temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned char temp_v4;
  unsigned char temp_v5;
  
  if (param_1 == (unsigned short *)0x0) {
    temp_v2 = -1;
  }
  else {
    temp_v2 = 0;
    temp_v0 = *param_1;
    while (temp_v1 = (unsigned int)temp_v0, temp_v1 != 0) {
      temp_v3 = temp_v1 - 0x30;
      if (temp_v3 >= 10) {
        temp_v3 = temp_v1 - 0xff10;
      }
      if (temp_v3 >= 10) {
        temp_v3 = temp_v1 - 0x2070;
        if (temp_v3 >= 10) {
          temp_v3 = temp_v1 - 0x2080;
        }
        if (temp_v3 < 10) {
          temp_v2 = temp_v2 + 1;
          param_1 = param_1 + 1;
          temp_v0 = *param_1;
          continue;
        }
        temp_v3 = temp_v1 - 0x2160;
        if (temp_v3 >= 0xc) {
          temp_v3 = temp_v1 - 0x2170;
        }
        if (temp_v3 < 0xc) {
          temp_v2 = temp_v2 + 1;
          param_1 = param_1 + 1;
          temp_v0 = *param_1;
          continue;
        }
        temp_v3 = temp_v1 - 0x2460;
        if (temp_v3 >= 0x14) {
          temp_v3 = temp_v1 - 0x2474;
        }
        if (temp_v3 < 0x14) {
          temp_v2 = temp_v2 + 1;
          param_1 = param_1 + 1;
          temp_v0 = *param_1;
          continue;
        }
        temp_v3 = temp_v1 - 0x2488;
        temp_v5 = temp_v3 >= 0x13;
        temp_v4 = temp_v3 == 0x13;
        if (temp_v3 >= 0x14) {
          temp_v5 = temp_v1 - 0x2776 >= 9;
          temp_v4 = temp_v1 - 0x2776 == 9;
        }
        if (!temp_v5 || temp_v4) {
          temp_v2 = temp_v2 + 1;
          param_1 = param_1 + 1;
          temp_v0 = *param_1;
          continue;
        }
        temp_v3 = temp_v1 - 0x2780;
        if (temp_v3 >= 10) {
          temp_v3 = temp_v1 - 0x278a;
        }
        if (((temp_v3 < 10) || (temp_v1 == 0xb2 || temp_v1 == 0xb3)) ||
           ((temp_v1 == 0xb9 || temp_v1 == 0x24ea) || temp_v1 == 0x24ff)) {
          temp_v2 = temp_v2 + 1;
        }
      }
      else {
        temp_v2 = temp_v2 + 1;
      }
      param_1 = param_1 + 1;
      temp_v0 = *param_1;
    }
  }
  return temp_v2;
}
