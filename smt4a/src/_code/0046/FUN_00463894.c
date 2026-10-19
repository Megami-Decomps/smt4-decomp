/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00463894` (_code @ 0x463894, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern unsigned int DAT_005c0ad8; /* 0x5c0ad8 */

/* Unsupported intrinsic, declaration required: hasExclusiveAccess (CALLOTHER). */
/* Supplied declaration required: FUN_0018c87c. */
/* Supplied declaration required: FUN_001a08d8. */
extern int FUN_001b1998(void);
/* Supplied declaration required: FUN_001b4a58. */
extern void nn_os_CriticalSection_Enter(unsigned int);


void FUN_00463894(int param_1)

{
/* irregular: irregular input(s): in_lr; 4 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int *piVar3;
  int *piVar4;
  unsigned int unaff_r4;
  int temp_v2;
  unsigned int temp_v3;
  int *piVar7;
  unsigned int in_lr;
  
  temp_v1 = FUN_001b1998();
  piVar7 = (int *)(temp_v1 + 0x2c);
  nn_os_CriticalSection_Enter((unsigned int)piVar7);
  temp_v3 = 0;
  do {
    temp_v2 = temp_v1 + (temp_v3 & 0xff) * 0xc;
    piVar4 = (int *)*(int *)(temp_v2 + 4);
    while (piVar3 = piVar4, piVar3 != (int *)(temp_v2 + 4)) {
      piVar4 = (int *)*piVar3;
      if (piVar3[5] == param_1) {
        FUN_0018c87c(temp_v2);
        *(unsigned char *)(piVar3 + 4) = 4;
        FUN_001a08d8(piVar3 + 2);
      }
    }
    temp_v3 = temp_v3 + 1;
  } while (temp_v3 < 3);
  temp_v2 = *(int *)(temp_v1 + 0x34) - 1;
  *(int *)(temp_v1 + 0x34) = temp_v2;
  if (temp_v2 != 0) {
    return;
  }
  *(unsigned int *)(temp_v1 + 0x30) = 0;
  do {
    temp_v2 = *piVar7;
    temp_v1 = -temp_v2;
    temp_v0 = (unsigned char)hasExclusiveAccess(piVar7);
  } while (!temp_v0);
  *piVar7 = temp_v1;
  if (temp_v2 != -1 && 0 < temp_v1) {
    FUN_001b4a58(DAT_005c0ad8,piVar7,0,1,0,0,unaff_r4,in_lr);
  }
  return;
}
