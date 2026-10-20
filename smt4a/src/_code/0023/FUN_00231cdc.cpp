/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00231cdc` (_code @ 0x231cdc, 0x268 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int btlGetMainState(void);
int uiSpriteSelectAnim(int, int);
int FUN_0020acd8(int, unsigned int, unsigned int);
int FUN_0020ad6c(...);
int FUN_0020d3d4(int);
int FUN_002cb438(int, unsigned int, unsigned int);
int flaggedEntrySetValueB(int, int);
int FUN_003363a8(int, unsigned int, int, unsigned int);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

extern unsigned int DAT_00573ba8; /* 0x573ba8 */
extern unsigned int DAT_00573bac; /* 0x573bac */

/* Supplied declaration required: btlGetMainState. */
/* Supplied declaration required: uiSpriteSelectAnim. */
/* Supplied declaration required: FUN_0020acd8. */
/* Supplied declaration required: FUN_0020ad6c. */
/* Supplied declaration required: FUN_0020d3d4. */
/* Supplied declaration required: FUN_002cb438. */
extern unsigned int FUN_002cc9e0(int, unsigned int);
/* Supplied declaration required: flaggedEntrySetValueB. */
/* Supplied declaration required: FUN_003363a8. */
extern int FUN_003e8430(void);


void FUN_00231cdc(int param_1,unsigned int param_2,int param_3,unsigned int param_4)

{
/* irregular: 8 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  if (*(char *)(param_1 + 0x38b8) != '\0') {
    *(unsigned int *)(param_1 + 0x3890) = 0;
    FUN_0020d3d4(param_1);
    flaggedEntrySetValueB(param_1 + 0x3bdc,0);
    uiSpriteSelectAnim(param_1 + 0x20,0x1b);
    temp_v1 = 0;
    do {
      uiSpriteSelectAnim(param_1 + temp_v1 * 0x8c + 0x138,0x1b);
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < 8);
    *(unsigned int *)(param_1 + 0x3888) = 0x2d;
    FUN_0020ad6c(param_1,0x10,1);
    return;
  }
  btlGetMainState();
  temp_v1 = FUN_003e8430();
  if ((temp_v1 == 0) &&
     (temp_v1 = btlGetMainState(),
     (*(unsigned int *)(temp_v1 + 0x45a4) & DAT_00573bac) == 0 &&
     (DAT_00573ba8 & *(unsigned int *)(temp_v1 + 0x45a0)) == 0)) {
    if (param_3 != -1) {
      if (param_3 == 0xb) {
        FUN_0020ad6c(param_1,*(unsigned int *)(param_1 + 0x3880),1);
        return;
      }
      if (param_3 != 1) {
        if (param_3 != 2) {
          if (param_3 == 7) {
            FUN_0020ad6c(param_1,10,1);
            return;
          }
          if (param_3 == 3) {
            FUN_0020ad6c(param_1,0xc,1);
            return;
          }
          if (param_3 != 0xc) {
            FUN_0020ad6c(param_1,1,1);
            return;
          }
        }
      }
      else {
        *(unsigned int *)(param_1 + 0x3c98) = 0;
        *(unsigned int *)(param_1 + 0x3c9c) = 0;
        *(unsigned int *)(param_1 + 0x3ca0) = 0;
        *(unsigned int *)(param_1 + 0x3ca4) = 0;
      }
      FUN_0020ad6c(param_1,8,1);
      return;
    }
    temp_v1 = *(int *)(param_1 + 0x387c);
    if ((temp_v1 == 0x1a) || (temp_v1 == 0x1b)) {
      FUN_0020ad6c(param_1,1);
      temp_v0 = FUN_002cc9e0(param_1,1);
      FUN_002cb438(param_1,temp_v0,*(unsigned int *)(param_1 + 0x3890));
      return;
    }
    if (temp_v1 != 0x11) {
      btlGetMainState();
      temp_v1 = FUN_003e8430();
      if ((temp_v1 == 0) &&
         (temp_v1 = btlGetMainState(),
         (DAT_00573ba8 & *(unsigned int *)(temp_v1 + 0x45a0)) == 0 &&
         (*(unsigned int *)(temp_v1 + 0x45a4) & DAT_00573bac) == 0)) {
        FUN_003363a8(param_1,param_2,1,param_4);
        return;
      }
    }
    FUN_0020acd8(param_1,param_2,param_4);
    return;
  }
  FUN_003363a8(param_1,param_2,1,param_4);
  return;
}

} /* extern "C" */
