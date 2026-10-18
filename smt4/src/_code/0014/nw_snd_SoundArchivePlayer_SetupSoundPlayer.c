/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_SoundArchivePlayer_SetupSoundPlayer` (_code @ 0x1404dc, 0x188 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp48; /* 0x48: local_48 */
} param_4_stack;

extern unsigned int FUN_00141ff8(unsigned int);
extern int FUN_00142014(unsigned int, unsigned int, int *);
extern int FUN_0014c0c4(void);
/* Supplied declaration required: FUN_002bf584. */
/* Supplied declaration required: nw_snd_SoundPlayer_SetPlayableSoundCount. */
extern int nw_snd_SoundPlayer_SoundPlayer_sub_object(void);
extern int nw_snd_internal_PlayerHeap_Create(int, unsigned int, int);


unsigned int
nw_snd_SoundArchivePlayer_SetupSoundPlayer(int param_1,unsigned int param_2,unsigned int *param_3,int param_4)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  int unaff_r7;
  unsigned int temp_v7;
  int temp_v8;
  int temp_v9;
  int iStack_34;
  unsigned int temp_v10;
  unsigned int *puStack_2c;
  int iStack_28;
  
  iStack_34 = param_1;
  temp_v10 = param_2;
  puStack_2c = param_3;
  iStack_28 = param_4;
  temp_v0 = FUN_00141ff8(param_2);
  temp_v7 = *param_3;
  temp_v1 = (temp_v7 + temp_v0 * 0x48 + 3) & 0xfffffffc;
  if (0 < (int)(temp_v1 - param_4)) {
    return 0;
  }
  *param_3 = temp_v1;
  *(unsigned int *)(param_1 + 0x20) = temp_v0;
  temp_v1 = 0;
  *(unsigned int *)(param_1 + 0x24) = temp_v7;
  if (temp_v0 != 0) {
    do {
      if (temp_v7 == 0) {
        temp_v2 = 0;
      }
      else {
        temp_v2 = nw_snd_SoundPlayer_SoundPlayer_sub_object();
      }
      temp_v8 = 0;
      temp_v9 = 0;
      temp_v3 = FUN_00142014(temp_v10,temp_v1 | 0x4000000,&temp_v8);
      if ((temp_v3 != 0) && (nw_snd_SoundPlayer_SetPlayableSoundCount(temp_v2,temp_v8), temp_v9 != 0))
      {
        temp_v3 = 0;
        if (temp_v3 < temp_v8) {
          do {
            temp_v5 = temp_v9;
            temp_v4 = *param_3;
            temp_v6 = (temp_v4 + 0x23) & 0xfffffffc;
            if (0 < (int)(temp_v6 - param_4)) {
              return 0;
            }
            if (temp_v4 == 0) {
              unaff_r7 = 0;
            }
            *param_3 = temp_v6;
            if (temp_v4 != 0) {
              unaff_r7 = FUN_0014c0c4();
            }
            temp_v6 = (*param_3 + 0x1f) & 0xffffffe0;
            temp_v4 = (temp_v6 + temp_v5 + 3) & 0xfffffffc;
            *param_3 = temp_v6;
            if (0 < (int)(temp_v4 - param_4)) {
              return 0;
            }
            *param_3 = temp_v4;
            temp_v5 = nw_snd_internal_PlayerHeap_Create(unaff_r7,temp_v6,temp_v5);
            if (temp_v5 == 0) {
              return 0;
            }
            if (unaff_r7 == 0) {
              return 0;
            }
            FUN_002bf584(temp_v2);
            temp_v3 = temp_v3 + 1;
          } while (temp_v3 < temp_v8);
        }
        *(int *)(temp_v2 + 0x28) = temp_v8;
      }
      temp_v1 = temp_v1 + 1;
      temp_v7 = temp_v7 + 0x48;
    } while (temp_v1 < temp_v0);
  }
  return 1;
}
