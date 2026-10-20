/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037025c` (_code @ 0x37025c, 0x54 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_005f1888; /* 0x5f1888 */
extern unsigned char DAT_005f188c; /* 0x5f188c */

extern int FUN_00236038(unsigned int);


unsigned char FUN_0037025c(void)

{
  int temp_v0;
  unsigned char temp_v1;
  
  if (DAT_005f1888 == 0) {
    temp_v0 = FUN_00236038(0);
    DAT_005f188c = temp_v0 == 1;
    DAT_005f1888 = 1;
    return 0;
  }
  temp_v1 = DAT_005f1888 == 2;
  if (temp_v1) {
    DAT_005f1888 = 0;
    DAT_005f188c = 0;
  }
  return temp_v1;
}

} /* extern "C" */
