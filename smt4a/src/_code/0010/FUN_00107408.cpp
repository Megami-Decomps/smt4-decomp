/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00107408` (_code @ 0x107408, 0x1b4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int sharedRefRelease(int);
int _ZN12OnlineResultC1ERKj(...);
int FUN_002e9d28(...);
int FUN_002e9de4(...);
int onlineInstantiationContextGetCurrent(void);
int FUN_002eab2a(int *);
int FUN_002eb108(int, int *, int, int);
int FUN_002eb330(unsigned char [40], unsigned int);
int FUN_002eb338(unsigned int [2], unsigned char [40], unsigned char *);
int FUN_002eed74(...);
int FUN_002ef34c(int *, int *, int);
int FUN_002ef584(int, int);
int refSlotInit(int *, int, int, int);
int FUN_002ef6e2(int, unsigned int);
int FUN_002ef708(void);

typedef int romwright_code(...);
/* stack frame of param_5: 10 slot(s), 35 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned short sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned char sp78; /* 0x78: local_78 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
} param_5_stack;

extern unsigned char LAB_001075c8; /* 0x1075c8 */
extern unsigned char DAT_0055b2a4; /* 0x55b2a4 */
extern unsigned char *DAT_00594a30; /* 0x594a30 */

/* Supplied declaration required: sharedRefRelease. */
extern int _Znwj(unsigned int);
/* Supplied declaration required: _ZN12OnlineResultC1ERKj. */
/* Supplied declaration required: FUN_002e9d28. */
/* Supplied declaration required: FUN_002e9de4. */
/* Supplied declaration required: onlineInstantiationContextGetCurrent. */
extern int FUN_002ea6fc(unsigned int *, unsigned char *);
/* Supplied declaration required: FUN_002eab2a. */
/* Supplied declaration required: FUN_002eb108. */
/* Supplied declaration required: FUN_002eb330. */
/* Supplied declaration required: FUN_002eb338. */
/* Supplied declaration required: FUN_002eed74. */
/* Supplied declaration required: FUN_002ef34c. */
/* Supplied declaration required: FUN_002ef584. */
/* Supplied declaration required: refSlotInit. */
/* Supplied declaration required: FUN_002ef6e2. */
/* Supplied declaration required: FUN_002ef708. */


void FUN_00107408(unsigned int *param_1,int *param_2,int param_3,unsigned int param_4,unsigned int param_5
                 )

{
/* irregular: 15 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned char **ppuVar4;
  unsigned int *puVar5;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned char temp_v6 [4];
  int temp_v7;
  unsigned int uStack_70;
  unsigned int uStack_6c;
  unsigned char *temp_v8;
  unsigned short temp_v9;
  unsigned int temp_v10 [2];
  unsigned char temp_v11 [40];
  int *temp_v12;
  unsigned int temp_v13 [2];
  unsigned int *puStack_24;
  int *piStack_20;
  int temp_v14;
  unsigned int uStack_18;
  
  puVar5 = (unsigned int *)&temp_v4;
  puStack_24 = param_1;
  piStack_20 = param_2;
  temp_v14 = param_3;
  uStack_18 = param_4;
  if ((param_2[0x20] != 0) && (temp_v0 = (**(romwright_code **)(*param_2 + 0x2c))(param_2), temp_v0 != 0)) {
    FUN_002eab2a(param_2);
    (**(romwright_code **)(*param_2 + 0x58))(param_2,3);
    temp_v12 = param_2 + 0x7a;
    temp_v4 = param_4;
    refSlotInit(temp_v12,0,0,temp_v14);
    temp_v0 = _Znwj(0x150);
    if (temp_v0 != 0) {
      temp_v4 = 0;
      temp_v5 = 0;
      FUN_002eb108(temp_v0,param_2,3,0x60);
    }
    *(char *)(temp_v0 + 0x24) = (char)param_2[0x53];
    temp_v3 = *(int *)(temp_v0 + 0x118);
    temp_v1 = onlineInstantiationContextGetCurrent();
    temp_v2 = param_5;
    if (*(char *)(temp_v1 + 0x30) != '\0') {
      temp_v8 = DAT_00594a30;
      temp_v2 = onlineInstantiationContextGetCurrent();
      FUN_002eb330(temp_v11,temp_v2);
      FUN_002eb338(temp_v10,temp_v11,temp_v8);
      temp_v2 = temp_v10[0];
    }
    FUN_002ef6e2(temp_v3,temp_v2);
    *(unsigned int *)(temp_v3 + 4) = 500;
    FUN_002ef584(param_2[1] + 0x14,temp_v0);
    FUN_002ef34c(&temp_v7,param_2,temp_v0);
    temp_v6[0] = 0;
    temp_v1 = FUN_002ea6fc((unsigned int *)&temp_v7,temp_v6);
    if (temp_v1 != 0) {
      sharedRefRelease(temp_v0);
      FUN_002eed74(temp_v12);
      *param_1 = temp_v7;
      param_1[1] = uStack_70;
      param_1[2] = uStack_6c;
      return;
    }
    sharedRefRelease(temp_v0);
    if (temp_v14 == 0) {
      temp_v0 = onlineInstantiationContextGetCurrent();
      if (*(char *)(temp_v0 + 0x30) != '\0') {
        FUN_002e9d28(&temp_v8,0x32,DAT_00594a30);
        temp_v9 = 2;
        do {
          temp_v0 = (**(romwright_code **)(*param_2 + 0x24))(param_2);
          if (temp_v0 == 0) break;
          FUN_002ef708();
          ppuVar4 = &temp_v8;
          FUN_002e9de4(ppuVar4,
                       "D:/home/jenkins/workspace/Manual-Pack/5129d543/OnlineCore/src/Transport/PRUDP/PRUDPEndPoint.cpp"
                       ,0x270,&LAB_001075c8);
        } while (ppuVar4 != (unsigned char **)0x0);
      }
      else {
        FUN_002e9d28(&temp_v8,0x32,param_5);
        temp_v9 = 2;
        do {
          temp_v0 = (**(romwright_code **)(*param_2 + 0x24))(param_2);
          if ((temp_v0 == 0) || (temp_v0 = onlineInstantiationContextGetCurrent(), *(char *)(temp_v0 + 0x30) != '\0')) break;
          FUN_002ef708();
          ppuVar4 = &temp_v8;
          FUN_002e9de4(ppuVar4,
                       "D:/home/jenkins/workspace/Manual-Pack/5129d543/OnlineCore/src/Transport/PRUDP/PRUDPEndPoint.cpp"
                       ,0x277,
                       "(IsDisconnecting() && !Core::GetInstance()->GetTerminateImmediately())");
        } while (ppuVar4 != (unsigned char **)0x0);
      }
      temp_v8 = &DAT_0055b2a4;
      FUN_002eed74(temp_v12);
      temp_v0 = (**(romwright_code **)(*param_2 + 0x1c))(param_2);
      if (temp_v0 == 0) {
        (**(romwright_code **)(*param_2 + 0x58))(param_2,0);
        temp_v4 = 0x80050008;
        puVar5 = (unsigned int *)&temp_v4;
        _ZN12OnlineResultC1ERKj(param_1,puVar5);
        return;
      }
    }
    temp_v13[0] = 0x10001;
    puVar5 = temp_v13;
  }
  else {
    temp_v4 = 0x80050002;
  }
  _ZN12OnlineResultC1ERKj(param_1,puVar5);
  return;
}

} /* extern "C" */
