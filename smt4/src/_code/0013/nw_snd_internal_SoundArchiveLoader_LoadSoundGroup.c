/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_internal_SoundArchiveLoader_LoadSoundGroup` (_code @ 0x130648, 0x1b0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_5: 11 slot(s), 38 byte(s) */
typedef struct {
    unsigned char sp2B; /* 0x2b: local_2b */
    unsigned char sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp58; /* 0x58: local_58 */
} param_5_stack;

/* Supplied declaration required: FUN_00140bfc. */
/* Supplied declaration required: FUN_00141fd0. */
extern int FUN_0014d4ec(unsigned int, unsigned int, unsigned int *);
extern int FUN_0014d530(unsigned int, unsigned int, unsigned int *);
extern unsigned int FUN_002ac780(unsigned int, unsigned int);
/* Supplied declaration required: nw_snd_internal_SoundArchiveLoader_LoadImpl. */
/* Supplied declaration required: nw_snd_internal_SoundArchiveLoader_LoadWaveSound. */


unsigned int
nw_snd_internal_SoundArchiveLoader_LoadSoundGroup
          (int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,unsigned int param_5)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int uStack_48;
  int temp_v6;
  int temp_v7 [5];
  unsigned char temp_v8;
  unsigned char temp_v9;
  
  temp_v4 = 0xffffffff;
  temp_v5 = 0xffffffff;
  uStack_48 = 0;
  temp_v0 = FUN_0014d4ec(*(unsigned int *)(param_1 + 4),param_2,&temp_v4);
  if (temp_v0 == 0) {
    return 0;
  }
  if (temp_v4 != 0xffffffff) {
    temp_v0 = *(int *)(param_1 + 4);
    FUN_00141fd0(temp_v0,temp_v4);
    if (temp_v0 != 1) {
      if ((temp_v0 == 3) && (temp_v3 = temp_v4, temp_v4 <= temp_v5)) {
        do {
          temp_v0 = param_1;
          nw_snd_internal_SoundArchiveLoader_LoadWaveSound
                    (param_1,temp_v3,param_3,param_4,param_5,param_2);
          if (temp_v0 == 0) {
            return 0;
          }
          temp_v3 = temp_v3 + 1;
        } while (temp_v3 <= temp_v5);
      }
    }
    else {
      temp_v3 = temp_v4;
      if (temp_v4 <= temp_v5) {
        do {
          if ((param_4 & 1) != 0) {
            temp_v1 = FUN_002ac780(*(unsigned int *)(param_1 + 4),temp_v3);
            temp_v0 = param_1;
            nw_snd_internal_SoundArchiveLoader_LoadImpl(param_1,temp_v1,param_3,param_5,0);
            if (temp_v0 == 0) {
              return 0;
            }
          }
          if ((param_4 & 0xc) != 0) {
            temp_v8 = 0;
            temp_v6 = 0;
            temp_v9 = 0;
            temp_v7[4] = 0;
            temp_v7[0] = -1;
            temp_v7[1] = 0xffffffff;
            temp_v7[2] = 0xffffffff;
            temp_v7[3] = 0xffffffff;
            temp_v0 = FUN_0014d530(*(unsigned int *)(param_1 + 4),temp_v3,(unsigned int *)&temp_v6);
            if (temp_v0 == 0) {
              return 0;
            }
            temp_v2 = 0;
            do {
              if ((temp_v7[temp_v2] != -1) &&
                 (temp_v0 = param_1, FUN_00140bfc(param_1,temp_v7[temp_v2],param_3,param_4,param_5),
                 temp_v0 == 0)) {
                return 0;
              }
              temp_v2 = temp_v2 + 1;
            } while (temp_v2 < 4);
          }
          temp_v3 = temp_v3 + 1;
        } while (temp_v3 <= temp_v5);
      }
    }
  }
  return 1;
}
