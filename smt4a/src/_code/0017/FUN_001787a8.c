/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001787a8` (_code @ 0x1787a8, 0x2ac bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_3: 12 slot(s), 27 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned char sp34; /* 0x34: local_34 */
    unsigned char sp35; /* 0x35: local_35 */
    unsigned char sp36; /* 0x36: local_36 */
    unsigned char sp37; /* 0x37: local_37 */
    unsigned char sp38; /* 0x38: local_38 */
    unsigned char sp3B; /* 0x3b: local_3b */
    unsigned char sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
} param_3_stack;

extern int FUN_0015fe30(void);
extern int *FUN_001785f0(int *, unsigned int, unsigned int);
/* Supplied declaration required: FUN_00190fc8. */
extern int FUN_00194784(int, unsigned int, unsigned int *);
extern int FUN_001947dc(int, unsigned int, unsigned int *);
/* Supplied declaration required: FUN_00194c68. */
/* Supplied declaration required: FUN_00194d6c. */
/* Supplied declaration required: FUN_00194fb0. */
extern unsigned int FUN_001a8e14(int, unsigned int);
/* Supplied declaration required: nw_snd_internal_SoundArchiveLoader_IsWaveSoundDataLoaded. */
extern int nw_snd_internal_WaveSoundFileReader_ReadNoteInfo(unsigned char *, unsigned int *, unsigned int, unsigned int);


int * FUN_001787a8(int *param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int uStack_48;
  int temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  unsigned char temp_v9;
  unsigned char temp_v10;
  unsigned char temp_v11;
  unsigned char temp_v12;
  unsigned char temp_v13;
  unsigned char temp_v14 [20];
  
  if ((param_1[1] != 0) && (temp_v0 = FUN_0015fe30(), temp_v0 != 0 && param_2 != 0xffffffff)) {
    switch(param_2 >> 0x18) {
    case 1:
      temp_v0 = param_1[1];
      FUN_00194fb0(temp_v0,param_2);
      if (temp_v0 == 1) {
        FUN_00194d6c(param_1,param_2,param_3);
        return param_1;
      }
      if (temp_v0 == 3) {
        nw_snd_internal_SoundArchiveLoader_IsWaveSoundDataLoaded(param_1,param_2,param_3);
        return param_1;
      }
      break;
    case 2:
      temp_v4 = 0xffffffff;
      temp_v5 = 0xffffffff;
      uStack_48 = 0;
      temp_v0 = FUN_001947dc(param_1[1],param_2,&temp_v4);
      piVar2 = (int *)0x0;
      if (temp_v0 != 0) {
        temp_v0 = param_1[1];
        FUN_00194fb0(temp_v0,temp_v4);
        if (temp_v0 != 1) {
          if ((temp_v0 == 3) && (temp_v3 = temp_v4, temp_v4 <= temp_v5)) {
            do {
              temp_v1 = FUN_001a8e14(param_1[1],temp_v3);
              temp_v0 = (**(romwright_code **)(*param_1 + 0x10))(param_1,temp_v1);
              if (((param_3 & 10) != 0) && (temp_v0 == 0)) {
                return (int *)0x0;
              }
              if ((param_3 & 8) != 0) {
                temp_v7 = 0;
                temp_v8 = temp_v8 & 0xffff0000;
                temp_v2 = FUN_00194784(param_1[1],temp_v3,(unsigned int *)&temp_v6);
                temp_v1 = temp_v6;
                if (temp_v2 == 0) {
                  return (int *)0x0;
                }
                FUN_00190fc8(temp_v14,temp_v0);
                temp_v9 = 0;
                temp_v10 = 0;
                temp_v11 = 0;
                temp_v12 = 0;
                temp_v13 = 0;
                temp_v0 = nw_snd_internal_WaveSoundFileReader_ReadNoteInfo
                                  (temp_v14,(unsigned int *)&temp_v7,temp_v1,0);
                if (temp_v0 == 0) {
                  return (int *)0x0;
                }
                piVar2 = param_1;
                FUN_00194c68(param_1,temp_v7,temp_v8);
                if (piVar2 == (int *)0x0) {
                  return (int *)0x0;
                }
              }
              temp_v3 = temp_v3 + 1;
            } while (temp_v3 <= temp_v5);
          }
        }
        else {
          temp_v3 = temp_v4;
          if (temp_v4 <= temp_v5) {
            do {
              piVar2 = param_1;
              FUN_00194d6c(param_1,temp_v3,param_3);
              if (piVar2 == (int *)0x0) {
                return (int *)0x0;
              }
              temp_v3 = temp_v3 + 1;
            } while (temp_v3 <= temp_v5);
          }
        }
        piVar2 = (int *)0x1;
      }
      return piVar2;
    case 3:
      piVar2 = (int *)FUN_001785f0(param_1,param_2,param_3);
      return piVar2;
    case 5:
      FUN_00194c68(param_1,param_2,0xffffffff);
      return param_1;
    case 6:
      temp_v1 = FUN_001a8e14(param_1[1],param_2);
      temp_v0 = (**(romwright_code **)(*param_1 + 0x10))(param_1,temp_v1);
      return (int *)(unsigned int)(temp_v0 != 0);
    }
  }
  return (int *)0x0;
}
