/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0049c7a0` (_code @ 0x49c7a0, 0x8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00192608. */
extern int FUN_0019271c(void);
/* Supplied declaration required: FUN_0048026c. */
extern int FUN_00480a00(void);


int FUN_0049c7a0(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int uStack_20;
  unsigned int uStack_1c;
  unsigned int uStack_18;
  unsigned int uStack_14;
  
  if (param_1 == 0) {
    return 0;
  }
  temp_v1 = 0;
  temp_v0 = FUN_0019271c();
  if (!((temp_v0 == 4 || temp_v0 == 5) || temp_v0 == 6)) {
    if (temp_v0 != 7) {
      FUN_00192608();
      if (param_1 != 0) {
        temp_v1 = FUN_00480a00();
      }
    }
    else {
      FUN_00192608();
      temp_v1 = (int)*(short *)(param_1 + 0x38);
    }
  }
  else {
    temp_v0 = param_1;
    FUN_00192608();
    uStack_20 = 0;
    uStack_1c = 0;
    uStack_18 = 0;
    uStack_14 = 0;
    FUN_0048026c(param_1,&uStack_20);
    temp_v1 = (int)*(short *)(temp_v0 + 0x36) + (int)(short)uStack_20;
  }
  return temp_v1;
}
