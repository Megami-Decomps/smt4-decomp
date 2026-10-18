/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00121b6c` (_code @ 0x121b6c, 0x84 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern signed char DAT_00594971; /* 0x594971 */
extern signed char DAT_00594972; /* 0x594972 */
extern unsigned char DAT_00594e7c; /* 0x594e7c */

/* Supplied declaration required: FUN_00121c68. */
extern int FUN_002eac34(unsigned int);
/* Supplied declaration required: FUN_002f6c32. */


void FUN_00121b6c(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  FUN_002f6c32(*(unsigned int *)(param_1 + 0x31c),&DAT_00594e7c,0x10);
  FUN_00121c68(param_1);
  if (DAT_00594971 != '\0') {
    temp_v0 = FUN_002eac34(10);
    *(unsigned int *)(temp_v0 + 0xa4) = *(unsigned int *)(param_1 + 0x31c);
  }
  if (DAT_00594972 != '\0') {
    temp_v0 = FUN_002eac34(9);
    if (*(int *)(temp_v0 + 0xa4) == 0) {
      temp_v0 = FUN_002eac34(9);
      *(unsigned int *)(temp_v0 + 0xa4) = *(unsigned int *)(param_1 + 800);
    }
    temp_v0 = FUN_002eac34(1);
    if (*(int *)(temp_v0 + 0xa4) == 0) {
      temp_v0 = FUN_002eac34(1);
      *(unsigned int *)(temp_v0 + 0xa4) = *(unsigned int *)(param_1 + 800);
    }
    temp_v0 = FUN_002eac34(8);
    if (*(int *)(temp_v0 + 0xa4) == 0) {
      temp_v0 = FUN_002eac34(8);
      *(unsigned int *)(temp_v0 + 0xa4) = *(unsigned int *)(param_1 + 800);
    }
  }
  return;
}
