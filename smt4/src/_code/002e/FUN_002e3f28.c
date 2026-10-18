/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e3f28` (_code @ 0x2e3f28, 0x34 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0028dcb0. */
extern int FUN_002939f4(void);


unsigned int FUN_002e3f28(void)

{
/* irregular: 1 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v1 = FUN_002939f4();
  temp_v0 = *(short *)(temp_v1 + 0x4968);
  temp_v2 = FUN_002939f4();
  temp_v1 = (int)temp_v0;
  if ((int)temp_v0 < (int)*(short *)(temp_v2 + 0x496a)) {
    temp_v1 = (int)*(short *)(temp_v2 + 0x496a);
  }
  FUN_0028dcb0(temp_v1);
  return 1;
}
