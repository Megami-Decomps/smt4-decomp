/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00116684` (_code @ 0x116684, 0x52 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0011cbc2(unsigned int);
int FUN_0011cc62(unsigned int);
int FUN_002e6e34(int *, int);
int FUN_002e6e5c(int *);
int FUN_002f8b88(...);

extern unsigned char DAT_005949d8; /* 0x5949d8 */

/* Supplied declaration required: FUN_0011cbc2. */
/* Supplied declaration required: FUN_0011cc62. */
/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: FUN_002e6e5c. */
/* Supplied declaration required: FUN_002f8b88. */


void FUN_00116684(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int uStack_20;
  unsigned int uStack_1c;
  unsigned int uStack_18;
  
  uStack_20 = param_2;
  uStack_1c = param_3;
  uStack_18 = param_4;
  while (*(char *)(param_1 + 4) == '\0') {
    if ((*(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x3c)) >> 3 != 0) {
      FUN_002f8b88((*(unsigned int *)((unsigned char *)&DAT_005949d8 + 0x70)));
      FUN_002e6e34(&uStack_20,param_1 + 8);
      for (temp_v0 = *(int *)(param_1 + 0x3c); *(int *)(param_1 + 0x40) != temp_v0; temp_v0 = temp_v0 + 8) {
        temp_v1 = *(unsigned int *)(temp_v0 + 4);
        FUN_0011cc62(temp_v1);
        FUN_0011cbc2(temp_v1);
      }
      FUN_002e6e5c(&uStack_20);
    }
    else {
      FUN_002f8b88(100);
    }
  }
  return;
}

} /* extern "C" */
