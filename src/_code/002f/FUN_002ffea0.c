/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ffea0` (_code @ 0x2ffea0, 0x5c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00435d18; /* 0x435d18 */

/* Supplied declaration required: FUN_00296f60. */
/* Supplied declaration required: FUN_003da0e0. */
extern int FUN_003da7e0(int);


unsigned int FUN_002ffea0(void)

{
/* irregular: 2 native warning(s); review required */
  short temp_v0;
  unsigned short temp_v1;
  int temp_v2;
  
  temp_v0 = FUN_00296f60();
  temp_v1 = FUN_00296f60(1);
  if ((*(unsigned int *)(DAT_00435d18 + 0x3028) & 0x4000) != 0) {
    temp_v2 = FUN_003da7e0(DAT_00435d18);
    if (temp_v2 != 0) {
      return 1;
    }
  }
  else {
    FUN_003da0e0(DAT_00435d18,(int)temp_v0,temp_v1);
  }
  return 0;
}
