/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0014a878` (_code @ 0x14a878, 0x84 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0061a5c4; /* 0x61a5c4 */
extern int DAT_0061a5c8; /* 0x61a5c8 */

/* Supplied declaration required: FUN_00170184. */


void FUN_0014a878(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = DAT_0061a5c8;
  temp_v0 = DAT_0061a5c4;
  do {
    if (param_1 != 0x400) {
      if (((param_1 == 0x401) || ((param_1 == 0x402 && (temp_v0 != DAT_0061a5c4)))) &&
         (temp_v1 != DAT_0061a5c8)) {
        return;
      }
    }
    else if (temp_v0 != DAT_0061a5c4) {
      return;
    }
    FUN_00170184();
  } while( 1 );
}
