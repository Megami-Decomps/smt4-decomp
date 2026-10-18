/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00232974` (_code @ 0x232974, 0x64 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
} param_2_stack;


void FUN_00232974(int param_1,int param_2)

{
  short temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v2 = 0;
  temp_v3 = 0;
  do {
    temp_v0 = -0x7ec0;
    if (-1 < (char)temp_v3) {
      temp_v1 = param_1 + (char)temp_v3 * 2;
      temp_v0 = (unsigned short)*(unsigned char *)(temp_v1 + 0xb0) * 0x100 + (unsigned short)*(unsigned char *)(temp_v1 + 0xb1);
    }
    temp_v1 = param_2 + temp_v2;
    *(char *)(param_2 + temp_v2) = (char)((unsigned short)temp_v0 >> 8);
    temp_v3 = temp_v3 + 1;
    temp_v2 = temp_v2 + 2;
    *(char *)(temp_v1 + 1) = (char)temp_v0;
  } while (temp_v3 < 9);
  return;
}
