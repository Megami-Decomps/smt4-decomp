/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004f5710` (_code @ 0x4f5710, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int DAT_005737f0; /* 0x5737f0 */

extern int FUN_0019a37c(int, unsigned int, unsigned int);
extern unsigned int FUN_002e3390(unsigned int);


unsigned int FUN_004f5710(unsigned int param_1,int param_2)

{
  unsigned int temp_v0;
  int temp_v1;
  
  if (param_2 != 0) {
    temp_v0 = FUN_002e3390(DAT_005737f0);
    temp_v1 = FUN_0019a37c(param_2,DAT_005737f0,temp_v0);
    if (temp_v1 == 0) {
      return 1;
    }
  }
  return 0;
}

} /* extern "C" */
