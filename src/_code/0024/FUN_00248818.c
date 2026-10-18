/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00248818` (_code @ 0x248818, 0x90 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002c2b1c(void);


void FUN_00248818(int param_1,int param_2)

{
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = FUN_002c2b1c();
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
