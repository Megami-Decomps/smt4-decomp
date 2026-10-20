/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001170c8` (_code @ 0x1170c8, 0x232 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0012143c(int *, unsigned int, unsigned char [24]);
int strInit(...);
int FUN_002ec890(...);
int FUN_002ec934(unsigned char [24], int, unsigned int);
int strDestroy(...);
int FUN_002ee524(...);
int FUN_002ee54c(...);
int FUN_002fde5c(...);
int FUN_00302f28(unsigned char [8]);
int FUN_00303018(...);
int FUN_00303028(...);
int FUN_00303038(...);
int FUN_00303088(unsigned char [8]);
int FUN_00303146(unsigned char [12], int *);
int FUN_0030314e(...);
int FUN_00303158(...);
int FUN_003031e4(...);
int SBORROW4(...);

typedef int romwright_code(...);
/* stack frame of param_5: 13 slot(s), 46 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp108; /* 0x108: local_108 */
    unsigned int sp10C; /* 0x10c: local_10c */
    unsigned int sp110; /* 0x110: local_110 */
    unsigned int sp114; /* 0x114: local_114 */
    unsigned int sp11C; /* 0x11c: local_11c */
    unsigned int sp120; /* 0x120: local_120 */
    unsigned char sp134; /* 0x134: local_134 */
    unsigned char sp14C; /* 0x14c: local_14c */
    unsigned int sp158; /* 0x158: local_158 */
    unsigned int sp160; /* 0x160: local_160 */
    unsigned int sp164; /* 0x164: local_164 */
} param_5_stack;

/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Supplied declaration required: FUN_0012143c. */
extern int *FUN_001214c4(int, unsigned char *, unsigned int);
extern int FUN_001242f8(int *);
extern unsigned long long FUN_00124458(unsigned char *, unsigned char *);
extern int FUN_002e760a(unsigned int);
/* Supplied declaration required: strInit. */
/* Supplied declaration required: FUN_002ec890. */
/* Supplied declaration required: FUN_002ec934. */
/* Supplied declaration required: strDestroy. */
/* Supplied declaration required: FUN_002ee524. */
/* Supplied declaration required: FUN_002ee54c. */
/* Supplied declaration required: FUN_002fde5c. */
/* Supplied declaration required: FUN_00302f28. */
/* Supplied declaration required: FUN_00303018. */
/* Supplied declaration required: FUN_00303028. */
/* Supplied declaration required: FUN_00303038. */
/* Supplied declaration required: FUN_00303088. */
/* Supplied declaration required: FUN_00303146. */
/* Supplied declaration required: FUN_0030314e. */
/* Supplied declaration required: FUN_00303158. */
/* Supplied declaration required: FUN_003031e4. */


unsigned int
FUN_001170c8(int param_1,unsigned int param_2,int param_3,unsigned int *param_4,unsigned int *param_5)

{
/* irregular: 18 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  unsigned int *puVar3;
  unsigned char temp_v1;
  unsigned long long temp_v2;
  unsigned char temp_v3 [12];
  int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  unsigned char temp_v7 [4];
  char temp_v8;
  unsigned char temp_v9 [4];
  char temp_v10;
  int temp_v11;
  unsigned int temp_v12 [2];
  int temp_v13;
  int temp_v14;
  int temp_v15;
  int temp_v16;
  unsigned char temp_v17 [32];
  unsigned char temp_v18 [32];
  unsigned char temp_v19 [24];
  unsigned char temp_v20 [32];
  unsigned char temp_v21 [32];
  unsigned char temp_v22 [28];
  unsigned char temp_v23 [8];
  unsigned char temp_v24 [24];
  unsigned char temp_v25 [12];
  int iStack_24;
  unsigned int temp_v26;
  int iStack_1c;
  unsigned int *temp_v27;
  
  iStack_24 = param_1;
  temp_v26 = param_2;
  iStack_1c = param_3;
  temp_v27 = param_4;
  strInit(temp_v17);
  FUN_00303038(param_1,temp_v17);
  FUN_002ee524(temp_v7,temp_v17);
  strInit(temp_v3);
  FUN_00303038(temp_v7,temp_v3);
  FUN_002ec934(temp_v19,temp_v4 + temp_v6,temp_v5);
  strInit(temp_v18);
  FUN_00303038(temp_v7,temp_v18);
  if ((*(char *)(param_1 + 4) != '\0') || (temp_v8 != '\0')) {
    FUN_002fde5c(temp_v24);
    puVar3 = (unsigned int *)&temp_v11;
    temp_v11 = 0;
    FUN_00303028(temp_v24,puVar3);
  }
  else {
    temp_v0 = FUN_002e760a(0x58);
    if (temp_v0 != 0) {
      piVar2 = (int *)FUN_001214c4(temp_v0,temp_v18,*(unsigned int *)(param_3 + 0x1c));
    }
    else {
      piVar2 = (int *)0x0;
    }
    FUN_0012143c(piVar2,*(unsigned int *)(param_3 + 0x14),temp_v19);
    FUN_00302f28(temp_v23);
    FUN_00303088(temp_v23);
    FUN_00303146(temp_v25,piVar2 + 0x14);
    temp_v2 = FUN_00124458(temp_v23,temp_v25);
    temp_v0 = (int)((unsigned long long)temp_v2 >> 0x20);
    temp_v1 = (unsigned int)temp_v2 >= 120001;
    if ((int)(-(unsigned int)temp_v1 - temp_v0) < 0 != (SBORROW4(0,temp_v0) != SBORROW4(-temp_v0,(unsigned int)temp_v1))) {
      if (piVar2 != (int *)0x0) {
        (**(romwright_code **)(*piVar2 + 4))(piVar2);
      }
      FUN_002fde5c(temp_v24);
      temp_v12[0] = 0;
      FUN_00303018(temp_v24,temp_v12);
    }
    else {
      temp_v0 = FUN_001242f8(piVar2);
      if (temp_v0 != 0) {
        strInit(temp_v20);
        FUN_00303038(param_1,temp_v20);
        strInit(temp_v21);
        FUN_00303158(*(unsigned int *)(param_3 + 0x14),temp_v20,temp_v21,piVar2 + 0xd);
        FUN_002ee524(temp_v9,temp_v21);
        FUN_003031e4(temp_v9,&temp_v14);
        FUN_003031e4(temp_v9,&temp_v16);
        FUN_003031e4(temp_v9,&temp_v13);
        if (temp_v10 != '\0') {
          if (piVar2 != (int *)0x0) {
            (**(romwright_code **)(*piVar2 + 4))(piVar2);
          }
          FUN_002fde5c(temp_v24);
          temp_v12[0] = 0;
          FUN_00303028(temp_v24,temp_v12);
        }
        else {
          if (piVar2[0xb] == temp_v14) {
            *temp_v27 = temp_v16;
            FUN_002fde5c(temp_v22);
            temp_v15 = temp_v13 + 1;
            FUN_00303018(temp_v22,&temp_v15);
            FUN_0030314e(temp_v26,temp_v22);
            *param_5 = (unsigned int)piVar2;
            FUN_002ee54c(temp_v22);
            FUN_002ee54c(temp_v9);
            strDestroy(temp_v21);
            strDestroy(temp_v20);
            strDestroy(temp_v18);
            FUN_002ec890(temp_v19);
            strDestroy(temp_v3);
            FUN_002ee54c(temp_v7);
            strDestroy(temp_v17);
            return 1;
          }
          if (piVar2 != (int *)0x0) {
            (**(romwright_code **)(*piVar2 + 4))(piVar2);
          }
          FUN_002fde5c(temp_v24);
          temp_v12[0] = 0;
          FUN_00303018(temp_v24,temp_v12);
        }
        FUN_0030314e(temp_v26,temp_v24);
        FUN_002ee54c(temp_v24);
        FUN_002ee54c(temp_v9);
        strDestroy(temp_v21);
        strDestroy(temp_v20);
        strDestroy(temp_v18);
        FUN_002ec890(temp_v19);
        strDestroy(temp_v3);
        FUN_002ee54c(temp_v7);
        strDestroy(temp_v17);
        return 0;
      }
      if (piVar2 != (int *)0x0) {
        (**(romwright_code **)(*piVar2 + 4))(piVar2);
      }
      FUN_002fde5c(temp_v24);
      puVar3 = temp_v12;
      temp_v12[0] = 0;
      FUN_00303028(temp_v24,puVar3);
    }
  }
  FUN_0030314e(temp_v26,temp_v24);
  FUN_002ee54c(temp_v24);
  strDestroy(temp_v18);
  FUN_002ec890(temp_v19);
  strDestroy(temp_v3);
  FUN_002ee54c(temp_v7);
  strDestroy(temp_v17);
  return 0;
}

} /* extern "C" */
