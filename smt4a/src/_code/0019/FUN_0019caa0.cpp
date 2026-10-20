/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0019caa0` (_code @ 0x19caa0, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern signed char DAT_005c1460; /* 0x5c1460 */
extern signed char DAT_005c1461; /* 0x5c1461 */
extern unsigned int DAT_005c146c; /* 0x5c146c */
extern unsigned int DAT_005c1470; /* 0x5c1470 */


void FUN_0019caa0(unsigned int param_1,unsigned int param_2)

{
  char temp_v0;
  
  temp_v0 = '\0';
  if (DAT_005c1460 != '\0') {
    temp_v0 = DAT_005c1461;
  }
  if (DAT_005c1460 != '\0' && temp_v0 != '\0') {
    DAT_005c146c = param_1;
    DAT_005c1470 = param_2;
  }
  return;
}

} /* extern "C" */
