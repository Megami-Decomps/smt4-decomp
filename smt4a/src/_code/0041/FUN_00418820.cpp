/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00418820` (_code @ 0x418820, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_001ab940(void);


void FUN_00418820(int param_1)

{
  int temp_v0;
  char temp_v1;
  
  temp_v0 = FUN_001ab940();
  temp_v0 = temp_v0 + param_1 * 4;
  if (*(char *)(temp_v0 + 0x2a1) == '\0') {
    temp_v1 = '\x02';
  }
  else {
    temp_v1 = *(char *)(temp_v0 + 0x2a1) + '\x01';
  }
  *(char *)(temp_v0 + 0x2a1) = temp_v1;
  *(unsigned char *)(temp_v0 + 0x2a0) = *(unsigned char *)(temp_v0 + 0x2a0) | 0x40;
  return;
}

} /* extern "C" */
