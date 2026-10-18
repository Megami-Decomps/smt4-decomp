/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00328ec8` (_code @ 0x328ec8, 0x50 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0028df54. */
extern int FUN_002956ac(void);
extern int FUN_002a89e4(int);


unsigned int FUN_00328ec8(int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = *param_1;
  if (temp_v0 != 0) {
    temp_v0 = FUN_002a89e4((int)*(char *)(temp_v0 + *(int *)(temp_v0 + 0xcf78) * 0x620 + 0x3654));
    temp_v1 = FUN_002956ac();
    FUN_0028df54(*(unsigned short *)(temp_v0 + temp_v1 * 2 + 0x34));
  }
  return 1;
}
