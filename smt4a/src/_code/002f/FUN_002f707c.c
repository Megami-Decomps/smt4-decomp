/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f707c` (_code @ 0x2f707c, 0x12c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
} param_3_stack;

extern int DAT_0057f268; /* 0x57f268 */

/* Supplied declaration required: FUN_001641b4. */
/* Supplied declaration required: FUN_001681cc. */
/* Supplied declaration required: FUN_0020b718. */
extern int FUN_00275f44(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002a7324. */
/* Supplied declaration required: FUN_0031f718. */
/* Supplied declaration required: FUN_0032ff20. */
/* Supplied declaration required: FUN_0033449c. */
/* Supplied declaration required: FUN_0037e1b0. */


void FUN_002f707c(unsigned int param_1,unsigned int param_2,int param_3)

{
/* irregular: 8 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3;
  unsigned char temp_v4 [300];
  
  temp_v0 = DAT_0057f268;
  temp_v2 = 5;
  temp_v3 = 1;
  if ((param_1 & 1) != 0) {
    temp_v2 = 6;
    param_3 = 0;
  }
  else if (!((param_1 & 8) == 0 && (param_1 & 0x40) == 0)) {
    param_3 = 0;
  }
  else if ((param_1 & 2) != 0) {
    temp_v2 = 3;
  }
  else if ((param_1 & 4) != 0) {
    temp_v2 = 4;
  }
  else {
    temp_v3 = (param_1 & 0x20) != 0;
    if (temp_v3) {
      temp_v2 = 7;
    }
  }
  if ((param_1 != 0 && temp_v3) &&
     (temp_v1 = FUN_00275f44(*(unsigned int *)(DAT_0057f268 + 0x14),temp_v2), temp_v1 != 0)) {
    *(unsigned char *)(*(int *)(temp_v0 + 0xe84) + temp_v0 + 0xe88) = 0;
    *(unsigned int *)(temp_v0 + *(int *)(temp_v0 + 0xe84) * 4 + 0xe7c) = param_2;
    *(int *)(temp_v0 + 0xe84) = *(int *)(temp_v0 + 0xe84) + 1;
    FUN_0020b718(0xd,1);
    FUN_001681cc(0xa0);
    if (param_3 != 0) {
      FUN_0032ff20(param_3,temp_v4);
      FUN_0037e1b0(0);
      FUN_0031f718((int)(short)param_3,0);
      FUN_0033449c(0);
      FUN_002a7324(1);
    }
  }
  FUN_001641b4(0x100020f);
  return;
}
