/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004e699c` (_code @ 0x4e699c, 0x4c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_004ee568(void);


void FUN_004e699c(unsigned int param_1,int param_2,int param_3)

{
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned char temp_v5;
  
  temp_v0 = FUN_004ee568();
  temp_v1 = 0;
  temp_v2 = 0x85;
  do {
    temp_v4 = temp_v0 + temp_v1 * 8;
    temp_v1 = temp_v1 + 1;
    temp_v3 = *(int *)(temp_v4 + 0x5b8);
    temp_v5 = temp_v3 == param_2;
    if (temp_v5) {
      temp_v3 = *(int *)(temp_v4 + 0x5bc);
    }
    if (temp_v5 && temp_v3 == param_3) {
      *(unsigned int *)(temp_v4 + 0x5b8) = 0xffffffff;
      *(unsigned int *)(temp_v4 + 0x5bc) = 0;
    }
    temp_v2 = temp_v2 - 1;
  } while (temp_v2 != 0);
  return;
}

} /* extern "C" */
