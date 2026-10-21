/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003d2ea0` (_code @ 0x3d2ea0, 0x2c8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00227ab4(int *, unsigned int *);
int FUN_00227b14(...);
int FUN_002296f4(...);
int FUN_0022a5d8(...);
int FUN_002550d8(...);
int FUN_002569ac(int *, unsigned int);
int FUN_0026beb4(...);
int FUN_003c0484(...);

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_2_stack;

extern int g_btlScriptUnit; /* 0x43427c */
extern unsigned int g_btlUiBlock; /* 0x439ca8 */

/* Supplied declaration required: FUN_00227ab4. */
/* Supplied declaration required: FUN_00227b14. */
/* Supplied declaration required: FUN_002296f4. */
/* Supplied declaration required: FUN_0022a5d8. */
extern int randRange(unsigned int);
/* Supplied declaration required: FUN_002550d8. */
extern int battleGetEntryHalfword(int, unsigned int);
/* Supplied declaration required: FUN_002569ac. */
/* Supplied declaration required: FUN_0026beb4. */
/* Supplied declaration required: FUN_003c0484. */


unsigned int FUN_003d2ea0(int *param_1,unsigned int *param_2)

{
/* irregular: 8 native warning(s); review required */
  unsigned short temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned char temp_v3;
  unsigned int *puVar5;
  unsigned int temp_v4;
  unsigned int *puVar7;
  unsigned int temp_v5;
  
  FUN_002569ac(param_1,*(unsigned int *)(*param_1 + 0x84));
  FUN_00227ab4(param_1,param_2);
  temp_v0 = *(unsigned short *)(param_2[10] + 0xfa);
  if ((*param_2 & 0x1080) == 0) {
    temp_v5 = 0x32;
  }
  else {
    temp_v5 = 0;
  }
  if ((temp_v0 & 0x80) != 0) {
    if ((*(unsigned int *)param_2[8] & 0x30) == 0) {
      FUN_00227b14(g_btlUiBlock,(short)param_2[0xb],0);
    }
    puVar5 = (unsigned int *)param_2[8];
    temp_v1 = 0xb;
    FUN_0022a5d8(temp_v1,puVar5,1);
    FUN_0026beb4(temp_v5,param_2,0,param_2[9],1);
    FUN_002296f4(param_1,param_2,(int)*(short *)(param_2[9] + 0x62),0,0x1e,0x1e);
    *(unsigned char *)(g_btlScriptUnit + *(int *)(*param_1 + 0x84) * 0xf1c + 9) = 0x1b;
  }
  else if ((temp_v0 & 0x100) != 0) {
    if ((*(unsigned int *)param_2[8] & 0x30) == 0) {
      FUN_00227b14(g_btlUiBlock,(short)param_2[0xb],0);
    }
    puVar5 = (unsigned int *)param_2[8];
    temp_v1 = 0xc;
    FUN_0022a5d8(temp_v1,puVar5,1);
    FUN_0026beb4(temp_v5,param_2,0,param_2[9],1);
    FUN_002296f4(param_1,param_2,(int)*(short *)(param_2[9] + 0x62),0,0x1e,0x1e);
    *(unsigned char *)(g_btlScriptUnit + *(int *)(*param_1 + 0x84) * 0xf1c + 9) = 0x1b;
  }
  else if ((*(unsigned int *)param_2[8] & 0x60000) != 0) {
    if ((*(unsigned int *)param_2[8] & 0x30) == 0) {
      FUN_00227b14(g_btlUiBlock,(short)param_2[0xb],0);
    }
    temp_v2 = battleGetEntryHalfword((int)*(short *)(param_2[9] + 0x62),0x15);
    puVar5 = (unsigned int *)param_2[8];
    if ((*puVar5 & 0x20000) != 0) {
      FUN_0022a5d8(0xd,puVar5,1);
    }
    else {
      if (temp_v2 == 2) {
        temp_v1 = 0xe;
      }
      else {
        temp_v1 = 0xf;
      }
      FUN_0022a5d8(temp_v1,puVar5,1);
    }
    FUN_0026beb4(temp_v5,param_2,0,param_2[9],1);
    FUN_002296f4(param_1,param_2,(int)*(short *)(param_2[9] + 0x62),0,0x1e,0x1e);
    *(unsigned char *)(g_btlScriptUnit + *(int *)(*param_1 + 0x84) * 0xf1c + 9) = 0x1b;
  }
  else {
    if ((temp_v0 & 0x40) == 0) {
      return 1;
    }
    temp_v2 = randRange(99);
    if (((*(unsigned int *)(*param_1 + 0x44a0) & 0x40000) == 0) && (temp_v2 < 0x32)) {
      FUN_003c0484(param_2[8],0,1);
      if ((*(unsigned int *)param_2[8] & 0x30) != 0) {
        if (*(int *)(*param_1 + 0x49c8) == 0) {
          temp_v3 = 2;
        }
        else {
          temp_v3 = 3;
        }
        *(unsigned char *)(g_btlScriptUnit + *(int *)(*param_1 + 0x84) * 0xf1c + 9) = temp_v3;
      }
      else {
        *(unsigned char *)(g_btlScriptUnit + *(int *)(*param_1 + 0x84) * 0xf1c + 9) = 1;
      }
    }
    else {
      *(unsigned char *)(g_btlScriptUnit + *(int *)(*param_1 + 0x84) * 0xf1c + 9) = 0x11;
    }
  }
  if ((*(unsigned int *)param_2[8] & 0x60000) != 0) {
    FUN_002550d8((int)*(short *)(param_2[9] + 0x62),0x15,0xffffffff,0);
    temp_v2 = battleGetEntryHalfword((int)*(short *)(param_2[9] + 0x62),0x15);
    if (temp_v2 == 0) {
      puVar7 = (unsigned int *)param_2[8];
      temp_v4 = *puVar7;
      *puVar7 = temp_v4 & 0xfffdffff;
      puVar5 = (unsigned int *)param_2[8];
      puVar5[1] = puVar7[1];
      *puVar5 = temp_v4 & 0xfff9ffff;
    }
  }
  return 1;
}

} /* extern "C" */
