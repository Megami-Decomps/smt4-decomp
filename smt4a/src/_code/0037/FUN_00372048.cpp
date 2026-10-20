/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00372048` (_code @ 0x372048, 0x4c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0021af2c(void);

extern int DAT_00588fd4; /* 0x588fd4 */

/* Supplied declaration required: FUN_0021af2c. */
extern int FUN_00334044(void);


void FUN_00372048(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = DAT_00588fd4;
  temp_v1 = FUN_00334044();
  if (param_1 < temp_v1) {
    *(int *)(temp_v0 + 0x1374) = param_1;
  }
  else {
    temp_v1 = FUN_00334044();
    *(int *)(temp_v0 + 0x1374) = temp_v1 - 1;
  }
  FUN_0021af2c();
  *(unsigned char *)(temp_v0 + 0x2014) = 0;
  return;
}

} /* extern "C" */
