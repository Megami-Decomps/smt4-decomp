/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003dc0c0` (_code @ 0x3dc0c0, 0x2c8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int ifTouchRegionRemove(void);
int uiSpriteSelectAnim(int, int);
int uiSpriteSetKeyframe(int, int, int);
int uiSpriteSetImageKeyframe(int, int, int);
int FUN_00202400(void);
int FUN_00203b40(int, unsigned int, int, int, int, int);
int FUN_00212724(void);
int FUN_00387240(int, int, int);
int FUN_003d1aa0(int);

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;

/* Supplied declaration required: ifTouchRegionRemove. */
/* Supplied declaration required: uiSpriteSelectAnim. */
/* Supplied declaration required: uiSpriteSetKeyframe. */
/* Supplied declaration required: uiSpriteSetImageKeyframe. */
/* Supplied declaration required: FUN_00202400. */
/* Supplied declaration required: FUN_00203b40. */
/* Supplied declaration required: FUN_00212724. */
extern int FUN_002a4894(int);
/* Supplied declaration required: FUN_00387240. */
/* Supplied declaration required: FUN_003d1aa0. */
/* Supplied declaration required: FUN_003dc0c0. */
extern int FUN_003e4230(unsigned int);
extern int gameDataFlagTestBit(unsigned int);


unsigned int FUN_003dc0c0(int param_1,unsigned int param_2)

{
/* irregular: 10 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  switch(param_2) {
  case 0:
    uiSpriteSetKeyframe(param_1 + 0x2d8,3,0);
    uiSpriteSetImageKeyframe(param_1 + 0x2d8,6,0);
    FUN_00202400();
    FUN_003d1aa0(param_1);
    break;
  case 1:
    temp_v1 = 1;
    *(unsigned int *)(param_1 + 0x2a8) = 0;
    do {
      temp_v2 = gameDataFlagTestBit(temp_v1);
      if (temp_v2 != 0) {
        *(unsigned int *)(param_1 + *(int *)(param_1 + 0x2a8) * 4 + 0x74) = temp_v1;
        *(int *)(param_1 + 0x2a8) = *(int *)(param_1 + 0x2a8) + 1;
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < 0x8d);
    FUN_00203b40(param_1 + 0x10,*(unsigned int *)(param_1 + 0x2a8),10,1,1,1);
    break;
  case 2:
    *(unsigned int *)(param_1 + 0x2a8) = 0;
    if (*(char *)(param_1 + 0x2b4) != '\0') {
      temp_v0 = 0x2e;
      temp_v2 = gameDataFlagTestBit(0x2e);
      if (temp_v2 == 0) {
        temp_v2 = FUN_003e4230(0x2e);
        if (temp_v2 == 0) {
          *(unsigned int *)(param_1 + *(int *)(param_1 + 0x2a8) * 4 + 0x74) = temp_v0;
          *(int *)(param_1 + 0x2a8) = *(int *)(param_1 + 0x2a8) + 1;
        }
      }
    }
    else if (*(char *)(param_1 + 0x2b5) == '\0') {
      temp_v1 = 1;
      do {
        temp_v2 = gameDataFlagTestBit(temp_v1);
        if ((temp_v2 == 0) && (temp_v2 = FUN_003e4230(temp_v1), temp_v2 == 0)) {
          *(unsigned int *)(param_1 + *(int *)(param_1 + 0x2a8) * 4 + 0x74) = temp_v1;
          *(int *)(param_1 + 0x2a8) = *(int *)(param_1 + 0x2a8) + 1;
        }
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < 0x8d);
    }
    else {
      temp_v0 = 0x18;
      temp_v2 = gameDataFlagTestBit(0x18);
      if (temp_v2 == 0) {
        temp_v2 = FUN_003e4230(0x18);
        if (temp_v2 == 0) {
          *(unsigned int *)(param_1 + *(int *)(param_1 + 0x2a8) * 4 + 0x74) = temp_v0;
          *(int *)(param_1 + 0x2a8) = *(int *)(param_1 + 0x2a8) + 1;
        }
      }
    }
    FUN_00203b40(param_1 + 0x10,*(unsigned int *)(param_1 + 0x2a8),10,1,1,1);
    if (*(int *)(param_1 + 0x2a8) == 0) {
      FUN_003dc0c0(param_1,*(unsigned int *)(param_1 + 8));
      return 0;
    }
    break;
  case 5:
    uiSpriteSelectAnim(param_1 + 0x47c,1);
    temp_v2 = FUN_002a4894(param_1 + 0x10);
    FUN_00387240(param_1 + 0x47c,0x14,temp_v2 + 0x40e);
    *(unsigned short *)(param_1 + 0x494) = 0xa0;
    break;
  case 7:
    uiSpriteSetKeyframe(param_1 + 0x2d8,4,0);
    uiSpriteSetImageKeyframe(param_1 + 0x2d8,7,0);
    FUN_00212724();
    temp_v2 = 0;
    if (*(short *)(param_1 + 0x524) != 0) {
      do {
        ifTouchRegionRemove();
        temp_v2 = temp_v2 + 1;
      } while (temp_v2 < (int)(unsigned int)*(unsigned short *)(param_1 + 0x524));
    }
    *(unsigned short *)(param_1 + 0x524) = 0;
  }
  *(unsigned int *)(param_1 + 8) = param_2;
  return 1;
}

} /* extern "C" */
