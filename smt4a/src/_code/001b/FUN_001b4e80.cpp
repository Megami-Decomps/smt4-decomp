/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001b4e80` (_code @ 0x1b4e80, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned short DAT_005b4028; /* 0x5b4028 */
extern short DAT_005b402a; /* 0x5b402a */
extern int DAT_005b4030; /* 0x5b4030 */


void FUN_001b4e80(void)

{
  short temp_v0;
  unsigned char temp_v1;
  
  if ((DAT_005b402a != 0) &&
     (temp_v0 = DAT_005b402a - 1, temp_v1 = DAT_005b402a == 1, DAT_005b402a = temp_v0, temp_v1)) {
    *(unsigned short *)(DAT_005b4030 + 0x38) = DAT_005b4028;
  }
  return;
}

} /* extern "C" */
