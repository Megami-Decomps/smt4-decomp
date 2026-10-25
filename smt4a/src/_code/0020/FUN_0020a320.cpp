/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0020a320` (_code @ 0x20a320, 0x434 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "battle/BtlMainAccess.h"
#include "romwright_types.h"

extern "C" {

int uiSpriteSetImageKeyframe(...);
int FUN_0019de98(...);
int FUN_0020ad6c(...);
int FUN_002cc9e0(int, int);

extern unsigned int DAT_00573bc8; /* 0x573bc8 */
extern unsigned int DAT_00573bcc; /* 0x573bcc */

/* Supplied declaration required: btlGetMainState. */
/* Supplied declaration required: uiSpriteSetImageKeyframe. */
/* Supplied declaration required: FUN_0019de98. */
/* Supplied declaration required: FUN_0020ad6c. */
extern int objectApplyIfUnblocked(void);
/* Supplied declaration required: FUN_002cc9e0. */
extern int FUN_003e98e0(void);


unsigned int FUN_0020a320(int param_1)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  
  piVar2 = (int *)(param_1 + 0x3890);
  *(unsigned int *)(param_1 + *piVar2 * 4 + 0x3c98) = 0;
  *(unsigned int *)(param_1 + *piVar2 * 4 + 0x3c88) = 0;
  *(unsigned int *)(param_1 + 0x3dac) = 0;
  if (*(short *)(param_1 + *piVar2 * 2 + 0x4210) == -1) {
    FUN_002cc9e0(param_1,1);
  }
  temp_v0 = FUN_002cc9e0(param_1,1);
  piVar2 = (int *)(param_1 + 0x3c40);
  if (temp_v0 != 1) {
    temp_v0 = FUN_002cc9e0(param_1,1);
    if (temp_v0 != 2) {
      temp_v0 = FUN_002cc9e0(param_1,1);
      if (temp_v0 != 7) {
        temp_v0 = FUN_002cc9e0(param_1,1);
        if (temp_v0 != 3) {
          temp_v0 = FUN_002cc9e0(param_1,1);
          if ((temp_v0 == 6) || (temp_v0 = FUN_002cc9e0(param_1,1), temp_v0 == 8)) {
            return 0;
          }
          temp_v0 = FUN_002cc9e0(param_1,1);
          if (temp_v0 != 5) {
            temp_v0 = FUN_002cc9e0(param_1,1);
            if (temp_v0 != 10) {
              temp_v0 = FUN_002cc9e0(param_1,1);
              if (temp_v0 != 4) {
                temp_v0 = FUN_002cc9e0(param_1,1);
                if (temp_v0 != 9) {
                  temp_v0 = FUN_002cc9e0(param_1,1);
                  if (temp_v0 != 0xc) {
                    FUN_0020ad6c(param_1,0,1);
                  }
                  else {
                    temp_v0 = objectApplyIfUnblocked();
                    if (temp_v0 < 1) {
                      return 0;
                    }
                    *piVar2 = param_1 + 0x3db4;
                    FUN_0020ad6c(param_1,9,1);
                    temp_v0 = 0;
                    do {
                      uiSpriteSetImageKeyframe(param_1 + temp_v0 * 0x8c + 0xe58,0);
                      temp_v0 = temp_v0 + 1;
                    } while (temp_v0 < 6);
                  }
                }
                else {
                  FUN_0020ad6c(param_1,0x19,1);
                }
              }
              else {
                FUN_0020ad6c(param_1,0x1b,1);
              }
            }
            else {
              FUN_0020ad6c(param_1,0x1a,1);
            }
          }
          else {
            FUN_0020ad6c(param_1,0x17,1);
          }
        }
        else {
          temp_v0 = objectApplyIfUnblocked();
          if (temp_v0 < 1) {
            return 0;
          }
          *piVar2 = param_1 + 0x3b78;
          FUN_0020ad6c(param_1,0xd,1);
          temp_v0 = 0;
          do {
            uiSpriteSetImageKeyframe(param_1 + temp_v0 * 0x8c + 0xe58,0);
            temp_v0 = temp_v0 + 1;
          } while (temp_v0 < 6);
        }
      }
      else {
        temp_v0 = objectApplyIfUnblocked();
        if (temp_v0 < 1) {
          return 0;
        }
        *piVar2 = param_1 + 0x3b14;
        FUN_0020ad6c(param_1,0xb,1);
        temp_v0 = 0;
        do {
          uiSpriteSetImageKeyframe(param_1 + temp_v0 * 0x8c + 0xe58,0);
          temp_v0 = temp_v0 + 1;
        } while (temp_v0 < 6);
      }
    }
    else {
      temp_v0 = reinterpret_cast<int>(btlGetMainState());
      if ((*(unsigned int *)(temp_v0 + 0x45ac) & DAT_00573bcc) == 0 &&
          (DAT_00573bc8 & *(unsigned int *)(temp_v0 + 0x45a8)) == 0) {
        reinterpret_cast<int>(btlGetMainState());
        temp_v0 = FUN_003e98e0();
        if (temp_v0 == 0) {
          return 0;
        }
      }
      *piVar2 = param_1 + 0x3ab0;
      FUN_0020ad6c(param_1,9,1);
      temp_v0 = 0;
      do {
        uiSpriteSetImageKeyframe(param_1 + temp_v0 * 0x8c + 0xe58,0);
        temp_v0 = temp_v0 + 1;
      } while (temp_v0 < 6);
    }
  }
  else {
    *piVar2 = param_1 + 0x3a4c;
    FUN_0020ad6c(param_1,9,1);
    temp_v0 = 0;
    do {
      uiSpriteSetImageKeyframe(param_1 + temp_v0 * 0x8c + 0xe58,0);
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 6);
  }
  FUN_0019de98(0,0xf4f4f4ff);
  return 1;
}

} /* extern "C" */
