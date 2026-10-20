/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f7f6c` (_code @ 0x2f7f6c, 0x1ec bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001517b4(...);
int FUN_001641b4(int);
int uiSpriteSetKeyframe(int, int, int);
int uiSpriteSetImageKeyframe(int, int, int);
int FUN_00228b04(int, int);
int scrScriptProcessStartEntry(...);
int flaggedEntrySetValueA(...);
int FUN_003450d4(int, int, int, unsigned int, unsigned int, unsigned int, char [4], int, int);

/* stack frame of param_1: 4 slot(s), 13 byte(s) */
typedef struct {
    unsigned char sp24; /* 0x24: local_24 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_1_stack;

/* Supplied declaration required: FUN_001517b4. */
/* Supplied declaration required: FUN_001641b4. */
/* Supplied declaration required: uiSpriteSetKeyframe. */
/* Supplied declaration required: uiSpriteSetImageKeyframe. */
/* Supplied declaration required: FUN_00228b04. */
/* Supplied declaration required: scrScriptProcessStartEntry. */
extern int FUN_002a4894(int);
/* Supplied declaration required: flaggedEntrySetValueA. */
/* Supplied declaration required: FUN_003450d4. */


void FUN_002f7f6c(int param_1)

{
/* irregular: 8 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  char temp_v2 [4];
  
  temp_v2[0] = '\0';
  temp_v0 = FUN_002a4894(param_1 + 0x2500);
  temp_v1 = param_1 + 0x2500;
  FUN_00228b04(temp_v1,1);
  if (temp_v1 == 0) {
    temp_v1 = param_1 + 0x2500;
    FUN_003450d4(temp_v1,0,param_1 + 0x544,0xffffffff,0xffffffff,0xffffffff,temp_v2,0,1);
    if (temp_v1 == 0) {
      temp_v1 = 0;
      FUN_001517b4(0,1);
      if (!(temp_v1 == 0 && temp_v2[0] == '\0')) {
        if (temp_v0 < *(int *)(param_1 + 0x24ec)) {
          if (*(int *)(param_1 + 0x24f4) < 0) {
            FUN_001641b4(0x100020e);
            *(int *)(param_1 + 0x24f4) = temp_v0;
            *(unsigned char *)(param_1 + 0x24f0) = 1;
            return;
          }
          if (*(int *)(param_1 + 0x24f4) != temp_v0) {
            FUN_001641b4(0x100020e);
            if (temp_v0 >= *(int *)(param_1 + 0x24f4)) {
              *(int *)(param_1 + 0x24f8) = temp_v0;
            }
            else {
              *(int *)(param_1 + 0x24f8) = *(int *)(param_1 + 0x24f4);
              *(int *)(param_1 + 0x24f4) = temp_v0;
            }
            uiSpriteSetKeyframe(param_1 + 0x3fc,0xb,0);
            uiSpriteSetImageKeyframe(param_1 + 0x3fc,0xb,0);
            uiSpriteSetKeyframe(param_1 + 0x488,10,0);
            uiSpriteSetImageKeyframe(param_1 + 0x488,0xb,0);
            *(unsigned int *)(param_1 + 0x2564) = 2;
            *(unsigned int *)(param_1 + 0x2568) = 0;
            return;
          }
          FUN_001641b4(0x100020f);
          *(unsigned int *)(param_1 + 0x24f4) = 0xffffffff;
          *(unsigned char *)(param_1 + 0x24f0) = 0;
          return;
        }
        FUN_001641b4(0x100020e);
        scrScriptProcessStartEntry(*(unsigned int *)(param_1 + 0x2574),1);
        *(unsigned int *)(param_1 + 0x2564) = 3;
        *(unsigned int *)(param_1 + 0x2568) = 0;
      }
      else {
        temp_v0 = 1;
        FUN_001517b4();
        if (temp_v0 != 0) {
          FUN_001641b4(0x100020f);
          if (*(int *)(param_1 + 0x24f4) < 0) {
            scrScriptProcessStartEntry(*(unsigned int *)(param_1 + 0x2574),2);
            *(unsigned int *)(param_1 + 0x2564) = 4;
            *(unsigned int *)(param_1 + 0x2568) = 0;
            return;
          }
          flaggedEntrySetValueA(param_1 + 0x2500);
          *(unsigned int *)(param_1 + 0x24f4) = 0xffffffff;
          *(unsigned char *)(param_1 + 0x24f0) = 0;
          return;
        }
      }
    }
  }
  return;
}

} /* extern "C" */
