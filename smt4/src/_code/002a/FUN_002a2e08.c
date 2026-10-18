/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a2e08` (_code @ 0x2a2e08, 0xec bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_1_stack;

extern int FUN_00158bb4(); /* 0x158bb4 */
extern unsigned char LAB_001590a8; /* 0x1590a8 */
extern unsigned char LAB_001590b8; /* 0x1590b8 */
extern unsigned char LAB_001590c4; /* 0x1590c4 */

/* Supplied declaration required: FUN_002ba8f4. */
/* Supplied declaration required: FUN_002bcc60. */
/* Supplied declaration required: FUN_002c40f8. */
/* Supplied declaration required: FUN_002c526c. */


/* WARNING: Type propagation algorithm not settling */

void FUN_002a2e08(int param_1)

{
/* irregular: 6 native warning(s); review required */
  int *piVar1;
  int *piVar2;
  int aiStack_30 [3];
  unsigned char *temp_v0;
  unsigned char *temp_v1;
  unsigned char *temp_v2;
  int temp_v3 [2];
  
  piVar2 = (int *)(param_1 + 0x4510);
  if (*piVar2 != 0) {
    piVar1 = aiStack_30 + 1;
    aiStack_30[0] = *piVar2;
    FUN_002c40f8(piVar1,aiStack_30,1,0,0,0);
    if ((int)piVar1 < 0) {
      FUN_002c526c();
    }
    if (((unsigned int)piVar1 & 0x3ff) == 0x3fe) {
      return;
    }
  }
  FUN_002ba8f4(piVar2);
  aiStack_30[2] = 4;
  temp_v0 = &LAB_001590a8;
  temp_v1 = &LAB_001590c4;
  temp_v2 = &LAB_001590b8;
  aiStack_30[1] = 0;
  aiStack_30[0] = -2;
  temp_v3[0] = param_1;
  FUN_002bcc60(piVar2,aiStack_30 + 2,FUN_00158bb4,temp_v3,
               *(int *)(*(int *)(param_1 + 0x451c) + 0xc) + *(int *)(*(int *)(param_1 + 0x451c) + 8)
               ,0x11);
  if (((unsigned int)piVar2 & 0x7e00000) != 0x600000 && (int)piVar2 < 0) {
    FUN_002c526c();
  }
  return;
}
