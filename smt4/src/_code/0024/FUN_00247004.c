/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00247004` (_code @ 0x247004, 0xa4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_001ee498(void);
/* Supplied declaration required: FUN_002ae164. */


unsigned int FUN_00247004(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  if ((*param_1 & 0x10) == 0) {
    temp_v1 = 0;
    do {
      if ((short)param_1[temp_v1 * 2 + 0x8a] == 2 || (short)param_1[temp_v1 * 2 + 0x8a] == 3) {
        temp_v0 = (int)*(short *)((int)param_1 + temp_v1 * 8 + 0x22a);
        FUN_002ae164();
        if ((temp_v0 != 0) && (temp_v0 = FUN_001ee498(), temp_v0 != 0)) {
          return 1;
        }
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < 5);
  }
  else if ((short)param_1[0x88] == 2 || (short)param_1[0x88] == 3) {
    temp_v1 = (int)*(short *)((int)param_1 + 0x222);
    FUN_002ae164();
    if ((temp_v1 != 0) && (temp_v1 = FUN_001ee498(), temp_v1 != 0)) {
      return 1;
    }
  }
  return 0;
}
