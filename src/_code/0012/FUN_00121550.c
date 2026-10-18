/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00121550` (_code @ 0x121550, 0x8c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_0014dab4. */
/* Supplied declaration required: FUN_002bb360. */
/* Supplied declaration required: FUN_002c41e8. */
/* Supplied declaration required: FUN_002c42fc. */
/* Supplied declaration required: FUN_002c5468. */


void FUN_00121550(int *param_1)

{
/* irregular: 6 native warning(s); review required */
  unsigned char *puVar1;
  int iStack_18;
  unsigned char temp_v0 [8];
  
  if (*(char *)((int)param_1 + 0x15) != '\0') {
    *(unsigned char *)(param_1 + 5) = 1;
    FUN_002bb360();
    FUN_0014dab4();
    iStack_18 = *param_1;
    puVar1 = temp_v0;
    FUN_002c42fc(puVar1,&iStack_18,1,0,0xffffffff,0xffffffff);
    if ((int)puVar1 < 0) {
      FUN_002c5468();
    }
    *(unsigned char *)(param_1 + 1) = 1;
    FUN_002c41e8(param_1);
    if (*param_1 != 0) {
      software_interrupt(0x23);
      *param_1 = 0;
    }
    param_1[4] = -1;
    *(unsigned char *)((int)param_1 + 0x15) = 0;
  }
  return;
}
