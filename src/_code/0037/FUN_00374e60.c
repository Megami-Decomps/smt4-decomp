/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00374e60` (_code @ 0x374e60, 0x698 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_3: 47 slot(s), 188 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spA8; /* 0xa8: local_a8 */
    unsigned int spB8; /* 0xb8: local_b8 */
    unsigned int spC8; /* 0xc8: local_c8 */
    unsigned int spD4; /* 0xd4: local_d4 */
    unsigned int spD8; /* 0xd8: local_d8 */
    unsigned int spDC; /* 0xdc: local_dc */
    unsigned int spE0; /* 0xe0: local_e0 */
    unsigned int spE4; /* 0xe4: local_e4 */
    unsigned int spE8; /* 0xe8: local_e8 */
    unsigned int spF4; /* 0xf4: local_f4 */
    unsigned int spF8; /* 0xf8: local_f8 */
    unsigned int spFC; /* 0xfc: local_fc */
    unsigned int sp100; /* 0x100: local_100 */
    unsigned int sp104; /* 0x104: local_104 */
    unsigned int sp108; /* 0x108: local_108 */
    unsigned int sp10C; /* 0x10c: local_10c */
    unsigned int sp110; /* 0x110: local_110 */
    unsigned int sp114; /* 0x114: local_114 */
    unsigned int sp118; /* 0x118: local_118 */
    unsigned int sp11C; /* 0x11c: local_11c */
    unsigned int sp120; /* 0x120: local_120 */
    unsigned int sp12C; /* 0x12c: local_12c */
    unsigned int sp138; /* 0x138: local_138 */
    unsigned int sp13C; /* 0x13c: local_13c */
    unsigned int sp148; /* 0x148: local_148 */
    unsigned int sp14C; /* 0x14c: local_14c */
    unsigned int sp158; /* 0x158: local_158 */
} param_3_stack;

extern unsigned int *DAT_004652a0; /* 0x4652a0 */
extern unsigned int DAT_00476634; /* 0x476634 */
extern unsigned int DAT_004efd6c; /* 0x4efd6c */
extern unsigned int DAT_004efd70; /* 0x4efd70 */
extern unsigned int DAT_004efd74; /* 0x4efd74 */
extern unsigned int DAT_004efd78; /* 0x4efd78 */
extern unsigned int DAT_004efd7c; /* 0x4efd7c */
extern unsigned int DAT_004efd80; /* 0x4efd80 */
extern unsigned int DAT_004efd84; /* 0x4efd84 */
extern unsigned int DAT_004efd88; /* 0x4efd88 */
extern unsigned int DAT_004efd8c; /* 0x4efd8c */
extern unsigned int DAT_004efd90; /* 0x4efd90 */
extern unsigned int DAT_004efd94; /* 0x4efd94 */
extern unsigned int DAT_004efd98; /* 0x4efd98 */

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_002a1a08. */
/* Supplied declaration required: FUN_002a1a3c. */
/* Supplied declaration required: FUN_002a1ac8. */
/* Supplied declaration required: FUN_002a1b4c. */
/* Supplied declaration required: FUN_002a1b98. */
/* Supplied declaration required: FUN_002a5078. */
/* Supplied declaration required: FUN_002c00b4. */
extern int FUN_002c00d4(unsigned int *);
/* Supplied declaration required: FUN_00374260. */
/* Supplied declaration required: FUN_003e6054. */
/* Supplied declaration required: FUN_003e6070. */


void FUN_00374e60(int param_1,int param_2,int param_3)

{
/* irregular: irregular input(s): in_fpscr; 12 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  int temp_v1;
  unsigned int *puVar4;
  unsigned int temp_v2;
  unsigned int *puVar6;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int in_fpscr;
  float temp_v6;
  unsigned int temp_v7;
  unsigned long long temp_v8;
  float temp_v9;
  unsigned long long temp_v10;
  float temp_v11;
  float *pfStack_154;
  unsigned int uStack_150;
  unsigned int temp_v12;
  unsigned int temp_v13;
  unsigned int uStack_144;
  unsigned int uStack_140;
  unsigned int temp_v14;
  unsigned int temp_v15;
  unsigned int uStack_134;
  unsigned int uStack_130;
  unsigned int temp_v16;
  float temp_v17 [2];
  int *temp_v18;
  unsigned int temp_v19;
  unsigned int temp_v20;
  float temp_v21;
  unsigned int temp_v22;
  unsigned int temp_v23;
  unsigned int temp_v24;
  unsigned int temp_v25;
  float temp_v26;
  unsigned int temp_v27;
  int temp_v28;
  unsigned int temp_v29;
  unsigned int temp_v30;
  unsigned int temp_v31;
  float temp_v32;
  float *temp_v33;
  int uStack_d0;
  unsigned int uStack_cc;
  unsigned int temp_v34;
  unsigned int uStack_c4;
  unsigned int uStack_c0;
  unsigned int uStack_bc;
  unsigned int temp_v35;
  unsigned int uStack_b4;
  unsigned int uStack_b0;
  unsigned int uStack_ac;
  float temp_v36;
  float fStack_a4;
  float temp_v37 [6];
  unsigned int temp_v38;
  unsigned int temp_v39;
  unsigned int temp_v40;
  unsigned int temp_v41;
  float temp_v42;
  float *temp_v43;
  float temp_v44 [4];
  unsigned int temp_v45 [12];
  int temp_v46;
  int iStack_2c;
  int iStack_28;
  
  iStack_28 = param_3;
  iStack_2c = param_2;
  temp_v46 = param_1;
  temp_v45[1] = 0x2000;
  temp_v45[5] = 0x200;
  temp_v45[0] = 0;
  temp_v45[2] = 0x2100;
  temp_v45[3] = 0x2200;
  temp_v45[4] = 0x100;
  *DAT_004652a0 = temp_v45[*(unsigned int *)(param_3 + 0x1c) & 0xff] | 0x1000;
  DAT_004652a0[1] = 0xa0080;
  temp_v44[0] = 0.0f;
  temp_v44[1] = 0.0f;
  temp_v44[2] = 0.0f;
  temp_v4 = *(int *)(param_3 + 0x168);
  temp_v0 = *(unsigned int *)(param_2 + 0x14) & 0xfffff9ff;
  if (temp_v4 >= 2) {
    temp_v2 = temp_v0 | 0x2000;
  }
  else {
    temp_v2 = *(unsigned int *)(param_2 + 0x14) & 0xffffd9ff;
  }
  DAT_004652a0 = DAT_004652a0 + 2;
  *(unsigned int *)(param_2 + 0x14) = temp_v0;
  *(unsigned int *)(param_2 + 0x14) = temp_v2 & 0xfffff7ff;
  if (temp_v4 >= 3) {
    temp_v2 = (temp_v2 & 0xfffff7ff) | 0x4000;
  }
  else {
    temp_v2 = temp_v2 & 0xffffb7ff;
  }
  *(unsigned int *)(param_2 + 0x14) = temp_v2;
  temp_v3 = 0;
  temp_v21 = 0.0f;
  if (0 < temp_v4) {
    temp_v10 = 0xbf8000003f800000;
    temp_v8 = 0x4000000000000000;
    do {
      puVar6 = (unsigned int *)(param_3 + temp_v3 * 0x58 + 0x16c);
      if (*(char *)((int)puVar6 + 0x25) != '\0') {
        if (*(char *)(puVar6 + 9) != '\0') {
          temp_v6 = (float)puVar6[4];
          FUN_00374260(&temp_v32,puVar6[3] & 0xff);
          temp_v11 = temp_v32;
          pfStack_154 = temp_v33;
          uStack_150 = uStack_d0;
          temp_v12 = uStack_cc;
          temp_v13 = temp_v34;
          uStack_144 = uStack_c4;
          uStack_140 = uStack_c0;
          temp_v14 = uStack_bc;
          temp_v15 = temp_v35;
          uStack_134 = uStack_b4;
          uStack_130 = uStack_b0;
          temp_v16 = uStack_ac;
          *(float *)&puVar6[10] = temp_v32;
          puVar6[0xb] = (unsigned int)temp_v33;
          puVar6[0xc] = uStack_d0;
          puVar6[0xd] = uStack_cc;
          puVar6[0xe] = temp_v34;
          puVar6[0xf] = uStack_c4;
          puVar6[0x10] = uStack_c0;
          puVar6[0x11] = uStack_bc;
          puVar6[0x12] = temp_v35;
          puVar6[0x13] = uStack_b4;
          puVar6[0x14] = uStack_b0;
          puVar6[0x15] = uStack_ac;
          *(unsigned char *)(puVar6 + 9) = 0;
        }
        else {
          temp_v6 = (float)puVar6[10];
          pfStack_154 = (float *)puVar6[0xb];
          uStack_150 = puVar6[0xc];
          temp_v12 = puVar6[0xd];
          temp_v13 = puVar6[0xe];
          uStack_144 = puVar6[0xf];
          uStack_140 = puVar6[0x10];
          temp_v14 = puVar6[0x11];
          temp_v15 = puVar6[0x12];
          uStack_134 = puVar6[0x13];
          uStack_130 = puVar6[0x14];
          temp_v16 = puVar6[0x15];
          temp_v11 = temp_v6;
        }
        temp_v0 = puVar6[1] & 0xff;
        temp_v9 = (float)((unsigned long long)temp_v8 >> 0x20);
        temp_v7 = (unsigned int)temp_v8;
        switch(temp_v0) {
        case 0:
          temp_v6 = (float)VectorSignedToFloat(*puVar6,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v44[temp_v3] = temp_v6;
          *(unsigned int *)(param_2 + 0x14) = *(unsigned int *)(param_2 + 0x14) | (1 << ((temp_v3 + 9U) & 0xff));
          break;
        case 1:
          temp_v6 = (float)VectorUnsignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v44[temp_v3] = temp_v6 + temp_v9;
          temp_v5 = *(int *)(temp_v46 + 0xa4);
          if (temp_v5 != 0) {
            temp_v11 = *(float *)(temp_v5 + 0x178);
            pfStack_154 = *(float **)(temp_v5 + 0x17c);
            uStack_150 = *(unsigned int *)(temp_v5 + 0x180);
            temp_v12 = *(unsigned int *)(temp_v5 + 0x184);
            temp_v13 = *(unsigned int *)(temp_v5 + 0x188);
            uStack_144 = *(unsigned int *)(temp_v5 + 0x18c);
            uStack_140 = *(unsigned int *)(temp_v5 + 400);
            temp_v14 = *(unsigned int *)(temp_v5 + 0x194);
            temp_v15 = *(unsigned int *)(temp_v5 + 0x198);
            uStack_134 = *(unsigned int *)(temp_v5 + 0x19c);
            uStack_130 = *(unsigned int *)(temp_v5 + 0x1a0);
            temp_v16 = *(unsigned int *)(temp_v5 + 0x1a4);
          }
          break;
        case 2:
          temp_v6 = (float)VectorUnsignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v44[temp_v3] = temp_v6 + temp_v9;
          break;
        case 3:
          if ((int)puVar6[2] >= 0) {
            temp_v5 = *(int *)(*(int *)(temp_v46 + 0xac) + puVar6[2] * 4);
          }
          else {
            temp_v5 = *(int *)(temp_v46 + 0xa4);
          }
          if (temp_v3 == 0) {
            temp_v29 = temp_v14;
            temp_v28 = temp_v12;
          }
          else {
            temp_v31 = temp_v14;
            temp_v30 = temp_v12;
          }
          temp_v12 = temp_v7;
          temp_v14 = temp_v7;
          FUN_002a5078(&temp_v11,&temp_v11,temp_v5 + 0x228);
          FUN_002a5078(&temp_v11,&temp_v11,temp_v5 + 0x148);
          temp_v21 = 1.4013e-45f;
          break;
        case 4:
          if ((int)puVar6[2] >= 0) {
            temp_v5 = *(int *)(*(int *)(temp_v46 + 0xac) + puVar6[2] * 4);
          }
          else {
            temp_v5 = *(int *)(temp_v46 + 0xa4);
          }
          temp_v28 = temp_v12;
          temp_v29 = temp_v14;
          temp_v12 = temp_v7;
          temp_v14 = temp_v7;
          FUN_003e6070(temp_v5);
          temp_v9 = temp_v6;
          FUN_003e6054(temp_v5);
          temp_v18 = (int *)(**(romwright_code **)(**(int **)(temp_v5 + 0x260) + 0x14))();
          FUN_002c00b4(&uStack_d0,temp_v5 + 0x228);
          temp_v1 = *temp_v18;
          if (temp_v1 != -0x80000000) {
            if (temp_v1 != 0x20000000) {
              if (temp_v1 == 0x40000000) {
                temp_v36 = (float)((unsigned long long)temp_v10 >> 0x20) / (temp_v6 - temp_v9);
                fStack_a4 = temp_v9 * temp_v36;
              }
            }
            else {
              temp_v33 = temp_v37;
              temp_v6 = (float)temp_v10 / (temp_v6 - temp_v9);
              if (((DAT_00476634 & 1) == 0) && (temp_v1 = FUN_002c00d4(&DAT_00476634), temp_v1 != 0)) {
                DAT_004efd6c = (unsigned int)temp_v10;
                DAT_004efd70 = (unsigned int)temp_v8;
                DAT_004efd74 = DAT_004efd70;
                DAT_004efd78 = DAT_004efd70;
                DAT_004efd7c = DAT_004efd70;
                DAT_004efd80 = DAT_004efd6c;
                DAT_004efd84 = DAT_004efd70;
                DAT_004efd88 = DAT_004efd70;
                DAT_004efd8c = DAT_004efd70;
                DAT_004efd90 = DAT_004efd70;
                DAT_004efd94 = DAT_004efd6c;
                DAT_004efd98 = DAT_004efd70;
              }
              FUN_002c00b4(temp_v33,&DAT_004efd6c);
              temp_v37[1] = 0.0f;
              temp_v37[2] = 0.0f;
              temp_v37[3] = 0.0f;
              temp_v37[4] = 0.0f;
              temp_v38 = 0;
              temp_v39 = 0;
              temp_v40 = 0;
              temp_v41 = 0;
              temp_v43 = (float *)0x0;
              temp_v37[0] = temp_v6;
              temp_v37[5] = temp_v6;
              temp_v42 = temp_v6;
              FUN_002a5078(&temp_v11,&temp_v11,temp_v37);
            }
          }
          else {
            temp_v43 = temp_v17;
            temp_v6 = (float)temp_v10 / (temp_v6 - temp_v9);
            if (((DAT_00476634 & 1) == 0) && (temp_v1 = FUN_002c00d4(&DAT_00476634), temp_v1 != 0)) {
              DAT_004efd6c = (unsigned int)temp_v10;
              DAT_004efd70 = (unsigned int)temp_v8;
              DAT_004efd74 = DAT_004efd70;
              DAT_004efd78 = DAT_004efd70;
              DAT_004efd7c = DAT_004efd70;
              DAT_004efd80 = DAT_004efd6c;
              DAT_004efd84 = DAT_004efd70;
              DAT_004efd88 = DAT_004efd70;
              DAT_004efd8c = DAT_004efd70;
              DAT_004efd90 = DAT_004efd70;
              DAT_004efd94 = DAT_004efd6c;
              DAT_004efd98 = DAT_004efd70;
            }
            FUN_002c00b4(temp_v43,&DAT_004efd6c);
            temp_v17[1] = 0.0f;
            temp_v18 = (int *)0x0;
            temp_v19 = 0;
            temp_v20 = 0;
            temp_v22 = 0;
            temp_v23 = 0;
            temp_v24 = 0;
            temp_v25 = 0;
            temp_v27 = 0;
            temp_v17[0] = temp_v6;
            temp_v21 = temp_v6;
            temp_v26 = temp_v6;
            FUN_002a5078(&temp_v11,&temp_v11,temp_v17);
          }
          FUN_002a5078(&temp_v11,&temp_v11,&uStack_d0);
          FUN_002a5078(&temp_v11,&temp_v11,temp_v5 + 0x148);
          temp_v21 = 1.4013e-45f;
        }
        puVar1 = DAT_004652a0;
        temp_v5 = 3;
        if (temp_v3 == 2) {
          temp_v5 = 2;
        }
        temp_v0 = temp_v3 * 3 + 0x8000000b;
        if (temp_v5 != 1) {
          if (temp_v5 != 2) {
            if (temp_v5 != 3) {
              if (temp_v5 == 4) {
                *DAT_004652a0 = temp_v0;
                puVar1[1] = 0xf02c0;
                FUN_002a1b4c(puVar1 + 2,&temp_v11,0xff02c1);
                DAT_004652a0 = DAT_004652a0 + 0x14;
              }
            }
            else {
              *DAT_004652a0 = temp_v0;
              puVar1[1] = 0xf02c0;
              FUN_002a1ac8(puVar1 + 2,&temp_v11,0xbf02c1);
              DAT_004652a0 = DAT_004652a0 + 0x10;
            }
          }
          else {
            puVar4 = DAT_004652a0 + 2;
            *DAT_004652a0 = temp_v0;
            puVar1[1] = 0x808f02c0;
            FUN_002a1a3c(puVar4,&temp_v11);
            DAT_004652a0 = DAT_004652a0 + 10;
          }
        }
        else {
          puVar4 = DAT_004652a0 + 2;
          *DAT_004652a0 = temp_v0;
          puVar1[1] = 0x804f02c0;
          FUN_002a1a08(puVar4,&temp_v11);
          DAT_004652a0 = DAT_004652a0 + 6;
        }
      }
      puVar1 = DAT_004652a0;
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < temp_v4);
    if (temp_v21 != 0.0f) {
      *DAT_004652a0 = 0x80000013;
      puVar1[1] = 0x804f02c0;
      FUN_002a1a08(puVar1 + 2,&temp_v28);
      DAT_004652a0 = DAT_004652a0 + 6;
    }
  }
  puVar1 = DAT_004652a0;
  *DAT_004652a0 = 0x8000000a;
  puVar1[1] = 0x804f02c0;
  FUN_002a1b98(puVar1 + 2,temp_v44);
  DAT_004652a0 = DAT_004652a0 + 6;
  return;
}
