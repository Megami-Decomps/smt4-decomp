/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0033a2c4` (_code @ 0x33a2c4, 0x98 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
} param_2_stack;


int FUN_0033a2c4(int param_1,int param_2)

{
  short temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v2 = *(int *)(param_1 + 0x1fc0);
  if (*(short *)(temp_v2 + 0xd4) == param_2) {
    temp_v0 = *(short *)(temp_v2 + 0x6e);
  }
  else {
    temp_v1 = 1;
    while (*(short *)(temp_v2 + temp_v1 * 0x288 + 0xd4) != param_2) {
      if (*(short *)(temp_v2 + temp_v1 * 0x288 + 0x35c) == param_2) {
        temp_v1 = temp_v1 * 0x288 + 0x2f6;
        temp_v0 = *(short *)(temp_v2 + temp_v1);
        return (int)temp_v0;
      }
      temp_v1 = temp_v1 + 2;
      if (temp_v1 >= 0x6d) {
        return -1;
      }
    }
    temp_v1 = temp_v1 * 0x288 + 0x6e;
    temp_v0 = *(short *)(temp_v2 + temp_v1);
  }
  return (int)temp_v0;
}
