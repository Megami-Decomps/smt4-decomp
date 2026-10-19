/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00230c80` (_code @ 0x230c80, 0x2c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_00230cac; /* 0x230cac */
extern unsigned char DAT_004c5344; /* 0x4c5344 */

/* Supplied declaration required: FUN_002be624. */
/* Supplied declaration required: FUN_002be650. */


void FUN_00230c80(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = param_1;
  FUN_002be650();
  if (temp_v0 == 0) {
    FUN_002be624(&DAT_004c5344,&LAB_00230cac,param_1);
  }
  return;
}
