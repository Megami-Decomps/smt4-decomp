/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038b21c` (_code @ 0x38b21c, 0x70 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned short FUN_00236038(unsigned int);
extern int FUN_002c2758(unsigned short);
/* Supplied declaration required: FUN_002c7b8c. */
extern int FUN_003de92c(unsigned short);
/* Supplied declaration required: FUN_003fd63c. */


unsigned int FUN_0038b21c(void)

{
/* irregular: 2 native warning(s); review required */
  short temp_v0;
  unsigned short temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v1 = FUN_00236038(0);
  temp_v2 = FUN_002c2758(temp_v1);
  if ((temp_v2 == 1) && (temp_v2 = FUN_003de92c(temp_v1), temp_v2 != 0)) {
    FUN_002c7b8c(temp_v1,2);
    temp_v3 = 0;
    do {
      temp_v0 = *(short *)(temp_v2 + temp_v3 * 2 + 4);
      if (temp_v0 != 0) {
        FUN_003fd63c(temp_v0,1);
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 3);
  }
  return 1;
}
