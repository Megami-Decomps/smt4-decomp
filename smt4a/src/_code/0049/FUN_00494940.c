/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00494940` (_code @ 0x494940, 0xf4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int FUN_001654d8(int);
extern unsigned int FUN_001654e4(int);
/* Supplied declaration required: FUN_00167458. */
/* Supplied declaration required: FUN_00184528. */
extern int FUN_0023b3d0(void);
/* Supplied declaration required: FUN_004935b0. */


void FUN_00494940(int param_1)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  if (*(int *)(param_1 + 8) == 0) {
    FUN_00184528(param_1 + 0x3cc,0);
    *(unsigned int *)(param_1 + 8) = 1;
    return;
  }
  if (*(int *)(param_1 + 8) == 1) {
    temp_v2 = param_1 + 0x3ec;
    FUN_00167458(temp_v2,0);
    temp_v0 = FUN_001654e4(temp_v2);
    temp_v1 = FUN_001654d8(temp_v2);
    FUN_004935b0(param_1 + 0x3a4,temp_v1,temp_v0);
    if (*(char *)(param_1 + 0x476) != '\0') {
      switch(*(unsigned int *)(param_1 + 0xb40)) {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
        temp_v2 = FUN_0023b3d0();
        if (temp_v2 != 0) {
          *(unsigned int *)(param_1 + 0x10) = *(unsigned int *)(param_1 + 4);
          *(unsigned int *)(param_1 + 4) = 0x11;
          *(unsigned int *)(param_1 + 8) = 0;
          return;
        }
        break;
      case 7:
        *(unsigned int *)(param_1 + 0x10) = *(unsigned int *)(param_1 + 4);
        *(unsigned int *)(param_1 + 4) = 0x11;
        *(unsigned int *)(param_1 + 8) = 0;
        return;
      case 8:
        *(unsigned int *)(param_1 + 0x10) = *(unsigned int *)(param_1 + 4);
        *(unsigned int *)(param_1 + 4) = 0x12;
        *(unsigned int *)(param_1 + 8) = 0;
        return;
      }
    }
  }
  return;
}
