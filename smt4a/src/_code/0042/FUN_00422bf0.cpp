/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00422bf0` (_code @ 0x422bf0, 0x50 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int svcSleepThread(int, int);
int FUN_001c76b8(void);
int FUN_00422c48(unsigned int);

extern signed char DAT_005880d0; /* 0x5880d0 */

/* Supplied declaration required: svcSleepThread. */
/* Supplied declaration required: FUN_001c76b8. */
/* Supplied declaration required: FUN_00422c48. */


void FUN_00422bf0(unsigned int param_1)

{
/* irregular: 3 native warning(s); review required */
  unsigned char temp_v0;
  
  DAT_005880d0 = '\x01';
  temp_v0 = 1;
  while (temp_v0) {
    FUN_00422c48(param_1);
    FUN_001c76b8();
    svcSleepThread(500000,0);
    temp_v0 = DAT_005880d0 != '\0';
  }
  return;
}

} /* extern "C" */
