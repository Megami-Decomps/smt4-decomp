/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003004fc` (_code @ 0x3004fc, 0x5c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00282924. */
/* Supplied declaration required: FUN_0028dcb0. */
/* Supplied declaration required: FUN_002939f4. */
/* Supplied declaration required: FUN_002953b8. */
extern int FUN_00296cc8(void);
extern int FUN_002a8740(int);
/* Supplied declaration required: FUN_0033b960. */


unsigned int FUN_003004fc(void)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00296cc8();
  if (temp_v0 < 0x6d) {
    FUN_002939f4();
    temp_v1 = FUN_002939f4();
    FUN_00282924(temp_v1,temp_v0);
    temp_v0 = *(int *)(temp_v1 + 0x27c);
  }
  else {
    temp_v0 = FUN_002a8740(temp_v0 - 0x6d);
  }
  FUN_0033b960();
  if (0 < temp_v0) {
    FUN_002953b8();
  }
  FUN_0028dcb0(temp_v0);
  return 1;
}
