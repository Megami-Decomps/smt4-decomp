/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f06c8` (_code @ 0x2f06c8, 0x6c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_0043427c; /* 0x43427c */

extern int FUN_0027e928(unsigned int);
/* Supplied declaration required: FUN_0028dcb0. */
extern int FUN_00296cc8(unsigned int);


unsigned int FUN_002f06c8(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = FUN_00296cc8(0);
  temp_v2 = 0;
  if (temp_v0 == 0) {
    temp_v2 = 7;
  }
  else if (temp_v0 == 1) {
    temp_v2 = 10;
  }
  else if (temp_v0 == 2) {
    temp_v2 = 0xb;
  }
  temp_v0 = FUN_00296cc8(1);
  temp_v1 = FUN_0027e928(DAT_0043427c);
  FUN_0028dcb0(*(short *)(*(int *)(temp_v1 + 0x20) + temp_v2 * 2 + 0x72) == temp_v0);
  return 1;
}
