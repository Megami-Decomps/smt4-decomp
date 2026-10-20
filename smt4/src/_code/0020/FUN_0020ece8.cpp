/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0020ece8` (_code @ 0x20ece8, 0x40 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0027e974(void);
int FUN_002b2368(void);
int FUN_002c5700(void);

/* Supplied declaration required: FUN_0027e974. */
/* Supplied declaration required: FUN_002b2368. */
/* Supplied declaration required: FUN_002c5700. */


void FUN_0020ece8(int *param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = *param_1;
  *(unsigned char *)(temp_v0 + 0x18) = 1;
  if (*(int *)(temp_v0 + 0x1c) != 0) {
    FUN_002c5700();
    if (*(int *)(temp_v0 + 0x1c) != 0) {
      FUN_0027e974();
      FUN_002b2368();
      *(unsigned int *)(temp_v0 + 0x1c) = 0;
    }
  }
  return;
}

} /* extern "C" */
