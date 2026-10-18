/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00322ee0` (_code @ 0x322ee0, 0x80 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002499b4(void);
/* Supplied declaration required: FUN_0028dcb0. */
/* Supplied declaration required: FUN_002939f4. */
extern int FUN_00296cc8(void);


unsigned int FUN_00322ee0(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00296cc8();
  temp_v1 = 0;
  if (temp_v0 == 0) {
    temp_v1 = 7;
  }
  else if (temp_v0 == 1) {
    temp_v1 = 10;
  }
  else if (temp_v0 == 2) {
    temp_v1 = 0xb;
  }
  FUN_002939f4();
  temp_v0 = FUN_002499b4();
  if (temp_v0 != 0) {
    FUN_0028dcb0(0x7fffffff < (unsigned int)(int)*(short *)(temp_v0 + temp_v1 * 2 + 0x72));
  }
  else {
    FUN_0028dcb0(0);
  }
  return 1;
}
