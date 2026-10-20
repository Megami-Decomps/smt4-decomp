/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e503c` (_code @ 0x3e503c, 0x134 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_1: 12 slot(s), 48 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
} param_1_stack;

extern int FUN_001ab888(void);


int FUN_003e503c(unsigned int param_1)

{
/* irregular: 1 goto(s) */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4 [13];
  
  temp_v0 = FUN_001ab888();
  if (*(short *)(temp_v0 + 0x2c4c) != 0) {
    temp_v2 = 0;
    do {
      if ((temp_v2 & 0xffff) >= 0xc) {
        temp_v3 = 0;
      }
      else {
        temp_v3 = FUN_001ab888();
        temp_v3 = temp_v3 + (temp_v2 & 0xffff) * 0x134 + 0x1ddc;
      }
      if (*(short *)(temp_v3 + 300) == *(short *)(temp_v0 + 0x2c4c)) goto LAB_003e50b0;
      temp_v2 = temp_v2 + 1;
    } while ((int)temp_v2 < 0xc);
  }
  temp_v3 = 0;
LAB_003e50b0:
  temp_v0 = 0;
  if (param_1 < 0xc) {
    if (temp_v3 == 0) {
      temp_v0 = FUN_001ab888();
      return temp_v0 + param_1 * 0x134 + 0x1ddc;
    }
    temp_v4[1] = 0;
    temp_v4[5] = 0;
    temp_v4[2] = 0;
    temp_v4[3] = 0;
    temp_v4[4] = 0;
    temp_v4[6] = 0;
    temp_v4[10] = 0;
    temp_v4[7] = 0;
    temp_v4[8] = 0;
    temp_v4[9] = 0;
    temp_v4[0xb] = 0;
    temp_v0 = 1;
    temp_v2 = 0;
    temp_v4[0] = temp_v3;
    do {
      if ((temp_v2 & 0xffff) >= 0xc) {
        temp_v1 = 0;
      }
      else {
        temp_v1 = FUN_001ab888();
        temp_v1 = temp_v1 + (temp_v2 & 0xffff) * 0x134 + 0x1ddc;
      }
      if (temp_v1 != temp_v3) {
        temp_v4[temp_v0] = temp_v1;
        temp_v0 = temp_v0 + 1;
      }
      temp_v2 = temp_v2 + 1;
    } while ((int)temp_v2 < 0xc);
    temp_v0 = temp_v4[param_1];
  }
  return temp_v0;
}

} /* extern "C" */
