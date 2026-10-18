/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00129a38` (_code @ 0x129a38, 0x60 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0013add4. */
/* Supplied declaration required: FUN_0013ae84. */
extern int FUN_002ad4d0(void);
extern int FUN_002ad4e0(void);
extern int FUN_002ad4f0(void);
extern int FUN_002b3ca0(void);


int FUN_00129a38(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_002ad4e0();
  if (temp_v0 == 0) {
    temp_v0 = 0x202bf8;
  }
  else {
    temp_v0 = FUN_002ad4f0();
    FUN_0013ae84(temp_v0,0xffff8001,0);
    if ((-1 < temp_v0) && (temp_v1 = FUN_002b3ca0(), temp_v1 != 0)) {
      temp_v1 = FUN_002ad4d0();
      FUN_0013add4(temp_v1 + 0x30,0);
    }
  }
  return temp_v0;
}
