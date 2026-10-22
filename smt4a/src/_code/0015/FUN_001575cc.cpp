/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001575cc` (_code @ 0x1575cc, 0x408 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int modelCmdAppendPacked(int, int, int, int);
int FUN_00158b2c(...);
int FUN_00158b88(unsigned char [24]);
int gfxCombinerStateInitialize(unsigned char [24]);
int FUN_0015fcec(unsigned char [24], unsigned char *);
int FUN_00169d8c(...);
int FUN_0016c744(unsigned int);
int FUN_00187a84(int, int, int, unsigned int *);
int FUN_00187d90(unsigned int, int);
int mathCopyIdentityMatrix(...);
int asdModelCommitCommandRange(unsigned char *, unsigned char *);
int asdGxGetCommandCursor(void);
int FUN_0019f828(unsigned int, int);

typedef int romwright_code(...);
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
} param_1_stack;

extern int g_renderCtx; /* 0x59dbb4 */

extern int stateValuesGetBySelector(unsigned int);
/* Supplied declaration required: modelCmdAppendPacked. */
/* Supplied declaration required: FUN_00158b2c. */
/* Supplied declaration required: FUN_00158b88. */
/* Supplied declaration required: gfxCombinerStateInitialize. */
/* Supplied declaration required: FUN_0015fcec. */
/* Supplied declaration required: FUN_00169d8c. */
extern int FUN_00169db4(unsigned int);
/* Supplied declaration required: FUN_0016c744. */
extern int asdGxPresetsGetEnable(unsigned int);
/* Supplied declaration required: FUN_00187a84. */
/* Supplied declaration required: FUN_00187d90. */
/* Supplied declaration required: mathCopyIdentityMatrix. */
/* Supplied declaration required: asdModelCommitCommandRange. */
/* Supplied declaration required: asdGxGetCommandCursor. */
/* Supplied declaration required: FUN_0019f828. */


unsigned int FUN_001575cc(int param_1)

{
/* irregular: 1 goto(s); 13 native warning(s); review required */
  char temp_v0;
  unsigned char *puVar2;
  unsigned char *puVar3;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  int *piVar12;
  unsigned int temp_v9;
  unsigned char temp_v10;
  unsigned char temp_v11;
  unsigned char temp_v12 [24];
  unsigned char temp_v13 [24];
  unsigned char temp_v14 [24];
  unsigned char temp_v15 [24];
  unsigned char temp_v16 [24];
  unsigned char temp_v17 [28];
  
  puVar3 = temp_v12;
  *(unsigned char *)(param_1 + 0x11f4) = 1;
  *(unsigned char *)(param_1 + 0x11f5) = 3;
  *(unsigned char *)(param_1 + 0x5b4) = 1;
  *(unsigned char *)(param_1 + 0x11e8) = 1;
  *(unsigned char *)(param_1 + 0x11ed) = 1;
  temp_v5 = 0;
  temp_v3 = 0;
  *(unsigned char *)(param_1 + 0x5f8) = 0;
  do {
    temp_v6 = temp_v5 + 1;
    temp_v3 = temp_v3 + 2;
    *(unsigned char *)(param_1 + temp_v5 * 0x20 + 0x1210) = 1;
    temp_v5 = temp_v5 + 2;
    *(unsigned char *)(param_1 + temp_v6 * 0x20 + 0x1210) = 1;
  } while (temp_v3 < 0xc);
  FUN_0016c744(*(unsigned int *)(param_1 + 0x530));
  if ((((*(char *)(param_1 + 0x11e8) != '\0') || (*(float *)(param_1 + 0x11d8) != 1.0f)) ||
      (*(float *)(param_1 + 0x11dc) != 1.0f)) ||
     ((*(float *)(param_1 + 0x11e0) != 1.0f || (*(float *)(param_1 + 0x11e4) != 1.0f)))) {
    *(unsigned int *)(param_1 + 0x11d8) = 0x3f800000;
    *(unsigned int *)(param_1 + 0x11dc) = 0x3f800000;
    *(unsigned int *)(param_1 + 0x11e0) = 0x3f800000;
    *(unsigned int *)(param_1 + 0x11e4) = 0x3f800000;
    FUN_0019f828(*(unsigned int *)(param_1 + 0x530),param_1 + 0x11d8);
  }
  *(unsigned char *)(param_1 + 0x11e8) = 0;
  temp_v0 = *(char *)(param_1 + 0x11ed);
  temp_v10 = temp_v0 != '\0';
  if (!temp_v10) {
    temp_v0 = *(char *)(param_1 + 0x11e9);
  }
  if (!(temp_v10 || temp_v0 != '\0')) {
    temp_v0 = *(char *)(param_1 + 0x11ea);
    temp_v10 = temp_v0 == '\0';
    if (temp_v10) {
      temp_v0 = *(char *)(param_1 + 0x11eb);
    }
    temp_v11 = temp_v10 && temp_v0 == '\0';
    if (temp_v10 && temp_v0 == '\0') {
      temp_v11 = *(char *)(param_1 + 0x11ec) == '\0';
    }
    if (!temp_v11) {
      modelCmdAppendPacked(0,0,0,0);
    }
  }
  else {
    modelCmdAppendPacked(0,0,0,0);
  }
  temp_v4 = (unsigned int)*(unsigned char *)(param_1 + 0x5b4);
  temp_v10 = temp_v4 == 0;
  if (temp_v10) {
    temp_v4 = *(unsigned int *)(param_1 + 0x534);
  }
  if (temp_v10 && temp_v4 == 0x3f800000) {
    temp_v10 = 0;
    if (*(float *)(param_1 + 0x538) == 0.0f) {
      temp_v10 = *(float *)(param_1 + 0x53c) == 0.0f;
    }
    if (temp_v10) {
      temp_v10 = 0;
      if (*(float *)(param_1 + 0x540) == 0.0f) {
        temp_v10 = *(float *)(param_1 + 0x544) == 0.0f;
      }
      if (temp_v10) {
        temp_v10 = 0;
        if (*(int *)(param_1 + 0x548) == 0x3f800000) {
          temp_v10 = *(float *)(param_1 + 0x54c) == 0.0f;
        }
        if (temp_v10) {
          temp_v10 = 0;
          if (*(float *)(param_1 + 0x550) == 0.0f) {
            temp_v10 = *(float *)(param_1 + 0x554) == 0.0f;
          }
          if (temp_v10) {
            temp_v10 = 0;
            if (*(float *)(param_1 + 0x558) == 0.0f) {
              temp_v10 = *(int *)(param_1 + 0x55c) == 0x3f800000;
            }
            if (temp_v10) {
              temp_v10 = 0;
              if (*(float *)(param_1 + 0x560) == 0.0f) {
                temp_v10 = *(float *)(param_1 + 0x564) == 0.0f;
              }
              if (temp_v10) {
                temp_v10 = 0;
                if (*(float *)(param_1 + 0x568) == 0.0f) {
                  temp_v10 = *(float *)(param_1 + 0x56c) == 0.0f;
                }
                temp_v11 = 0;
                if (temp_v10) {
                  temp_v11 = *(int *)(param_1 + 0x570) == 0x3f800000;
                }
                if (temp_v11) goto LAB_0015783c;
              }
            }
          }
        }
      }
    }
  }
  mathCopyIdentityMatrix();
  mathCopyIdentityMatrix(param_1 + 0x574);
  FUN_00187a84(param_1,param_1 + 0x1158,param_1 + 0x1118,(unsigned int *)(param_1 + 0x534));
  FUN_00187d90(*(unsigned int *)(param_1 + 0x530),param_1 + 0x1198);
  *(unsigned char *)(param_1 + 0x5b4) = 0;
LAB_0015783c:
  *(unsigned int *)(param_1 + 0x1134) = *(unsigned int *)(param_1 + 0x5d4);
  *(unsigned int *)(param_1 + 0x1120) = *(unsigned int *)(param_1 + 0x5c0);
  *(unsigned int *)(param_1 + 0x1124) = *(unsigned int *)(param_1 + 0x5c4);
  *(unsigned int *)(param_1 + 0x1128) = *(unsigned int *)(param_1 + 0x5c8);
  *(unsigned int *)(param_1 + 0x112c) = *(unsigned int *)(param_1 + 0x5cc);
  *(unsigned int *)(param_1 + 0x1130) = *(unsigned int *)(param_1 + 0x5d0);
  *(unsigned int *)(param_1 + 0x1118) = *(unsigned int *)(param_1 + 0x5b8);
  *(unsigned int *)(param_1 + 0x111c) = *(unsigned int *)(param_1 + 0x5bc);
  *(unsigned int *)(param_1 + 0x1138) = *(unsigned int *)(param_1 + 0x5d8);
  *(unsigned int *)(param_1 + 0x113c) = *(unsigned int *)(param_1 + 0x5dc);
  *(unsigned int *)(param_1 + 0x1140) = *(unsigned int *)(param_1 + 0x5e0);
  *(unsigned int *)(param_1 + 0x1144) = *(unsigned int *)(param_1 + 0x5e4);
  *(unsigned int *)(param_1 + 0x1148) = *(unsigned int *)(param_1 + 0x5e8);
  *(unsigned int *)(param_1 + 0x114c) = *(unsigned int *)(param_1 + 0x5ec);
  *(unsigned int *)(param_1 + 0x1158) = *(unsigned int *)(param_1 + 0x5b8);
  *(unsigned int *)(param_1 + 0x115c) = *(unsigned int *)(param_1 + 0x5bc);
  *(unsigned int *)(param_1 + 0x1150) = *(unsigned int *)(param_1 + 0x5f0);
  *(unsigned int *)(param_1 + 0x1154) = *(unsigned int *)(param_1 + 0x5f4);
  *(unsigned int *)(param_1 + 0x1160) = *(unsigned int *)(param_1 + 0x5c0);
  *(unsigned int *)(param_1 + 0x1164) = *(unsigned int *)(param_1 + 0x5c4);
  *(unsigned int *)(param_1 + 0x1168) = *(unsigned int *)(param_1 + 0x5c8);
  *(unsigned int *)(param_1 + 0x116c) = *(unsigned int *)(param_1 + 0x5cc);
  *(unsigned int *)(param_1 + 0x1174) = *(unsigned int *)(param_1 + 0x5d4);
  *(unsigned int *)(param_1 + 0x1170) = *(unsigned int *)(param_1 + 0x5d0);
  *(unsigned int *)(param_1 + 0x1178) = *(unsigned int *)(param_1 + 0x5d8);
  *(unsigned int *)(param_1 + 0x117c) = *(unsigned int *)(param_1 + 0x5dc);
  *(unsigned int *)(param_1 + 0x1180) = *(unsigned int *)(param_1 + 0x5e0);
  *(unsigned int *)(param_1 + 0x1184) = *(unsigned int *)(param_1 + 0x5e4);
  *(unsigned int *)(param_1 + 0x1188) = *(unsigned int *)(param_1 + 0x5e8);
  *(unsigned int *)(param_1 + 0x118c) = *(unsigned int *)(param_1 + 0x5ec);
  *(unsigned int *)(param_1 + 0x1190) = *(unsigned int *)(param_1 + 0x5f0);
  *(unsigned int *)(param_1 + 0x1194) = *(unsigned int *)(param_1 + 0x5f4);
  gfxCombinerStateInitialize(temp_v12);
  FUN_00158b88(temp_v12);
  FUN_00158b2c(temp_v13);
  FUN_00158b2c(temp_v14);
  FUN_00158b2c(temp_v15);
  FUN_00158b2c(temp_v16);
  puVar2 = temp_v17;
  FUN_00158b2c(puVar2);
  asdGxGetCommandCursor();
  FUN_0015fcec(temp_v12,puVar2);
  asdModelCommitCommandRange(puVar2,puVar3);
  temp_v4 = 0;
  do {
    temp_v6 = param_1 + (temp_v4 & 0xff) * 0x20;
    piVar12 = (int *)(temp_v6 + 0x11f8);
    temp_v3 = *(int *)(param_1 + temp_v4 * 4 + 0x1378);
    temp_v5 = piVar12[*piVar12 + 2];
    piVar12[*piVar12 + 2] = temp_v3;
    if (*(char *)(temp_v6 + 0x1210) != '\0' || temp_v5 != temp_v3) {
      (**(romwright_code **)(temp_v6 + 0x1214))();
      *(unsigned char *)(temp_v6 + 0x1210) = 0;
    }
    temp_v4 = temp_v4 + 1;
  } while ((int)temp_v4 < 9);
  temp_v7 = *(unsigned int *)(param_1 + 0x52c);
  temp_v1 = FUN_00169d8c(temp_v7);
  temp_v3 = FUN_00169db4(temp_v7);
  temp_v7 = *(unsigned int *)(g_renderCtx + 0x52c);
  temp_v5 = FUN_00169d8c();
  temp_v5 = temp_v5 - 1;
  temp_v6 = FUN_00169db4(temp_v7);
  temp_v4 = temp_v6 - 1;
  temp_v6 = asdGxPresetsGetEnable(temp_v7);
  if ((temp_v6 != 0x500) && (temp_v6 == 0x501)) {
    temp_v6 = stateValuesGetBySelector(temp_v7);
    if (temp_v6 != 0) {
      temp_v3 = temp_v3 << 1;
    }
    else {
      temp_v4 = (int)temp_v4 / 2;
    }
  }
  temp_v6 = g_renderCtx;
  temp_v1 = (temp_v5 - temp_v1) + 1;
  if (temp_v1 < 0) {
    temp_v1 = 0;
  }
  temp_v8 = temp_v5;
  if (temp_v5 < 0) {
    temp_v8 = 0;
  }
  if (temp_v5 < temp_v1) {
    temp_v1 = temp_v5;
  }
  temp_v2 = (temp_v4 - temp_v3) + 1;
  if (temp_v5 < temp_v8) {
    temp_v8 = temp_v5;
  }
  if ((int)temp_v2 < 0) {
    temp_v2 = 0;
  }
  temp_v9 = temp_v4;
  if ((int)temp_v4 < 0) {
    temp_v9 = 0;
  }
  if ((int)temp_v4 < (int)temp_v2) {
    temp_v2 = temp_v4;
  }
  if ((int)temp_v4 < (int)temp_v9) {
    temp_v9 = temp_v4;
  }
  piVar12 = (int *)(g_renderCtx + 0x1338);
  temp_v2 = temp_v2 | (temp_v1 << 0x10);
  temp_v4 = piVar12[*piVar12 + 2];
  piVar12[*piVar12 + 2] = temp_v2;
  if (*(char *)(temp_v6 + 0x1350) != '\0' || temp_v4 != temp_v2) {
    (**(romwright_code **)(temp_v6 + 0x1354))();
    *(unsigned char *)(temp_v6 + 0x1350) = 0;
  }
  temp_v3 = g_renderCtx;
  temp_v9 = temp_v9 | (temp_v8 << 0x10);
  piVar12 = (int *)(g_renderCtx + 0x1358);
  temp_v4 = piVar12[*piVar12 + 2];
  piVar12[*piVar12 + 2] = temp_v9;
  if (*(char *)(temp_v3 + 0x1370) != '\0' || temp_v4 != temp_v9) {
    (**(romwright_code **)(temp_v3 + 0x1374))();
    *(unsigned char *)(temp_v3 + 0x1370) = 0;
  }
  temp_v3 = g_renderCtx;
  piVar12 = (int *)(g_renderCtx + 0x1318);
  temp_v5 = piVar12[*piVar12 + 2];
  piVar12[*piVar12 + 2] = 3;
  if (*(char *)(temp_v3 + 0x1330) != '\0' || temp_v5 != 3) {
    (**(romwright_code **)(temp_v3 + 0x1334))();
    *(unsigned char *)(temp_v3 + 0x1330) = 0;
  }
  return 1;
}

} /* extern "C" */
