/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00109050` (_code @ 0x109050, 0x19a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_7: 8 slot(s), 30 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned short sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
} param_7_stack;

extern unsigned char LAB_001091fc; /* 0x1091fc */
extern unsigned char DAT_0055b2a4; /* 0x55b2a4 */
extern unsigned int DAT_00594a30; /* 0x594a30 */

/* Supplied declaration required: FUN_002e7908. */
/* Supplied declaration required: FUN_002e9d28. */
/* Supplied declaration required: FUN_002e9de4. */
/* Supplied declaration required: FUN_002ea4bc. */
extern unsigned int FUN_002ea93c(int *);
/* Supplied declaration required: FUN_002eb17c. */
/* Supplied declaration required: FUN_002eb330. */
/* Supplied declaration required: FUN_002eb338. */
/* Supplied declaration required: FUN_002eed74. */
/* Supplied declaration required: FUN_002ef6c4. */
/* Supplied declaration required: FUN_002ef6e2. */
/* Supplied declaration required: FUN_002ef708. */
/* Supplied declaration required: FUN_002ef8f8. */


void FUN_00109050(unsigned int param_1,int *param_2,unsigned int param_3,unsigned int param_4,int param_5,
                 unsigned char *param_6,int param_7)

{
/* irregular: 12 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned char **ppuVar5;
  unsigned char **ppuVar6;
  unsigned char *temp_v4;
  unsigned short temp_v5;
  int temp_v6 [2];
  unsigned char temp_v7 [32];
  int *temp_v8;
  unsigned int temp_v9 [2];
  unsigned int temp_v10;
  int *piStack_20;
  unsigned int temp_v11;
  unsigned int temp_v12;
  
  ppuVar6 = &temp_v4;
  if (param_7 == -1) {
    param_7 = 10000000;
  }
  temp_v10 = param_1;
  piStack_20 = param_2;
  temp_v11 = param_3;
  temp_v12 = param_4;
  temp_v1 = (**(romwright_code **)(*param_2 + 0x30))(param_2);
  if ((((temp_v1 == 0) && ((char)param_2[0x2f] != '\0')) ||
      (temp_v1 = (**(romwright_code **)(*param_2 + 0x20))(param_2), temp_v1 != 0)) ||
     (temp_v1 = (**(romwright_code **)(*param_2 + 0x2c))(param_2), temp_v1 != 0)) {
    temp_v4 = (unsigned char *)0x80050002;
    ppuVar6 = &temp_v4;
  }
  else {
    *(unsigned char *)(param_2 + 0x2c) = 0;
    (**(romwright_code **)(*param_2 + 0x58))(param_2,1);
    temp_v4 = param_6;
    temp_v8 = param_2 + 0x7a;
    FUN_002ef6c4(temp_v8,temp_v11,temp_v12,param_5);
    temp_v1 = FUN_002ea4bc();
    temp_v3 = DAT_00594a30;
    if (*(char *)(temp_v1 + 0x30) != '\0') {
      temp_v2 = FUN_002ea4bc();
      FUN_002eb330(temp_v7,temp_v2);
      FUN_002eb338(temp_v6,temp_v7,temp_v3);
      temp_v3 = *(unsigned int *)(param_2[0x2b] + 0x118);
    }
    else {
      temp_v3 = *(unsigned int *)(param_2[0x2b] + 0x118);
      temp_v6[0] = param_7;
    }
    FUN_002ef6e2(temp_v3,temp_v6[0]);
    temp_v3 = FUN_002ea93c(param_2 + 2);
    FUN_002eb17c(param_2[0x2b],temp_v3);
    FUN_002ef8f8(param_2,param_2[0x2b]);
    temp_v0 = (**(romwright_code **)(*param_2 + 0x30))(param_2);
    *(unsigned char *)(param_2 + 0x9b) = temp_v0 ^ 1;
    if (param_5 == 0) {
      temp_v1 = FUN_002ea4bc();
      if (*(char *)(temp_v1 + 0x30) != '\0') {
        FUN_002e9d28(&temp_v4,0x32,DAT_00594a30);
        temp_v5 = 2;
        do {
          temp_v1 = (**(romwright_code **)(*param_2 + 0x20))(param_2);
          if (temp_v1 == 0) break;
          FUN_002ef708();
          ppuVar5 = &temp_v4;
          FUN_002e9de4(&temp_v4,
                       "D:/home/jenkins/workspace/Manual-Pack/5129d543/OnlineCore/src/Transport/PRUDP/PRUDPEndPoint.cpp"
                       ,0x1fe,&LAB_001091fc);
        } while (ppuVar5 != (unsigned char **)0x0);
      }
      else {
        FUN_002e9d28(&temp_v4,0x32,param_7);
        temp_v5 = 2;
        do {
          temp_v1 = (**(romwright_code **)(*param_2 + 0x20))(param_2);
          if ((temp_v1 == 0) || (temp_v1 = FUN_002ea4bc(), *(char *)(temp_v1 + 0x30) != '\0')) break;
          FUN_002ef708();
          ppuVar5 = &temp_v4;
          FUN_002e9de4(&temp_v4,
                       "D:/home/jenkins/workspace/Manual-Pack/5129d543/OnlineCore/src/Transport/PRUDP/PRUDPEndPoint.cpp"
                       ,0x205,"(IsConnecting() && !Core::GetInstance()->GetTerminateImmediately())")
          ;
        } while (ppuVar5 != (unsigned char **)0x0);
      }
      temp_v4 = &DAT_0055b2a4;
      FUN_002eed74(temp_v8);
      temp_v1 = (**(romwright_code **)(*param_2 + 0x2c))(param_2);
      if (temp_v1 == 0) {
        (**(romwright_code **)(*param_2 + 0x58))(param_2,0);
        temp_v4 = (unsigned char *)0x80050008;
        FUN_002e7908(temp_v10,ppuVar6);
        return;
      }
    }
    temp_v9[0] = 0x10001;
    ppuVar6 = (unsigned char **)temp_v9;
  }
  FUN_002e7908(temp_v10,ppuVar6);
  return;
}
