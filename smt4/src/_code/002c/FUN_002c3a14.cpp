/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c3a14` (_code @ 0x2c3a14, 0x3e0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0011a3cc(int, int, int, int);
int FUN_00126d14(unsigned int);
int FUN_002af390(unsigned int, unsigned char *);
int FUN_002b612c(unsigned char [24]);
int FUN_002b634c(unsigned int, int);
int FUN_002b7148(void);
int FUN_002bbb74(unsigned int, int);
int FUN_002bbbc8(int, int, int, int);
int FUN_002bbe30(int);
int nn_gr_CTR_Combiner_MakeCommand(unsigned char [24], unsigned int);
int nn_gr_CTR_Combiner_Stage_SetupPrevious(...);
int nn_gr_CTR_Combiner_Stage_SetupPrimaryModulateTexture0(unsigned char [24]);

typedef int romwright_code(...);
/* Supplied declaration required: FUN_0011a3cc. */
/* Supplied declaration required: FUN_00126d14. */
/* Supplied declaration required: FUN_002af390. */
/* Supplied declaration required: FUN_002b612c. */
/* Supplied declaration required: FUN_002b634c. */
/* Supplied declaration required: FUN_002b7148. */
/* Supplied declaration required: FUN_002bbb74. */
/* Supplied declaration required: FUN_002bbbc8. */
/* Supplied declaration required: FUN_002bbe30. */
/* Supplied declaration required: nn_gr_CTR_Combiner_MakeCommand. */
/* Supplied declaration required: nn_gr_CTR_Combiner_Stage_SetupPrevious. */
/* Supplied declaration required: nn_gr_CTR_Combiner_Stage_SetupPrimaryModulateTexture0. */


void FUN_002c3a14(int param_1)

{
/* irregular: 1 goto(s); 12 native warning(s); review required */
  char temp_v0;
  unsigned int temp_v1;
  unsigned char *puVar3;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  int *piVar8;
  unsigned char temp_v6;
  unsigned char temp_v7;
  unsigned char temp_v8 [24];
  unsigned char temp_v9 [24];
  unsigned char temp_v10 [24];
  unsigned char temp_v11 [24];
  unsigned char temp_v12 [24];
  unsigned char temp_v13 [28];
  
  puVar3 = temp_v8;
  *(unsigned char *)(param_1 + 0x11e8) = 1;
  *(unsigned char *)(param_1 + 0x11e9) = 3;
  *(unsigned char *)(param_1 + 0x5b0) = 1;
  *(unsigned char *)(param_1 + 0x11dc) = 1;
  *(unsigned char *)(param_1 + 0x11e1) = 1;
  temp_v3 = 0;
  temp_v2 = 0;
  *(unsigned char *)(param_1 + 0x5f4) = 0;
  do {
    temp_v4 = temp_v3 + 1;
    temp_v2 = temp_v2 + 2;
    *(unsigned char *)(param_1 + temp_v3 * 0x20 + 0x1204) = 1;
    temp_v3 = temp_v3 + 2;
    *(unsigned char *)(param_1 + temp_v4 * 0x20 + 0x1204) = 1;
  } while (temp_v2 < 0xc);
  FUN_00126d14(*(unsigned int *)(param_1 + 0x52c));
  if ((((*(char *)(param_1 + 0x11dc) != '\0') || (*(float *)(param_1 + 0x11cc) != 1.0f)) ||
      (*(float *)(param_1 + 0x11d0) != 1.0f)) ||
     ((*(float *)(param_1 + 0x11d4) != 1.0f || (*(float *)(param_1 + 0x11d8) != 1.0f)))) {
    *(unsigned int *)(param_1 + 0x11cc) = 0x3f800000;
    *(unsigned int *)(param_1 + 0x11d0) = 0x3f800000;
    *(unsigned int *)(param_1 + 0x11d4) = 0x3f800000;
    *(unsigned int *)(param_1 + 0x11d8) = 0x3f800000;
    FUN_002b634c(*(unsigned int *)(param_1 + 0x52c),param_1 + 0x11cc);
  }
  *(unsigned char *)(param_1 + 0x11dc) = 0;
  temp_v0 = *(char *)(param_1 + 0x11e1);
  temp_v6 = temp_v0 != '\0';
  if (!temp_v6) {
    temp_v0 = *(char *)(param_1 + 0x11dd);
  }
  if (!(temp_v6 || temp_v0 != '\0')) {
    temp_v0 = *(char *)(param_1 + 0x11de);
    temp_v6 = temp_v0 == '\0';
    if (temp_v6) {
      temp_v0 = *(char *)(param_1 + 0x11df);
    }
    temp_v7 = temp_v6 && temp_v0 == '\0';
    if (temp_v6 && temp_v0 == '\0') {
      temp_v7 = *(char *)(param_1 + 0x11e0) == '\0';
    }
    if (!temp_v7) {
      FUN_0011a3cc(0,0,0,0);
    }
  }
  else {
    FUN_0011a3cc(0,0,0,0);
  }
  if ((*(char *)(param_1 + 0x5b0) == '\0') && (*(int *)(param_1 + 0x530) == 0x3f800000)) {
    temp_v6 = 0;
    if (*(float *)(param_1 + 0x534) == 0.0f) {
      temp_v6 = *(float *)(param_1 + 0x538) == 0.0f;
    }
    if (temp_v6) {
      temp_v6 = 0;
      if (*(float *)(param_1 + 0x53c) == 0.0f) {
        temp_v6 = *(float *)(param_1 + 0x540) == 0.0f;
      }
      if (temp_v6) {
        temp_v6 = 0;
        if (*(int *)(param_1 + 0x544) == 0x3f800000) {
          temp_v6 = *(float *)(param_1 + 0x548) == 0.0f;
        }
        if (temp_v6) {
          temp_v6 = 0;
          if (*(float *)(param_1 + 0x54c) == 0.0f) {
            temp_v6 = *(float *)(param_1 + 0x550) == 0.0f;
          }
          if (temp_v6) {
            temp_v6 = 0;
            if (*(float *)(param_1 + 0x554) == 0.0f) {
              temp_v6 = *(int *)(param_1 + 0x558) == 0x3f800000;
            }
            if (temp_v6) {
              temp_v6 = 0;
              if (*(float *)(param_1 + 0x55c) == 0.0f) {
                temp_v6 = *(float *)(param_1 + 0x560) == 0.0f;
              }
              if (temp_v6) {
                temp_v6 = 0;
                if (*(float *)(param_1 + 0x564) == 0.0f) {
                  temp_v6 = *(float *)(param_1 + 0x568) == 0.0f;
                }
                temp_v7 = 0;
                if (temp_v6) {
                  temp_v7 = *(int *)(param_1 + 0x56c) == 0x3f800000;
                }
                if (temp_v7) goto LAB_002c3c84;
              }
            }
          }
        }
      }
    }
  }
  FUN_002bbe30(param_1 + 0x530);
  FUN_002bbe30(param_1 + 0x570);
  FUN_002bbbc8(param_1,param_1 + 0x114c,param_1 + 0x110c,param_1 + 0x530);
  FUN_002bbb74(*(unsigned int *)(param_1 + 0x52c),param_1 + 0x118c);
  *(unsigned char *)(param_1 + 0x5b0) = 0;
LAB_002c3c84:
  *(unsigned int *)(param_1 + 0x1128) = *(unsigned int *)(param_1 + 0x5d0);
  *(unsigned int *)(param_1 + 0x1114) = *(unsigned int *)(param_1 + 0x5bc);
  *(unsigned int *)(param_1 + 0x1118) = *(unsigned int *)(param_1 + 0x5c0);
  *(unsigned int *)(param_1 + 0x111c) = *(unsigned int *)(param_1 + 0x5c4);
  *(unsigned int *)(param_1 + 0x1120) = *(unsigned int *)(param_1 + 0x5c8);
  *(unsigned int *)(param_1 + 0x1124) = *(unsigned int *)(param_1 + 0x5cc);
  *(unsigned int *)(param_1 + 0x110c) = *(unsigned int *)(param_1 + 0x5b4);
  *(unsigned int *)(param_1 + 0x1110) = *(unsigned int *)(param_1 + 0x5b8);
  *(unsigned int *)(param_1 + 0x112c) = *(unsigned int *)(param_1 + 0x5d4);
  *(unsigned int *)(param_1 + 0x1130) = *(unsigned int *)(param_1 + 0x5d8);
  *(unsigned int *)(param_1 + 0x1134) = *(unsigned int *)(param_1 + 0x5dc);
  *(unsigned int *)(param_1 + 0x1138) = *(unsigned int *)(param_1 + 0x5e0);
  *(unsigned int *)(param_1 + 0x113c) = *(unsigned int *)(param_1 + 0x5e4);
  *(unsigned int *)(param_1 + 0x1140) = *(unsigned int *)(param_1 + 0x5e8);
  *(unsigned int *)(param_1 + 0x114c) = *(unsigned int *)(param_1 + 0x5b4);
  *(unsigned int *)(param_1 + 0x1150) = *(unsigned int *)(param_1 + 0x5b8);
  *(unsigned int *)(param_1 + 0x1144) = *(unsigned int *)(param_1 + 0x5ec);
  *(unsigned int *)(param_1 + 0x1148) = *(unsigned int *)(param_1 + 0x5f0);
  *(unsigned int *)(param_1 + 0x1154) = *(unsigned int *)(param_1 + 0x5bc);
  *(unsigned int *)(param_1 + 0x1158) = *(unsigned int *)(param_1 + 0x5c0);
  *(unsigned int *)(param_1 + 0x115c) = *(unsigned int *)(param_1 + 0x5c4);
  *(unsigned int *)(param_1 + 0x1160) = *(unsigned int *)(param_1 + 0x5c8);
  *(unsigned int *)(param_1 + 0x1168) = *(unsigned int *)(param_1 + 0x5d0);
  *(unsigned int *)(param_1 + 0x1164) = *(unsigned int *)(param_1 + 0x5cc);
  *(unsigned int *)(param_1 + 0x116c) = *(unsigned int *)(param_1 + 0x5d4);
  *(unsigned int *)(param_1 + 0x1170) = *(unsigned int *)(param_1 + 0x5d8);
  *(unsigned int *)(param_1 + 0x1174) = *(unsigned int *)(param_1 + 0x5dc);
  *(unsigned int *)(param_1 + 0x1178) = *(unsigned int *)(param_1 + 0x5e0);
  *(unsigned int *)(param_1 + 0x117c) = *(unsigned int *)(param_1 + 0x5e4);
  *(unsigned int *)(param_1 + 0x1180) = *(unsigned int *)(param_1 + 0x5e8);
  *(unsigned int *)(param_1 + 0x1184) = *(unsigned int *)(param_1 + 0x5ec);
  *(unsigned int *)(param_1 + 0x1188) = *(unsigned int *)(param_1 + 0x5f0);
  FUN_002b612c(temp_v8);
  nn_gr_CTR_Combiner_Stage_SetupPrimaryModulateTexture0(temp_v8);
  nn_gr_CTR_Combiner_Stage_SetupPrevious(temp_v9);
  nn_gr_CTR_Combiner_Stage_SetupPrevious(temp_v10);
  nn_gr_CTR_Combiner_Stage_SetupPrevious(temp_v11);
  nn_gr_CTR_Combiner_Stage_SetupPrevious(temp_v12);
  temp_v1 = nn_gr_CTR_Combiner_Stage_SetupPrevious(temp_v13);
  FUN_002b7148();
  nn_gr_CTR_Combiner_MakeCommand(temp_v8,temp_v1);
  FUN_002af390(temp_v1,puVar3);
  temp_v5 = 0;
  do {
    temp_v4 = param_1 + (temp_v5 & 0xff) * 0x20;
    piVar8 = (int *)(temp_v4 + 0x11ec);
    temp_v2 = *(int *)(param_1 + temp_v5 * 4 + 0x136c);
    temp_v3 = piVar8[*piVar8 + 2];
    piVar8[*piVar8 + 2] = temp_v2;
    if (*(char *)(temp_v4 + 0x1204) != '\0' || temp_v3 != temp_v2) {
      (**(romwright_code **)(temp_v4 + 0x1208))();
      *(unsigned char *)(temp_v4 + 0x1204) = 0;
    }
    temp_v5 = temp_v5 + 1;
  } while ((int)temp_v5 < 0xc);
  return;
}

} /* extern "C" */
