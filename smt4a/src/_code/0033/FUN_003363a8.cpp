/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003363a8` (_code @ 0x3363a8, 0x1b8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int btlGetMainState(void);
int sysPlaySe(int);
int uiSpriteSelectAnim(int, int);
int uiSpriteSetImageKeyframe(int, int);
int FUN_0019de98(int, unsigned int);
int FUN_0020acd8(int, unsigned int, unsigned int);
int FUN_0020ad6c(int, int, int);
int FUN_0021a9e8(int);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

extern unsigned int DAT_00573ba8; /* 0x573ba8 */
extern unsigned int DAT_00573bac; /* 0x573bac */

/* Supplied declaration required: btlGetMainState. */
extern int FUN_00167f08(void);
/* Supplied declaration required: sysPlaySe. */
/* Supplied declaration required: uiSpriteSelectAnim. */
/* Supplied declaration required: uiSpriteSetImageKeyframe. */
/* Supplied declaration required: FUN_0019de98. */
/* Supplied declaration required: FUN_0020acd8. */
/* Supplied declaration required: FUN_0020ad6c. */
/* Supplied declaration required: FUN_0021a9e8. */
extern int FUN_003e8430(void);


void FUN_003363a8(int param_1,unsigned int param_2,unsigned char param_3,unsigned int param_4)

{
/* irregular: 8 native warning(s); review required */
  int temp_v0;
  
  *(unsigned char *)(param_1 + 0x38b1) = param_3;
  *(char *)(param_1 + 0x38b2) = (char)param_4;
  *(unsigned int *)(param_1 + 0x3890) = param_2;
  FUN_0021a9e8(param_1);
  if (*(char *)(param_1 + 0x38b4) == '\0') {
    temp_v0 = 0;
    do {
      uiSpriteSetImageKeyframe(param_1 + temp_v0 * 0x8c + 0xe58,0);
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 6);
    if (*(char *)(param_1 + 0x38b4) == '\0') {
      btlGetMainState();
      temp_v0 = FUN_003e8430();
      if ((temp_v0 == 0) &&
         (temp_v0 = btlGetMainState(),
         (*(unsigned int *)(temp_v0 + 0x45a0) & DAT_00573ba8) == 0 &&
         (*(unsigned int *)(temp_v0 + 0x45a4) & DAT_00573bac) == 0)) {
        if (*(int *)(param_1 + 0x387c) == 0x17) {
          FUN_0020acd8(param_1,*(unsigned int *)(param_1 + 0x3890),param_4);
          return;
        }
        uiSpriteSelectAnim(param_1 + 0x20,0x1b);
        temp_v0 = 0;
        do {
          uiSpriteSelectAnim(param_1 + temp_v0 * 0x8c + 0x138,0x1b);
          temp_v0 = temp_v0 + 1;
        } while (temp_v0 < 8);
        *(unsigned int *)(param_1 + 0x3888) = 0x11;
        FUN_0020ad6c(param_1,0x10,1);
        return;
      }
      FUN_0019de98(0,0xf4f4f4ff);
      FUN_0020ad6c(param_1,0x28,1);
      temp_v0 = FUN_00167f08();
      if (temp_v0 != 0x3f) {
        btlGetMainState();
        temp_v0 = FUN_003e8430();
        if (temp_v0 != 0) {
          sysPlaySe(0x3f);
          return;
        }
      }
      return;
    }
  }
  FUN_0020ad6c(param_1,0x2a,1);
  return;
}

} /* extern "C" */
