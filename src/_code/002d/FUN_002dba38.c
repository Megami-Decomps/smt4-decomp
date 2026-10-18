/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002dba38` (_code @ 0x2dba38, 0x6c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002118e4. */
/* Supplied declaration required: FUN_00250d84. */
/* Supplied declaration required: FUN_00295a18. */
/* Supplied declaration required: FUN_00296cc8. */
/* Supplied declaration required: FUN_002b8e84. */
extern int FUN_002cdc00(void);


unsigned int FUN_002dba38(void)

{
/* irregular: 5 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = FUN_00296cc8(0);
  temp_v1 = FUN_00296cc8(1);
  if (temp_v1 < 0) {
    FUN_00250d84(temp_v0,-temp_v1);
  }
  else {
    FUN_00295a18(temp_v0,temp_v1);
  }
  temp_v2 = FUN_002cdc00();
  if (temp_v2 != 0) {
    FUN_002b8e84(0x1000174);
    FUN_002118e4(temp_v1);
  }
  return 1;
}
