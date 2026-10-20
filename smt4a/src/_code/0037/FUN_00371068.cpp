/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00371068` (_code @ 0x371068, 0x90 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_00162e8c(void);


void FUN_00371068(int param_1,int param_2)

{
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = FUN_00162e8c();
  temp_v1 = temp_v0 + param_2 * 0x78;
  temp_v2 = temp_v1 + param_1 * 8;
  if (*(char *)(temp_v2 + 0x3c) == '\x02') {
    *(unsigned char *)(temp_v2 + 0x42) = 1;
  }
  temp_v2 = temp_v1 + (param_1 - 1) * 8;
  if (*(char *)(temp_v2 + 0x3c) == '\x02') {
    *(unsigned char *)(temp_v2 + 0x42) = 1;
  }
  temp_v1 = temp_v1 + (param_1 + 1) * 8;
  if (*(char *)(temp_v1 + 0x3c) == '\x02') {
    *(unsigned char *)(temp_v1 + 0x42) = 1;
  }
  temp_v1 = temp_v0 + (param_2 - 1) * 0x78 + param_1 * 8;
  if (*(char *)(temp_v1 + 0x3c) == '\x02') {
    *(unsigned char *)(temp_v1 + 0x42) = 1;
  }
  temp_v0 = temp_v0 + (param_2 + 1) * 0x78 + param_1 * 8;
  if (*(char *)(temp_v0 + 0x3c) == '\x02') {
    *(unsigned char *)(temp_v0 + 0x42) = 1;
  }
  return;
}

} /* extern "C" */
