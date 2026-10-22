/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023c8c0` (_code @ 0x23c8c0, 0x850 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00164b5c(...);
int gameGetPlayerData(void);
int FUN_001835b4(...);
int FUN_0023d150(...);
int FUN_002ac470(...);
int FUN_0034cfc0(...);

/* stack frame of param_4: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
} param_4_stack;

extern int g_camp; /* 0x57f108 */

/* Supplied declaration required: FUN_00164b5c. */
/* Supplied declaration required: gameGetPlayerData. */
/* Supplied declaration required: FUN_001835b4. */
extern int gameFlagIsSet(unsigned int);
/* Supplied declaration required: FUN_0023d150. */
extern int resourceRunOperationIfUnblocked(int);
extern int FUN_002a4894(int);
/* Supplied declaration required: FUN_002ac470. */
extern int objectApplyIfUnblocked(int);
/* Supplied declaration required: FUN_0034cfc0. */


void FUN_0023c8c0(int *param_1,unsigned int param_2,unsigned int param_3,int param_4)

{
/* irregular: 8 goto(s); 6 native warning(s); review required */
  unsigned short temp_v0;
  unsigned short *puVar2;
  int temp_v1;
  int temp_v2;
  int *piVar5;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int *piVar10;
  int temp_v7 [8];
  unsigned int temp_v8;
  int temp_v9;
  int *temp_v10;
  unsigned int temp_v11;
  unsigned int uStack_2c;
  int temp_v12;
  
  temp_v6 = 0;
  temp_v9 = 0;
  temp_v10 = param_1;
  temp_v11 = param_2;
  uStack_2c = param_3;
  temp_v12 = param_4;
  if (param_1 != (int *)0x48) {
    if ((int)param_1 >= 0x49) {
      switch((unsigned int)param_1) {
      case (unsigned int)0x49:
        goto LAB_0023ca18;
      case (unsigned int)0x4a:
        goto LAB_0023cae4;
      case (unsigned int)0x4b:
        goto LAB_0023cb98;
      case (unsigned int)0x4c:
        goto LAB_0023cc4c;
      case (unsigned int)0x4d:
        goto LAB_0023cd04;
      case (unsigned int)0x4e:
        goto LAB_0023cdbc;
      default:
        goto LAB_0023ce68;
      }
    }
    switch((unsigned int)param_1) {
    case (unsigned int)0x13:
      goto LAB_0023c964;
    case (unsigned int)0x14:
LAB_0023ca18:
      temp_v9 = g_camp + 0x318;
      temp_v6 = g_camp + 0x2c58;
      FUN_00164b5c(2,0x14,4,param_2,param_3,0x65);
      FUN_001835b4(2,0x14,0x4f2,temp_v11,param_3,0x6a);
      FUN_001835b4(2,0x14,0x50a,temp_v11,param_3,0x6a);
      FUN_001835b4(2,0x14,0x50c,temp_v11,param_3,0x6a);
      FUN_001835b4(2,0x14,0x50d,temp_v11,param_3,0x6a);
      temp_v3 = gameGetPlayerData();
      FUN_002ac470(temp_v10,0,*(unsigned short *)(temp_v3 + 2),temp_v11,param_3,0xffffffff);
      break;
    case (unsigned int)0x15:
LAB_0023cae4:
      temp_v9 = g_camp + 0x37c;
      temp_v6 = g_camp + 0x2d48;
      FUN_00164b5c(2,0x14,4,param_2,param_3,0x65);
      FUN_001835b4(2,0x14,0x4f3,temp_v11,param_3,0x6a);
      FUN_001835b4(2,0x14,0x50a,temp_v11,param_3,0x6a);
      FUN_001835b4(2,0x14,0x50b,temp_v11,param_3,0x6a);
      temp_v3 = gameGetPlayerData();
      FUN_002ac470(temp_v10,0,*(unsigned short *)(temp_v3 + 4),temp_v11,param_3,0xffffffff);
      break;
    case (unsigned int)0x16:
LAB_0023cb98:
      temp_v9 = g_camp + 0x3e0;
      temp_v6 = g_camp + 0x2dac;
      FUN_00164b5c(2,0x14,5,param_2,param_3,0x65);
      FUN_001835b4(2,0x14,0x4f4,temp_v11,param_3,0x6a);
      FUN_001835b4(2,0x14,0x50e,temp_v11,param_3,0x6a);
      FUN_001835b4(2,0x14,0x50f,temp_v11,param_3,0x6a);
      temp_v3 = gameGetPlayerData();
      FUN_002ac470(temp_v10,0,*(unsigned short *)(temp_v3 + 6),temp_v11,param_3,0xffffffff);
      break;
    case (unsigned int)0x17:
LAB_0023cc4c:
      temp_v9 = g_camp + 0x444;
      temp_v6 = g_camp + 0x2e9c;
      FUN_00164b5c(2,0x14,5,param_2,param_3,0x65);
      FUN_001835b4(2,0x14,0x4f5,temp_v11,param_3,0x6a);
      FUN_001835b4(2,0x14,0x50e,temp_v11,param_3,0x6a);
      FUN_001835b4(2,0x14,0x50f,temp_v11,param_3,0x6a);
      temp_v3 = gameGetPlayerData();
      FUN_002ac470(temp_v10,0,*(unsigned short *)(temp_v3 + 8),temp_v11,param_3,0xffffffff);
      break;
    case (unsigned int)0x18:
LAB_0023cd04:
      temp_v9 = g_camp + 0x4a8;
      temp_v6 = g_camp + 0x2f8c;
      FUN_00164b5c(2,0x14,5,param_2,param_3,0x65);
      FUN_001835b4(2,0x14,0x4f6,temp_v11,param_3,0x6a);
      FUN_001835b4(2,0x14,0x50e,temp_v11,param_3,0x6a);
      FUN_001835b4(2,0x14,0x50f,temp_v11,param_3,0x6a);
      temp_v3 = gameGetPlayerData();
      FUN_002ac470(temp_v10,0,*(unsigned short *)(temp_v3 + 10),temp_v11,param_3,0xffffffff);
      break;
    case (unsigned int)0x19:
LAB_0023cdbc:
      temp_v9 = g_camp + 0x50c;
      temp_v6 = g_camp + 0x307c;
      FUN_00164b5c(2,0x14,5,param_2,param_3,0x65);
      FUN_001835b4(2,0x14,0x4f7,temp_v11,param_3,0x6a);
      FUN_001835b4(2,0x14,0x50e,temp_v11,param_3,0x6a);
      FUN_001835b4(2,0x14,0x50f,temp_v11,param_3,0x6a);
      temp_v3 = gameGetPlayerData();
      FUN_002ac470(temp_v10,0,*(unsigned short *)(temp_v3 + 0xc),temp_v11,param_3,0xffffffff);
    default:
      break;
    }
  }
  else {
LAB_0023c964:
    temp_v9 = g_camp + 0x2b4;
    temp_v6 = g_camp + 0x2b68;
    FUN_00164b5c(2,0x14,4,param_2,param_3,0x65);
    FUN_001835b4(2,0x14,0x4f1,temp_v11,param_3,0x6a);
    FUN_001835b4(2,0x14,0x509,temp_v11,param_3,0x6a);
    FUN_001835b4(2,0x14,0x50b,temp_v11,param_3,0x6a);
    puVar2 = (unsigned short *)gameGetPlayerData();
    FUN_002ac470(temp_v10,0,*puVar2,temp_v11,param_3,0xffffffff);
  }
LAB_0023ce68:
  temp_v3 = g_camp;
  piVar5 = temp_v7;
  temp_v8 = temp_v11;
  temp_v1 = 0;
  temp_v7[0] = 0x13;
  temp_v7[1] = 0x14;
  temp_v7[2] = 0x15;
  temp_v7[3] = 0x16;
  temp_v7[4] = 0x17;
  temp_v7[5] = 0x18;
  temp_v7[6] = 0x19;
  do {
    piVar10 = (int *)temp_v7[temp_v1];
    if (piVar10 != temp_v10) {
      piVar5 = (int *)((int)piVar10 + 0x35);
    }
    temp_v4 = temp_v1;
  } while ((piVar10 != temp_v10 && piVar5 != temp_v10) && (temp_v1 = temp_v1 + 1, temp_v4 = 0, temp_v1 < 7))
  ;
  temp_v5 = 0;
  temp_v1 = temp_v4;
  do {
    temp_v1 = temp_v1 - 1;
    if (temp_v1 < 0) {
      temp_v1 = 6;
    }
    if (((temp_v7[temp_v1] != 0x14 && temp_v7[temp_v1] != 0x15) ||
        (temp_v2 = gameFlagIsSet(0x410), temp_v2 != 0)) &&
       (temp_v2 = objectApplyIfUnblocked(temp_v3 + temp_v1 * 100 + 0x2b4), 0 < temp_v2)) {
      FUN_001835b4(2,0x14,0x4f8,temp_v8,param_3,0x6a);
      FUN_001835b4(2,0x14,temp_v1 + 0x4fa,temp_v8,param_3,0x6a);
      break;
    }
    temp_v5 = temp_v5 + 1;
  } while (temp_v5 < 7);
  temp_v1 = 0;
  do {
    temp_v4 = temp_v4 + 1;
    if (temp_v4 >= 7) {
      temp_v4 = 0;
    }
    if (((temp_v7[temp_v4] != 0x14 && temp_v7[temp_v4] != 0x15) ||
        (temp_v5 = gameFlagIsSet(0x410), temp_v5 != 0)) &&
       (temp_v5 = objectApplyIfUnblocked(temp_v3 + temp_v4 * 100 + 0x2b4), 0 < temp_v5)) {
      FUN_001835b4(2,0x14,0x4f9,temp_v8,param_3,0x6a);
      FUN_001835b4(2,0x14,temp_v4 + 0x501,temp_v8,param_3,0x6a);
      break;
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 7);
  FUN_001835b4(2,0x14,0x508,temp_v11,param_3,0x6a);
  FUN_001835b4(2,0x14,0x510,temp_v11,param_3,0x6a);
  temp_v3 = 0;
  do {
    temp_v1 = resourceRunOperationIfUnblocked(temp_v9);
    temp_v4 = objectApplyIfUnblocked(temp_v9);
    if (temp_v4 <= temp_v1 + temp_v3) break;
    temp_v1 = resourceRunOperationIfUnblocked(temp_v9);
    FUN_002ac470(temp_v10,temp_v3 + 2,*(unsigned short *)(temp_v6 + (temp_v1 + temp_v3) * 2),temp_v11,param_3,
                 0xffffffff);
    temp_v3 = temp_v3 + 1;
  } while (temp_v3 < 9);
  FUN_0023d150(temp_v9,temp_v11,param_3,0);
  if (temp_v12 != 0) {
    temp_v3 = resourceRunOperationIfUnblocked(temp_v9);
    temp_v1 = FUN_002a4894(temp_v9);
    temp_v0 = *(unsigned short *)(temp_v6 + (temp_v1 + temp_v3) * 2);
    temp_v6 = FUN_002a4894(temp_v9);
    FUN_0034cfc0(temp_v10,temp_v6 + 2,temp_v0,temp_v11,param_3);
  }
  return;
}

} /* extern "C" */
