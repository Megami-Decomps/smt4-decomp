/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002237a0` (_code @ 0x2237a0, 0x800 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001628c0(...);
int FUN_00169ddc(...);
int FUN_00234880(void);
int FUN_00295108(void);
int mapIfStart(void);
int FUN_002d8c90(...);
int FUN_00312af0(void);
int FUN_00398258(...);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

extern int *g_popupState; /* 0x58104c */
extern int DAT_005f18e4; /* 0x5f18e4 */
extern int DAT_005f1908; /* 0x5f1908 */
extern unsigned char DAT_005f19ee; /* 0x5f19ee */

extern unsigned int FUN_0014af98(void);
extern int FUN_0014bef4(unsigned int);
extern unsigned int FUN_00152f44(void);
extern int FUN_0015688c(void);
/* Supplied declaration required: FUN_001628c0. */
/* Supplied declaration required: FUN_00169ddc. */
/* Supplied declaration required: FUN_00234880. */
/* Supplied declaration required: FUN_00295108. */
/* Supplied declaration required: mapIfStart. */
/* Supplied declaration required: FUN_002d8c90. */
/* Supplied declaration required: FUN_00312af0. */
extern int lmapSceneGetUnk0(void);
extern int FUN_0033e0e8(void);
extern int FUN_00344c9c(void);
/* Supplied declaration required: FUN_00398258. */


void FUN_002237a0(void)

{
/* irregular: 7 goto(s); 8 native warning(s); review required */
  int *piVar1;
  int *piVar2;
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v0 = FUN_00152f44();
  piVar2 = g_popupState;
  temp_v0 = temp_v0 | 4;
  temp_v3 = 0;
  switch(*g_popupState) {
  case 0:
    DAT_005f19ee = 0;
    FUN_00312af0();
  default:
    break;
  case 2:
    g_popupState[1] = g_popupState[1] + 1;
    temp_v2 = FUN_0015688c();
    piVar2 = g_popupState;
    if (temp_v2 == 0) break;
    if (g_popupState[1] == 2) {
      piVar1 = g_popupState + 5;
      if (*piVar1 != 0) {
        if (g_popupState[6] == 0) {
          g_popupState[6] = 0xae;
        }
        FUN_00398258(piVar2[6],*piVar1,1,0,0);
        temp_v1 = FUN_0014af98();
        FUN_001628c0(g_popupState[7],temp_v1,temp_v0,1);
        DAT_005f19ee = 1;
        goto LAB_002238e8;
      }
    }
    else {
LAB_002238e8:
      if ((g_popupState[1] >= 6) && (temp_v2 = FUN_0033e0e8(), temp_v2 == 0)) {
        DAT_005f19ee = 0;
      }
    }
    temp_v2 = FUN_0033e0e8();
    if (temp_v2 != 0) {
      temp_v3 = -0x3c;
    }
    if (g_popupState[1] <= temp_v3 + 0x5a) break;
    piVar2 = g_popupState;
    *g_popupState = 0;
    piVar2[1] = 0;
    break;
  case 3:
    temp_v2 = g_popupState[1];
    g_popupState[1] = temp_v2 + 1;
    if (temp_v2 + 1 == 2) {
      if (piVar2[5] != 0) {
        if (piVar2[6] == 0) {
          piVar2[6] = 0xae;
        }
        FUN_00398258(piVar2[6],piVar2[5],1,0,0);
        temp_v1 = FUN_0014af98();
        FUN_001628c0(g_popupState[7],temp_v1,temp_v0,1);
        DAT_005f19ee = 1;
        goto LAB_002239b8;
      }
    }
    else {
LAB_002239b8:
      if (g_popupState[1] >= 6) {
        DAT_005f19ee = 0;
      }
    }
    temp_v2 = FUN_0033e0e8();
    if (temp_v2 != 0) {
      temp_v3 = -0x3c;
    }
    if (g_popupState[1] <= temp_v3 + 0x5a) break;
    piVar2 = g_popupState;
    *g_popupState = 0;
    piVar2[1] = 0;
    break;
  case 4:
    temp_v2 = g_popupState[1];
    g_popupState[1] = temp_v2 + 1;
    if (temp_v2 + 1 == 2) {
      if (piVar2[5] != 0) {
        if (piVar2[6] == 0) {
          piVar2[6] = 0xae;
        }
        FUN_00398258(piVar2[6],piVar2[5],1,0,0);
        temp_v1 = FUN_0014af98();
        FUN_001628c0(g_popupState[7],temp_v1,temp_v0,1);
        DAT_005f19ee = 1;
        goto LAB_00223a7c;
      }
    }
    else {
LAB_00223a7c:
      if ((g_popupState[1] >= 6) && (temp_v2 = FUN_0033e0e8(), temp_v2 == 0)) {
        DAT_005f19ee = 0;
      }
    }
    temp_v2 = FUN_0033e0e8();
    if (temp_v2 != 0) {
      temp_v3 = -0x3c;
    }
    if (g_popupState[1] <= temp_v3 + 0x5a) break;
    piVar2 = g_popupState;
    *g_popupState = 0;
    piVar2[1] = 0;
    break;
  case 5:
  case 6:
  case 7:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0x11:
  case 0x16:
    temp_v2 = g_popupState[1];
    g_popupState[1] = temp_v2 + 1;
    if (temp_v2 + 1 == 2) {
      if (piVar2[5] != 0) {
        if (piVar2[6] == 0) {
          piVar2[6] = 0xae;
        }
        FUN_00398258(piVar2[6],piVar2[5],1,0,0);
        temp_v1 = FUN_0014af98();
        FUN_001628c0(g_popupState[7],temp_v1,temp_v0,1);
        DAT_005f19ee = 1;
        goto LAB_00223b4c;
      }
    }
    else {
LAB_00223b4c:
      if ((g_popupState[1] >= 6) && (temp_v2 = FUN_0033e0e8(), temp_v2 == 0)) {
        DAT_005f19ee = 0;
      }
    }
    temp_v2 = FUN_0033e0e8();
    if (temp_v2 != 0) {
      temp_v3 = -0x3c;
    }
    if (g_popupState[1] <= temp_v3 + 0x5a) break;
    piVar2 = g_popupState;
    *g_popupState = 0;
    piVar2[1] = 0;
    break;
  case 8:
    temp_v2 = g_popupState[1];
    g_popupState[1] = temp_v2 + 1;
    if (temp_v2 + 1 == 8) {
      if (piVar2[5] != 0) {
        if (piVar2[6] == 0) {
          piVar2[6] = 0xae;
        }
        FUN_00398258(piVar2[6],piVar2[5],0,0,1);
        temp_v1 = FUN_0014af98();
        FUN_001628c0(g_popupState[7],temp_v1,temp_v0,1);
        DAT_005f19ee = 1;
        goto LAB_00223cf4;
      }
      temp_v2 = FUN_0033e0e8();
      if (temp_v2 == 0) {
        DAT_005f19ee = 0;
      }
    }
    else {
LAB_00223cf4:
      if (g_popupState[1] >= 6) {
        temp_v2 = FUN_0033e0e8();
        if (temp_v2 == 0) {
          DAT_005f19ee = 0;
        }
      }
    }
    temp_v2 = FUN_0033e0e8();
    if (temp_v2 != 0) {
      temp_v3 = -0x3c;
    }
    if (g_popupState[1] <= temp_v3 + 0x5a) break;
    piVar2 = g_popupState;
    *g_popupState = 0;
    piVar2[1] = 0;
    break;
  case 0xd:
  case 0xe:
  case 0x10:
  case 0x13:
  case 0x18:
    temp_v2 = g_popupState[1];
    g_popupState[1] = temp_v2 + 1;
    if (temp_v2 + 1 != 2) {
LAB_00223df0:
      if ((g_popupState[1] >= 6) && (temp_v2 = FUN_0033e0e8(), temp_v2 == 0)) {
        DAT_005f19ee = 0;
      }
    }
    else if (piVar2[5] != 0) {
      mapIfStart();
      if (*g_popupState == 0xd) {
        temp_v1 = 0x10000ba;
      }
      else {
        temp_v1 = 0x1000212;
      }
      FUN_00169ddc(temp_v1);
      DAT_005f19ee = 1;
      goto LAB_00223df0;
    }
    temp_v2 = FUN_0033e0e8();
    if (temp_v2 != 0) {
      temp_v3 = -0x3c;
    }
    if (g_popupState[1] <= temp_v3 + 0x5a) break;
    piVar2 = g_popupState;
    *g_popupState = 0;
    piVar2[1] = 0;
    break;
  case 0xf:
  case 0x12:
    temp_v2 = g_popupState[1];
    g_popupState[1] = temp_v2 + 1;
    if (temp_v2 + 1 == 2) {
      if (piVar2[5] != 0) {
        if (piVar2[6] == 0) {
          piVar2[6] = 0xae;
        }
        FUN_00398258(piVar2[6],piVar2[5],1,1,0);
        temp_v1 = FUN_0014af98();
        FUN_001628c0(g_popupState[7],temp_v1,temp_v0,1);
        DAT_005f19ee = 1;
        goto LAB_00223c28;
      }
    }
    else {
LAB_00223c28:
      if ((g_popupState[1] >= 6) && (temp_v2 = FUN_0033e0e8(), temp_v2 == 0)) {
        DAT_005f19ee = 0;
      }
    }
    temp_v2 = FUN_0033e0e8();
    if (temp_v2 != 0) {
      temp_v3 = -0x3c;
    }
    if (g_popupState[1] <= temp_v3 + 0x5a) break;
    piVar2 = g_popupState;
    *g_popupState = 0;
    piVar2[1] = 0;
    break;
  case 0x14:
  case 0x15:
    temp_v3 = g_popupState[1];
    g_popupState[1] = temp_v3 + 1;
    if (temp_v3 + 1 == 2) {
      if (piVar2[5] == 0) break;
      if (piVar2[6] == 0) {
        piVar2[6] = 0xae;
      }
      FUN_00398258(piVar2[6],piVar2[5],1,0,0);
      temp_v1 = FUN_0014af98();
      FUN_001628c0(g_popupState[7],temp_v1,temp_v0,1);
    }
    if (g_popupState[1] < 0x5b) break;
    piVar2 = g_popupState;
    *g_popupState = 0;
    piVar2[1] = 0;
    break;
  case 0x17:
    temp_v3 = g_popupState[1];
    g_popupState[1] = temp_v3 + 1;
    if ((temp_v3 + 1 == 2) && (piVar2[5] != 0)) {
      FUN_00398258(piVar2[6],piVar2[5],0,0,0);
      temp_v1 = FUN_0014af98();
      FUN_001628c0(g_popupState[7],temp_v1,temp_v0,1);
    }
    break;
  }
  temp_v3 = lmapSceneGetUnk0();
  if ((temp_v3 == 1) && (DAT_005f18e4 = DAT_005f18e4 + 1, DAT_005f18e4 >= 27000)) {
    if (*g_popupState != 0) {
      DAT_005f18e4 = 0;
    }
    else {
      FUN_00295108();
      FUN_00234880();
      DAT_005f18e4 = 0;
      if ((*g_popupState != 0 && *g_popupState != 0x12) &&
         (temp_v3 = FUN_0014bef4(99), temp_v3 + 1 < 0xb)) {
        FUN_002d8c90(0x12);
      }
    }
  }
  temp_v3 = FUN_00344c9c();
  if (temp_v3 >= 6) {
    DAT_005f1908 = DAT_005f1908 + 1;
  }
  else {
    DAT_005f1908 = 0;
  }
  return;
}

} /* extern "C" */
