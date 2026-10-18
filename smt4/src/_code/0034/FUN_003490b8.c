/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003490b8` (_code @ 0x3490b8, 0x38 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002adc88(void);


void FUN_003490b8(int param_1)

{
  int temp_v0;
  char temp_v1;
  
  temp_v0 = FUN_002adc88();
  temp_v0 = temp_v0 + param_1 * 4;
  if (*(char *)(temp_v0 + 0x201) == '\0') {
    temp_v1 = '\x02';
  }
  else {
    temp_v1 = *(char *)(temp_v0 + 0x201) + '\x01';
  }
  *(char *)(temp_v0 + 0x201) = temp_v1;
  *(unsigned char *)(temp_v0 + 0x200) = *(unsigned char *)(temp_v0 + 0x200) | 0x40;
  return;
}
