/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a32a8` (_code @ 0x3a32a8, 0xe0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00187180(int, int);
int FUN_00192748(...);

extern int DAT_00570280; /* 0x570280 */

/* Supplied declaration required: FUN_00187180. */
/* Supplied declaration required: FUN_00192748. */
extern int FUN_00192798(void);


unsigned int FUN_003a32a8(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int *piVar4;
  unsigned int temp_v3;
  
  temp_v3 = 0;
  FUN_00187180(0x23,0);
  temp_v0 = FUN_00192748();
  if (0 < temp_v0 + *(int *)(DAT_00570280 + 0x3e4)) {
    do {
      temp_v1 = FUN_00187180(0x23,0);
      temp_v0 = FUN_00192798();
      temp_v2 = FUN_00192748(temp_v1);
      if (temp_v3 < temp_v2) {
        piVar4 = (int *)(temp_v0 + temp_v3 * 0x20);
      }
      else {
        piVar4 = (int *)0x0;
        if (temp_v3 < temp_v2 + *(int *)(DAT_00570280 + 0x3e4)) {
          piVar4 = (int *)(*(int *)(DAT_00570280 + 1000) + (temp_v3 - temp_v2) * 0x20);
        }
      }
      if ((char)piVar4[2] == -1) {
        return 0xffffffff;
      }
      if (*piVar4 == param_1) {
        return temp_v3;
      }
      temp_v3 = temp_v3 + 1;
      FUN_00187180(0x23,0);
      temp_v0 = FUN_00192748();
    } while ((int)temp_v3 < temp_v0 + *(int *)(DAT_00570280 + 0x3e4));
  }
  return 0xffffffff;
}

} /* extern "C" */
