/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0049d004` (_code @ 0x49d004, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00588f9c; /* 0x588f9c */

extern unsigned int dataTableFree(unsigned int);


unsigned int FUN_0049d004(void)

{
  unsigned int temp_v0;
  
  (*(int *)((unsigned char *)&DAT_00588f9c + 0x4)) = (*(int *)((unsigned char *)&DAT_00588f9c + 0x4)) - 1;
  if ((*(int *)((unsigned char *)&DAT_00588f9c + 0x4)) < 1) {
    temp_v0 = dataTableFree(0x17);
    return temp_v0;
  }
  return 1;
}

} /* extern "C" */
