/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00280f98` (_code @ 0x280f98, 0x64 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int *DAT_0063e944; /* 0x63e944 */
extern int DAT_0063e948; /* 0x63e948 */

/* Supplied declaration required: FUN_001742e4. */


void FUN_00280f98(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  
  temp_v0 = 0;
  piVar2 = DAT_0063e944;
  if (0 < DAT_0063e948) {
    while (piVar2 != (int *)0x0) {
      if (piVar2[6] == param_1) {
        if (*piVar2 != 0) {
          FUN_001742e4();
        }
        *(unsigned char *)(piVar2 + 3) = 1;
        piVar2[2] = 0;
        return;
      }
      piVar2 = (int *)piVar2[5];
      temp_v0 = temp_v0 + 1;
      if (DAT_0063e948 <= temp_v0) {
        return;
      }
    }
  }
  return;
}
