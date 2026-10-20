/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00174ebc` (_code @ 0x174ebc, 0x518 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001753d4(int *, unsigned int, unsigned int, unsigned int, unsigned int);
int FUN_001907a4(...);
int FUN_00190808(unsigned int *[3]);
int FUN_00190aec(...);
int FUN_00190fc8(unsigned char [20], int);
int FUN_001946d4(...);
int FUN_0019472c(...);
int FUN_00194834(...);
int FUN_00194fb0(...);

typedef int romwright_code(...);
/* stack frame of param_4: 25 slot(s), 88 byte(s) */
typedef struct {
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned char sp6F; /* 0x6f: local_6f */
    unsigned char sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned char sp8B; /* 0x8b: local_8b */
    unsigned char sp8C; /* 0x8c: local_8c */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spA8; /* 0xa8: local_a8 */
    unsigned int spB0; /* 0xb0: local_b0 */
} param_4_stack;

/* Supplied declaration required: FUN_001753d4. */
extern int FUN_00178400(int, unsigned int, unsigned int *);
/* Supplied declaration required: FUN_001907a4. */
/* Supplied declaration required: FUN_00190808. */
/* Supplied declaration required: FUN_00190aec. */
/* Supplied declaration required: FUN_00190fc8. */
/* Supplied declaration required: FUN_001946d4. */
/* Supplied declaration required: FUN_0019472c. */
extern int FUN_00194784(int, unsigned int, unsigned int *);
extern int FUN_001947dc(int, unsigned int, unsigned int *);
/* Supplied declaration required: FUN_00194834. */
extern unsigned int FUN_00194850(unsigned int **);
/* Supplied declaration required: FUN_00194fb0. */
extern int nw_snd_internal_GroupFileReader_ReadGroupItemInfoEx(unsigned int **, unsigned int *, unsigned int);
extern int nw_snd_internal_GroupFileReader_ReadGroupItemLocationInfo(unsigned int **, unsigned int *, unsigned int);
extern int nw_snd_internal_WaveSoundFileReader_ReadNoteInfo(unsigned char *, unsigned int *, unsigned int, unsigned int);


void FUN_00174ebc(int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 9 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int unaff_r8;
  int *unaff_r9;
  unsigned long long temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  unsigned char temp_v11;
  unsigned char temp_v12;
  unsigned int temp_v13;
  unsigned int temp_v14 [5];
  unsigned char temp_v15;
  unsigned char temp_v16;
  unsigned int temp_v17;
  unsigned int temp_v18;
  unsigned int *temp_v19 [3];
  unsigned int temp_v20;
  unsigned int temp_v21;
  int temp_v22;
  unsigned int temp_v23;
  unsigned char temp_v24 [16];
  unsigned char temp_v25 [20];
  
  FUN_00190808(temp_v19);
  temp_v1 = 0;
  temp_v2 = *temp_v19[0];
  if (temp_v2 != 0) {
    do {
      temp_v0 = nw_snd_internal_GroupFileReader_ReadGroupItemLocationInfo(temp_v19,(unsigned int *)&temp_v4,temp_v1);
      if (temp_v0 == 0) {
        return;
      }
      if (temp_v5 != 0) {
        (**(romwright_code **)(*param_1 + 8))(param_1,temp_v4,temp_v5);
      }
      else if (temp_v1 == 0) {
        temp_v1 = FUN_00194850(temp_v19);
        temp_v2 = 0;
        if (temp_v1 == 0) {
          return;
        }
        while ((temp_v0 = nw_snd_internal_GroupFileReader_ReadGroupItemInfoEx
                                  (temp_v19,&temp_v6,temp_v2), temp_v0 == 0 ||
               (piVar2 = param_1, FUN_001753d4(param_1,temp_v6,param_3,temp_v7,param_4),
               piVar2 != (int *)0x0))) {
          temp_v2 = temp_v2 + 1;
          if (temp_v1 <= temp_v2) {
            return;
          }
        }
        return;
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < temp_v2);
  }
  temp_v18 = FUN_00194850(temp_v19);
  if (temp_v18 != 0) {
    unaff_r9 = &temp_v5;
    unaff_r8 = 0xffffffff;
  }
  temp_v17 = 0;
  if (temp_v18 == 0) {
    return;
  }
  do {
    temp_v0 = nw_snd_internal_GroupFileReader_ReadGroupItemInfoEx(temp_v19,&temp_v20,temp_v17);
    if ((temp_v0 != 0) && ((temp_v21 & 8) != 0)) {
      temp_v1 = temp_v20 >> 0x18;
      if (temp_v1 != 1) {
        if (temp_v1 != 2) {
          if (((temp_v1 == 3) && (temp_v20 != 0xffffffff)) &&
             ((temp_v8 = unaff_r8, temp_v0 = FUN_001946d4(param_1[1],temp_v20,&temp_v8), temp_v0 != 0
              && (temp_v0 = (**(romwright_code **)(*param_1 + 0x10))(param_1,temp_v8), temp_v0 != 0)))) {
            FUN_001907a4(&temp_v5);
            temp_v3 = FUN_00194834(&temp_v5);
            temp_v0 = (int)((unsigned long long)temp_v3 >> 0x20);
            piVar2 = (int *)temp_v3;
            if (piVar2 != (int *)0x0) {
              temp_v0 = *piVar2;
            }
            if ((piVar2 != (int *)0x0 && temp_v0 != 0) && (piVar2 + 1 != (int *)0x0)) {
              FUN_00190aec(param_1,piVar2[1],param_3);
            }
          }
        }
        else {
          temp_v14[1] = 0;
          temp_v13 = unaff_r8;
          temp_v14[0] = unaff_r8;
          temp_v0 = FUN_001947dc(param_1[1],temp_v20,&temp_v13);
          temp_v1 = 0;
          if (temp_v0 != 0) {
            temp_v1 = temp_v13;
          }
          if (temp_v0 != 0 && temp_v1 != 0xffffffff) {
            temp_v0 = param_1[1];
            FUN_00194fb0(temp_v0,temp_v1);
            temp_v1 = temp_v13;
            if (temp_v0 != 1) {
              if (((temp_v0 == 3) && (temp_v13 != 0xffffffff)) &&
                 (temp_v0 = FUN_00178400(param_1[1],temp_v13,(unsigned int *)&temp_v22), temp_v0 != 0)) {
                temp_v14[3] = 0;
                temp_v14[4] = temp_v14[4] & 0xffff0000;
                temp_v0 = FUN_00194784(param_1[1],temp_v1,temp_v14 + 2);
                if ((temp_v0 != 0) &&
                   (temp_v0 = (**(romwright_code **)(*param_1 + 0x10))(param_1,temp_v22), temp_v0 != 0)) {
                  FUN_00190fc8(temp_v25,temp_v0);
                  temp_v6 = 0;
                  temp_v7 = temp_v7 & 0xffffff00;
                  temp_v0 = nw_snd_internal_WaveSoundFileReader_ReadNoteInfo
                                    (temp_v25,(unsigned int *)&temp_v4,temp_v14[2],0);
                  if (temp_v0 != 0) {
                    FUN_00190aec(param_1,temp_v4,param_3);
                  }
                }
              }
            }
            else if (temp_v13 <= temp_v14[0]) {
              do {
                temp_v11 = 0;
                temp_v5 = 0;
                temp_v12 = 0;
                temp_v10 = 0;
                temp_v6 = unaff_r8;
                temp_v7 = unaff_r8;
                temp_v8 = unaff_r8;
                temp_v9 = unaff_r8;
                temp_v0 = FUN_0019472c(param_1[1],temp_v1,&temp_v5);
                if (temp_v0 != 0) {
                  temp_v2 = 0;
                  do {
                    if (((unaff_r9[temp_v2 + 1] != -1) &&
                        (temp_v23 = unaff_r8,
                        temp_v0 = FUN_001946d4(param_1[1],unaff_r9[temp_v2 + 1],&temp_v23), temp_v0 != 0))
                       && (temp_v0 = (**(romwright_code **)(*param_1 + 0x10))(param_1,temp_v23), temp_v0 != 0)) {
                      FUN_001907a4(temp_v24);
                      temp_v3 = FUN_00194834(temp_v24);
                      temp_v0 = (int)((unsigned long long)temp_v3 >> 0x20);
                      piVar2 = (int *)temp_v3;
                      if (piVar2 != (int *)0x0) {
                        temp_v0 = *piVar2;
                      }
                      if ((piVar2 != (int *)0x0 && temp_v0 != 0) && (piVar2 + 1 != (int *)0x0)) {
                        FUN_00190aec(param_1,piVar2[1],param_3);
                      }
                    }
                    temp_v2 = temp_v2 + 1;
                  } while (temp_v2 < 4);
                }
                temp_v1 = temp_v1 + 1;
              } while (temp_v1 <= temp_v14[0]);
            }
          }
        }
      }
      else {
        temp_v0 = param_1[1];
        FUN_00194fb0(temp_v0,temp_v20);
        if (temp_v0 == 1) {
          temp_v15 = 0;
          temp_v13 = 0;
          temp_v16 = 0;
          temp_v14[4] = 0;
          temp_v14[0] = unaff_r8;
          temp_v14[1] = unaff_r8;
          temp_v14[2] = unaff_r8;
          temp_v14[3] = unaff_r8;
          temp_v0 = FUN_0019472c(param_1[1],temp_v20,&temp_v13);
          if (temp_v0 != 0) {
            temp_v1 = 0;
            do {
              if (((temp_v14[temp_v1] != 0xffffffff) &&
                  (temp_v10 = unaff_r8, temp_v0 = FUN_001946d4(param_1[1],temp_v14[temp_v1],&temp_v10),
                  temp_v0 != 0)) &&
                 (temp_v0 = (**(romwright_code **)(*param_1 + 0x10))(param_1,temp_v10), temp_v0 != 0)) {
                FUN_001907a4(&temp_v22,temp_v0);
                temp_v3 = FUN_00194834(&temp_v22);
                temp_v0 = (int)((unsigned long long)temp_v3 >> 0x20);
                piVar2 = (int *)temp_v3;
                if (piVar2 != (int *)0x0) {
                  temp_v0 = *piVar2;
                }
                if ((piVar2 != (int *)0x0 && temp_v0 != 0) && (piVar2 + 1 != (int *)0x0)) {
                  FUN_00190aec(param_1,piVar2[1],param_3);
                }
              }
              temp_v1 = temp_v1 + 1;
            } while (temp_v1 < 4);
          }
        }
      }
    }
    temp_v17 = temp_v17 + 1;
  } while (temp_v17 < temp_v18);
  return;
}

} /* extern "C" */
