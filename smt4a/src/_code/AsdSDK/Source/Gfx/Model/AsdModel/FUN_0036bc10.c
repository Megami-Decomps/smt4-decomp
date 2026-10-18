/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0036bc10` (_code @ 0x36bc10, 0x54 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_005b3c90; /* 0x5b3c90 */
extern unsigned int DAT_005b3c94; /* 0x5b3c94 */
extern unsigned int DAT_005b3c98; /* 0x5b3c98 */
extern unsigned int DAT_005b3c9c; /* 0x5b3c9c */

/* Supplied declaration required: FUN_0034103c. */


unsigned int FUN_0036bc10(int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  if (param_1 == 1) {
    return DAT_005b3c90;
  }
  if (param_1 == 2) {
    temp_v0 = 0;
    temp_v1 = DAT_005b3c98;
  }
  else {
    if (param_1 == 4) {
      return DAT_005b3c94;
    }
    if (param_1 != 5) {
      return 0;
    }
    temp_v0 = 1;
    temp_v1 = DAT_005b3c9c;
  }
  FUN_0034103c(temp_v0);
  return temp_v1;
}
