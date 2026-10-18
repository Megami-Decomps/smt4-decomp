/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003dccfc` (_code @ 0x3dccfc, 0xc0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_00435d10; /* 0x435d10 */

extern int FUN_002277fc(int);
extern int FUN_002934d4(void);
/* Supplied declaration required: FUN_00293c98. */
/* Supplied declaration required: FUN_002aa7f4. */


int FUN_003dccfc(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int *piVar4;
  
  FUN_00293c98();
  temp_v0 = FUN_002934d4();
  if (temp_v0 != 0) {
    temp_v0 = -1;
  }
  else {
    piVar4 = (int *)(param_1 + 0x1cfc);
    temp_v0 = 0;
    if (*piVar4 != 0) {
      temp_v2 = 0;
      do {
        temp_v1 = *piVar4 + temp_v2 * 0x16 + 0xb0;
        if ((temp_v1 != 0) && (FUN_002aa7f4(temp_v1,DAT_00435d10), temp_v1 == 0)) {
          temp_v2 = *piVar4 + temp_v2 * 0x16 + 0xb0;
          if (temp_v2 == 0) {
            temp_v0 = FUN_002277fc(param_1);
            return temp_v0;
          }
          temp_v0 = FUN_002277fc(param_1);
          temp_v0 = temp_v0 + *(short *)(temp_v2 + 0x10);
          break;
        }
        temp_v2 = temp_v2 + 1;
      } while (temp_v2 < 4);
      if (temp_v0 != 0) {
        return temp_v0;
      }
    }
    temp_v0 = FUN_002277fc(param_1);
  }
  return temp_v0;
}
