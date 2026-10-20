/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004bd794` (_code @ 0x4bd794, 0x2d0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0014e188(...);
int FUN_001505ac(...);
int sysPlaySe(...);
int FUN_00183f58(int, int, int);
int FUN_001b4a90(int, int, unsigned int);
int FUN_00203b40(...);
int FUN_00215bd0(void);
int FUN_002804b0(...);
int FUN_002c8538(int);
int FUN_004be990(...);
int FUN_0050d778(int, int);
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

extern unsigned char DAT_0052d780; /* 0x52d780 */
extern unsigned char DAT_0052d7e0; /* 0x52d7e0 */
extern unsigned char DAT_0057f25c; /* 0x57f25c */

/* Supplied declaration required: FUN_0014e188. */
/* Supplied declaration required: FUN_001505ac. */
extern int FUN_0015688c(void);
/* Supplied declaration required: sysPlaySe. */
/* Supplied declaration required: FUN_00183f58. */
extern int FUN_00187068(int);
/* Supplied declaration required: FUN_001b4a90. */
/* Supplied declaration required: FUN_00203b40. */
/* Supplied declaration required: FUN_00215bd0. */
/* Supplied declaration required: FUN_002804b0. */
extern unsigned char FUN_002857b8(void);
/* Supplied declaration required: FUN_002c8538. */
extern int FUN_003e4d68(unsigned int);
/* Supplied declaration required: FUN_004be990. */
/* Supplied declaration required: FUN_0050d778. */
/* Supplied declaration required: Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object. */


void FUN_004bd794(int param_1,unsigned char param_2)

{
/* irregular: 1 goto(s); 12 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  short temp_v6;
  
  *(unsigned int *)(param_1 + 0x334) = 0;
  *(unsigned char *)(param_1 + 4) = param_2;
  FUN_0050d778(param_1 + 0x338,1);
  temp_v5 = 0;
  temp_v6 = 0;
  temp_v0 = FUN_0015688c();
  if (temp_v0 != 0) {
    temp_v6 = *(short *)(temp_v0 + 300);
  }
  *(unsigned int *)(param_1 + 0x328) = 0xffffffff;
  FUN_001b4a90(param_1 + 0x2c4,0x30,0xffffffff);
  temp_v0 = 0;
  do {
    temp_v1 = FUN_00187068(temp_v0);
    if ((*(unsigned int *)(temp_v1 + 0x130) & 1) != 0) {
      if ((*(short *)(temp_v1 + 300) == temp_v6) && (temp_v6 != 0)) {
        *(int *)(param_1 + 0x328) = temp_v5;
      }
      temp_v4 = 0;
      do {
        temp_v2 = FUN_003e4d68(temp_v4 & 0xffff);
        if (*(short *)(temp_v2 + 300) == *(short *)(temp_v1 + 300)) goto LAB_004bd854;
        temp_v4 = temp_v4 + 1;
      } while ((int)temp_v4 < 0xc);
      temp_v4 = 0;
LAB_004bd854:
      temp_v1 = temp_v5 * 4;
      temp_v5 = temp_v5 + 1;
      *(unsigned int *)(param_1 + temp_v1 + 0x2c4) = temp_v4;
    }
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 0xc);
  *(int *)(param_1 + 0x324) = temp_v5;
  FUN_002804b0("camp/partnerHelpMsg.mbm",param_1 + 0x314,0);
  FUN_002804b0("camp/partnerMsg.mbm",param_1 + 0x318,0);
  FUN_002804b0("camp/partnerScr.bf",param_1 + 0x31c,0);
  if (*(char *)(param_1 + 4) != '\x01') {
    temp_v0 = (int)(temp_v5 + ((unsigned int)(temp_v5 >> 0x1f) >> 0x1e)) >> 2;
    if (0 < temp_v5 % 4) {
      temp_v0 = temp_v0 + 1;
    }
    FUN_00203b40(param_1 + 0x260,temp_v5,temp_v0,4,1,1);
    FUN_002c8538(1);
    FUN_00215bd0();
    if (*(char *)(param_1 + 4) != '\x02') {
      if (*(int *)(param_1 + 0x324) >= 1) {
        if (*(int *)(param_1 + *(int *)(param_1 + 0x32c) * 4 + 0x2c4) !=
            *(int *)(param_1 + *(int *)(param_1 + 0x328) * 4 + 0x2c4)) {
          temp_v3 = 0xf0;
          sysPlaySe(temp_v3);
        }
        else {
          sysPlaySe(0x11b);
        }
      }
      else {
        temp_v3 = 0x118;
        sysPlaySe(temp_v3);
      }
    }
    else if (*(int *)(param_1 + 0x324) >= 1) {
      sysPlaySe(0xf0);
      FUN_00183f58(5,1,1);
    }
    else {
      temp_v3 = 0x118;
      sysPlaySe(temp_v3);
    }
    Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object(param_1 + 0x10);
    FUN_001505ac(param_1 + 0x10,&DAT_0052d780,0x60,&DAT_0052d7e0,0x18,0,0,0,0,0,0);
    temp_v0 = 0;
    do {
      FUN_0014e188(param_1 + temp_v0 * 0x8c + 0x30,0x11,0,param_1 + 0x10,0x6a);
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 4);
    FUN_004be990(param_1,0,0xffffffff);
    *(unsigned int *)(param_1 + 0x344) = 0;
  }
  else {
    FUN_00203b40(param_1 + 0x260,temp_v5,temp_v5,1,1,1);
    sysPlaySe(0x11f);
  }
  *(unsigned int *)(param_1 + 8) = 1;
  DAT_0057f25c = FUN_002857b8();
  return;
}

} /* extern "C" */
