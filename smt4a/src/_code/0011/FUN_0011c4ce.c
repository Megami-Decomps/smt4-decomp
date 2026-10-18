/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011c4ce` (_code @ 0x11c4ce, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0010b6a4. */
/* Supplied declaration required: FUN_00110600. */
extern int FUN_002ecf28(void);


void FUN_0011c4ce(unsigned int param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002ecf28();
  temp_v0 = *(int *)(temp_v0 + 0xc);
  FUN_00110600(temp_v0,param_2,0);
  if (temp_v0 != 0) {
    FUN_0010b6a4();
  }
  return;
}
