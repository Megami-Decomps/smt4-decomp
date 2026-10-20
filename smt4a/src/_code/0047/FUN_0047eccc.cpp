/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0047eccc` (_code @ 0x47eccc, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int jyoucyuGetTableEntry(unsigned int);


void FUN_0047eccc(unsigned int param_1)

{
  int temp_v0;
  
  temp_v0 = jyoucyuGetTableEntry(1);
  if (temp_v0 == 0) {
    temp_v0 = 0;
    do {
      if (*(unsigned short *)(temp_v0 * 0x10 + 0x57a4c4) == param_1) {
        return;
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 3);
  }
  return;
}

} /* extern "C" */
