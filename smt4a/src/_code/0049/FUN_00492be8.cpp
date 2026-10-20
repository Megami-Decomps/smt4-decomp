/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00492be8` (_code @ 0x492be8, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int DAT_00581288; /* 0x581288 */
extern unsigned int DAT_00587f28; /* 0x587f28 */
extern signed char DAT_005f1a5c; /* 0x5f1a5c */


int FUN_00492be8(void)

{
  int *piVar1;
  int temp_v0;
  
  if (DAT_005f1a5c != '\0') {
    piVar1 = (int *)&DAT_00587f28;
  }
  else {
    piVar1 = (int *)&DAT_00581288;
  }
  if (DAT_005f1a5c != '\0') {
    temp_v0 = *piVar1 + 0x4c;
  }
  else {
    temp_v0 = *piVar1 + 0x1c;
  }
  return temp_v0;
}

} /* extern "C" */
