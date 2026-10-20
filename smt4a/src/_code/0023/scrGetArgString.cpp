/* NON_MATCHING: romwright 0.5.0 decompilation of `scrGetArgString` (_code @ 0x2360dc, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_00588e5c; /* 0x588e5c */


unsigned int scrGetArgString(int param_1)

{
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = (*(int *)(DAT_00588e5c + 0x1c) - param_1) - 1;
  if (*(char *)(DAT_00588e5c + temp_v0 + 0x20) == '\x05') {
    temp_v1 = *(unsigned int *)(DAT_00588e5c + temp_v0 * 4 + 0x3c);
  }
  else {
    temp_v1 = 0;
  }
  return temp_v1;
}

} /* extern "C" */
