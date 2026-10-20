/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003bf894` (_code @ 0x3bf894, 0xa4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00187180(int, int);
int FUN_00192748(...);

/* Supplied declaration required: FUN_00187180. */
/* Supplied declaration required: FUN_00192748. */
extern int FUN_00192798(void);


unsigned int FUN_003bf894(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int *piVar4;
  unsigned int temp_v3;
  
  temp_v3 = 0;
  FUN_00187180(0x2f,1);
  temp_v0 = FUN_00192748();
  if (0 < temp_v0) {
    do {
      temp_v1 = FUN_00187180(0x2f,1);
      temp_v0 = FUN_00192798();
      temp_v2 = FUN_00192748(temp_v1);
      piVar4 = (int *)0x0;
      if (temp_v3 < temp_v2) {
        piVar4 = (int *)(temp_v0 + temp_v3 * 0x20);
      }
      if (*piVar4 == -1) {
        return 0xffffffff;
      }
      if (*piVar4 == param_1) {
        return temp_v3;
      }
      temp_v3 = temp_v3 + 1;
      FUN_00187180(0x2f,1);
      temp_v0 = FUN_00192748();
    } while ((int)temp_v3 < temp_v0);
  }
  return 0xffffffff;
}

} /* extern "C" */
