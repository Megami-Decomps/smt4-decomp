/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00236038` (_code @ 0x236038, 0x98 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00588e5c; /* 0x588e5c */


int FUN_00236038(int param_1)

{
  int temp_v0;
  
  temp_v0 = (*(int *)(DAT_00588e5c + 0x1c) - param_1) - 1;
  switch(*(unsigned char *)(DAT_00588e5c + temp_v0 + 0x20)) {
  case 0:
  case 4:
    return *(int *)(DAT_00588e5c + temp_v0 * 4 + 0x3c);
  case 1:
    return (int)*(float *)(DAT_00588e5c + temp_v0 * 4 + 0x3c);
  case 2:
    return *(int *)(*(int *)(DAT_00588e5c + temp_v0 * 4 + 0x3c) * 4 + 0x61889c);
  case 3:
    return (int)*(float *)(*(int *)(DAT_00588e5c + temp_v0 * 4 + 0x3c) * 4 + 0x618e9c);
  default:
    return 0;
  }
}
