/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00113150` (_code @ 0x113150, 0x84 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_004c63e4; /* 0x4c63e4 */
extern int DAT_004c63e8; /* 0x4c63e8 */

/* Supplied declaration required: FUN_00129a24. */


void FUN_00113150(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = DAT_004c63e8;
  temp_v0 = DAT_004c63e4;
  do {
    if (param_1 != 0x400) {
      if (((param_1 == 0x401) || ((param_1 == 0x402 && (temp_v0 != DAT_004c63e4)))) &&
         (temp_v1 != DAT_004c63e8)) {
        return;
      }
    }
    else if (temp_v0 != DAT_004c63e4) {
      return;
    }
    FUN_00129a24();
  } while( 1 );
}
