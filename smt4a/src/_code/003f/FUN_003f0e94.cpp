/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f0e94` (_code @ 0x3f0e94, 0x90 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
} param_2_stack;


int FUN_003f0e94(int param_1,int param_2)

{
  short temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v2 = *(int *)(param_1 + 0x1ffc);
  if (*(short *)(temp_v2 + 0x16c) == param_2) {
    temp_v0 = *(short *)(temp_v2 + 0x6e);
  }
  else {
    temp_v1 = 1;
    while (*(short *)(temp_v2 + temp_v1 * 0x408 + 0x16c) != param_2) {
      if (*(short *)(temp_v2 + temp_v1 * 0x408 + 0x574) == param_2) {
        temp_v1 = temp_v1 * 0x408 + 0x476;
        temp_v0 = *(short *)(temp_v2 + temp_v1);
        return (int)temp_v0;
      }
      temp_v1 = temp_v1 + 2;
      if (temp_v1 >= 0x6d) {
        return -1;
      }
    }
    temp_v1 = temp_v1 * 0x408 + 0x6e;
    temp_v0 = *(short *)(temp_v2 + temp_v1);
  }
  return (int)temp_v0;
}

} /* extern "C" */
