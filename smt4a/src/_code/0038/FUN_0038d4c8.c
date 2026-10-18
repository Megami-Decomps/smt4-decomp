/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038d4c8` (_code @ 0x38d4c8, 0x5c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00573808; /* 0x573808 */

/* Supplied declaration required: FUN_00236038. */
/* Supplied declaration required: FUN_004f61b0. */
extern int FUN_004f6aa0(int);


unsigned int FUN_0038d4c8(void)

{
/* irregular: 2 native warning(s); review required */
  short temp_v0;
  unsigned short temp_v1;
  int temp_v2;
  
  temp_v0 = FUN_00236038();
  temp_v1 = FUN_00236038(1);
  if ((*(unsigned int *)(DAT_00573808 + 0x339c) & 0x4000) != 0) {
    temp_v2 = FUN_004f6aa0(DAT_00573808);
    if (temp_v2 != 0) {
      return 1;
    }
  }
  else {
    FUN_004f61b0(DAT_00573808,(int)temp_v0,temp_v1);
  }
  return 0;
}
