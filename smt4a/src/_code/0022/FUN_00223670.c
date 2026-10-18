/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00223670` (_code @ 0x223670, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0058103c; /* 0x58103c */


void FUN_00223670(void)

{
  int temp_v0;
  
  temp_v0 = DAT_0058103c;
  *(unsigned int *)(DAT_0058103c + 0x3c) = 1;
  *(unsigned int *)(temp_v0 + 0x44) = 1;
  return;
}
