/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b101c` (_code @ 0x3b101c, 0x6c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int scrSetResult(int);

extern unsigned int DAT_005702a8; /* 0x5702a8 */
extern unsigned int DAT_005702ac; /* 0x5702ac */

extern int btlGetMainState(void);
/* Supplied declaration required: scrSetResult. */
extern int FUN_003e4cb4(unsigned int);
extern int btlUnitGet(unsigned int);


unsigned int FUN_003b101c(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = btlUnitGet(*param_1);
  if ((**(unsigned int **)(temp_v0 + 0x20) & DAT_005702a8) != 0 ||
      (DAT_005702ac & (*(unsigned int **)(temp_v0 + 0x20))[1]) != 0) {
    temp_v0 = btlGetMainState();
    temp_v0 = FUN_003e4cb4(*(unsigned int *)(temp_v0 + 0x4d68));
    if (temp_v0 != 0) {
      scrSetResult(1);
      return 1;
    }
  }
  scrSetResult(0);
  return 1;
}

} /* extern "C" */
