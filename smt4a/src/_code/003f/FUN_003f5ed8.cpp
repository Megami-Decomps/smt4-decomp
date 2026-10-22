/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f5ed8` (_code @ 0x3f5ed8, 0x2cc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001517b4(...);
int FUN_00163aa4(int);
int eventQueueAddUniqueIfValid(int);
int uiSpriteSetKeyframe(...);
int uiSpriteSetImageKeyframe(...);
int FUN_00228b04(int, int);
int FUN_003450d4(int, unsigned int, int, int, int, int, unsigned char [16], int, int);
int dialogEnterState(...);
int FUN_003f6abc(int);
int gameFlagsSetAlternateMode(unsigned int, int);

/* stack frame of param_1: 4 slot(s), 13 byte(s) */
typedef struct {
    unsigned char sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_1_stack;

/* Supplied declaration required: FUN_001517b4. */
/* Supplied declaration required: FUN_00163aa4. */
/* Supplied declaration required: eventQueueAddUniqueIfValid. */
extern int ifTouchGetSelectionMode(void);
extern unsigned int FUN_001834a4(unsigned int, unsigned int);
/* Supplied declaration required: uiSpriteSetKeyframe. */
/* Supplied declaration required: uiSpriteSetImageKeyframe. */
/* Supplied declaration required: FUN_00228b04. */
extern unsigned int resourceRunOperationIfUnblocked(int);
extern int FUN_002a4894(int);
/* Supplied declaration required: FUN_003450d4. */
/* Supplied declaration required: dialogEnterState. */
/* Supplied declaration required: FUN_003f6abc. */
extern int flagsBGetBit1(unsigned int);
/* Supplied declaration required: gameFlagsSetAlternateMode. */


void FUN_003f5ed8(int param_1)

{
/* irregular: 10 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned char temp_v4 [16];
  
  temp_v3 = 0x3f800000;
  FUN_00163aa4(param_1 + 0x310);
  FUN_00163aa4(param_1 + 0x39c);
  FUN_00163aa4(param_1 + 0x4b4);
  temp_v0 = *(int *)(param_1 + 0x5cc) - 1;
  *(int *)(param_1 + 0x5cc) = temp_v0;
  if (temp_v0 < 1) {
    *(unsigned int *)(param_1 + 0x5cc) = 0x1e;
    *(unsigned int *)(param_1 + 0x5d0) = temp_v3;
    *(float *)(param_1 + 0x5d0) = *(float *)(param_1 + 0x5d0) - 0.053333335f;
  }
  else if (temp_v0 >= 0x10) {
    *(float *)(param_1 + 0x5d0) = *(float *)(param_1 + 0x5d0) - 0.053333335f;
  }
  if (*(int *)(param_1 + 0x5cc) < 0xf) {
    *(float *)(param_1 + 0x5d0) = *(float *)(param_1 + 0x5d0) + 0.053333335f;
  }
  FUN_00228b04(param_1 + 0x58,1);
  temp_v3 = resourceRunOperationIfUnblocked(param_1 + 0x58);
  *(unsigned int *)(param_1 + 0x48) = temp_v3;
  temp_v0 = FUN_002a4894(param_1 + 0x58);
  *(int *)(param_1 + 0x44) = temp_v0;
  temp_v2 = *(int *)(param_1 + 0x48);
  temp_v1 = (unsigned int)*(unsigned short *)(param_1 + (temp_v0 + temp_v2) * 2 + 0x5e6);
  if (*(unsigned int *)(param_1 + 0x54) != temp_v1) {
    *(int *)(param_1 + 0x6b4) = temp_v2 - 5;
    *(int *)(param_1 + 0x6b8) = temp_v2 - 4;
    *(int *)(param_1 + 0x6bc) = temp_v2 - 3;
    *(int *)(param_1 + 0x6c0) = temp_v2 - 2;
    *(int *)(param_1 + 0x6c4) = temp_v2 - 1;
    *(int *)(param_1 + 0x6c8) = temp_v2;
    *(int *)(param_1 + 0x6cc) = temp_v2 + 1;
    *(int *)(param_1 + 0x6d0) = temp_v2 + 2;
    *(int *)(param_1 + 0x6d4) = temp_v2 + 3;
  }
  *(unsigned int *)(param_1 + 0x54) = temp_v1;
  *(unsigned int *)(param_1 + 0x5e0) = *(int *)(param_1 + 0x20) + temp_v1 * 0x34;
  temp_v0 = ifTouchGetSelectionMode();
  temp_v4[0] = 0;
  temp_v3 = FUN_001834a4(0x31,0xab);
  temp_v2 = param_1 + 0x58;
  FUN_003450d4(temp_v2,temp_v3,param_1 + 300,(int)*(short *)(param_1 + 0x146),
               (int)*(short *)(param_1 + 0x142),(int)*(short *)(param_1 + 0x144),temp_v4,0,1);
  if (temp_v2 == 0) {
    temp_v2 = 0;
    FUN_001517b4(0,1);
    if (((temp_v2 != 0) || (temp_v0 == 6)) && (**(short **)(param_1 + 0x5e0) != 0)) {
      eventQueueAddUniqueIfValid(0x100020e);
      FUN_003f6abc(param_1);
      uiSpriteSetKeyframe(param_1 + 0x1f8,1,0);
      uiSpriteSetImageKeyframe(param_1 + 0x1f8,0);
      uiSpriteSetKeyframe(param_1 + 0x540,2,0);
      uiSpriteSetImageKeyframe(param_1 + 0x540,1,0);
      temp_v0 = flagsBGetBit1(*(unsigned int *)(param_1 + 0x54));
      if (temp_v0 != 0) {
        gameFlagsSetAlternateMode(*(unsigned int *)(param_1 + 0x54),0);
      }
      dialogEnterState(param_1,5,0);
    }
    else {
      temp_v0 = 1;
      FUN_001517b4();
      if (temp_v0 != 0) {
        eventQueueAddUniqueIfValid(0x100020f);
        uiSpriteSetKeyframe(param_1 + 0x16c,2,0);
        uiSpriteSetImageKeyframe(param_1 + 0x16c,1,0);
        dialogEnterState(param_1,2,0);
        return;
      }
    }
  }
  return;
}

} /* extern "C" */
