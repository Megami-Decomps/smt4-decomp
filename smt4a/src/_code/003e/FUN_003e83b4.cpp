/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e83b4` (_code @ 0x3e83b4, 0x78 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int DAT_00573978; /* 0x573978 */
extern unsigned int DAT_0057397c; /* 0x57397c */


unsigned int * FUN_003e83b4(int param_1,int param_2,int param_3)

{
  unsigned int *puVar1;
  
  if ((-1 < param_2) && (param_2 < 0x6d)) {
    if (param_3 != 0) {
      puVar1 = (unsigned int *)(*(int *)(param_1 + 0x1ffc) + param_2 * 0x408);
      if ((DAT_0057397c & puVar1[1]) != 0 || (DAT_00573978 & *puVar1) != 0) {
        return puVar1;
      }
    }
    else {
      puVar1 = (unsigned int *)(*(int *)(param_1 + 0x1ffc) + param_2 * 0x408);
      if ((puVar1[1] & DAT_0057397c) == 0 && (DAT_00573978 & *puVar1) == 0) {
        return puVar1;
      }
    }
  }
  return (unsigned int *)0x0;
}

} /* extern "C" */
