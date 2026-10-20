/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0048e46c` (_code @ 0x48e46c, 0x1c74 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int CONCAT44(double, unsigned int);
int FUN_002e1208(...);
int FUN_00356470(void);
int FUN_003c3048(...);
int dataTable2BType3Count(void);
int dataTable2BType1Count(void);
int MapNaviTable_GetAreaCount(void);
int MapNaviTable_GetCategoryCount(void);
int SUB42(double, int);
int VectorSignedToFloat(...);
int VectorUnsignedToFloat(...);

/* stack frame of param_2: 32 slot(s), 128 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spAC; /* 0xac: local_ac */
    unsigned int spB8; /* 0xb8: local_b8 */
    unsigned int sp134; /* 0x134: local_134 */
    unsigned int sp13C; /* 0x13c: local_13c */
    unsigned int sp140; /* 0x140: local_140 */
    unsigned int sp144; /* 0x144: local_144 */
    unsigned int sp148; /* 0x148: local_148 */
    unsigned int sp14C; /* 0x14c: local_14c */
    unsigned int sp150; /* 0x150: local_150 */
    unsigned int sp154; /* 0x154: local_154 */
    unsigned int sp158; /* 0x158: local_158 */
    unsigned int sp15C; /* 0x15c: local_15c */
    unsigned int sp164; /* 0x164: local_164 */
    unsigned int sp168; /* 0x168: local_168 */
    unsigned int sp16C; /* 0x16c: local_16c */
    unsigned int sp170; /* 0x170: local_170 */
    unsigned int sp174; /* 0x174: local_174 */
    unsigned int sp178; /* 0x178: local_178 */
    unsigned int sp17C; /* 0x17c: local_17c */
    unsigned int sp180; /* 0x180: local_180 */
} param_2_stack;

extern int DAT_00587f24; /* 0x587f24 */
extern int g_gameState; /* 0x5f15fc */
extern int DAT_005f1600; /* 0x5f1600 */
extern unsigned int DAT_00616ee0; /* 0x616ee0 */
extern unsigned char DAT_00616ee4; /* 0x616ee4 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: CONCAT44 (PIECE). */
/* Unsupported intrinsic, declaration required: SUB42 (SUBPIECE). */
#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
extern int gameFlagIsSet(void);
/* Supplied declaration required: FUN_002e1208. */
/* Supplied declaration required: FUN_00356470. */
extern int conditionalTableFindIndex(unsigned int);
extern unsigned int *dataTable23Sub0GetEntry(int);
extern int FUN_003a3270(void);
extern unsigned short FUN_003ae4d0(unsigned int);
extern int dataTable23Type0CountWithAoc(void);
extern unsigned short FUN_003bf894(unsigned int);
extern int FUN_003c3010(unsigned int);
extern unsigned short FUN_003c302c(unsigned int);
/* Supplied declaration required: FUN_003c3048. */
extern unsigned int FUN_003cd5f4(unsigned int);
extern short FUN_0048b1bc(int, int);
extern short *dataTable2BType3GetEntry(unsigned char *, int);
extern char *dataTable2BType1GetEntry(unsigned char *, int);
/* Supplied declaration required: dataTable2BType3Count. */
/* Supplied declaration required: dataTable2BType1Count. */
/* Supplied declaration required: MapNaviTable_GetAreaCount. */
extern int MapNaviTable_GetAreaRecord(unsigned char *, unsigned int);
/* Supplied declaration required: MapNaviTable_GetCategoryCount. */
extern short *MapNaviTable_GetCategoryRecord(unsigned char *, int);


void FUN_0048e46c(int param_1,unsigned int param_2)

{
/* irregular: 16 goto(s); irregular input(s): in_d9, in_fpscr, in_s0, in_s2; 11 native warning(s); review required */
  unsigned char temp_v0;
  char temp_v1;
  short temp_v2;
  short temp_v3;
  short temp_v4;
  unsigned short temp_v5;
  unsigned short temp_v6;
  int temp_v7;
  short *psVar9;
  unsigned int temp_v8;
  unsigned char *puVar11;
  unsigned int *puVar12;
  char *pcVar13;
  int *piVar14;
  int temp_v9;
  int *piVar16;
  int temp_v10;
  int temp_v11;
  int temp_v12;
  char *pcVar20;
  int temp_v13;
  short *psVar22;
  int temp_v14;
  short temp_v15;
  unsigned char temp_v16;
  unsigned int in_fpscr;
  unsigned int in_s0;
  unsigned int temp_v17;
  float temp_v18;
  unsigned int temp_v19;
  float temp_v20;
  float in_s2;
  unsigned int temp_v21;
  float temp_v22;
  float temp_v23;
  float temp_v24;
  unsigned int temp_v25;
  float temp_v26;
  float temp_v27;
  float temp_v28;
  float temp_v29;
  unsigned long long temp_v30;
  unsigned long long temp_v31;
  long long temp_v32;
  unsigned long long in_d9;
  unsigned long long temp_v33;
  unsigned long long temp_v34;
  int temp_v35;
  int temp_v36;
  int temp_v37;
  int temp_v38;
  int temp_v39;
  unsigned char temp_v40 [4];
  int temp_v41;
  unsigned int temp_v42;
  int temp_v43;
  int temp_v44;
  int temp_v45;
  int temp_v46;
  int temp_v47;
  int temp_v48;
  unsigned int temp_v49;
  unsigned int temp_v50;
  unsigned int temp_v51 [30];
  unsigned int temp_v52 [10];
  int temp_v53;
  int temp_v54;
  unsigned char temp_v55 [4];
  int temp_v56;
  int temp_v57;
  int temp_v58;
  unsigned int temp_v59 [2];
  int *temp_v60;
  int temp_v61;
  int temp_v62;
  int temp_v63;
  int iStack_2c;
  unsigned int temp_v64;
  
  pcVar20 = (char *)0x0;
  temp_v13 = 0;
  temp_v11 = 0;
  temp_v3 = 0x1be6;
  temp_v49 = 0x1bde;
  temp_v30 = 0x40e000003cc49ba6;
  temp_v33 = 0x404000003c449ba6;
  temp_v37 = 0;
  iStack_2c = param_1;
  temp_v64 = param_2;
  FUN_002e1208(0xb,0x1bde,&temp_v53,&temp_v54);
  FUN_002e1208(0xb,0x1be6,temp_v59,&temp_v44);
  psVar22 = (short *)0x0;
  temp_v7 = FUN_003a3270();
  temp_v34 = 0x3f000000;
  if (0 < temp_v7) {
    do {
      temp_v42 = 0xb;
      psVar9 = psVar22;
      FUN_00356470();
      temp_v8 = (unsigned int)*psVar9;
      temp_v16 = temp_v8 != 0xffffffff;
      if (temp_v16) {
        temp_v8 = (unsigned int)(unsigned short)psVar9[6];
      }
      if (((temp_v16 && temp_v8 != 2) && ((psVar9[0x18] == 0 || (temp_v7 = gameFlagIsSet(), temp_v7 != 0))))
         && ((psVar9[0x19] == 0 || (temp_v7 = gameFlagIsSet(), temp_v7 == 0)))) {
        temp_v4 = psVar9[6];
        if (temp_v4 != 3) {
          if (temp_v4 != 1) {
            if (temp_v4 != 0) {
              if (temp_v4 != 5) {
                if (temp_v4 == 6) {
                  temp_v42 = 4;
                  temp_v49 = 0xa420;
                  temp_v3 = -0x5bd8;
                }
              }
              else {
                temp_v42 = 4;
                temp_v49 = 42000;
                temp_v3 = -0x5be8;
              }
            }
            else {
              temp_v49 = 0x1bde;
              temp_v3 = 0x1be6;
            }
          }
          else {
            temp_v49 = 0x1bee;
            temp_v3 = 0x1bf6;
          }
        }
        else {
          temp_v49 = 0x1bfe;
          temp_v3 = 0x1c06;
        }
        if ((int)*psVar9 == temp_v64) {
          temp_v4 = 1;
          temp_v7 = 0;
          puVar11 = temp_v55;
          dataTable2BType1Count();
          if (0 < (int)puVar11) {
            do {
              pcVar20 = (char *)dataTable2BType1GetEntry(temp_v55,temp_v7);
              if ((*(short *)(pcVar20 + 8) == 0) &&
                 ((unsigned int)(unsigned char)pcVar20[1] == *(unsigned int *)(psVar9 + 0x10))) {
                temp_v4 = (short)pcVar20[3];
                break;
              }
              temp_v7 = temp_v7 + 1;
              puVar11 = temp_v55;
              dataTable2BType1Count();
            } while (temp_v7 < (int)puVar11);
          }
          temp_v15 = psVar9[4];
          temp_v2 = psVar9[2];
          temp_v7 = param_1 + psVar9[1] * 8;
          temp_v19 = *(unsigned int *)(temp_v7 + 0x1490);
          temp_v17 = *(unsigned int *)(temp_v7 + 0x148c);
          temp_v29 = (float)VectorSignedToFloat(temp_v19,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v20 = (float)VectorSignedToFloat(temp_v19,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v28 = (float)VectorSignedToFloat(temp_v17,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v7 = param_1 + temp_v13 * 100;
          temp_v18 = (float)VectorSignedToFloat(temp_v17,(unsigned char)(in_fpscr >> 0x16) & 3);
          *(unsigned int *)(temp_v7 + 0x178c) = temp_v42;
          temp_v22 = (float)VectorSignedToFloat((int)temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v23 = (float)VectorSignedToFloat((int)temp_v15,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v26 = (float)VectorSignedToFloat((int)temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
          *(char *)(temp_v7 + 0x1790) = pcVar20[1];
          temp_v20 = (float)VectorSignedToFloat((int)(short)(int)temp_v20,(unsigned char)(in_fpscr >> 0x16) & 3);
          *(unsigned short *)(temp_v7 + 0x17b8) = 2;
          temp_v27 = (float)VectorSignedToFloat((int)temp_v15,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v18 = (float)VectorSignedToFloat((int)(short)(int)temp_v18,(unsigned char)(in_fpscr >> 0x16) & 3);
          *(unsigned char *)(temp_v7 + 0x1791) = 0xfd;
          *(short *)(temp_v7 + 0x17ba) = (short)(int)psVar22;
          *(short *)(temp_v7 + 0x1792) = temp_v4;
          *(unsigned short *)(temp_v7 + 0x17bc) = 0;
          *(unsigned short *)(temp_v7 + 0x17be) = 0;
          temp_v24 = (float)VectorSignedToFloat((int)(short)(int)(temp_v28 * (float)temp_v34),
                                              (unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v28 = (float)VectorSignedToFloat((int)(short)(int)(temp_v29 * (float)temp_v34),
                                              (unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v20 = (float)VectorSignedToFloat((int)(short)(int)(temp_v20 + temp_v23 * (float)temp_v30),
                                              (unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v22 = (float)VectorSignedToFloat((int)(short)(int)(temp_v18 + temp_v22 * (float)temp_v30),
                                              (unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v23 = (float)VectorSignedToFloat((int)(short)(int)(temp_v24 + temp_v26 * (float)temp_v33),
                                              (unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v24 = (float)((unsigned long long)temp_v30 >> 0x20);
          temp_v18 = (float)VectorSignedToFloat((int)(short)(int)(temp_v28 + temp_v27 * (float)temp_v33),
                                              (unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v28 = (float)((unsigned long long)temp_v33 >> 0x20);
          temp_v43 = (int)(short)(int)(temp_v22 - temp_v24);
          temp_v56 = (int)(short)(int)(temp_v23 - temp_v28);
          temp_v57 = (int)(short)(int)(temp_v18 - temp_v28);
          if (temp_v64 != 0x17) {
            *(unsigned int *)(temp_v7 + 0x17ec) = 0;
            if ((temp_v64 == 0x27) && (psVar9[1] == 8)) {
              *(unsigned int *)(temp_v7 + 0x17ec) = 8;
            }
          }
          else {
            *(int *)(temp_v7 + 0x17ec) = (int)psVar9[1];
          }
          temp_v9 = *(int *)(psVar9 + 0x12);
          if (temp_v9 == 0) {
            temp_v9 = (int)psVar9[5];
          }
          VectorSignedToFloat(temp_v9,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v4 = FUN_0048b1bc(param_1,temp_v9);
          *(short *)(temp_v7 + 0x1794) = temp_v4 + (short)temp_v49;
          FUN_002e1208(temp_v42,*(unsigned short *)(temp_v7 + 0x1794),&temp_v53,&temp_v54);
          temp_v18 = (float)VectorSignedToFloat(temp_v43,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v28 = (float)VectorSignedToFloat((int)psVar9[0x14],(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v20 = (float)VectorSignedToFloat((int)(short)(int)(temp_v20 - temp_v24),
                                              (unsigned char)(in_fpscr >> 0x16) & 3);
          *(float *)(temp_v7 + 0x1798) = temp_v28 + temp_v18;
          temp_v18 = (float)VectorSignedToFloat((int)psVar9[0x15],(unsigned char)(in_fpscr >> 0x16) & 3);
          *(float *)(temp_v7 + 0x179c) = temp_v18 + temp_v20;
          temp_v17 = VectorSignedToFloat(temp_v53,(unsigned char)(in_fpscr >> 0x16) & 3);
          *(unsigned int *)(temp_v7 + 0x17a0) = temp_v17;
          temp_v17 = VectorSignedToFloat(temp_v54,(unsigned char)(in_fpscr >> 0x16) & 3);
          *(unsigned int *)(temp_v7 + 0x17a4) = temp_v17;
          *(short *)(temp_v7 + 0x1796) = temp_v3;
          temp_v9 = *(int *)(psVar9 + 0x12);
          if (temp_v9 == 0) {
            temp_v9 = (int)psVar9[5];
          }
          VectorSignedToFloat(temp_v9,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v4 = FUN_0048b1bc(param_1,temp_v9);
          *(short *)(temp_v7 + 0x1796) = temp_v4 + temp_v3;
          FUN_002e1208(temp_v42,temp_v3,temp_v59,&temp_v44);
          temp_v13 = temp_v13 + 1;
          in_s2 = (float)VectorSignedToFloat(temp_v56,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v20 = (float)VectorSignedToFloat(temp_v57,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v18 = (float)VectorSignedToFloat((int)psVar9[0x16],(unsigned char)(in_fpscr >> 0x16) & 3);
          *(float *)(temp_v7 + 0x17a8) = temp_v18 + in_s2;
          temp_v18 = (float)VectorSignedToFloat((int)psVar9[0x17],(unsigned char)(in_fpscr >> 0x16) & 3);
          *(float *)(temp_v7 + 0x17ac) = temp_v18 + temp_v20;
          temp_v17 = VectorSignedToFloat(temp_v59[0],(unsigned char)(in_fpscr >> 0x16) & 3);
          *(unsigned int *)(temp_v7 + 0x17b0) = temp_v17;
          in_s0 = VectorSignedToFloat(temp_v44,(unsigned char)(in_fpscr >> 0x16) & 3);
          *(unsigned int *)(temp_v7 + 0x17b4) = in_s0;
          *(unsigned short *)(temp_v7 + 0x17c0) = 0;
          *(unsigned int *)(temp_v7 + 0x17d4) = 0xffffffff;
          *(unsigned int *)(temp_v7 + 0x17d8) = 0;
          *(unsigned char *)(temp_v7 + 0x17dc) = 0;
        }
      }
      psVar22 = (short *)((int)psVar22 + 1);
      temp_v7 = FUN_003a3270();
    } while ((int)psVar22 < temp_v7);
  }
  FUN_002e1208(0xb,0x1b66,&temp_v53,&temp_v54);
  FUN_002e1208(0xb,0x1b8e,temp_v59,&temp_v44);
  temp_v46 = 0;
  if (g_gameState != 0x1c) {
    if (g_gameState == 0x1d) {
      temp_v52[0] = 4;
      temp_v52[1] = 5;
      temp_v52[2] = 6;
      temp_v52[3] = 7;
      temp_v46 = 4;
      goto LAB_0048eaec;
    }
    if (g_gameState == 0x1e) {
      temp_v52[5] = 0xd;
      temp_v52[0] = 8;
      temp_v52[1] = 9;
      temp_v52[2] = 10;
      temp_v46 = 6;
      temp_v52[3] = 0xb;
      temp_v52[4] = 0xc;
      goto LAB_0048eaec;
    }
    if (g_gameState != 0x1f) goto LAB_0048eaec;
    temp_v52[0] = 0xe;
    temp_v52[1] = 0xf;
    temp_v52[2] = 0x10;
    temp_v52[3] = 0x11;
    temp_v52[4] = 0x12;
    temp_v7 = 0;
    temp_v46 = 5;
  }
  else {
    temp_v52[0] = 0;
    temp_v52[1] = 1;
    temp_v52[2] = 2;
    temp_v52[3] = 3;
    temp_v46 = 4;
LAB_0048eaec:
    temp_v7 = 0;
    if (temp_v46 == 0) goto LAB_0048ed6c;
  }
  do {
    FUN_003c3048(temp_v52[temp_v7]);
    in_d9 = CONCAT44(in_s2,in_s0);
    temp_v9 = FUN_003c3010(temp_v52[temp_v7]);
    temp_v9 = param_1 + temp_v9 * 8;
    temp_v17 = *(unsigned int *)(temp_v9 + 0x148c);
    temp_v19 = *(unsigned int *)(temp_v9 + 0x1490);
    temp_v22 = (float)VectorSignedToFloat(temp_v17,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v23 = (float)VectorSignedToFloat(temp_v17,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v18 = (float)VectorSignedToFloat(temp_v19,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v20 = (float)VectorSignedToFloat(temp_v19,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v9 = param_1 + temp_v13 * 100;
    *(unsigned int *)(temp_v9 + 0x178c) = 0xb;
    temp_v28 = (float)VectorSignedToFloat((int)(short)(int)temp_v20,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v20 = (float)VectorSignedToFloat((int)(short)(int)temp_v23,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v22 = (float)VectorSignedToFloat((int)(short)(int)(temp_v22 * (float)temp_v34),
                                        (unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v27 = (float)(in_d9 >> 0x20);
    temp_v23 = (float)VectorSignedToFloat((int)(short)(int)(temp_v18 * (float)temp_v34),
                                        (unsigned char)(in_fpscr >> 0x16) & 3);
    *(char *)(temp_v9 + 0x1790) = pcVar20[1];
    *(unsigned short *)(temp_v9 + 0x17b8) = 2;
    *(unsigned char *)(temp_v9 + 0x1791) = 0xfc;
    temp_v17 = temp_v52[temp_v7];
    *(short *)(temp_v9 + 0x17ba) = (short)temp_v17;
    *(unsigned short *)(temp_v9 + 0x1792) = 1;
    temp_v24 = (float)VectorSignedToFloat((int)(short)(int)(temp_v20 + (float)in_d9 * (float)temp_v30),
                                        (unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v18 = (float)VectorSignedToFloat((int)(short)(int)(temp_v28 + temp_v27 * (float)temp_v30),
                                        (unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v26 = (float)((unsigned long long)temp_v30 >> 0x20);
    temp_v28 = (float)VectorSignedToFloat((int)(short)(int)(temp_v22 + (float)in_d9 * (float)temp_v33),
                                        (unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v20 = (float)VectorSignedToFloat((int)(short)(int)(temp_v23 + temp_v27 * (float)temp_v33),
                                        (unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v22 = (float)((unsigned long long)temp_v33 >> 0x20);
    in_s2 = (float)(int)(temp_v28 - temp_v22);
    temp_v43 = (int)(short)(int)(temp_v24 - temp_v26);
    temp_v56 = (int)SUB42(in_s2,0);
    temp_v57 = (int)(short)(int)(temp_v20 - temp_v22);
    temp_v5 = FUN_003c302c(temp_v17);
    *(unsigned short *)(temp_v9 + 0x17bc) = temp_v5;
    *(unsigned short *)(temp_v9 + 0x17be) = 0;
    *(unsigned short *)(temp_v9 + 0x1794) = 0x1b66;
    FUN_002e1208(0xb,0x1b66,&temp_v53,&temp_v54);
    temp_v19 = VectorSignedToFloat(temp_v43,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v17 = VectorSignedToFloat((int)(short)(int)(temp_v18 - temp_v26),(unsigned char)(in_fpscr >> 0x16) & 3);
    *(unsigned int *)(temp_v9 + 0x1798) = temp_v19;
    *(unsigned int *)(temp_v9 + 0x179c) = temp_v17;
    temp_v17 = VectorSignedToFloat(temp_v53,(unsigned char)(in_fpscr >> 0x16) & 3);
    *(unsigned int *)(temp_v9 + 0x17a0) = temp_v17;
    temp_v17 = VectorSignedToFloat(temp_v54,(unsigned char)(in_fpscr >> 0x16) & 3);
    *(unsigned int *)(temp_v9 + 0x17a4) = temp_v17;
    *(unsigned short *)(temp_v9 + 0x1796) = 0x1b8e;
    FUN_002e1208(0xb,0x1b8e,temp_v59,&temp_v44);
    temp_v19 = VectorSignedToFloat(temp_v56,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v17 = VectorSignedToFloat(temp_v57,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v7 = temp_v7 + 1;
    temp_v13 = temp_v13 + 1;
    *(unsigned int *)(temp_v9 + 0x17a8) = temp_v19;
    *(unsigned int *)(temp_v9 + 0x17ac) = temp_v17;
    temp_v17 = VectorSignedToFloat(temp_v59[0],(unsigned char)(in_fpscr >> 0x16) & 3);
    *(unsigned int *)(temp_v9 + 0x17b0) = temp_v17;
    in_s0 = VectorSignedToFloat(temp_v44,(unsigned char)(in_fpscr >> 0x16) & 3);
    *(unsigned int *)(temp_v9 + 0x17b4) = in_s0;
    *(unsigned short *)(temp_v9 + 0x17c0) = 0;
    *(unsigned int *)(temp_v9 + 0x17d4) = 0xffffffff;
    *(unsigned int *)(temp_v9 + 0x17d8) = 0;
    *(unsigned char *)(temp_v9 + 0x17dc) = 0;
  } while (temp_v7 < temp_v46);
LAB_0048ed6c:
  temp_v7 = 0;
  do {
    temp_v9 = 0;
    puVar11 = temp_v55;
    dataTable2BType1Count();
    if (0 < (int)puVar11) {
      do {
        pcVar20 = (char *)dataTable2BType1GetEntry(temp_v55,temp_v9);
        if ((int)*pcVar20 == temp_v64) {
          if (temp_v7 != 0) {
            if (temp_v7 != 1) {
              if (temp_v7 != 2) {
                if (temp_v7 != 3) {
                  if (temp_v7 != 4) {
                    if (temp_v7 == 3) goto LAB_0048ee54;
                    if (temp_v7 == 4) goto LAB_0048ee94;
                    if (temp_v7 != 3) goto LAB_0048f224;
LAB_0048ee74:
                    if (*(short *)(pcVar20 + 8) != 0x19 && *(short *)(pcVar20 + 8) != 0x1a)
                    goto LAB_0048f224;
                  }
                  else if (*(short *)(pcVar20 + 8) != 3) {
LAB_0048ee94:
                    if (*(short *)(pcVar20 + 8) != 0x17) goto LAB_0048f224;
                  }
                }
                else if (*(short *)(pcVar20 + 8) != 2) {
LAB_0048ee54:
                  temp_v3 = *(short *)(pcVar20 + 8);
                  if ((temp_v3 != 0x12 && temp_v3 != 0x13) &&
                     ((temp_v3 != 0x14 && temp_v3 != 0x15) && temp_v3 != 0x16)) goto LAB_0048ee74;
                }
              }
              else if (*(short *)(pcVar20 + 8) != 4) goto LAB_0048f224;
            }
            else if (*(short *)(pcVar20 + 8) != 0) goto LAB_0048f224;
          }
          else if (*(short *)(pcVar20 + 8) != 1) goto LAB_0048f224;
          if ((temp_v64 != 0x17) || (g_gameState != 0x17)) goto LAB_0048eeec;
          if ((((DAT_005f1600 != 1) && (DAT_005f1600 != 2)) ||
              ((temp_v1 = pcVar20[1], temp_v1 != '}' && temp_v1 != '~' &&
               ((temp_v1 != '\x7f' && temp_v1 != -0x80) && temp_v1 != -0x50)))) &&
             ((DAT_005f1600 != 3 && DAT_005f1600 != 6 ||
              ((temp_v1 = pcVar20[1], temp_v1 != 'y' && temp_v1 != 'z' &&
               ((temp_v1 != '\x7f' && temp_v1 != -0x80) && temp_v1 != -0x50)))))) {
            if (DAT_005f1600 != 4) {
              if ((DAT_005f1600 != 5) ||
                 ((temp_v1 = pcVar20[1], temp_v1 != 'y' && temp_v1 != 'z' &&
                  (temp_v1 != '}' && temp_v1 != '~')))) {
LAB_0048eeec:
                temp_v16 = 0;
                if (((*(short *)(pcVar20 + 4) != 0) && (temp_v12 = gameFlagIsSet(), temp_v12 == 0)) ||
                   ((*(short *)(pcVar20 + 6) != 0 && (temp_v12 = gameFlagIsSet(), temp_v12 != 0)))) {
                  temp_v16 = 1;
                }
                temp_v3 = *(short *)(pcVar20 + 8);
                if ((temp_v3 == 0x13 || temp_v3 == 0x14) ||
                   ((temp_v3 == 0x15 || temp_v3 == 0x16) || !temp_v16)) {
                  temp_v4 = *(short *)(pcVar20 + 10);
                  temp_v15 = *(short *)(pcVar20 + 0xc);
                  temp_v16 = temp_v4 == -1 || temp_v15 == -1;
                  if (temp_v4 != -1 && temp_v15 != -1) {
                    temp_v16 = temp_v4 == 0 && temp_v15 == 0;
                  }
                  if (!temp_v16) {
                    if ((temp_v3 == 2 || temp_v3 == 4) || (temp_v3 == 0x17)) {
                      temp_v42 = 0xb;
                    }
                    else {
                      temp_v42 = 0x28;
                    }
                    if (temp_v3 != 0x12) {
                      if (temp_v3 != 0x13) {
                        if (temp_v3 != 0x14) {
                          if (temp_v3 != 0x15) {
                            if (temp_v3 != 0x16) {
                              if (temp_v3 != 0x19) {
                                if (temp_v3 == 0x1a) {
                                  temp_v4 = 0x120f;
                                  temp_v42 = 0x13;
                                  temp_v15 = 0x1210;
                                }
                              }
                              else {
                                temp_v4 = 0x120d;
                                temp_v42 = 0x13;
                                temp_v15 = 0x120e;
                              }
                            }
                            else {
                              temp_v4 = -0x5bcb;
                              temp_v42 = 4;
                              temp_v15 = -0x5bc9;
                            }
                          }
                          else {
                            temp_v4 = -0x5bcc;
                            temp_v42 = 4;
                            temp_v15 = -0x5bca;
                          }
                        }
                        else {
                          temp_v4 = -0x5bcf;
                          temp_v42 = 4;
                          temp_v15 = -0x5bcd;
                        }
                      }
                      else {
                        temp_v4 = -0x5bd0;
                        temp_v42 = 4;
                        temp_v15 = -0x5bce;
                      }
                    }
                    else {
                      temp_v4 = 0x123a;
                      temp_v42 = 0x13;
                      temp_v15 = 0x123b;
                    }
                    temp_v43 = (int)*(short *)(pcVar20 + 0xe);
                    temp_v48 = (int)*(short *)(pcVar20 + 0x10);
                    temp_v56 = (int)(short)((short)pcVar20[0x12] + *(short *)(pcVar20 + 0xe) / 2);
                    temp_v57 = (int)(short)((short)pcVar20[0x13] + *(short *)(pcVar20 + 0x10) / 2);
                    FUN_002e1208(temp_v42,temp_v4,&temp_v53,&temp_v54);
                    FUN_002e1208(temp_v42,temp_v15,temp_v59,&temp_v44);
                    if (*(short *)(pcVar20 + 8) != 0) {
                      puVar12 = (unsigned int *)(param_1 + temp_v13 * 100 + 0x178c);
                      temp_v13 = temp_v13 + 1;
                    }
                    else {
                      puVar12 = (unsigned int *)(param_1 + temp_v37 * 100 + 0x7b94);
                      temp_v37 = temp_v37 + 1;
                    }
                    *puVar12 = temp_v42;
                    temp_v17 = VectorSignedToFloat(temp_v43,(unsigned char)(in_fpscr >> 0x16) & 3);
                    temp_v21 = VectorSignedToFloat(temp_v48,(unsigned char)(in_fpscr >> 0x16) & 3);
                    *(char *)(puVar12 + 1) = pcVar20[1];
                    temp_v25 = VectorSignedToFloat(temp_v57,(unsigned char)(in_fpscr >> 0x16) & 3);
                    temp_v19 = VectorSignedToFloat(temp_v56,(unsigned char)(in_fpscr >> 0x16) & 3);
                    *(unsigned short *)(puVar12 + 0xb) = *(unsigned short *)(pcVar20 + 8);
                    *(char *)((int)puVar12 + 5) = pcVar20[2];
                    *(short *)((int)puVar12 + 6) = (short)pcVar20[3];
                    *(unsigned short *)(puVar12 + 0xc) = *(unsigned short *)(pcVar20 + 4);
                    *(unsigned short *)((int)puVar12 + 0x32) = *(unsigned short *)(pcVar20 + 6);
                    *(short *)(puVar12 + 2) = temp_v4;
                    puVar12[3] = temp_v17;
                    puVar12[4] = temp_v21;
                    temp_v17 = VectorSignedToFloat(temp_v53,(unsigned char)(in_fpscr >> 0x16) & 3);
                    puVar12[5] = temp_v17;
                    temp_v17 = VectorSignedToFloat(temp_v54,(unsigned char)(in_fpscr >> 0x16) & 3);
                    puVar12[6] = temp_v17;
                    *(short *)((int)puVar12 + 10) = temp_v15;
                    puVar12[7] = temp_v19;
                    puVar12[8] = temp_v25;
                    temp_v17 = VectorSignedToFloat(temp_v59[0],(unsigned char)(in_fpscr >> 0x16) & 3);
                    puVar12[9] = temp_v17;
                    temp_v17 = VectorSignedToFloat(temp_v44,(unsigned char)(in_fpscr >> 0x16) & 3);
                    puVar12[10] = temp_v17;
                    *(unsigned short *)(puVar12 + 0xd) = 0;
                    puVar12[0x12] = 0xffffffff;
                    puVar12[0x13] = (unsigned int)(unsigned char)pcVar20[0x14];
                    *(unsigned char *)(puVar12 + 0x14) = 0;
                  }
                }
              }
            }
            else {
              temp_v1 = pcVar20[1];
              if ((temp_v1 != 'y' && temp_v1 != 'z') && (temp_v1 != '}' && temp_v1 != '~'))
              goto LAB_0048eeec;
            }
          }
        }
LAB_0048f224:
        temp_v9 = temp_v9 + 1;
        puVar11 = temp_v55;
        dataTable2BType1Count();
      } while (temp_v9 < (int)puVar11);
    }
    temp_v7 = temp_v7 + 1;
  } while (temp_v7 < 5);
  temp_v42 = 0xb;
  FUN_002e1208(0xb,0x1b67,&temp_v53,&temp_v54);
  FUN_002e1208(0xb,0x1b8f,temp_v59,&temp_v44);
  temp_v9 = 0;
  temp_v7 = dataTable23Type0CountWithAoc();
  if (0 < temp_v7) {
    in_d9 = romwright_piece_4_4((int)(in_d9 >> 0x20),(int)temp_v34);
    do {
      puVar12 = (unsigned int *)dataTable23Sub0GetEntry(temp_v9);
      if (((int)*(char *)(puVar12 + 2) == temp_v64) &&
         (temp_v1 = *(char *)((int)puVar12 + 10),
         (temp_v1 == '\x18' || temp_v1 == '\x19') || temp_v1 == '\x1a')) {
        temp_v7 = 0;
        puVar11 = temp_v55;
        temp_v58 = 1;
        dataTable2BType1Count();
        if (0 < (int)puVar11) {
          do {
            pcVar20 = (char *)dataTable2BType1GetEntry(temp_v55,temp_v7);
            if ((*(short *)(pcVar20 + 8) == 0) && (pcVar20[1] == *(char *)((int)puVar12 + 0xb))) {
              temp_v58 = (int)pcVar20[3];
              break;
            }
            temp_v7 = temp_v7 + 1;
            puVar11 = temp_v55;
            dataTable2BType1Count();
          } while (temp_v7 < (int)puVar11);
        }
        temp_v3 = *(short *)((int)puVar12 + 0x16);
        temp_v7 = param_1 + *(char *)((int)puVar12 + 9) * 8;
        temp_v17 = *(unsigned int *)(temp_v7 + 0x148c);
        temp_v28 = (float)VectorSignedToFloat(temp_v17,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v20 = (float)VectorSignedToFloat(temp_v17,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v17 = *(unsigned int *)(temp_v7 + 0x1490);
        temp_v12 = param_1 + temp_v13 * 100;
        temp_v29 = (float)VectorSignedToFloat(temp_v17,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v18 = (float)VectorSignedToFloat(temp_v17,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v4 = *(short *)((int)puVar12 + 0x1a);
        *(unsigned int *)(temp_v12 + 0x178c) = temp_v42;
        *(char *)(temp_v12 + 0x1790) = pcVar20[1];
        *(unsigned short *)(temp_v12 + 0x17b8) = 2;
        temp_v22 = (float)VectorSignedToFloat((int)temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v23 = (float)VectorSignedToFloat((int)temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v24 = (float)VectorSignedToFloat((int)temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v26 = (float)VectorSignedToFloat((int)temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v20 = (float)VectorSignedToFloat((int)(short)(int)temp_v20,(unsigned char)(in_fpscr >> 0x16) & 3);
        *(unsigned char *)(temp_v12 + 0x1791) = 0xff;
        temp_v18 = (float)VectorSignedToFloat((int)(short)(int)temp_v18,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v27 = (float)VectorSignedToFloat((int)(short)(int)(temp_v28 * (float)in_d9),
                                            (unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v28 = (float)VectorSignedToFloat((int)(short)(int)(temp_v29 * (float)in_d9),
                                            (unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v20 = (float)VectorSignedToFloat((int)(short)(int)(temp_v20 + temp_v22 * (float)temp_v30),
                                            (unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v23 = (float)VectorSignedToFloat((int)(short)(int)(temp_v18 + temp_v23 * (float)temp_v30),
                                            (unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v22 = (float)VectorSignedToFloat((int)(short)(int)(temp_v27 + temp_v24 * (float)temp_v33),
                                            (unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v24 = (float)((unsigned long long)temp_v30 >> 0x20);
        temp_v18 = (float)VectorSignedToFloat((int)(short)(int)(temp_v28 + temp_v26 * (float)temp_v33),
                                            (unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v28 = (float)((unsigned long long)temp_v33 >> 0x20);
        temp_v43 = (int)(short)(int)(temp_v20 - temp_v24);
        temp_v56 = (int)(short)(int)(temp_v22 - temp_v28);
        temp_v57 = (int)(short)(int)(temp_v18 - temp_v28);
        temp_v5 = FUN_003ae4d0(*puVar12);
        *(unsigned short *)(temp_v12 + 0x17ba) = temp_v5;
        temp_v7 = conditionalTableFindIndex(*puVar12);
        if (temp_v7 != -2) {
          temp_v17 = FUN_003cd5f4(*puVar12);
          *(unsigned int *)(temp_v12 + 0x17e8) = temp_v17;
          *(short *)(temp_v12 + 0x1792) = (short)temp_v58;
          temp_v19 = VectorSignedToFloat((int)(short)(int)(temp_v23 - temp_v24),
                                       (unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v17 = VectorSignedToFloat(temp_v43,(unsigned char)(in_fpscr >> 0x16) & 3);
          *(unsigned short *)(temp_v12 + 0x17bc) = 0;
          *(unsigned short *)(temp_v12 + 0x17be) = 0;
          temp_v13 = temp_v13 + 1;
          *(unsigned short *)(temp_v12 + 0x1794) = 0x1b67;
          *(unsigned int *)(temp_v12 + 0x1798) = temp_v17;
          *(unsigned int *)(temp_v12 + 0x179c) = temp_v19;
          temp_v21 = VectorSignedToFloat(temp_v56,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v19 = VectorSignedToFloat(temp_v57,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v17 = VectorSignedToFloat(temp_v53,(unsigned char)(in_fpscr >> 0x16) & 3);
          *(unsigned int *)(temp_v12 + 0x17a0) = temp_v17;
          temp_v17 = VectorSignedToFloat(temp_v54,(unsigned char)(in_fpscr >> 0x16) & 3);
          *(unsigned int *)(temp_v12 + 0x17a4) = temp_v17;
          *(unsigned short *)(temp_v12 + 0x1796) = 0x1b8f;
          *(unsigned int *)(temp_v12 + 0x17a8) = temp_v21;
          *(unsigned int *)(temp_v12 + 0x17ac) = temp_v19;
          temp_v17 = VectorSignedToFloat(temp_v59[0],(unsigned char)(in_fpscr >> 0x16) & 3);
          *(unsigned int *)(temp_v12 + 0x17b0) = temp_v17;
          temp_v17 = VectorSignedToFloat(temp_v44,(unsigned char)(in_fpscr >> 0x16) & 3);
          *(unsigned int *)(temp_v12 + 0x17b4) = temp_v17;
          *(unsigned short *)(temp_v12 + 0x17c0) = 0;
          *(unsigned int *)(temp_v12 + 0x17d8) = 0;
          *(unsigned int *)(temp_v12 + 0x17d4) = 0xffffffff;
          *(unsigned char *)(temp_v12 + 0x17dc) = 0;
        }
      }
      temp_v9 = temp_v9 + 1;
      temp_v7 = dataTable23Type0CountWithAoc();
    } while (temp_v9 < temp_v7);
  }
  temp_v42 = 0xb;
  FUN_002e1208(0xb,0x1b67,&temp_v53,&temp_v54);
  FUN_002e1208(0xb,0x1b8f,temp_v59,&temp_v44);
  temp_v9 = 0;
  temp_v7 = dataTable23Type0CountWithAoc();
  if (0 < temp_v7) {
    do {
      puVar12 = (unsigned int *)dataTable23Sub0GetEntry(temp_v9);
      temp_v8 = (unsigned int)*(char *)(puVar12 + 2);
      temp_v16 = temp_v8 == temp_v64;
      if (temp_v16) {
        temp_v8 = (unsigned int)*(unsigned char *)((int)puVar12 + 10);
      }
      if (temp_v16 && temp_v8 == 0x2b) {
        temp_v7 = 0;
        puVar11 = temp_v55;
        temp_v58 = 1;
        dataTable2BType1Count();
        if (0 < (int)puVar11) {
          do {
            pcVar20 = (char *)dataTable2BType1GetEntry(temp_v55,temp_v7);
            if ((*(short *)(pcVar20 + 8) == 0) && (pcVar20[1] == *(char *)((int)puVar12 + 0xb))) {
              temp_v58 = (int)pcVar20[3];
              break;
            }
            temp_v7 = temp_v7 + 1;
            puVar11 = temp_v55;
            dataTable2BType1Count();
          } while (temp_v7 < (int)puVar11);
        }
        temp_v7 = param_1 + *(char *)((int)puVar12 + 9) * 8;
        temp_v26 = (float)VectorSignedToFloat((int)*(short *)((int)puVar12 + 0x16),
                                            (unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v17 = *(unsigned int *)(temp_v7 + 0x148c);
        temp_v24 = (float)VectorSignedToFloat((int)*(short *)((int)puVar12 + 0x1a),
                                            (unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v18 = (float)VectorSignedToFloat(temp_v17,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v22 = (float)VectorSignedToFloat(temp_v17,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v17 = *(unsigned int *)(temp_v7 + 0x1490);
        temp_v27 = (float)VectorSignedToFloat(temp_v17,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v20 = (float)VectorSignedToFloat(temp_v17,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v23 = (float)VectorSignedToFloat((int)*(short *)((int)puVar12 + 0x1a),
                                            (unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v28 = (float)VectorSignedToFloat((int)*(short *)((int)puVar12 + 0x16),
                                            (unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v7 = param_1 + temp_v13 * 100;
        temp_v29 = (float)VectorSignedToFloat((int)(short)(int)temp_v18,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v27 = (float)VectorSignedToFloat((int)(short)(int)temp_v27,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v22 = (float)VectorSignedToFloat((int)(short)(int)(temp_v22 * (float)temp_v34),
                                            (unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v18 = (float)VectorSignedToFloat((int)(short)(int)(temp_v20 * (float)temp_v34),
                                            (unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v20 = (float)VectorSignedToFloat((int)(short)(int)(temp_v29 + temp_v26 * (float)temp_v30),
                                            (unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v26 = (float)((unsigned long long)temp_v30 >> 0x20);
        temp_v43 = (int)(short)(int)(temp_v20 - temp_v26);
        temp_v20 = (float)VectorSignedToFloat((int)(short)(int)(temp_v27 + temp_v24 * (float)temp_v30),
                                            (unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v48 = (int)(short)(int)(temp_v20 - temp_v26);
        temp_v20 = (float)VectorSignedToFloat((int)(short)(int)(temp_v22 + temp_v28 * (float)temp_v33),
                                            (unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v28 = (float)((unsigned long long)temp_v33 >> 0x20);
        temp_v56 = (int)(short)(int)(temp_v20 - temp_v28);
        temp_v18 = (float)VectorSignedToFloat((int)(short)(int)(temp_v18 + temp_v23 * (float)temp_v33),
                                            (unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v57 = (int)(short)(int)(temp_v18 - temp_v28);
        *(unsigned int *)(temp_v7 + 0x178c) = temp_v42;
        *(char *)(temp_v7 + 0x1790) = pcVar20[1];
        *(unsigned short *)(temp_v7 + 0x17b8) = 2;
        *(unsigned char *)(temp_v7 + 0x1791) = 0xfe;
        temp_v5 = FUN_003bf894(*puVar12);
        temp_v19 = VectorSignedToFloat(temp_v43,(unsigned char)(in_fpscr >> 0x16) & 3);
        *(unsigned short *)(temp_v7 + 0x17ba) = temp_v5;
        temp_v17 = VectorSignedToFloat(temp_v48,(unsigned char)(in_fpscr >> 0x16) & 3);
        *(short *)(temp_v7 + 0x1792) = (short)temp_v58;
        *(unsigned short *)(temp_v7 + 0x17bc) = 0;
        *(unsigned short *)(temp_v7 + 0x17be) = 0;
        temp_v13 = temp_v13 + 1;
        *(unsigned short *)(temp_v7 + 0x1794) = 0x1b67;
        *(unsigned int *)(temp_v7 + 0x1798) = temp_v19;
        *(unsigned int *)(temp_v7 + 0x179c) = temp_v17;
        temp_v21 = VectorSignedToFloat(temp_v56,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v19 = VectorSignedToFloat(temp_v57,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v17 = VectorSignedToFloat(temp_v53,(unsigned char)(in_fpscr >> 0x16) & 3);
        *(unsigned int *)(temp_v7 + 0x17a0) = temp_v17;
        temp_v17 = VectorSignedToFloat(temp_v54,(unsigned char)(in_fpscr >> 0x16) & 3);
        *(unsigned int *)(temp_v7 + 0x17a4) = temp_v17;
        *(unsigned short *)(temp_v7 + 0x1796) = 0x1b8f;
        *(unsigned int *)(temp_v7 + 0x17a8) = temp_v21;
        *(unsigned int *)(temp_v7 + 0x17ac) = temp_v19;
        temp_v17 = VectorSignedToFloat(temp_v59[0],(unsigned char)(in_fpscr >> 0x16) & 3);
        *(unsigned int *)(temp_v7 + 0x17b0) = temp_v17;
        temp_v17 = VectorSignedToFloat(temp_v44,(unsigned char)(in_fpscr >> 0x16) & 3);
        *(unsigned int *)(temp_v7 + 0x17b4) = temp_v17;
        *(unsigned short *)(temp_v7 + 0x17c0) = 0;
        *(unsigned int *)(temp_v7 + 0x17d8) = 0;
        *(unsigned int *)(temp_v7 + 0x17d4) = 0xffffffff;
        *(unsigned char *)(temp_v7 + 0x17dc) = 0;
      }
      temp_v9 = temp_v9 + 1;
      temp_v7 = dataTable23Type0CountWithAoc();
    } while (temp_v9 < temp_v7);
  }
  temp_v60 = (int *)(param_1 + 0x84f4);
  *(int *)(param_1 + 0x7b8c) = temp_v13;
  *temp_v60 = temp_v37;
  temp_v13 = 0;
  do {
    temp_v7 = temp_v13 + 2;
    temp_v13 = param_1 + temp_v13 * 0x30;
    *(unsigned char *)(temp_v13 + 0x84f8) = 0;
    *(unsigned char *)(temp_v13 + 0x8528) = 0;
    temp_v13 = temp_v7;
  } while (temp_v7 < 0x800);
  temp_v7 = *temp_v60;
  temp_v13 = 0;
  temp_v39 = 0;
  if (0 < temp_v7) {
    do {
      temp_v9 = temp_v13 + 1;
      temp_v51[temp_v39] = (unsigned int)*(unsigned char *)(param_1 + temp_v13 * 100 + 0x7b98);
      temp_v39 = temp_v39 + 1;
      temp_v13 = temp_v9;
    } while (temp_v9 < temp_v7);
    if (0 < temp_v39) {
      in_d9 = 0x3b80000000000000;
    }
    temp_v41 = 0;
    if (temp_v41 < temp_v39) {
      do {
        temp_v47 = 0;
        puVar11 = temp_v55;
        MapNaviTable_GetCategoryCount();
        if (0 < (int)puVar11) {
          do {
            psVar22 = (short *)MapNaviTable_GetCategoryRecord(temp_v55,temp_v47);
            if (((int)*psVar22 == temp_v64) &&
               (temp_v51[temp_v41] == (unsigned int)*(unsigned char *)(psVar22 + 2))) {
              temp_v31 = in_d9 & 0xffffffff;
              temp_v13 = (((int)(char)psVar22[4] - (int)(char)psVar22[3]) + 1) / 2;
              temp_v7 = 0;
              temp_v45 = (((int)*(char *)((int)psVar22 + 9) - (int)*(char *)((int)psVar22 + 7)) + 1
                          ) / 2;
              temp_v58 = -99;
              if (0 < *temp_v60) {
                do {
                  temp_v9 = param_1 + temp_v7 * 100;
                  if ((unsigned int)*(unsigned char *)(psVar22 + 2) == (unsigned int)*(unsigned char *)(temp_v9 + 0x7b98)) {
                    temp_v58 = (int)*(short *)(temp_v9 + 0x7b9a);
                    temp_v18 = (float)VectorSignedToFloat(temp_v7 * -2 + 0xf5,
                                                        (unsigned char)(in_fpscr >> 0x16) & 3);
                    temp_v31 = (unsigned long long)(unsigned int)(temp_v18 * (float)(in_d9 >> 0x20));
                    if (temp_v58 == 99) goto LAB_0048fec8;
                    break;
                  }
                  temp_v7 = temp_v7 + 1;
                } while (temp_v7 < *temp_v60);
              }
              temp_v7 = 0;
              puVar11 = temp_v55;
              dataTable2BType1Count();
              temp_v17 = (unsigned int)temp_v31;
              if (0 < (int)puVar11) {
                do {
                  pcVar20 = (char *)dataTable2BType1GetEntry(temp_v55,temp_v7);
                  temp_v17 = (unsigned int)temp_v31;
                  temp_v16 = (char)psVar22[2] == pcVar20[1];
                  pcVar13 = pcVar20;
                  if (temp_v16) {
                    pcVar13 = (char *)(unsigned int)*(unsigned short *)(pcVar20 + 8);
                  }
                  if (temp_v16 && pcVar13 == (char *)0x0) break;
                  temp_v7 = temp_v7 + 1;
                  puVar11 = temp_v55;
                  dataTable2BType1Count();
                  temp_v17 = (unsigned int)temp_v31;
                } while (temp_v7 < (int)puVar11);
              }
              temp_v48 = (int)*(short *)(pcVar20 + 0x10);
              temp_v43 = (int)*(short *)(pcVar20 + 0xe);
              puVar11 = temp_v40;
              temp_v56 = (int)(short)((short)pcVar20[0x12] + *(short *)(pcVar20 + 0xe) / 2);
              temp_v57 = (int)(short)((short)pcVar20[0x13] + *(short *)(pcVar20 + 0x10) / 2);
              temp_v0 = *(unsigned char *)(psVar22 + 2);
              MapNaviTable_GetAreaCount();
              temp_v9 = MapNaviTable_GetAreaRecord(temp_v40,0);
              temp_v7 = DAT_00587f24;
              temp_v12 = 0;
              if (temp_v12 < (int)puVar11) {
                do {
                  temp_v8 = *(unsigned int *)(temp_v9 + temp_v12 * 0x10);
                  if (temp_v8 == 0xffffffff) break;
                  if (temp_v8 == temp_v0) {
                    piVar14 = (int *)(temp_v9 + temp_v12 * 0x10);
                    if (piVar14 != (int *)0x0) {
                      temp_v35 = (int)(char)piVar14[1];
                      temp_v9 = (int)*(char *)((int)piVar14 + 6);
                      temp_v12 = 0;
                      temp_v63 = temp_v9;
                      if (temp_v9 <= temp_v35) {
                        temp_v63 = temp_v35;
                        temp_v35 = temp_v9;
                      }
                      temp_v38 = (int)*(char *)((int)piVar14 + 5);
                      temp_v9 = (int)*(char *)((int)piVar14 + 7);
                      temp_v36 = temp_v9;
                      if (temp_v9 <= temp_v38) {
                        temp_v36 = temp_v38;
                        temp_v38 = temp_v9;
                      }
                      temp_v63 = temp_v63 - temp_v35;
                      temp_v61 = temp_v63 + 1;
                      temp_v8 = (unsigned int)*(unsigned short *)(*piVar14 * 8 + 0x6172e4);
                      if (0 < temp_v61) {
                        temp_v50 = temp_v36 - temp_v38;
                        temp_v62 = temp_v50 + 1;
                        do {
                          if (0 < temp_v62) {
                            temp_v10 = temp_v50 * temp_v12 + temp_v12 + temp_v7;
                            piVar16 = (int *)(&DAT_00616ee0 + temp_v10);
                            temp_v9 = temp_v38;
                            if ((temp_v50 & 1) == 0) {
                              temp_v9 = temp_v38 + 1;
                              *(unsigned int *)(&DAT_00616ee4 + temp_v10 * 4) =
                                   (unsigned int)*(unsigned short *)(*piVar14 * 8 + 0x6172e6) * temp_v38 + temp_v8 +
                                   temp_v35 + temp_v12;
                              piVar16 = (int *)(&DAT_00616ee4 + temp_v10 * 4);
                            }
                            temp_v10 = temp_v62 >> 1;
                            if (temp_v10 != 0) {
                              do {
                                temp_v10 = temp_v10 - 1;
                                temp_v14 = temp_v9 + 1;
                                piVar16[1] = (unsigned int)*(unsigned short *)(*piVar14 * 8 + 0x6172e6) * temp_v9 +
                                             temp_v8 + temp_v35 + temp_v12;
                                temp_v9 = temp_v9 + 2;
                                piVar16 = piVar16 + 2;
                                *piVar16 = (unsigned int)*(unsigned short *)(*piVar14 * 8 + 0x6172e6) * temp_v14 +
                                           temp_v8 + temp_v35 + temp_v12;
                              } while (temp_v10 != 0);
                            }
                          }
                          temp_v12 = temp_v12 + 1;
                        } while (temp_v12 < temp_v61);
                      }
                      temp_v7 = (temp_v36 - temp_v38) + 1;
                      DAT_00587f24 = temp_v63 * temp_v7 + DAT_00587f24 + temp_v7;
                    }
                    break;
                  }
                  temp_v12 = temp_v12 + 1;
                } while (temp_v12 < (int)puVar11);
              }
              temp_v7 = 0;
              if (temp_v7 < temp_v45) {
                do {
                  temp_v9 = 0;
                  if (0 < temp_v13) {
                    do {
                      if (temp_v11 < 0x800) {
                        temp_v10 = param_1 + temp_v11 * 0x30;
                        *(unsigned char *)(temp_v10 + 0x84f8) = 0;
                        *(unsigned char *)(temp_v10 + 0x84f9) = 1;
                        *(char *)(temp_v10 + 0x84fa) = (char)psVar22[2];
                        temp_v11 = temp_v11 + 1;
                        *(short *)(temp_v10 + 0x84fe) = (short)temp_v58;
                        *(char *)(temp_v10 + 0x84fb) = pcVar20[2];
                        temp_v28 = (float)VectorSignedToFloat(temp_v7 * 0x18,
                                                            (unsigned char)(in_fpscr >> 0x16) & 3);
                        temp_v12 = (unsigned int)*(unsigned char *)(temp_v10 + 0x84fa) * 8;
                        temp_v18 = (float)VectorSignedToFloat(temp_v48,(unsigned char)(in_fpscr >> 0x16) & 3);
                        *(unsigned int *)(temp_v10 + 0x8500) =
                             (unsigned int)*(unsigned short *)(temp_v12 + 0x6172e6) * temp_v7 +
                             (unsigned int)*(unsigned short *)(temp_v12 + 0x6172e4) + temp_v9;
                        temp_v20 = (float)VectorSignedToFloat(temp_v43,(unsigned char)(in_fpscr >> 0x16) & 3);
                        temp_v22 = (float)VectorSignedToFloat(temp_v9 * 0x18,
                                                            (unsigned char)(in_fpscr >> 0x16) & 3);
                        temp_v23 = (float)VectorSignedToFloat(temp_v9 * 0xc,
                                                            (unsigned char)(in_fpscr >> 0x16) & 3);
                        *(float *)(temp_v10 + 0x8504) = temp_v22 + temp_v20;
                        *(float *)(temp_v10 + 0x8508) = temp_v28 + temp_v18;
                        temp_v18 = (float)VectorSignedToFloat(temp_v56,(unsigned char)(in_fpscr >> 0x16) & 3);
                        temp_v20 = (float)VectorSignedToFloat(temp_v7 * 0xc,(unsigned char)(in_fpscr >> 0x16) & 3
                                                           );
                        *(float *)(temp_v10 + 0x850c) = temp_v23 + temp_v18;
                        temp_v18 = (float)VectorSignedToFloat(temp_v57,(unsigned char)(in_fpscr >> 0x16) & 3);
                        *(float *)(temp_v10 + 0x8510) = temp_v20 + temp_v18;
                        *(unsigned int *)(temp_v10 + 0x8524) = temp_v17;
                      }
                      temp_v9 = temp_v9 + 1;
                    } while (temp_v9 < temp_v13);
                  }
                  temp_v7 = temp_v7 + 1;
                } while (temp_v7 < temp_v45);
              }
            }
LAB_0048fec8:
            temp_v47 = temp_v47 + 1;
            puVar11 = temp_v55;
            MapNaviTable_GetCategoryCount();
          } while (temp_v47 < (int)puVar11);
        }
        temp_v13 = 0;
        puVar11 = temp_v55;
        dataTable2BType3Count();
        if (0 < (int)puVar11) {
          do {
            psVar22 = (short *)dataTable2BType3GetEntry(temp_v55,temp_v13);
            if ((int)*psVar22 == 0xffffffff) break;
            if (((int)*psVar22 == temp_v64) &&
               (temp_v51[temp_v41] == (unsigned int)*(unsigned char *)(psVar22 + 1))) {
              temp_v32 = in_d9 << 0x20;
              temp_v5 = 0xff9d;
              temp_v7 = 0;
              if (temp_v7 < *temp_v60) {
                do {
                  temp_v9 = param_1 + temp_v7 * 100;
                  if ((unsigned int)*(unsigned char *)(psVar22 + 1) == (unsigned int)*(unsigned char *)(temp_v9 + 0x7b98)) {
                    temp_v5 = *(unsigned short *)(temp_v9 + 0x7b9a);
                    temp_v18 = (float)VectorSignedToFloat(temp_v7 * -2 + 0xf5,
                                                        (unsigned char)(in_fpscr >> 0x16) & 3);
                    temp_v32 = (unsigned long long)(unsigned int)(temp_v18 * (float)(in_d9 >> 0x20)) << 0x20;
                    break;
                  }
                  temp_v7 = temp_v7 + 1;
                } while (temp_v7 < *temp_v60);
              }
              temp_v7 = 0;
              puVar11 = temp_v55;
              dataTable2BType1Count();
              temp_v17 = (unsigned int)((unsigned long long)temp_v32 >> 0x20);
              if (0 < (int)puVar11) {
                do {
                  pcVar20 = (char *)dataTable2BType1GetEntry(temp_v55,temp_v7);
                  temp_v17 = (unsigned int)((unsigned long long)temp_v32 >> 0x20);
                  temp_v6 = (unsigned short)*(unsigned char *)(psVar22 + 1);
                  temp_v16 = temp_v6 == (unsigned char)pcVar20[1];
                  if (temp_v16) {
                    temp_v6 = *(unsigned short *)(pcVar20 + 8);
                  }
                  if (temp_v16 && temp_v6 == 0) break;
                  temp_v7 = temp_v7 + 1;
                  puVar11 = temp_v55;
                  dataTable2BType1Count();
                  temp_v17 = (unsigned int)((unsigned long long)temp_v32 >> 0x20);
                } while (temp_v7 < (int)puVar11);
              }
              if (temp_v11 < 0x800) {
                temp_v7 = param_1 + temp_v11 * 0x30;
                temp_v11 = temp_v11 + 1;
                *(unsigned char *)(temp_v7 + 0x84f8) = 0;
                *(unsigned char *)(temp_v7 + 0x84f9) = 1;
                *(char *)(temp_v7 + 0x84fa) = (char)psVar22[1];
                *(unsigned short *)(temp_v7 + 0x84fe) = temp_v5;
                *(unsigned char *)(temp_v7 + 0x84fb) = *(unsigned char *)((int)psVar22 + 3);
                *(char *)(temp_v7 + 0x84fc) = (char)psVar22[2];
                *(unsigned char *)(temp_v7 + 0x84fd) = *(unsigned char *)((int)psVar22 + 5);
                *(unsigned int *)(temp_v7 + 0x8500) = 0xffffffff;
                temp_v19 = VectorSignedToFloat((int)psVar22[3],(unsigned char)(in_fpscr >> 0x16) & 3);
                *(unsigned int *)(temp_v7 + 0x8504) = temp_v19;
                temp_v19 = VectorSignedToFloat((int)psVar22[4],(unsigned char)(in_fpscr >> 0x16) & 3);
                *(unsigned int *)(temp_v7 + 0x8508) = temp_v19;
                temp_v19 = VectorUnsignedToFloat
                                   ((unsigned int)*(unsigned char *)(psVar22 + 5),(unsigned char)(in_fpscr >> 0x16) & 3);
                *(unsigned int *)(temp_v7 + 0x850c) = temp_v19;
                temp_v19 = VectorUnsignedToFloat
                                   ((unsigned int)*(unsigned char *)((int)psVar22 + 0xb),(unsigned char)(in_fpscr >> 0x16) & 3
                                   );
                *(unsigned int *)(temp_v7 + 0x8510) = temp_v19;
                *(unsigned int *)(temp_v7 + 0x8524) = temp_v17;
              }
            }
            temp_v13 = temp_v13 + 1;
            puVar11 = temp_v55;
            dataTable2BType3Count();
          } while (temp_v13 < (int)puVar11);
        }
        temp_v41 = temp_v41 + 1;
      } while (temp_v41 < temp_v39);
    }
  }
  *(int *)(param_1 + 0x204f8) = temp_v11;
  return;
}

} /* extern "C" */
