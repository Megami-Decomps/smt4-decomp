/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0049ca48` (_code @ 0x49ca48, 0x64 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_00481104(unsigned int);


unsigned int FUN_0049ca48(void)

{
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v1 = 0x3b7;
  do {
    temp_v0 = FUN_00481104(temp_v1);
    if (temp_v0 != 0) {
      return 1;
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 0x47f);
  temp_v1 = 0x47f;
  do {
    temp_v0 = FUN_00481104(temp_v1);
    if (temp_v0 != 0) {
      return 1;
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 0x79f);
  return 0;
}
