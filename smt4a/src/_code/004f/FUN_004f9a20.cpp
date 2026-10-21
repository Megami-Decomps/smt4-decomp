/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004f9a20` (_code @ 0x4f9a20, 0xc0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int btlGetMainState(void);
int libc_strcmp(int, unsigned int);

extern unsigned int DAT_00573800; /* 0x573800 */

/* Supplied declaration required: btlGetMainState. */
/* Supplied declaration required: libc_strcmp. */
extern int btlScriptUnitHasFlags(void);
extern int FUN_004f59b0(int);


int FUN_004f9a20(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int *piVar4;
  
  btlGetMainState();
  temp_v0 = btlScriptUnitHasFlags();
  if (temp_v0 != 0) {
    temp_v0 = -1;
  }
  else {
    piVar4 = (int *)(param_1 + 0x1f54);
    temp_v0 = 0;
    if (*piVar4 != 0) {
      temp_v2 = 0;
      do {
        temp_v1 = *piVar4 + temp_v2 * 0x16 + 0xb0;
        if ((temp_v1 != 0) && (libc_strcmp(temp_v1,DAT_00573800), temp_v1 == 0)) {
          temp_v2 = *piVar4 + temp_v2 * 0x16 + 0xb0;
          if (temp_v2 == 0) {
            temp_v0 = FUN_004f59b0(param_1);
            return temp_v0;
          }
          temp_v0 = FUN_004f59b0(param_1);
          temp_v0 = temp_v0 + *(short *)(temp_v2 + 0x10);
          break;
        }
        temp_v2 = temp_v2 + 1;
      } while (temp_v2 < 4);
      if (temp_v0 != 0) {
        return temp_v0;
      }
    }
    temp_v0 = FUN_004f59b0(param_1);
  }
  return temp_v0;
}

} /* extern "C" */
