/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003d05a4` (_code @ 0x3d05a4, 0x314 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0014e188(...);
int FUN_001505ac(int, unsigned char *, int, unsigned char *, int, int, int, int, int, unsigned char *, int);
int uiSpriteSelectAnim(...);
int uiSpriteSetKeyframe(...);
int uiSpriteSetImageKeyframe(...);
int gameFlagIsSet(int);
int FUN_00203b40(int, int, int, int, int, int);
int FUN_002a4964(int, unsigned int);
int Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object(int);

/* stack frame of param_2: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} param_2_stack;

extern unsigned char DAT_0052c83c; /* 0x52c83c */
extern unsigned char DAT_0052c854; /* 0x52c854 */
extern unsigned char DAT_0052c884; /* 0x52c884 */

/* Supplied declaration required: FUN_0014e188. */
/* Supplied declaration required: FUN_001505ac. */
/* Supplied declaration required: uiSpriteSelectAnim. */
/* Supplied declaration required: uiSpriteSetKeyframe. */
/* Supplied declaration required: uiSpriteSetImageKeyframe. */
/* Supplied declaration required: gameFlagIsSet. */
/* Supplied declaration required: FUN_00203b40. */
/* Supplied declaration required: FUN_002a4964. */
/* Supplied declaration required: Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object. */


void FUN_003d05a4(int param_1,unsigned short param_2)

{
/* irregular: 1 goto(s); 9 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  
  temp_v5 = 3;
  temp_v0 = gameFlagIsSet(0x558);
  if (temp_v0 != 0) {
    temp_v5 = 4;
  }
  temp_v0 = gameFlagIsSet(0x559);
  if (temp_v0 != 0) {
    temp_v5 = temp_v5 + 1;
  }
  if (temp_v5 != 3) {
    if (temp_v5 == 4) {
      temp_v1 = 0x7b;
      temp_v3 = 0x7f;
    }
    else {
      temp_v1 = 0x83;
      temp_v3 = 0x88;
    }
    *(unsigned int *)(param_1 + 0x8c) = temp_v1;
    *(unsigned int *)(param_1 + 0x90) = temp_v3;
  }
  else {
    *(unsigned int *)(param_1 + 0x8c) = 0x75;
    *(unsigned int *)(param_1 + 0x90) = 0x78;
  }
  temp_v4 = 0;
  temp_v0 = 0;
  do {
    temp_v2 = param_1 + temp_v0 * 8;
    *(unsigned int *)(temp_v2 + 0x94) = 0xffffffff;
    *(unsigned int *)(temp_v2 + 0x98) = 0xffffffff;
    if (temp_v0 != 0) {
      if ((temp_v0 == 4) && (temp_v2 = gameFlagIsSet(0x559), temp_v2 == 0)) goto LAB_003d06d4;
    }
    else {
      temp_v2 = gameFlagIsSet(0x558);
      if (temp_v2 == 0) {
        temp_v0 = 1;
        continue;
      }
    }
    switch(temp_v0) {
    case 0:
      temp_v1 = 3;
      break;
    case 1:
      temp_v1 = 1;
      break;
    case 2:
      temp_v1 = 0;
      break;
    case 3:
      temp_v1 = 2;
      break;
    case 4:
      temp_v1 = 4;
      break;
    default:
      temp_v1 = 0xffffffff;
    }
    temp_v2 = param_1 + temp_v4 * 8;
    temp_v4 = temp_v4 + 1;
    *(unsigned int *)(temp_v2 + 0x94) = temp_v1;
    *(int *)(temp_v2 + 0x98) = temp_v0;
    temp_v0 = temp_v0 + 1;
    if (temp_v0 >= 5) {
LAB_003d06d4:
      *(unsigned int *)(param_1 + 0xbc) = 0xffffffff;
      switch(param_2) {
      case 0:
        temp_v0 = 2;
        break;
      case 1:
        temp_v0 = 1;
        break;
      case 2:
        temp_v0 = 3;
        break;
      case 3:
        temp_v0 = 0;
        break;
      case 4:
        temp_v0 = 4;
        break;
      default:
        temp_v0 = -1;
      }
      temp_v4 = gameFlagIsSet(0x558);
      if (((temp_v4 == 0) || (temp_v4 = gameFlagIsSet(0x559), temp_v4 == 0)) &&
         (temp_v4 = gameFlagIsSet(0x558), temp_v4 == 0)) {
        gameFlagIsSet(0x559);
        temp_v0 = temp_v0 - 1;
      }
      *(int *)(param_1 + 0x88) = temp_v0;
      FUN_00203b40(param_1,temp_v5,temp_v5,1,0,1);
      FUN_002a4964(param_1,*(unsigned int *)(param_1 + 0x88));
      Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object(param_1 + 200);
      FUN_001505ac(param_1 + 200,&DAT_0052c83c,0x18,&DAT_0052c854,0x30,0,0,0,0,&DAT_0052c884,0x70);
      FUN_0014e188(param_1 + 0xe8,0x24,0x57,param_1 + 200,1);
      uiSpriteSetKeyframe(param_1 + 0xe8,0);
      uiSpriteSetImageKeyframe(param_1 + 0xe8,0);
      temp_v0 = 0;
      do {
        temp_v5 = param_1 + temp_v0 * 0x8c;
        FUN_0014e188(temp_v5 + 0x174,0x24,0x57,param_1 + 200,1);
        uiSpriteSetKeyframe(temp_v5 + 0x174,0);
        uiSpriteSetImageKeyframe(temp_v5 + 0x174,0);
        temp_v0 = temp_v0 + 1;
      } while (temp_v0 < 5);
      FUN_0014e188(param_1 + 0x430,0x24,1,param_1 + 200,1);
      uiSpriteSelectAnim(param_1 + 0x430,0);
      *(unsigned int *)(param_1 + 0x4bc) = 0;
      return;
    }
  } while( 1 );
}

} /* extern "C" */
