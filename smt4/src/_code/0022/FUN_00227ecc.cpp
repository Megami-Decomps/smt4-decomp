/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00227ecc` (_code @ 0x227ecc, 0xdc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002aa568(int, unsigned int);

extern unsigned int DAT_00435d04; /* 0x435d04 */
extern unsigned int DAT_00435d08; /* 0x435d08 */

/* Supplied declaration required: FUN_002aa568. */


int FUN_00227ecc(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int *piVar4;
  
  piVar4 = (int *)(param_1 + 0x1cfc);
  if (*piVar4 != 0) {
    temp_v2 = 0;
    if (0 < param_2) {
      do {
        temp_v0 = *piVar4 + temp_v2 * 0x16 + 0x108;
        FUN_002aa568(temp_v0,DAT_00435d08);
        if (temp_v0 == 0) {
          return *piVar4 + temp_v2 * 0x16 + 0x108;
        }
        temp_v2 = temp_v2 + 1;
      } while (temp_v2 < 4);
    }
    temp_v2 = 0;
    do {
      temp_v0 = *piVar4 + temp_v2 * 0x16 + 0x108;
      if ((temp_v0 != 0) &&
         ((temp_v1 = temp_v0, FUN_002aa568(temp_v0,DAT_00435d04), temp_v1 == 0 ||
          (FUN_002aa568(temp_v0,DAT_00435d08), temp_v0 == 0)))) {
        return *piVar4 + temp_v2 * 0x16 + 0x108;
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 4);
  }
  return 0;
}

} /* extern "C" */
