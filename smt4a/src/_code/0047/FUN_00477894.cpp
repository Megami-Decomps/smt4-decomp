/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00477894` (_code @ 0x477894, 0x3d0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001b3f7c(unsigned int *, unsigned int *);
int FUN_00474734(unsigned int *, int);
int FUN_00476e58(unsigned int *, int, int);
int FUN_00477d10(...);
int jobFlagsWorkStop(...);
int FUN_0047bc90(unsigned int *, unsigned int *);
int FUN_0047bcdc(unsigned int *, int);
int timeInitializeActiveState(unsigned int *);
int FUN_004cfeb0(unsigned int *, int, int, int, int, int);
int FUN_004d05c4(...);
int releaseEntriesA(unsigned int *);
int FUN_004d091c(...);
int releaseEntriesB(unsigned int *);
int touchRegisterFirstRegion(...);
int touchRegisterSecondRegion(...);

typedef int romwright_code(...);
/* stack frame of param_1: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
} param_1_stack;

extern int g_aocMain; /* 0x570260 */

extern int FUN_001834a4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_001b3f7c. */
extern int byteIsAtLeast100(unsigned int *);
extern int FUN_002e19f8(void);
/* Supplied declaration required: FUN_00474734. */
/* Supplied declaration required: FUN_00476e58. */
/* Supplied declaration required: FUN_00477d10. */
/* Supplied declaration required: jobFlagsWorkStop. */
/* Supplied declaration required: FUN_0047bc90. */
/* Supplied declaration required: FUN_0047bcdc. */
extern int isEmptyString(unsigned int *);
/* Supplied declaration required: timeInitializeActiveState. */
/* Supplied declaration required: FUN_004cfeb0. */
extern unsigned int rangeGetMinimumLimit(unsigned int *);
/* Supplied declaration required: FUN_004d05c4. */
/* Supplied declaration required: releaseEntriesA. */
/* Supplied declaration required: FUN_004d091c. */
/* Supplied declaration required: releaseEntriesB. */
/* Supplied declaration required: touchRegisterFirstRegion. */
/* Supplied declaration required: touchRegisterSecondRegion. */


void FUN_00477894(unsigned int *param_1)

{
/* irregular: 1 goto(s); 15 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int *piVar3;
  unsigned int *puVar4;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int uStack_54;
  unsigned int uStack_50;
  unsigned int uStack_4c;
  unsigned int uStack_48;
  unsigned int temp_v5;
  unsigned int uStack_40;
  unsigned int uStack_3c;
  unsigned int uStack_38;
  unsigned int uStack_34;
  unsigned int temp_v6;
  unsigned int uStack_2c;
  unsigned int uStack_28;
  unsigned int uStack_24;
  unsigned int uStack_20;
  
  timeInitializeActiveState(&temp_v4);
  temp_v1 = g_aocMain;
  temp_v0 = param_1[2];
  if (temp_v0 == 3) {
    if ((int *)param_1[0x82] != (int *)0x0) {
      (**(romwright_code **)(*(int *)param_1[0x82] + 4))();
    }
    puVar4 = param_1 + 0x83;
    FUN_00474734(puVar4,1);
    param_1[2] = 4;
    param_1[0x82] = (unsigned int)puVar4;
    FUN_0047bcdc(param_1,1);
    return;
  }
  if ((int)temp_v0 < 3) {
    if (temp_v0 == 0) {
      FUN_00477d10(param_1,0xffffffff,0);
      param_1[2] = 1;
      return;
    }
    if (temp_v0 != 1) {
      if ((temp_v0 == 2) && ((*param_1 & 0x200) != 0)) {
        (**(romwright_code **)(*(int *)param_1[0x82] + 0xc))(&temp_v5);
        temp_v4 = temp_v5;
        uStack_54 = uStack_40;
        uStack_50 = uStack_3c;
        uStack_4c = uStack_38;
        uStack_48 = uStack_34;
        temp_v1 = isEmptyString(&temp_v4);
        if (temp_v1 != 0) {
          param_1[2] = 3;
        }
        else {
          temp_v1 = byteIsAtLeast100(&temp_v4);
          if (temp_v1 != 0) {
            jobFlagsWorkStop(param_1);
            if ((temp_v4 & 0xff) == 0x66) {
              temp_v6 = temp_v4;
              uStack_2c = uStack_54;
              uStack_28 = uStack_50;
              uStack_24 = uStack_4c;
              uStack_20 = uStack_48;
              FUN_0047bc90(param_1,&temp_v6);
              return;
            }
            if ((temp_v4 & 0xff) != 0x67) goto LAB_00477a3c;
            piVar3 = (int *)param_1[0x82];
            param_1[1] = 3;
            param_1[2] = 0;
            if (piVar3 == (int *)0x0) {
              return;
            }
            (**(romwright_code **)(*piVar3 + 4))();
            param_1[0x82] = 0;
            return;
          }
        }
      }
    }
    else {
      temp_v1 = FUN_002e19f8();
      if (temp_v1 != 0) {
        releaseEntriesB(param_1 + 0xba);
        releaseEntriesA(param_1 + 0xad);
        FUN_0047bcdc(param_1,0);
        puVar4 = param_1 + 0x83;
        FUN_00474734(puVar4,0);
        param_1[2] = 2;
        param_1[0x82] = (unsigned int)puVar4;
        return;
      }
    }
  }
  else if (temp_v0 != 4) {
    if (temp_v0 == 9999) {
      FUN_00476e58(param_1,5,3);
    }
  }
  else {
    (**(romwright_code **)(*(int *)param_1[0x82] + 0xc))(&temp_v5);
    temp_v4 = temp_v5;
    uStack_54 = uStack_40;
    uStack_50 = uStack_3c;
    uStack_4c = uStack_38;
    uStack_48 = uStack_34;
    temp_v2 = isEmptyString(&temp_v4);
    if (temp_v2 != 0) {
      jobFlagsWorkStop(param_1);
      if (*(int *)(temp_v1 + 0x67c) != 0) {
        FUN_004cfeb0(param_1 + 0x90,3,*(int *)(temp_v1 + 0x67c),0,1,1);
        puVar4 = param_1 + 0xba;
        *(unsigned char *)((int)param_1 + 0x24d) = 1;
        FUN_001b3f7c(puVar4,param_1 + 0x90);
        temp_v1 = FUN_001834a4(0x2f,0x4f);
        touchRegisterFirstRegion(puVar4,(int)*(short *)(temp_v1 + 8),(int)*(short *)(temp_v1 + 10),
                     (int)**(short **)(temp_v1 + 0xc),(int)(*(short **)(temp_v1 + 0xc))[1]);
        temp_v1 = FUN_001834a4(0x2f,0x50);
        touchRegisterSecondRegion(puVar4,(int)*(short *)(temp_v1 + 8),(int)*(short *)(temp_v1 + 10),
                     (int)**(short **)(temp_v1 + 0xc),(int)(*(short **)(temp_v1 + 0xc))[1]);
        temp_v1 = FUN_001834a4(0x2f,0x4e);
        FUN_004d091c(puVar4,(int)*(short *)(temp_v1 + 8),(int)*(short *)(temp_v1 + 10),
                     (int)**(short **)(temp_v1 + 0xc),(int)(*(short **)(temp_v1 + 0xc))[1]);
        *(unsigned char *)(param_1 + 0xd3) = 1;
        *(unsigned short *)(param_1 + 0xbb) = (unsigned short)param_1[0xbb] | 0x1000;
        temp_v3 = rangeGetMinimumLimit(param_1 + 0x90);
        FUN_004d05c4(param_1 + 0xad,0x2f,0x88,temp_v3);
        *(unsigned char *)(param_1 + 0xb1) = 1;
        *(unsigned char *)((int)param_1 + 0x2e6) = 0;
        FUN_00477d10(param_1,2,1);
        piVar3 = (int *)param_1[0x82];
        param_1[1] = 6;
        param_1[2] = 0;
        if (piVar3 == (int *)0x0) {
          return;
        }
      }
      else {
        piVar3 = (int *)param_1[0x82];
        param_1[1] = 0xb;
        param_1[2] = 0;
        if (piVar3 == (int *)0x0) {
          return;
        }
      }
      (**(romwright_code **)(*piVar3 + 4))();
      param_1[0x82] = 0;
      return;
    }
    temp_v1 = byteIsAtLeast100(&temp_v4);
    if (temp_v1 != 0) {
      jobFlagsWorkStop(param_1);
LAB_00477a3c:
      param_1[2] = 9999;
      param_1[0x84] = temp_v4;
      param_1[0x85] = uStack_54;
      param_1[0x86] = uStack_50;
      param_1[0x87] = uStack_4c;
      param_1[0x88] = uStack_48;
      return;
    }
  }
  return;
}

} /* extern "C" */
