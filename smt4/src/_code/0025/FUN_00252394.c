/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00252394` (_code @ 0x252394, 0x54 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_00464b8c; /* 0x464b8c */
extern unsigned int DAT_00464b90; /* 0x464b90 */
extern unsigned int DAT_00464b94; /* 0x464b94 */
extern unsigned int DAT_00464b98; /* 0x464b98 */

/* Supplied declaration required: FUN_002a2dc8. */


unsigned int FUN_00252394(int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  if (param_1 == 1) {
    return DAT_00464b8c;
  }
  if (param_1 == 2) {
    temp_v0 = 0;
    temp_v1 = DAT_00464b94;
  }
  else {
    if (param_1 == 4) {
      return DAT_00464b90;
    }
    if (param_1 != 5) {
      return 0;
    }
    temp_v0 = 1;
    temp_v1 = DAT_00464b98;
  }
  FUN_002a2dc8(temp_v0);
  return temp_v1;
}
