/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e1390` (_code @ 0x3e1390, 0xc0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_00570280; /* 0x570280 */

/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_002804b0. */
/* Supplied declaration required: FUN_002e342c. */
/* Supplied declaration required: FUN_002e6354. */
/* Supplied declaration required: FUN_003e21c8. */
extern unsigned int FUN_003efa38(int);
extern int FUN_0046ebf0(unsigned int);
/* Supplied declaration required: FUN_00470634. */


void FUN_003e1390(unsigned int *param_1,int param_2)

{
/* irregular: 6 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned char temp_v2 [132];
  
  FUN_002e6354(temp_v2,0x80);
  temp_v0 = FUN_003efa38(param_2);
  FUN_002e342c(temp_v2,temp_v0);
  if (param_1[1] != 0) {
    FUN_0019a5a0();
    param_1[1] = 0;
  }
  if (0 < *(int *)(param_2 + 0xf0)) {
    temp_v1 = FUN_0046ebf0(DAT_00570280);
    if (temp_v1 != 0) {
      FUN_00470634(DAT_00570280,*(unsigned int *)(param_2 + 0xf0),param_1 + 1,temp_v2);
      param_1[4] = 0;
      *param_1 = 0x16;
      param_1[3] = 0;
      FUN_003e21c8(param_1,param_2);
      return;
    }
  }
  FUN_002804b0(temp_v2,param_1 + 1,0);
  param_1[4] = 0;
  *param_1 = 0x16;
  param_1[3] = 0;
  FUN_003e21c8(param_1,param_2);
  return;
}
