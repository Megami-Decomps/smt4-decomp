/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004aaf94` (_code @ 0x4aaf94, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0057a9c8; /* 0x57a9c8 */

extern int FUN_00336d84(int);


void FUN_004aaf94(void)

{
  int temp_v0;
  int temp_v1;
  
  temp_v0 = DAT_0057a9c8;
  temp_v1 = FUN_00336d84(DAT_0057a9c8 + 8);
  if (temp_v1 != 0) {
    *(unsigned int *)(temp_v0 + 0x74a0) = 0;
  }
  return;
}

} /* extern "C" */
