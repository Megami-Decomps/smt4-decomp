/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c2ff0` (_code @ 0x2c2ff0, 0x18 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern signed char DAT_00465170; /* 0x465170 */
extern unsigned int DAT_00465178; /* 0x465178 */
extern unsigned int DAT_0046517c; /* 0x46517c */


unsigned int FUN_002c2ff0(void)

{
  unsigned int temp_v0;
  
  temp_v0 = DAT_00465178;
  if (DAT_00465170 == '\0') {
    temp_v0 = DAT_0046517c;
  }
  return temp_v0;
}

} /* extern "C" */
