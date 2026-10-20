/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023c638` (_code @ 0x23c638, 0x4c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_0027e928(void);


void FUN_0023c638(unsigned int param_1,int param_2,int param_3)

{
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned char temp_v5;
  
  temp_v0 = FUN_0027e928();
  temp_v1 = 0;
  temp_v2 = 0x85;
  do {
    temp_v4 = temp_v0 + temp_v1 * 8;
    temp_v1 = temp_v1 + 1;
    temp_v3 = *(int *)(temp_v4 + 0x5a8);
    temp_v5 = temp_v3 == param_2;
    if (temp_v5) {
      temp_v3 = *(int *)(temp_v4 + 0x5ac);
    }
    if (temp_v5 && temp_v3 == param_3) {
      *(unsigned int *)(temp_v4 + 0x5a8) = 0xffffffff;
      *(unsigned int *)(temp_v4 + 0x5ac) = 0;
    }
    temp_v2 = temp_v2 - 1;
  } while (temp_v2 != 0);
  return;
}

} /* extern "C" */
