/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004aaa4c` (_code @ 0x4aaa4c, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0057a9b8; /* 0x57a9b8 */

extern int FUN_0032135c(int);


void FUN_004aaa4c(void)

{
  int temp_v0;
  int temp_v1;
  
  temp_v0 = (*(int *)((unsigned char *)&DAT_0057a9b8 + 0x10));
  temp_v1 = FUN_0032135c((*(int *)((unsigned char *)&DAT_0057a9b8 + 0x10)) + 8);
  if (temp_v1 != 0) {
    *(unsigned int *)(temp_v0 + 0x74a0) = 0;
  }
  return;
}

} /* extern "C" */
