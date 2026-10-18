/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002db9d0` (_code @ 0x2db9d0, 0x6c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002117e8. */
/* Supplied declaration required: FUN_00250fc4. */
/* Supplied declaration required: FUN_00295cbc. */
/* Supplied declaration required: FUN_00296f60. */
/* Supplied declaration required: FUN_002b91c4. */
extern int FUN_002cdb50(void);


unsigned int FUN_002db9d0(void)

{
/* irregular: 5 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = FUN_00296f60(0);
  temp_v1 = FUN_00296f60(1);
  if (temp_v1 < 0) {
    FUN_00250fc4(temp_v0,-temp_v1);
  }
  else {
    FUN_00295cbc(temp_v0,temp_v1);
  }
  temp_v2 = FUN_002cdb50();
  if (temp_v2 != 0) {
    FUN_002b91c4(0x1000174);
    FUN_002117e8(temp_v1);
  }
  return 1;
}
