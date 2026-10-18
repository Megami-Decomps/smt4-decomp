/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f686c` (_code @ 0x3f686c, 0xac bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_004d4674; /* 0x4d4674 */

extern unsigned int FUN_001df688(int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c3a24. */
/* Supplied declaration required: FUN_002c3aa8. */
extern unsigned int FUN_002dacf0(int);


unsigned int FUN_003f686c(int param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  FUN_002c3aa8(&DAT_004d4674);
  if (*(unsigned int *)(param_1 + 0x38) < *(unsigned int *)(param_1 + 8)) {
    temp_v1 = *(int *)(param_1 + 0x30);
    FUN_002c3a24(&DAT_004d4674);
    temp_v0 = FUN_001df688(param_1,param_2,0);
    *(unsigned int *)(*(int *)(param_1 + 0x28) + temp_v1 * 4) = temp_v0;
    temp_v0 = FUN_002dacf0(param_1);
    *(unsigned int *)(*(int *)(param_1 + 0x2c) + temp_v1 * 4) = temp_v0;
    FUN_002c3aa8(&DAT_004d4674);
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
    if (*(int *)(param_1 + 0x30) == *(int *)(param_1 + 8)) {
      *(unsigned int *)(param_1 + 0x30) = 0;
    }
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
    FUN_002c3a24(&DAT_004d4674);
    return 1;
  }
  FUN_002c3a24(&DAT_004d4674);
  return 0;
}
