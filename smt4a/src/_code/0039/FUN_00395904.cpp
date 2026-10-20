/* NON_MATCHING: draft split of the romwright decompilation of the merged unit (the state machine and the camera update that follows it): the decompiler's temporaries are not yet named. */
#include "common.h"

extern "C" {

int FUN_00330108(float *, float *, float *);
int FUN_00376c64(void);

int FUN_001bbf0c(void);
int FUN_001bc124(void);
int FUN_00272e64(void);
int FUN_002b56e0(void);
int FUN_002b5cd4(void);
int FUN_002d1780(void);
int FUN_002d1e44(float *);
int FUN_0030250c(void);
int FUN_003026d8(void);
int FUN_003033d4(void);
int FUN_0033982c(void);
int FUN_0033a374(void);
int FUN_00352568(void);

extern int *DAT_005806a4; /* 0x5806a4 */
extern int g_lmapScene; /* 0x581288 */
extern int g_gameState; /* 0x5f15fc */
extern float DAT_005f16b0; /* 0x5f16b0 */
extern float DAT_005f16b4; /* 0x5f16b4 */
extern float DAT_005f16b8; /* 0x5f16b8 */
extern float DAT_005f16bc; /* 0x5f16bc */
extern int DAT_005f16f0; /* 0x5f16f0 */
extern int DAT_005f16f4; /* 0x5f16f4 */
extern int DAT_005f16f8; /* 0x5f16f8 */
extern int DAT_005f16fc; /* 0x5f16fc */
extern int DAT_005f1700; /* 0x5f1700 */
extern int DAT_005f1704; /* 0x5f1704 */
extern int DAT_005f1708; /* 0x5f1708 */
extern int DAT_005f170c; /* 0x5f170c */
extern int DAT_005f1710; /* 0x5f1710 */
extern int DAT_005f1714; /* 0x5f1714 */
extern int DAT_005f1718; /* 0x5f1718 */
extern int DAT_005f171c; /* 0x5f171c */
extern int DAT_005f1720; /* 0x5f1720 */
extern float DAT_005f1a18; /* 0x5f1a18 */
extern float DAT_005f1a1c; /* 0x5f1a1c */
extern int DAT_005f1a20; /* 0x5f1a20 */
extern float DAT_005f1a24; /* 0x5f1a24 */
extern float DAT_005f1a28; /* 0x5f1a28 */
extern float DAT_005f1a2c; /* 0x5f1a2c */
extern float DAT_005f1a30; /* 0x5f1a30 */
extern float DAT_005f1a34; /* 0x5f1a34 */
extern float DAT_005f1a38; /* 0x5f1a38 */
extern float DAT_005f1a3c; /* 0x5f1a3c */
extern float DAT_005f1a40; /* 0x5f1a40 */
extern float DAT_005f1a44; /* 0x5f1a44 */
extern int DAT_005f1a48; /* 0x5f1a48 */
extern unsigned char DAT_005f1a4c; /* 0x5f1a4c */
extern signed char DAT_005f1a4d; /* 0x5f1a4d */

#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif

int FUN_00397aa4(void);
void FUN_00395904(void)
{
  unsigned int temp_v0;
  unsigned char temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int *piVar6;
  int *piVar7;
  float *pfVar8;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v9;
  int *piVar11;
  int temp_v10;
  unsigned int in_fpscr;
  float temp_v11;
  float temp_v15;
  float temp_v20;
  float temp_v21;
  float temp_v22;
  float temp_v23;
  float temp_v24;
  float temp_v25;
  float temp_v26;
  float temp_v27;
  float temp_v28;
  float temp_v29;
  float temp_v30;
  float temp_v31;
  int temp_v32;
  float temp_v33;
  float temp_v34;
  float temp_v35;
  float temp_v36;
  float temp_v37;
  float temp_v38;
  unsigned int temp_v44;
  int temp_v45;
  unsigned int temp_v46;
  float temp_v47;
  float fStack_40;
  float fStack_3c;

  temp_v4 = DAT_005f1714;
  temp_v3 = DAT_005f1710;
  temp_v2 = DAT_005f16f8;
  temp_v10 = DAT_005f16f4;
  temp_v9 = g_lmapScene;
  piVar6 = DAT_005806a4;
  switch(*DAT_005806a4) {
  case 0:
    FUN_0033982c();
    break;
  case 1:
    temp_v21 = (float)DAT_005806a4[6];
    FUN_002b5cd4();
    temp_v0 = in_fpscr & 0xfffffff;
    temp_v24 = temp_v21;
    if (temp_v21 < 0.0f) {
      temp_v24 = -temp_v21;
    }
    temp_v22 = temp_v24 * 0.2f;
    in_fpscr = temp_v0 | ((unsigned int)(temp_v22 <= temp_v24) << 0x1d);
    if (!romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0)) {
      DAT_005806a4[6] = *(int *)(g_lmapScene + 0x50);
    }
    else {
      in_fpscr = temp_v0 | ((unsigned int)(0.0f <= temp_v21) << 0x1d);
      if (!romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0)) {
        temp_v22 = (float)DAT_005806a4[6] - temp_v22;
      }
      else {
        temp_v22 = (float)DAT_005806a4[6] + temp_v22;
      }
      DAT_005806a4[6] = (int)temp_v22;
    }
    break;
  case 2:
    DAT_005806a4[6] = *(int *)(g_lmapScene + 0x50);
    break;
  case 3:
    DAT_005806a4[0x1d] = DAT_005f16f0;
    piVar6[0x1e] = temp_v10;
    piVar6[0x1f] = temp_v2;
    temp_v10 = DAT_005f1704;
    temp_v9 = DAT_005f1700;
    piVar6[0x1a] = DAT_005f16fc;
    piVar6[0x1b] = temp_v9;
    piVar6[0x1c] = temp_v10;
    piVar6[0x20] = DAT_005f1708;
    break;
  case 4:
    DAT_005806a4[0x24] = DAT_005f170c;
    piVar6[0x25] = temp_v3;
    piVar6[0x26] = temp_v4;
    temp_v10 = DAT_005f171c;
    temp_v9 = DAT_005f1718;
    piVar6[0x23] = DAT_005f1720;
    piVar6[0x21] = temp_v9;
    piVar6[0x22] = temp_v10;
    break;
  case 5:
    FUN_002d1780();
    break;
  case 6:
    temp_v21 = 0.017453292f;
    temp_v24 = *(float *)(g_lmapScene + 0x20);
    temp_v10 = *(int *)(g_lmapScene + 0x24);
    DAT_005806a4[0x17] = *(int *)(g_lmapScene + 0x1c);
    piVar6[0x18] = (int)temp_v24;
    piVar6[0x19] = temp_v10;
    piVar6[0x18] = (int)(temp_v24 + 150.0f);
    temp_v24 = *(float *)(temp_v9 + 0x2c);
    temp_v10 = *(int *)(temp_v9 + 0x30);
    piVar6[0x14] = *(int *)(temp_v9 + 0x28);
    piVar6[0x15] = (int)temp_v24;
    piVar6[0x16] = temp_v10;
    piVar6[0x15] = (int)(temp_v24 + 150.0f);
    temp_v24 = *(float *)(temp_v9 + 0x50) * 0.017453292f;
    FUN_001bc124();
    temp_v22 = 600.0f;
    DAT_005806a4[0x14] = (int)((float)DAT_005806a4[0x14] + temp_v24 * 600.0f);
    temp_v21 = *(float *)(g_lmapScene + 0x50) * temp_v21;
    FUN_001bbf0c();
    DAT_005806a4[0x16] = (int)((float)DAT_005806a4[0x16] + temp_v21 * temp_v22);
    break;
  case 7:
    temp_v24 = *(float *)(g_lmapScene + 0x4c);
    FUN_00272e64();
    temp_v10 = (int)temp_v24;
    temp_v24 = 0.017453292f;
    temp_v9 = temp_v5;
    if (temp_v10 != 0x5a) {
      temp_v9 = temp_v10 - 0x100;
    }
    temp_v21 = (float)DAT_005806a4[0xa6] * 0.017453292f;
    if (!(temp_v10 != 0x5a && temp_v9 != 0xe)) {
      FUN_001bc124();
      piVar6 = DAT_005806a4;
      DAT_005806a4[0xd] = (int)temp_v21;
      temp_v24 = (float)piVar6[0xa6] * temp_v24;
      FUN_001bbf0c();
      piVar6 = DAT_005806a4;
      DAT_005806a4[0xc] = (int)temp_v24;
      piVar6[0xb] = 0;
    }
    else {
      FUN_001bc124();
      piVar6 = DAT_005806a4;
      DAT_005806a4[0xb] = (int)temp_v21;
      temp_v24 = (float)piVar6[0xa6] * temp_v24;
      FUN_001bbf0c();
      piVar6 = DAT_005806a4;
      DAT_005806a4[0xc] = (int)temp_v24;
      piVar6[0xd] = 0;
    }
    piVar6 = DAT_005806a4;
    temp_v24 = (float)DAT_005806a4[0xa6] + 10.0f;
    DAT_005806a4[0xa6] = (int)temp_v24;
    if ((int)temp_v24 >= 0x43340001) {
      temp_v24 = 180.0f;
    }
    piVar6[0xa6] = (int)temp_v24;
    break;
  case 8:
    temp_v24 = *(float *)(g_lmapScene + 0x4c);
    FUN_00272e64();
    temp_v10 = (int)temp_v24;
    temp_v24 = 0.017453292f;
    temp_v9 = temp_v6;
    if (temp_v10 != 0x5a) {
      temp_v9 = temp_v10 - 0x100;
    }
    temp_v21 = (float)DAT_005806a4[0xa6] * 0.017453292f;
    if (!(temp_v10 != 0x5a && temp_v9 != 0xe)) {
      FUN_001bc124();
      piVar6 = DAT_005806a4;
      DAT_005806a4[0xd] = (int)temp_v21;
      temp_v24 = (float)piVar6[0xa6] * temp_v24;
      FUN_001bbf0c();
      piVar6 = DAT_005806a4;
      DAT_005806a4[0xc] = (int)temp_v24;
      piVar6[0xb] = 0;
    }
    else {
      FUN_001bc124();
      piVar6 = DAT_005806a4;
      DAT_005806a4[0xb] = (int)temp_v21;
      temp_v24 = (float)piVar6[0xa6] * temp_v24;
      FUN_001bbf0c();
      piVar6 = DAT_005806a4;
      DAT_005806a4[0xc] = (int)temp_v24;
      piVar6[0xd] = 0;
    }
    temp_v24 = (float)DAT_005806a4[0xa6];
    temp_v0 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v24 < 0.0f) << 0x1f) |
            ((unsigned int)(temp_v24 == 0.0f) << 0x1e);
    in_fpscr = temp_v0 | ((unsigned int)(temp_v24 != temp_v24) << 0x1c);
    temp_v1 = (unsigned char)(temp_v0 >> 0x18);
    piVar6 = DAT_005806a4;
    if ((unsigned char)((temp_v1 >> 6) & 1) || temp_v1 >> 7 != ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
      temp_v24 = 0.0f;
    }
    piVar6[0xa6] = (int)temp_v24;
    break;
  case 9:
    temp_v24 = *(float *)(g_lmapScene + 0x4c);
    FUN_00272e64();
    temp_v10 = (int)temp_v24;
    temp_v24 = 0.017453292f;
    temp_v9 = temp_v7;
    if (temp_v10 != 0x5a) {
      temp_v9 = temp_v10 - 0x100;
    }
    temp_v21 = (float)DAT_005806a4[0xa6] * 0.017453292f;
    if (!(temp_v10 != 0x5a && temp_v9 != 0xe)) {
      FUN_001bc124();
      piVar6 = DAT_005806a4;
      DAT_005806a4[0xd] = (int)temp_v21;
      temp_v24 = (float)piVar6[0xa6] * temp_v24;
      FUN_001bbf0c();
      piVar6 = DAT_005806a4;
      DAT_005806a4[0xc] = (int)temp_v24;
      piVar6[0xb] = 0;
    }
    else {
      FUN_001bc124();
      piVar6 = DAT_005806a4;
      DAT_005806a4[0xb] = (int)temp_v21;
      temp_v24 = (float)piVar6[0xa6] * temp_v24;
      FUN_001bbf0c();
      piVar6 = DAT_005806a4;
      DAT_005806a4[0xc] = (int)temp_v24;
      piVar6[0xd] = 0;
    }
    piVar6 = DAT_005806a4;
    temp_v24 = (float)DAT_005806a4[0xa6] - 10.0f;
    DAT_005806a4[0xa6] = (int)temp_v24;
    temp_v0 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v24 < 0.0f) << 0x1f) |
            ((unsigned int)(temp_v24 == 0.0f) << 0x1e);
    in_fpscr = temp_v0 | ((unsigned int)(temp_v24 != temp_v24) << 0x1c);
    temp_v1 = (unsigned char)(temp_v0 >> 0x18);
    if ((unsigned char)((temp_v1 >> 6) & 1) || temp_v1 >> 7 != ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
      temp_v24 = 0.0f;
    }
    piVar6[0xa6] = (int)temp_v24;
    break;
  case 10:
    temp_v9 = DAT_005806a4[1];
    if (temp_v9 != 0) {
      if (temp_v9 != 1) {
        if (temp_v9 == 2) {
          FUN_0033a374();
          piVar6 = DAT_005806a4;
          DAT_005806a4 = piVar6;
          if (temp_v9 != 0) {
            piVar6[1] = piVar6[1] + 1;
            piVar6[2] = 0;
          }
        }
      }
      else {
        FUN_0033a374();
        if (temp_v9 != 0) {
          temp_v27 = (float)piVar6[0x95];
          temp_v28 = (float)piVar6[0x96];
          temp_v29 = (float)piVar6[0x97];
          temp_v21 = 0.017453292f;
          temp_v30 = (float)piVar6[0x98];
          temp_v31 = (float)piVar6[0x99];
          temp_v32 = piVar6[0x9a];
          temp_v22 = *(float *)(g_lmapScene + 0x30);
          temp_v24 = *(float *)(g_lmapScene + 0x50) * 0.017453292f;
          temp_v23 = *(float *)(g_lmapScene + 0x28);
          temp_v26 = *(float *)(g_lmapScene + 0x2c);
          FUN_001bc124();
          temp_v25 = 90.0f;
          temp_v23 = temp_v23 + temp_v24 * 90.0f;
          temp_v26 = temp_v26 + 65.0f;
          temp_v24 = *(float *)(g_lmapScene + 0x50) * temp_v21;
          FUN_001bbf0c();
          temp_v35 = temp_v22 + temp_v24 * temp_v25;
          temp_v20 = 110.0f;
          temp_v22 = *(float *)(g_lmapScene + 0x30);
          temp_v25 = *(float *)(g_lmapScene + 0x28);
          temp_v11 = *(float *)(g_lmapScene + 0x2c);
          temp_v24 = (*(float *)(g_lmapScene + 0x50) - 110.0f) * temp_v21;
          temp_v33 = temp_v23;
          temp_v34 = temp_v26;
          FUN_001bc124();
          temp_v23 = 120.0f;
          temp_v25 = temp_v25 + temp_v24 * 120.0f;
          temp_v37 = temp_v11 + 250.0f;
          temp_v21 = (*(float *)(g_lmapScene + 0x50) - temp_v20) * temp_v21;
          FUN_001bbf0c();
          temp_v38 = temp_v22 + temp_v21 * temp_v23;
          temp_v45 = 300;
          temp_v44 = 0;
          temp_v46 = 0;
          temp_v36 = temp_v25;
          FUN_002d1e44(&temp_v27);
          piVar6 = DAT_005806a4;
          DAT_005806a4[1] = DAT_005806a4[1] + 1;
          piVar6[2] = 0;
        }
      }
    }
    else {
      temp_v27 = (float)DAT_005806a4[0x17];
      temp_v28 = (float)DAT_005806a4[0x18];
      temp_v29 = (float)DAT_005806a4[0x19];
      temp_v21 = 0.017453292f;
      temp_v30 = (float)DAT_005806a4[0x14];
      temp_v31 = (float)DAT_005806a4[0x15];
      temp_v32 = DAT_005806a4[0x16];
      temp_v22 = *(float *)(g_lmapScene + 0x30);
      temp_v24 = *(float *)(g_lmapScene + 0x50) * 0.017453292f;
      temp_v23 = *(float *)(g_lmapScene + 0x28);
      temp_v26 = *(float *)(g_lmapScene + 0x2c);
      FUN_001bc124();
      temp_v25 = 90.0f;
      temp_v23 = temp_v23 + temp_v24 * 90.0f;
      temp_v26 = temp_v26 + 75.0f;
      temp_v24 = *(float *)(g_lmapScene + 0x50) * temp_v21;
      FUN_001bbf0c();
      temp_v35 = temp_v22 + temp_v24 * temp_v25;
      temp_v20 = 110.0f;
      temp_v22 = *(float *)(g_lmapScene + 0x30);
      temp_v25 = *(float *)(g_lmapScene + 0x28);
      temp_v11 = *(float *)(g_lmapScene + 0x2c);
      temp_v24 = (*(float *)(g_lmapScene + 0x50) - 110.0f) * temp_v21;
      temp_v33 = temp_v23;
      temp_v34 = temp_v26;
      FUN_001bc124();
      temp_v23 = 120.0f;
      temp_v25 = temp_v25 + temp_v24 * 120.0f;
      temp_v37 = temp_v11 + 210.0f;
      temp_v21 = (*(float *)(g_lmapScene + 0x50) - temp_v20) * temp_v21;
      FUN_001bbf0c();
      temp_v38 = temp_v22 + temp_v21 * temp_v23;
      temp_v45 = 8;
      temp_v44 = 0;
      temp_v46 = 0;
      temp_v36 = temp_v25;
      FUN_002d1e44(&temp_v27);
      piVar6 = DAT_005806a4;
      *(unsigned char *)(DAT_005806a4 + 0x88) = 1;
      piVar7 = piVar6 + 1;
      *piVar7 = *piVar7 + 1;
      piVar6[2] = 0;
    }
    break;
  case 0xb:
    temp_v9 = DAT_005806a4[1];
    if (temp_v9 != 0) {
      if (temp_v9 != 1) {
        if (temp_v9 == 2) {
          FUN_0033a374();
          piVar6 = DAT_005806a4;
          DAT_005806a4 = piVar6;
          if (temp_v9 != 0) {
            piVar6[1] = piVar6[1] + 1;
            piVar6[2] = 0;
          }
        }
      }
      else {
        FUN_0033a374();
        if (temp_v9 != 0) {
          temp_v27 = (float)piVar6[0x95];
          temp_v28 = (float)piVar6[0x96];
          temp_v29 = (float)piVar6[0x97];
          temp_v21 = 0.017453292f;
          temp_v30 = (float)piVar6[0x98];
          temp_v31 = (float)piVar6[0x99];
          temp_v32 = piVar6[0x9a];
          temp_v22 = *(float *)(g_lmapScene + 0x30);
          temp_v24 = *(float *)(g_lmapScene + 0x50) * 0.017453292f;
          temp_v23 = *(float *)(g_lmapScene + 0x28);
          temp_v26 = *(float *)(g_lmapScene + 0x2c);
          FUN_001bc124();
          temp_v20 = 120.0f;
          temp_v23 = temp_v23 + temp_v24 * 120.0f;
          temp_v26 = temp_v26 + 70.0f;
          temp_v24 = *(float *)(g_lmapScene + 0x50) * temp_v21;
          FUN_001bbf0c();
          temp_v35 = temp_v22 + temp_v24 * temp_v20;
          temp_v22 = *(float *)(g_lmapScene + 0x30);
          temp_v25 = *(float *)(g_lmapScene + 0x28);
          temp_v11 = *(float *)(g_lmapScene + 0x2c);
          temp_v24 = (*(float *)(g_lmapScene + 0x50) - temp_v20) * temp_v21;
          temp_v33 = temp_v23;
          temp_v34 = temp_v26;
          FUN_001bc124();
          temp_v23 = 140.0f;
          temp_v25 = temp_v25 + temp_v24 * 140.0f;
          temp_v37 = temp_v11 + 200.0f;
          temp_v21 = (*(float *)(g_lmapScene + 0x50) - temp_v20) * temp_v21;
          FUN_001bbf0c();
          temp_v38 = temp_v22 + temp_v21 * temp_v23;
          temp_v45 = 300;
          temp_v44 = 0;
          temp_v46 = 0;
          temp_v36 = temp_v25;
          FUN_002d1e44(&temp_v27);
          piVar6 = DAT_005806a4;
          DAT_005806a4[1] = DAT_005806a4[1] + 1;
          piVar6[2] = 0;
        }
      }
    }
    else {
      pfVar8 = (float *)(DAT_005806a4 + 0x17);
      DAT_005806a4[3] = 0;
      temp_v27 = *pfVar8;
      temp_v28 = (float)piVar6[0x18];
      temp_v29 = (float)piVar6[0x19];
      temp_v21 = 0.017453292f;
      temp_v30 = (float)piVar6[0x14];
      temp_v31 = (float)piVar6[0x15];
      temp_v32 = piVar6[0x16];
      temp_v22 = *(float *)(g_lmapScene + 0x30);
      temp_v24 = *(float *)(g_lmapScene + 0x50) * 0.017453292f;
      temp_v23 = *(float *)(g_lmapScene + 0x28);
      temp_v26 = *(float *)(g_lmapScene + 0x2c);
      FUN_001bc124();
      temp_v20 = 120.0f;
      temp_v23 = temp_v23 + temp_v24 * 120.0f;
      temp_v26 = temp_v26 + 70.0f;
      temp_v24 = *(float *)(g_lmapScene + 0x50) * temp_v21;
      FUN_001bbf0c();
      temp_v35 = temp_v22 + temp_v24 * temp_v20;
      temp_v22 = *(float *)(g_lmapScene + 0x30);
      temp_v25 = *(float *)(g_lmapScene + 0x28);
      temp_v11 = *(float *)(g_lmapScene + 0x2c);
      temp_v24 = (*(float *)(g_lmapScene + 0x50) - temp_v20) * temp_v21;
      temp_v33 = temp_v23;
      temp_v34 = temp_v26;
      FUN_001bc124();
      temp_v23 = 140.0f;
      temp_v25 = temp_v25 + temp_v24 * 140.0f;
      temp_v37 = temp_v11 + 200.0f;
      temp_v21 = (*(float *)(g_lmapScene + 0x50) - temp_v20) * temp_v21;
      FUN_001bbf0c();
      temp_v38 = temp_v22 + temp_v21 * temp_v23;
      temp_v45 = 8;
      temp_v44 = 0;
      temp_v46 = 0;
      temp_v36 = temp_v25;
      FUN_002d1e44(&temp_v27);
      piVar6 = DAT_005806a4;
      *(unsigned char *)(DAT_005806a4 + 0x88) = 1;
      piVar7 = piVar6 + 1;
      *piVar7 = *piVar7 + 1;
      piVar6[2] = 0;
    }
    break;
  case 0xc:
    FUN_003026d8();
    break;
  case 0xd:
    FUN_002b56e0();
    break;
  case 0xe:
    temp_v9 = DAT_005806a4[1];
    if (temp_v9 != 0) {
      if (temp_v9 != 1) {
        if (temp_v9 == 2) {
          FUN_0033a374();
          piVar6 = DAT_005806a4;
          DAT_005806a4 = piVar6;
          if (temp_v9 != 0) {
            piVar6[1] = piVar6[1] + 1;
            piVar6[2] = 0;
          }
        }
      }
      else {
        FUN_0033a374();
        if (temp_v9 != 0) {
          temp_v27 = (float)piVar6[0x95];
          temp_v28 = (float)piVar6[0x96];
          temp_v29 = (float)piVar6[0x97];
          temp_v21 = 0.017453292f;
          temp_v30 = (float)piVar6[0x98];
          temp_v31 = (float)piVar6[0x99];
          temp_v32 = piVar6[0x9a];
          temp_v22 = *(float *)(g_lmapScene + 0x30);
          temp_v24 = *(float *)(g_lmapScene + 0x50) * 0.017453292f;
          temp_v23 = *(float *)(g_lmapScene + 0x28);
          temp_v25 = *(float *)(g_lmapScene + 0x2c);
          FUN_001bc124();
          temp_v26 = 40.0f;
          temp_v34 = temp_v25 + 20.0f;
          temp_v33 = temp_v23 + temp_v24 * 40.0f;
          if (g_gameState == 0x16) {
            temp_v34 = temp_v34 + 20.0f;
          }
          temp_v24 = *(float *)(g_lmapScene + 0x50) * temp_v21;
          FUN_001bbf0c();
          temp_v35 = temp_v22 + temp_v24 * temp_v26;
          temp_v11 = 170.0f;
          temp_v22 = *(float *)(g_lmapScene + 0x30);
          temp_v23 = *(float *)(g_lmapScene + 0x28);
          temp_v25 = *(float *)(g_lmapScene + 0x2c);
          temp_v24 = (*(float *)(g_lmapScene + 0x50) - 170.0f) * temp_v21;
          FUN_001bc124();
          temp_v26 = 180.0f;
          temp_v23 = temp_v23 + temp_v24 * 180.0f;
          temp_v37 = temp_v25 + 221.0f;
          temp_v21 = (*(float *)(g_lmapScene + 0x50) - temp_v11) * temp_v21;
          FUN_001bbf0c();
          temp_v38 = temp_v22 + temp_v21 * temp_v26;
          if (g_gameState == 0x16) {
            temp_v37 = temp_v37 + 80.0f;
          }
          temp_v45 = 0x1c2;
          temp_v44 = 0;
          temp_v46 = 0;
          temp_v36 = temp_v23;
          FUN_002d1e44(&temp_v27);
          piVar6 = DAT_005806a4;
          DAT_005806a4[1] = DAT_005806a4[1] + 1;
          piVar6[2] = 0;
        }
      }
    }
    else {
      temp_v27 = (float)DAT_005806a4[0x17];
      temp_v28 = (float)DAT_005806a4[0x18];
      temp_v29 = (float)DAT_005806a4[0x19];
      temp_v21 = 0.017453292f;
      temp_v30 = (float)DAT_005806a4[0x14];
      temp_v31 = (float)DAT_005806a4[0x15];
      temp_v32 = DAT_005806a4[0x16];
      temp_v22 = *(float *)(g_lmapScene + 0x30);
      temp_v24 = *(float *)(g_lmapScene + 0x50) * 0.017453292f;
      temp_v23 = *(float *)(g_lmapScene + 0x28);
      temp_v25 = *(float *)(g_lmapScene + 0x2c);
      FUN_001bc124();
      temp_v26 = 40.0f;
      temp_v34 = temp_v25 + 20.0f;
      temp_v33 = temp_v23 + temp_v24 * 40.0f;
      if (g_gameState == 0x16) {
        temp_v34 = temp_v34 + 20.0f;
      }
      temp_v24 = *(float *)(g_lmapScene + 0x50) * temp_v21;
      FUN_001bbf0c();
      temp_v35 = temp_v22 + temp_v24 * temp_v26;
      temp_v11 = 160.0f;
      temp_v22 = *(float *)(g_lmapScene + 0x30);
      temp_v23 = *(float *)(g_lmapScene + 0x28);
      temp_v25 = *(float *)(g_lmapScene + 0x2c);
      temp_v24 = (*(float *)(g_lmapScene + 0x50) - 160.0f) * temp_v21;
      FUN_001bc124();
      temp_v26 = 180.0f;
      temp_v23 = temp_v23 + temp_v24 * 180.0f;
      temp_v37 = temp_v25 + 220.0f;
      temp_v21 = (*(float *)(g_lmapScene + 0x50) - temp_v11) * temp_v21;
      FUN_001bbf0c();
      temp_v38 = temp_v22 + temp_v21 * temp_v26;
      if (g_gameState == 0x16) {
        temp_v37 = temp_v37 + 80.0f;
      }
      temp_v45 = 0x3c;
      temp_v44 = 0;
      temp_v46 = 0;
      temp_v36 = temp_v23;
      FUN_002d1e44(&temp_v27);
      piVar6 = DAT_005806a4;
      *(unsigned char *)(DAT_005806a4 + 0x88) = 1;
      piVar7 = piVar6 + 1;
      *piVar7 = *piVar7 + 1;
      piVar6[2] = 0;
    }
    break;
  case 0xf:
    FUN_0030250c();
    break;
  case 0x10:
    FUN_00352568();
    break;
  case 0x12:
    temp_v9 = DAT_005806a4[1];
    if (temp_v9 != 0) {
      if (temp_v9 == 1) {
        FUN_0033a374();
        piVar6 = DAT_005806a4;
        DAT_005806a4 = piVar6;
        if (temp_v9 != 0) {
          piVar6[1] = piVar6[1] + 1;
          piVar6[2] = 0;
        }
      }
    }
    else {
      DAT_005806a4[3] = 0;
      temp_v27 = (float)piVar6[0x17];
      temp_v28 = (float)piVar6[0x18];
      temp_v29 = (float)piVar6[0x19];
      temp_v21 = 0.017453292f;
      temp_v24 = *(float *)(g_lmapScene + 0x50) * 0.017453292f;
      FUN_001bc124();
      temp_v22 = 100.0f;
      temp_v27 = temp_v27 + temp_v24 * 100.0f;
      temp_v28 = temp_v28 - 100.0f;
      temp_v30 = (float)DAT_005806a4[0x14];
      temp_v31 = (float)DAT_005806a4[0x15];
      temp_v32 = DAT_005806a4[0x16];
      temp_v24 = *(float *)(g_lmapScene + 0x50) * temp_v21;
      FUN_001bc124();
      temp_v30 = temp_v30 + temp_v24 * temp_v22;
      temp_v31 = temp_v31 - temp_v22;
      temp_v22 = *(float *)(g_lmapScene + 0x30);
      temp_v24 = *(float *)(g_lmapScene + 0x50) * temp_v21;
      temp_v23 = *(float *)(g_lmapScene + 0x28);
      temp_v26 = *(float *)(g_lmapScene + 0x2c);
      FUN_001bc124();
      temp_v25 = 50.0f;
      temp_v23 = temp_v23 + temp_v24 * 50.0f;
      temp_v26 = temp_v26 + 200.0f;
      temp_v24 = *(float *)(g_lmapScene + 0x50) * temp_v21;
      FUN_001bbf0c();
      temp_v35 = temp_v22 + temp_v24 * temp_v25;
      temp_v20 = 180.0f;
      temp_v22 = *(float *)(g_lmapScene + 0x30);
      temp_v25 = *(float *)(g_lmapScene + 0x28);
      temp_v11 = *(float *)(g_lmapScene + 0x2c);
      temp_v24 = (*(float *)(g_lmapScene + 0x50) + 180.0f) * temp_v21;
      temp_v33 = temp_v23;
      temp_v34 = temp_v26;
      FUN_001bc124();
      temp_v23 = 400.0f;
      temp_v25 = temp_v25 + temp_v24 * 400.0f;
      temp_v37 = temp_v11 + 300.0f;
      temp_v21 = (*(float *)(g_lmapScene + 0x50) + temp_v20) * temp_v21;
      FUN_001bbf0c();
      temp_v38 = temp_v22 + temp_v21 * temp_v23;
      temp_v45 = 0x14;
      temp_v44 = 0;
      temp_v46 = 0;
      temp_v36 = temp_v25;
      FUN_002d1e44(&temp_v27);
      piVar6 = DAT_005806a4;
      piVar7 = DAT_005806a4 + 1;
      *(unsigned char *)(DAT_005806a4 + 0x88) = 1;
      *piVar7 = piVar6[1] + 1;
      piVar6[2] = 0;
      piVar6[3] = 0;
    }
    break;
  case 0x13:
    temp_v9 = DAT_005806a4[1];
    if (temp_v9 != 0) {
      if (temp_v9 == 1) {
        FUN_0033a374();
        piVar6 = DAT_005806a4;
        DAT_005806a4 = piVar6;
        if (temp_v9 != 0) {
          piVar6[1] = piVar6[1] + 1;
          piVar6[2] = 0;
        }
      }
    }
    else {
      pfVar8 = (float *)(DAT_005806a4 + 0x17);
      DAT_005806a4[3] = 0;
      temp_v27 = *pfVar8;
      temp_v28 = (float)piVar6[0x18];
      temp_v29 = (float)piVar6[0x19];
      temp_v21 = 0.017453292f;
      temp_v30 = (float)piVar6[0x14];
      temp_v31 = (float)piVar6[0x15];
      temp_v32 = piVar6[0x16];
      temp_v22 = *(float *)(g_lmapScene + 0x30);
      temp_v24 = *(float *)(g_lmapScene + 0x50) * 0.017453292f;
      temp_v23 = *(float *)(g_lmapScene + 0x28);
      temp_v26 = *(float *)(g_lmapScene + 0x2c);
      FUN_001bc124();
      temp_v25 = 100.0f;
      temp_v23 = temp_v23 + temp_v24 * 100.0f;
      temp_v26 = temp_v26 - 150.0f;
      temp_v24 = *(float *)(g_lmapScene + 0x50) * temp_v21;
      FUN_001bbf0c();
      temp_v35 = temp_v22 + temp_v24 * temp_v25;
      temp_v22 = *(float *)(g_lmapScene + 0x30);
      temp_v25 = *(float *)(g_lmapScene + 0x28);
      temp_v11 = *(float *)(g_lmapScene + 0x2c);
      temp_v24 = (*(float *)(g_lmapScene + 0x50) - 38.0f) * temp_v21;
      temp_v33 = temp_v23;
      temp_v34 = temp_v26;
      FUN_001bc124();
      temp_v23 = 900.0f;
      temp_v25 = temp_v25 + temp_v24 * 900.0f;
      temp_v37 = temp_v11 + 250.0f;
      temp_v21 = (*(float *)(g_lmapScene + 0x50) - 42.5f) * temp_v21;
      FUN_001bbf0c();
      temp_v38 = temp_v22 + temp_v21 * temp_v23;
      temp_v45 = 1;
      temp_v44 = 0;
      temp_v46 = 0;
      temp_v36 = temp_v25;
      FUN_002d1e44(&temp_v27);
      piVar6 = DAT_005806a4;
      piVar7 = DAT_005806a4 + 1;
      *(unsigned char *)(DAT_005806a4 + 0x88) = 1;
      *piVar7 = piVar6[1] + 1;
      piVar6[2] = 0;
      piVar6[3] = 0;
    }
    break;
  case 0x14:
    temp_v9 = DAT_005806a4[1];
    if (temp_v9 != 0) {
      if ((temp_v9 == 1) && (FUN_0033a374(), piVar6 = DAT_005806a4, temp_v9 != 0)) {
        DAT_005806a4[0x86] = 0;
        piVar6[0x87] = 0;
        piVar6[6] = (int)(*(float *)(g_lmapScene + 0x50) + 110.0f);
        piVar6[0x14] = (int)temp_v36;
        piVar6[0x15] = (int)temp_v37;
        piVar6[0x16] = (int)temp_v38;
        piVar6[0x17] = (int)temp_v33;
        piVar6[0x18] = (int)temp_v34;
        piVar6[0x19] = (int)temp_v35;
        piVar6[1] = piVar6[1] + 1;
        piVar6[2] = 0;
      }
    }
    else {
      pfVar8 = (float *)(DAT_005806a4 + 0x17);
      DAT_005806a4[3] = 0;
      temp_v27 = *pfVar8;
      temp_v28 = (float)piVar6[0x18];
      temp_v29 = (float)piVar6[0x19];
      temp_v21 = 0.017453292f;
      temp_v30 = (float)piVar6[0x14];
      temp_v31 = (float)piVar6[0x15];
      temp_v32 = piVar6[0x16];
      temp_v22 = *(float *)(g_lmapScene + 0x30);
      temp_v24 = *(float *)(g_lmapScene + 0x50) * 0.017453292f;
      temp_v23 = *(float *)(g_lmapScene + 0x28);
      temp_v26 = *(float *)(g_lmapScene + 0x2c);
      FUN_001bc124();
      temp_v25 = -30.0f;
      temp_v23 = temp_v23 + temp_v24 * -30.0f;
      temp_v26 = temp_v26 - 750.0f;
      temp_v24 = *(float *)(g_lmapScene + 0x50) * temp_v21;
      FUN_001bbf0c();
      temp_v35 = temp_v22 + temp_v24 * temp_v25;
      temp_v20 = 30.0f;
      temp_v22 = *(float *)(g_lmapScene + 0x30);
      temp_v25 = *(float *)(g_lmapScene + 0x28);
      temp_v11 = *(float *)(g_lmapScene + 0x2c);
      temp_v24 = (*(float *)(g_lmapScene + 0x50) - 30.0f) * temp_v21;
      temp_v33 = temp_v23;
      temp_v34 = temp_v26;
      FUN_001bc124();
      temp_v23 = 250.0f;
      temp_v25 = temp_v25 + temp_v24 * 250.0f;
      temp_v37 = temp_v11 - 700.0f;
      temp_v21 = (*(float *)(g_lmapScene + 0x50) - temp_v20) * temp_v21;
      FUN_001bbf0c();
      temp_v38 = temp_v22 + temp_v21 * temp_v23;
      temp_v45 = 1;
      temp_v44 = 0;
      temp_v46 = 0;
      temp_v36 = temp_v25;
      FUN_002d1e44(&temp_v27);
      piVar6 = DAT_005806a4;
      piVar7 = DAT_005806a4 + 1;
      *(unsigned char *)(DAT_005806a4 + 0x88) = 1;
      *piVar7 = piVar6[1] + 1;
      piVar6[2] = 0;
      piVar6[3] = 0;
    }
    break;
  case 0x15:
    temp_v9 = FUN_003033d4();
    piVar6 = DAT_005806a4;
    if (DAT_005806a4[1] != 0) {
      if ((DAT_005806a4[1] == 1) &&
         (piVar7 = DAT_005806a4, FUN_0033a374(), piVar6 = DAT_005806a4, piVar7 != (int *)0x0)) {
        DAT_005806a4[0x86] = 0;
        piVar6[0x87] = 0;
        piVar6[6] = (int)(*(float *)(g_lmapScene + 0x50) + 110.0f);
        piVar6[0x14] = (int)temp_v36;
        piVar6[0x15] = (int)temp_v37;
        piVar6[0x16] = (int)temp_v38;
        piVar6[0x17] = (int)temp_v33;
        piVar6[0x18] = (int)temp_v34;
        piVar6[0x19] = (int)temp_v35;
        piVar6[1] = piVar6[1] + 1;
        piVar6[2] = 0;
      }
    }
    else {
      pfVar8 = (float *)(DAT_005806a4 + 0x17);
      DAT_005806a4[3] = 0;
      temp_v27 = *pfVar8;
      temp_v28 = (float)piVar6[0x18];
      temp_v29 = (float)piVar6[0x19];
      temp_v26 = 90.0f;
      temp_v30 = (float)piVar6[0x14];
      temp_v31 = (float)piVar6[0x15];
      temp_v32 = piVar6[0x16];
      temp_v21 = 0.017453292f;
      temp_v23 = *(float *)(g_lmapScene + 0x1c);
      temp_v22 = *(float *)(g_lmapScene + 0x24);
      temp_v25 = *(float *)(g_lmapScene + 0x20) + (float)piVar6[temp_v9 + 0x33];
      temp_v24 = ((float)piVar6[6] - 90.0f) * 0.017453292f;
      FUN_001bc124();
      temp_v23 = temp_v23 + temp_v24 * (float)DAT_005806a4[temp_v9 + 0x53];
      temp_v24 = ((float)DAT_005806a4[6] - temp_v26) * temp_v21;
      FUN_001bbf0c();
      temp_v35 = temp_v22 + temp_v24 * (float)DAT_005806a4[temp_v9 + 0x53];
      temp_v24 = (float)DAT_005806a4[6] * temp_v21;
      temp_v33 = temp_v23;
      temp_v34 = temp_v25;
      FUN_001bc124();
      temp_v22 = *(float *)(g_lmapScene + 0x1c) - temp_v24 * (float)DAT_005806a4[temp_v9 + 99];
      temp_v24 = (float)DAT_005806a4[6] * temp_v21;
      FUN_001bbf0c();
      temp_v25 = *(float *)(g_lmapScene + 0x24) - temp_v24 * (float)DAT_005806a4[temp_v9 + 99];
      temp_v23 = *(float *)(g_lmapScene + 0x20) + (float)DAT_005806a4[temp_v9 + 0x43] +
               (float)DAT_005806a4[7];
      temp_v24 = ((float)DAT_005806a4[6] - temp_v26) * temp_v21;
      FUN_001bc124();
      temp_v22 = temp_v22 + temp_v24 * (float)DAT_005806a4[temp_v9 + 0x53];
      temp_v21 = ((float)DAT_005806a4[6] - temp_v26) * temp_v21;
      FUN_001bbf0c();
      temp_v10 = 0;
      temp_v38 = temp_v25 + temp_v21 * (float)DAT_005806a4[temp_v9 + 0x53];
      temp_v45 = 0x5a;
      temp_v44 = 0;
      temp_v46 = 0;
      temp_v36 = temp_v22;
      temp_v37 = temp_v23;
      FUN_002d1e44(&temp_v27);
      piVar6 = DAT_005806a4;
      piVar7 = DAT_005806a4 + 1;
      *(unsigned char *)(DAT_005806a4 + 0x88) = 1;
      piVar6[0x86] = temp_v10;
      piVar6[0x87] = temp_v10;
      *piVar7 = piVar6[1] + 1;
      piVar6[2] = 0;
      piVar6[3] = 0;
    }
    break;
  case 0x16:
    temp_v9 = DAT_005806a4[1];
    if (temp_v9 != 0) {
      if ((temp_v9 == 1) && (FUN_0033a374(), piVar6 = DAT_005806a4, temp_v9 != 0)) {
        DAT_005806a4[0x86] = 0;
        piVar6[0x87] = 0;
        piVar6[6] = *(int *)(g_lmapScene + 0x4c);
        piVar6[0x14] = (int)temp_v36;
        piVar6[0x15] = (int)temp_v37;
        piVar6[0x16] = (int)temp_v38;
        piVar6[0x17] = (int)temp_v33;
        piVar6[0x18] = (int)temp_v34;
        piVar6[0x19] = (int)temp_v35;
        piVar6[1] = piVar6[1] + 1;
        piVar6[2] = 0;
      }
    }
    else {
      pfVar8 = (float *)(DAT_005806a4 + 0x17);
      DAT_005806a4[3] = 0;
      temp_v27 = *pfVar8;
      temp_v28 = (float)piVar6[0x18];
      temp_v29 = (float)piVar6[0x19];
      temp_v21 = 0.017453292f;
      temp_v30 = (float)piVar6[0x14];
      temp_v31 = (float)piVar6[0x15];
      temp_v32 = piVar6[0x16];
      temp_v22 = *(float *)(g_lmapScene + 0x30);
      temp_v24 = *(float *)(g_lmapScene + 0x50) * 0.017453292f;
      temp_v23 = *(float *)(g_lmapScene + 0x28);
      temp_v26 = *(float *)(g_lmapScene + 0x2c);
      FUN_001bc124();
      temp_v25 = -30.0f;
      temp_v23 = temp_v23 + temp_v24 * -30.0f;
      temp_v26 = temp_v26 + 50.0f;
      temp_v24 = *(float *)(g_lmapScene + 0x50) * temp_v21;
      FUN_001bbf0c();
      temp_v35 = temp_v22 + temp_v24 * temp_v25;
      temp_v20 = 30.0f;
      temp_v22 = *(float *)(g_lmapScene + 0x30);
      temp_v25 = *(float *)(g_lmapScene + 0x28);
      temp_v11 = *(float *)(g_lmapScene + 0x2c);
      temp_v24 = (*(float *)(g_lmapScene + 0x50) - 30.0f) * temp_v21;
      temp_v33 = temp_v23;
      temp_v34 = temp_v26;
      FUN_001bc124();
      temp_v23 = 250.0f;
      temp_v25 = temp_v25 + temp_v24 * 250.0f;
      temp_v37 = temp_v11 + 100.0f;
      temp_v21 = (*(float *)(g_lmapScene + 0x50) - temp_v20) * temp_v21;
      FUN_001bbf0c();
      temp_v38 = temp_v22 + temp_v21 * temp_v23;
      temp_v45 = 1;
      temp_v44 = 0;
      temp_v46 = 0;
      temp_v36 = temp_v25;
      FUN_002d1e44(&temp_v27);
      piVar6 = DAT_005806a4;
      piVar7 = DAT_005806a4 + 1;
      *(unsigned char *)(DAT_005806a4 + 0x88) = 1;
      *piVar7 = piVar6[1] + 1;
      piVar6[2] = 0;
      piVar6[3] = 0;
    }
    break;
  case 0x17:
    temp_v9 = FUN_003033d4();
    piVar6 = DAT_005806a4;
    if (DAT_005806a4[1] != 0) {
      if (DAT_005806a4[1] == 1) {
        piVar7 = DAT_005806a4;
        FUN_0033a374();
        piVar6 = DAT_005806a4;
joined_r0x00397538:
        DAT_005806a4 = piVar6;
        if (piVar7 != (int *)0x0) {
          piVar6[0x86] = 0;
          piVar6[0x87] = 0;
          piVar6[6] = *(int *)(g_lmapScene + 0x4c);
          piVar6[0x14] = (int)temp_v36;
          piVar6[0x15] = (int)temp_v37;
          piVar6[0x16] = (int)temp_v38;
          piVar6[0x17] = (int)temp_v33;
          piVar6[0x18] = (int)temp_v34;
          piVar6[0x19] = (int)temp_v35;
          piVar6[1] = piVar6[1] + 1;
          piVar6[2] = 0;
        }
      }
    }
    else {
      pfVar8 = (float *)(DAT_005806a4 + 0x17);
      DAT_005806a4[3] = 0;
      temp_v27 = *pfVar8;
      temp_v28 = (float)piVar6[0x18];
      temp_v29 = (float)piVar6[0x19];
      temp_v26 = 90.0f;
      temp_v30 = (float)piVar6[0x14];
      temp_v31 = (float)piVar6[0x15];
      temp_v32 = piVar6[0x16];
      temp_v21 = 0.017453292f;
      temp_v23 = *(float *)(g_lmapScene + 0x1c);
      temp_v22 = *(float *)(g_lmapScene + 0x24);
      temp_v25 = *(float *)(g_lmapScene + 0x20) + (float)piVar6[temp_v9 + 0x33];
      temp_v24 = ((float)piVar6[6] - 90.0f) * 0.017453292f;
      FUN_001bc124();
      temp_v23 = temp_v23 + temp_v24 * (float)DAT_005806a4[temp_v9 + 0x53];
      temp_v24 = ((float)DAT_005806a4[6] - temp_v26) * temp_v21;
      FUN_001bbf0c();
      temp_v35 = temp_v22 + temp_v24 * (float)DAT_005806a4[temp_v9 + 0x53];
      temp_v24 = (float)DAT_005806a4[6] * temp_v21;
      temp_v33 = temp_v23;
      temp_v34 = temp_v25;
      FUN_001bc124();
      temp_v22 = *(float *)(g_lmapScene + 0x1c) - temp_v24 * (float)DAT_005806a4[temp_v9 + 99];
      temp_v24 = (float)DAT_005806a4[6] * temp_v21;
      FUN_001bbf0c();
      temp_v23 = *(float *)(g_lmapScene + 0x24) - temp_v24 * (float)DAT_005806a4[temp_v9 + 99];
      temp_v25 = *(float *)(g_lmapScene + 0x20) + (float)DAT_005806a4[temp_v9 + 0x43] +
               (float)DAT_005806a4[7];
      temp_v24 = ((float)DAT_005806a4[6] - temp_v26) * temp_v21;
      FUN_001bc124();
      temp_v22 = temp_v22 + temp_v24 * (float)DAT_005806a4[temp_v9 + 0x53];
      temp_v21 = ((float)DAT_005806a4[6] - temp_v26) * temp_v21;
      FUN_001bbf0c();
      temp_v38 = temp_v23 + temp_v21 * (float)DAT_005806a4[temp_v9 + 0x53];
      temp_v36 = temp_v22;
      temp_v37 = temp_v25;
      FUN_00330108(&temp_v36,&temp_v33,&temp_v47);
      temp_v45 = 0x5a;
      temp_v44 = 0;
      temp_v9 = 0;
      temp_v36 = temp_v47;
      temp_v37 = fStack_40;
      temp_v38 = fStack_3c;
      temp_v46 = 0;
      FUN_002d1e44(&temp_v27);
      piVar6 = DAT_005806a4;
      piVar7 = DAT_005806a4 + 1;
      *(unsigned char *)(DAT_005806a4 + 0x88) = 1;
      piVar6[0x86] = temp_v9;
      piVar6[0x87] = temp_v9;
      *piVar7 = piVar6[1] + 1;
      piVar6[2] = 0;
      piVar6[3] = 0;
    }
    break;
  case 0x18:
    temp_v9 = FUN_003033d4();
    piVar6 = DAT_005806a4;
    if (DAT_005806a4[1] != 0) {
      if (DAT_005806a4[1] == 1) {
        piVar7 = DAT_005806a4;
        FUN_0033a374();
        piVar6 = DAT_005806a4;
        goto joined_r0x00397538;
      }
    }
    else {
      pfVar8 = (float *)(DAT_005806a4 + 0x17);
      DAT_005806a4[3] = 0;
      temp_v27 = *pfVar8;
      temp_v28 = (float)piVar6[0x18];
      temp_v29 = (float)piVar6[0x19];
      temp_v26 = 90.0f;
      temp_v30 = (float)piVar6[0x14];
      temp_v31 = (float)piVar6[0x15];
      temp_v32 = piVar6[0x16];
      temp_v21 = 0.017453292f;
      temp_v23 = *(float *)(g_lmapScene + 0x1c);
      temp_v22 = *(float *)(g_lmapScene + 0x24);
      temp_v25 = *(float *)(g_lmapScene + 0x20) + (float)piVar6[temp_v9 + 0x33];
      temp_v24 = ((float)piVar6[6] - 90.0f) * 0.017453292f;
      FUN_001bc124();
      temp_v23 = temp_v23 + temp_v24 * (float)DAT_005806a4[temp_v9 + 0x53];
      temp_v24 = ((float)DAT_005806a4[6] - temp_v26) * temp_v21;
      FUN_001bbf0c();
      temp_v35 = temp_v22 + temp_v24 * (float)DAT_005806a4[temp_v9 + 0x53];
      temp_v24 = (float)DAT_005806a4[6] * temp_v21;
      temp_v33 = temp_v23;
      temp_v34 = temp_v25;
      FUN_001bc124();
      temp_v22 = *(float *)(g_lmapScene + 0x1c) - temp_v24 * (float)DAT_005806a4[temp_v9 + 99];
      temp_v24 = (float)DAT_005806a4[6] * temp_v21;
      FUN_001bbf0c();
      temp_v23 = *(float *)(g_lmapScene + 0x24) - temp_v24 * (float)DAT_005806a4[temp_v9 + 99];
      temp_v25 = *(float *)(g_lmapScene + 0x20) + (float)DAT_005806a4[temp_v9 + 0x43] +
               (float)DAT_005806a4[7];
      temp_v24 = ((float)DAT_005806a4[6] - temp_v26) * temp_v21;
      FUN_001bc124();
      temp_v22 = temp_v22 + temp_v24 * (float)DAT_005806a4[temp_v9 + 0x53];
      temp_v21 = ((float)DAT_005806a4[6] - temp_v26) * temp_v21;
      FUN_001bbf0c();
      temp_v38 = temp_v23 + temp_v21 * (float)DAT_005806a4[temp_v9 + 0x53];
      temp_v36 = temp_v22;
      temp_v37 = temp_v25;
      FUN_00330108(&temp_v36,&temp_v33,&temp_v47);
      temp_v45 = 0x14;
      temp_v44 = 0;
      temp_v9 = 0;
      temp_v36 = temp_v47;
      temp_v37 = fStack_40;
      temp_v38 = fStack_3c;
      temp_v46 = 0;
      FUN_002d1e44(&temp_v27);
      piVar6 = DAT_005806a4;
      piVar7 = DAT_005806a4 + 1;
      *(unsigned char *)(DAT_005806a4 + 0x88) = 1;
      piVar6[0x86] = temp_v9;
      piVar6[0x87] = temp_v9;
      *piVar7 = piVar6[1] + 1;
      piVar6[2] = 0;
      piVar6[3] = 0;
    }
    break;
  case 0x19:
    FUN_003033d4();
    temp_v9 = DAT_005806a4[1];
    if (temp_v9 != 0) {
      if ((temp_v9 == 1) && (FUN_0033a374(), piVar7 = DAT_005806a4, temp_v9 != 0)) {
        piVar11 = DAT_005806a4 + 0x14;
        DAT_005806a4[6] = *(int *)(g_lmapScene + 0x4c);
        temp_v9 = piVar6[0x99];
        temp_v10 = piVar6[0x9a];
        *piVar11 = piVar6[0x98];
        piVar7[0x15] = temp_v9;
        piVar7[0x16] = temp_v10;
        temp_v9 = piVar6[0x95];
        temp_v10 = piVar6[0x96];
        piVar7[0x19] = piVar6[0x97];
        piVar7[0x17] = temp_v9;
        piVar7[0x18] = temp_v10;
        piVar7[1] = piVar7[1] + 1;
        piVar7[2] = 0;
        DAT_005f1a4c = 1;
        DAT_005f1a4d = '\x01';
      }
    }
    else {
      DAT_005806a4[3] = 0;
      temp_v29 = DAT_005f1a2c;
      temp_v27 = DAT_005f1a24;
      temp_v28 = DAT_005f1a28;
      temp_v30 = DAT_005f1a18;
      temp_v31 = DAT_005f1a1c;
      temp_v32 = DAT_005f1a20;
      temp_v33 = DAT_005f1a3c;
      temp_v34 = DAT_005f1a40;
      temp_v35 = DAT_005f1a44;
      temp_v36 = DAT_005f1a30;
      temp_v37 = DAT_005f1a34;
      temp_v38 = DAT_005f1a38;
      if (DAT_005f1a4d != '\0') {
        FUN_00330108(&temp_v36,&temp_v33,&temp_v47);
        temp_v36 = temp_v47;
        temp_v37 = fStack_40;
        temp_v38 = fStack_3c;
      }
      temp_v44 = 2;
      if (DAT_005f1a48 < 1) {
        DAT_005f1a48 = 1;
      }
      temp_v45 = DAT_005f1a48;
      temp_v46 = 0;
      FUN_002d1e44(&temp_v27);
      piVar6 = DAT_005806a4;
      piVar7 = DAT_005806a4 + 1;
      *(unsigned char *)(DAT_005806a4 + 0x88) = 1;
      *piVar7 = piVar6[1] + 1;
      piVar6[2] = 0;
      piVar6[3] = 0;
    }
    break;
  case 0x1a:
    FUN_003033d4();
    piVar6 = DAT_005806a4;
    if (DAT_005806a4[1] != 0) {
      if ((DAT_005806a4[1] == 1) &&
         (piVar7 = DAT_005806a4, FUN_0033a374(), piVar6 = DAT_005806a4, piVar7 != (int *)0x0)) {
        DAT_005806a4[0x86] = 0;
        piVar6[0x87] = 0;
        piVar6[6] = *(int *)(g_lmapScene + 0x50);
        piVar6[0x14] = (int)temp_v36;
        piVar6[0x15] = (int)temp_v37;
        piVar6[0x16] = (int)temp_v38;
        piVar6[0x17] = (int)temp_v33;
        piVar6[0x18] = (int)temp_v34;
        piVar6[0x19] = (int)temp_v35;
        piVar6[1] = piVar6[1] + 1;
        piVar6[2] = 0;
      }
    }
    else {
      pfVar8 = (float *)(DAT_005806a4 + 0x17);
      DAT_005806a4[3] = 0;
      temp_v27 = *pfVar8;
      temp_v28 = (float)piVar6[0x18];
      temp_v29 = (float)piVar6[0x19];
      temp_v21 = 0.017453292f;
      temp_v31 = (float)piVar6[0x15];
      temp_v30 = (float)piVar6[0x14];
      temp_v32 = piVar6[0x16];
      temp_v22 = *(float *)(g_lmapScene + 0x30);
      temp_v24 = *(float *)(g_lmapScene + 0x50) * 0.017453292f;
      temp_v23 = *(float *)(g_lmapScene + 0x28);
      temp_v26 = *(float *)(g_lmapScene + 0x2c);
      FUN_001bc124();
      temp_v25 = 120.0f;
      temp_v23 = temp_v23 + temp_v24 * 120.0f;
      temp_v26 = temp_v26 + 170.0f;
      temp_v24 = *(float *)(g_lmapScene + 0x50) * temp_v21;
      FUN_001bbf0c();
      temp_v35 = temp_v22 + temp_v24 * temp_v25;
      temp_v20 = 160.0f;
      temp_v22 = *(float *)(g_lmapScene + 0x30);
      temp_v25 = *(float *)(g_lmapScene + 0x28);
      temp_v11 = *(float *)(g_lmapScene + 0x2c);
      temp_v24 = (*(float *)(g_lmapScene + 0x50) - 160.0f) * temp_v21;
      temp_v33 = temp_v23;
      temp_v34 = temp_v26;
      FUN_001bc124();
      temp_v23 = 240.0f;
      temp_v25 = temp_v25 + temp_v24 * 240.0f;
      temp_v37 = temp_v11 + 30.0f;
      temp_v21 = (*(float *)(g_lmapScene + 0x50) - temp_v20) * temp_v21;
      FUN_001bbf0c();
      temp_v38 = temp_v22 + temp_v21 * temp_v23;
      temp_v44 = 2;
      temp_v45 = 10;
      temp_v46 = 0;
      temp_v36 = temp_v25;
      FUN_002d1e44(&temp_v27);
      piVar6 = DAT_005806a4;
      *(unsigned char *)(DAT_005806a4 + 0x88) = 1;
      piVar7 = piVar6 + 1;
      *piVar7 = *piVar7 + 1;
      piVar6[2] = 0;
    }
    break;
  case 0x1b:
    temp_v9 = DAT_005806a4[1];
    if (temp_v9 != 0) {
      if (temp_v9 == 1) {
        FUN_0033a374();
        piVar6 = DAT_005806a4;
        DAT_005806a4 = piVar6;
        if (temp_v9 != 0) {
          piVar6[1] = piVar6[1] + 1;
          piVar6[2] = 0;
        }
      }
    }
    else {
      DAT_005806a4[3] = 0;
      temp_v27 = 1520.0f;
      temp_v28 = 1786.0f;
      temp_v29 = -369.0f;
      temp_v30 = 1750.0f;
      temp_v31 = 1902.0f;
      temp_v32 = -0x3cd00000;
      temp_v33 = 1571.0f;
      temp_v34 = 1684.0f;
      temp_v35 = -323.0f;
      temp_v36 = 1750.0f;
      temp_v37 = 1902.0f;
      temp_v38 = -176.0f;
      temp_v45 = 0x3c;
      temp_v44 = 0;
      temp_v46 = 0;
      FUN_002d1e44(&temp_v27);
      piVar6 = DAT_005806a4;
      piVar7 = DAT_005806a4 + 1;
      *(unsigned char *)(DAT_005806a4 + 0x88) = 1;
      *piVar7 = piVar6[1] + 1;
      piVar6[2] = 0;
      piVar6[3] = 0;
    }
    break;
  case 0x1c:
    temp_v9 = DAT_005806a4[1];
    if (temp_v9 != 0) {
      if (temp_v9 == 1) {
        FUN_0033a374();
        piVar6 = DAT_005806a4;
        DAT_005806a4 = piVar6;
        if (temp_v9 != 0) {
          piVar6[1] = piVar6[1] + 1;
          piVar6[2] = 0;
        }
      }
    }
    else {
      DAT_005806a4[3] = 0;
      temp_v27 = 1571.0f;
      temp_v28 = 1684.0f;
      temp_v29 = -323.0f;
      temp_v30 = 1750.0f;
      temp_v31 = 1902.0f;
      temp_v32 = -0x3cd00000;
      temp_v33 = 1520.0f;
      temp_v34 = 1786.0f;
      temp_v35 = -369.0f;
      temp_v36 = 1750.0f;
      temp_v37 = 1902.0f;
      temp_v38 = -176.0f;
      temp_v45 = 0x3c;
      temp_v44 = 0;
      temp_v46 = 0;
      FUN_002d1e44(&temp_v27);
      piVar6 = DAT_005806a4;
      piVar7 = DAT_005806a4 + 1;
      *(unsigned char *)(DAT_005806a4 + 0x88) = 1;
      *piVar7 = piVar6[1] + 1;
      piVar6[2] = 0;
      piVar6[3] = 0;
    }
    break;
  case 0x1d:
    temp_v9 = DAT_005806a4[1];
    if (temp_v9 != 0) {
      if (temp_v9 == 1) {
        FUN_0033a374();
        piVar6 = DAT_005806a4;
        DAT_005806a4 = piVar6;
        if (temp_v9 != 0) {
          piVar6[1] = piVar6[1] + 1;
          piVar6[2] = 0;
        }
      }
    }
    else {
      pfVar8 = (float *)(DAT_005806a4 + 0x17);
      DAT_005806a4[3] = 0;
      temp_v27 = *pfVar8;
      temp_v28 = (float)piVar6[0x18];
      temp_v29 = (float)piVar6[0x19];
      temp_v11 = 0.017453292f;
      temp_v30 = (float)piVar6[0x14];
      temp_v31 = (float)piVar6[0x15];
      temp_v32 = piVar6[0x16];
      temp_v25 = DAT_005f16bc * 0.017453292f;
      temp_v24 = DAT_005f16b8;
      temp_v21 = DAT_005f16b0;
      temp_v23 = DAT_005f16b4;
      FUN_001bc124();
      temp_v25 = temp_v25 + temp_v21;
      temp_v20 = 200.0f;
      temp_v23 = temp_v23 + 200.0f;
      temp_v21 = DAT_005f16bc * temp_v11;
      FUN_001bbf0c();
      temp_v35 = temp_v21 + temp_v24;
      temp_v15 = 180.0f;
      temp_v26 = (DAT_005f16bc + 180.0f) * temp_v11;
      temp_v24 = DAT_005f16b8;
      temp_v21 = DAT_005f16b4;
      temp_v22 = DAT_005f16b0;
      temp_v33 = temp_v25;
      temp_v34 = temp_v23;
      FUN_001bc124();
      temp_v23 = 150.0f;
      temp_v21 = temp_v21 + temp_v20;
      temp_v36 = temp_v22 + temp_v26 * 150.0f;
      temp_v11 = (DAT_005f16bc + temp_v15) * temp_v11;
      FUN_001bbf0c();
      temp_v38 = temp_v24 + temp_v11 * temp_v23;
      temp_v45 = 1;
      temp_v44 = 0;
      temp_v46 = 0;
      temp_v37 = temp_v21;
      FUN_002d1e44(&temp_v27);
      piVar6 = DAT_005806a4;
      piVar7 = DAT_005806a4 + 1;
      *(unsigned char *)(DAT_005806a4 + 0x88) = 1;
      *piVar7 = piVar6[1] + 1;
      piVar6[2] = 0;
      piVar6[3] = 0;
    }
    break;
  case 0x1e:
    temp_v9 = DAT_005806a4[1];
    if (temp_v9 != 0) {
      if (temp_v9 == 1) {
        FUN_0033a374();
        piVar6 = DAT_005806a4;
        DAT_005806a4 = piVar6;
        if (temp_v9 != 0) {
          piVar6[1] = piVar6[1] + 1;
          piVar6[2] = 0;
        }
      }
    }
    else {
      pfVar8 = (float *)(DAT_005806a4 + 0x17);
      DAT_005806a4[3] = 0;
      temp_v27 = *pfVar8;
      temp_v28 = (float)piVar6[0x18];
      temp_v29 = (float)piVar6[0x19];
      temp_v11 = 0.017453292f;
      temp_v30 = (float)piVar6[0x14];
      temp_v31 = (float)piVar6[0x15];
      temp_v32 = piVar6[0x16];
      temp_v25 = DAT_005f16bc * 0.017453292f;
      temp_v24 = DAT_005f16b8;
      temp_v21 = DAT_005f16b0;
      temp_v23 = DAT_005f16b4;
      FUN_001bc124();
      temp_v25 = temp_v25 + temp_v21;
      temp_v20 = 200.0f;
      temp_v23 = temp_v23 + 200.0f;
      temp_v21 = DAT_005f16bc * temp_v11;
      FUN_001bbf0c();
      temp_v35 = temp_v21 + temp_v24;
      temp_v15 = 120.0f;
      temp_v26 = (DAT_005f16bc + 120.0f) * temp_v11;
      temp_v24 = DAT_005f16b0;
      temp_v21 = DAT_005f16b8;
      temp_v22 = DAT_005f16b4;
      temp_v33 = temp_v25;
      temp_v34 = temp_v23;
      FUN_001bc124();
      temp_v36 = temp_v24 + temp_v26 * temp_v20;
      temp_v22 = temp_v22 + temp_v20;
      temp_v11 = (DAT_005f16bc + temp_v15) * temp_v11;
      FUN_001bbf0c();
      temp_v38 = temp_v21 + temp_v11 * temp_v20;
      temp_v45 = 1;
      temp_v44 = 0;
      temp_v46 = 0;
      temp_v37 = temp_v22;
      FUN_002d1e44(&temp_v27);
      piVar6 = DAT_005806a4;
      piVar7 = DAT_005806a4 + 1;
      *(unsigned char *)(DAT_005806a4 + 0x88) = 1;
      *piVar7 = piVar6[1] + 1;
      piVar6[2] = 0;
      piVar6[3] = 0;
    }
    break;
  case 0x1f:
    FUN_00376c64();
    break;
  case 0x20:
    temp_v9 = DAT_005806a4[1];
    if (temp_v9 != 0) {
      if (temp_v9 == 1) {
        FUN_0033a374();
        piVar6 = DAT_005806a4;
        DAT_005806a4 = piVar6;
        if (temp_v9 != 0) {
          piVar6[1] = piVar6[1] + 1;
          piVar6[2] = 0;
        }
      }
    }
    else {
      pfVar8 = (float *)(DAT_005806a4 + 0x17);
      DAT_005806a4[3] = 0;
      temp_v27 = *pfVar8;
      temp_v28 = (float)piVar6[0x18];
      temp_v29 = (float)piVar6[0x19];
      temp_v30 = (float)piVar6[0x14];
      temp_v31 = (float)piVar6[0x15];
      temp_v32 = piVar6[0x16];
      temp_v35 = (float)piVar6[0x19];
      temp_v33 = (float)piVar6[0x17];
      temp_v34 = (float)piVar6[0x18] + 200.0f;
      temp_v37 = (float)piVar6[0x15];
      temp_v36 = (float)piVar6[0x14];
      temp_v38 = (float)piVar6[0x16];
      temp_v45 = 0x28;
      temp_v44 = 0;
      temp_v46 = 0;
      FUN_002d1e44(&temp_v27);
      piVar6 = DAT_005806a4;
      piVar7 = DAT_005806a4 + 1;
      *(unsigned char *)(DAT_005806a4 + 0x88) = 1;
      *piVar7 = piVar6[1] + 1;
      piVar6[2] = 0;
      piVar6[3] = 0;
    }
  }
  FUN_00397aa4();
}

} /* extern "C" */
