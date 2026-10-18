/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003950f8` (_code @ 0x3950f8, 0xf4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_2_stack;

extern int FUN_002992d8(unsigned short, unsigned int);
extern int FUN_002b47cc(void);


void FUN_003950f8(int param_1,unsigned short *param_2)

{
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6 [3];
  
  temp_v6[0] = 0;
  temp_v6[1] = 0;
  if (*(short *)(param_1 + 8) != 0) {
    temp_v6[0] = FUN_002b47cc();
  }
  if (*(short *)(param_1 + 0xc) != 0) {
    temp_v6[1] = FUN_002b47cc();
  }
  temp_v4 = 0;
  do {
    temp_v5 = 0;
    temp_v2 = 0;
    temp_v3 = temp_v4 * 2 + 0x74;
    do {
      if (temp_v6[temp_v2] != 0) {
        temp_v0 = ((int)*(short *)(temp_v6[temp_v2] + temp_v3) & 0x3ffffU) >> 10;
        temp_v1 = FUN_002992d8(*param_2 >> 10,temp_v0);
        if (temp_v1 != 0) {
          *param_2 = (*param_2 & 0x3ff) | (unsigned short)(temp_v0 << 10);
          temp_v5 = (int)((unsigned int)*(unsigned short *)(temp_v6[temp_v2] + temp_v3) << 0x16) >> 0x16;
        }
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 2);
    temp_v4 = temp_v4 + 1;
    *param_2 = (*param_2 & 0xfc00) | (((*param_2 & 0x3ff) + (short)temp_v5) & 0x3ff);
    param_2 = param_2 + 1;
  } while (temp_v4 < 0x12);
  return;
}
