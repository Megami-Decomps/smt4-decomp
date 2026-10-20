/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003dcf34` (_code @ 0x3dcf34, 0x90 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002939f4(void);
int FUN_002aa568(int, unsigned int);

extern unsigned int DAT_00435d14; /* 0x435d14 */

extern int FUN_00293230(void);
/* Supplied declaration required: FUN_002939f4. */
/* Supplied declaration required: FUN_002aa568. */


int FUN_003dcf34(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int *piVar3;
  
  FUN_002939f4();
  temp_v0 = FUN_00293230();
  if ((temp_v0 == 0) && (piVar3 = (int *)(param_1 + 0x1cfc), *piVar3 != 0)) {
    temp_v0 = 0;
    do {
      temp_v1 = *piVar3 + temp_v0 * 0x16;
      if ((temp_v1 != 0) && (FUN_002aa568(temp_v1,DAT_00435d14), temp_v1 == 0)) {
        temp_v0 = *piVar3 + temp_v0 * 0x16;
        if (temp_v0 != 0) {
          return (int)*(short *)(temp_v0 + 0x10);
        }
        return -1;
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 4);
  }
  return -1;
}

} /* extern "C" */
