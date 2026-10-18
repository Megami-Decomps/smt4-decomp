/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f8554` (_code @ 0x2f8554, 0x1a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern signed char DAT_00594965; /* 0x594965 */
extern unsigned int DAT_005949ec; /* 0x5949ec */

/* Supplied declaration required: FUN_002ebc50. */


unsigned char FUN_002f8554(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int temp_v1 [2];
  
  temp_v0 = DAT_00594965 != '\0';
  if (temp_v0) {
    temp_v1[0] = param_1;
    FUN_002ebc50(DAT_005949ec,temp_v1);
  }
  return temp_v0;
}
