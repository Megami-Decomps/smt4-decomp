/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004e20c0` (_code @ 0x4e20c0, 0x3590 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003e77cc(...);
int FUN_003f0254(...);
int FUN_003f06b4(...);
int FUN_004c14c8(void);
int FUN_004c579c(void);
int FUN_004c5848(void);
int FUN_004c5ec0(void);
int FUN_004d7a60(...);
int FUN_004e62b4(...);

int ARM_common_memcpy4_9(...);
int FUN_001568f8(...);
int FUN_004c3c84(...);
int FUN_004c3cb0(...);
int FUN_004c518c(void);
int FUN_004c53fc(...);
int FUN_004c8340(...);
int FUN_004c86cc(...);
int FUN_004e699c(...);
int FUN_004fb5dc(...);
int FUN_004fb6f4(...);
int FUN_004fb798(...);
int FUN_004fbf44(...);
int FUN_004fd1b8(...);
int FUN_004fec2c(...);
int FUN_004fed90(...);
int FUN_0050d740(...);
int rt_memcpy_w(...);

int FUN_003e8bb0(...);
int FUN_003f21ec(void);
int FUN_003fd63c(...);
int FUN_004c2ca8(...);
int FUN_004c34e0(...);
int FUN_004c3a98(...);
int FUN_004c4128(...);
int FUN_004c45b4(...);
int FUN_004c571c(...);
int FUN_004c63f0(void);
int FUN_004e5f2c(...);
int FUN_004f5d64(...);
int FUN_004f7a58(...);
int FUN_004f8f44(...);
int FUN_004fb43c(...);
int FUN_004fbeac(...);
int FUN_004fc094(...);
int FUN_004fda78(...);
int FUN_004fe764(...);
int VectorSignedToFloat(...);

int CONCAT44(unsigned int, double);
int FUN_001aba54(void);
int FUN_0034a290(void);
int FUN_003e8430(...);
int FUN_003f0e20(...);
int FUN_003f2aac(...);
int FUN_004bf348(...);
int FUN_004bfa30(unsigned int *, unsigned int, int, int, int);
int FUN_004bfcfc(unsigned int *, unsigned int, unsigned int, int, int, int);
int FUN_004c0834(int);
int FUN_004c1598(int, int);
int FUN_004c16c8(...);
int FUN_004c3d78(...);
int FUN_004c4604(...);
int FUN_004e0114(...);
int FUN_004e5a40(...);
int VectorUnsignedToFloat(unsigned int, int);

/* stack frame of param_12: 89 slot(s), 341 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
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
    unsigned char sp90; /* 0x90: local_90 */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spA8; /* 0xa8: local_a8 */
    unsigned int spAC; /* 0xac: local_ac */
    unsigned int spB0; /* 0xb0: local_b0 */
    unsigned int spB4; /* 0xb4: local_b4 */
    unsigned int spB8; /* 0xb8: local_b8 */
    unsigned int spBC; /* 0xbc: local_bc */
    unsigned int spC0; /* 0xc0: local_c0 */
    unsigned int spC4; /* 0xc4: local_c4 */
    unsigned int spC8; /* 0xc8: local_c8 */
    unsigned int spCC; /* 0xcc: local_cc */
    unsigned int spD0; /* 0xd0: local_d0 */
    unsigned int spD4; /* 0xd4: local_d4 */
    unsigned int spD8; /* 0xd8: local_d8 */
    unsigned int spDC; /* 0xdc: local_dc */
    unsigned int spE0; /* 0xe0: local_e0 */
    unsigned int spE4; /* 0xe4: local_e4 */
    unsigned int spE8; /* 0xe8: local_e8 */
    unsigned int spEC; /* 0xec: local_ec */
    unsigned int spF0; /* 0xf0: local_f0 */
    unsigned int spF4; /* 0xf4: local_f4 */
    unsigned int spF8; /* 0xf8: local_f8 */
    unsigned int spFC; /* 0xfc: local_fc */
    unsigned int sp100; /* 0x100: local_100 */
    unsigned int sp104; /* 0x104: local_104 */
    unsigned int sp108; /* 0x108: local_108 */
    unsigned int sp10C; /* 0x10c: local_10c */
    unsigned int sp110; /* 0x110: local_110 */
    unsigned int sp114; /* 0x114: local_114 */
    unsigned int sp11C; /* 0x11c: local_11c */
    unsigned int sp124; /* 0x124: local_124 */
    unsigned int sp128; /* 0x128: local_128 */
    unsigned int sp12C; /* 0x12c: local_12c */
    unsigned int sp130; /* 0x130: local_130 */
    unsigned int sp134; /* 0x134: local_134 */
    unsigned int sp138; /* 0x138: local_138 */
    unsigned int sp13C; /* 0x13c: local_13c */
    unsigned int sp140; /* 0x140: local_140 */
    unsigned int sp144; /* 0x144: local_144 */
    unsigned int sp148; /* 0x148: local_148 */
    unsigned int sp154; /* 0x154: local_154 */
    unsigned int sp158; /* 0x158: local_158 */
    unsigned char sp15D; /* 0x15d: local_15d */
    unsigned char sp167; /* 0x167: local_167 */
    unsigned int sp16C; /* 0x16c: local_16c */
    unsigned short sp178; /* 0x178: local_178 */
    unsigned short sp18C; /* 0x18c: local_18c */
    unsigned short sp18E; /* 0x18e: local_18e */
    unsigned int sp194; /* 0x194: local_194 */
    unsigned int sp19C; /* 0x19c: local_19c */
    unsigned int sp1A0; /* 0x1a0: local_1a0 */
    unsigned int sp1A4; /* 0x1a4: local_1a4 */
    unsigned int sp1A8; /* 0x1a8: local_1a8 */
    unsigned int sp1AC; /* 0x1ac: local_1ac */
    unsigned int sp1B0; /* 0x1b0: local_1b0 */
    unsigned int sp1B4; /* 0x1b4: local_1b4 */
    unsigned int sp1B8; /* 0x1b8: local_1b8 */
    unsigned int sp1BC; /* 0x1bc: local_1bc */
    unsigned int sp1C0; /* 0x1c0: local_1c0 */
    unsigned int sp1C4; /* 0x1c4: local_1c4 */
    unsigned int sp1C8; /* 0x1c8: local_1c8 */
    unsigned int sp1CC; /* 0x1cc: local_1cc */
    unsigned int sp1D0; /* 0x1d0: local_1d0 */
    unsigned int sp1D4; /* 0x1d4: local_1d4 */
    unsigned int sp1D8; /* 0x1d8: local_1d8 */
    unsigned int sp1DC; /* 0x1dc: local_1dc */
    unsigned int sp1E0; /* 0x1e0: local_1e0 */
    unsigned int sp1E4; /* 0x1e4: local_1e4 */
    unsigned int sp1E8; /* 0x1e8: local_1e8 */
} param_12_stack;

extern unsigned char LAB_004e3fb0; /* 0x4e3fb0 */
extern unsigned char LAB_004e3fbc; /* 0x4e3fbc */
extern int DAT_00571140; /* 0x571140 */
extern unsigned int DAT_00571160; /* 0x571160 */
extern unsigned int DAT_00571164; /* 0x571164 */
extern unsigned int DAT_00571168; /* 0x571168 */
extern unsigned int DAT_0057116c; /* 0x57116c */
extern unsigned int DAT_00571170; /* 0x571170 */
extern unsigned int DAT_00571174; /* 0x571174 */
extern unsigned int DAT_00571178; /* 0x571178 */
extern unsigned int DAT_0057117c; /* 0x57117c */
extern unsigned int DAT_00571188; /* 0x571188 */
extern unsigned int DAT_0057118c; /* 0x57118c */
extern unsigned int DAT_005711b0; /* 0x5711b0 */
extern unsigned int DAT_005711b4; /* 0x5711b4 */
extern unsigned int DAT_005711c8; /* 0x5711c8 */
extern unsigned int DAT_005711cc; /* 0x5711cc */
extern unsigned int DAT_005711d0; /* 0x5711d0 */
extern unsigned int DAT_005711d4; /* 0x5711d4 */
extern unsigned int DAT_005711d8; /* 0x5711d8 */
extern unsigned int DAT_005711dc; /* 0x5711dc */
extern unsigned int uRam005711f0; /* 0x5711f0 */
extern unsigned int uRam005711f4; /* 0x5711f4 */
extern unsigned int DAT_00571200; /* 0x571200 */
extern unsigned int DAT_00571204; /* 0x571204 */
extern unsigned int DAT_00571208; /* 0x571208 */
extern unsigned int DAT_0057120c; /* 0x57120c */
extern unsigned int DAT_00571210; /* 0x571210 */
extern unsigned int DAT_00571214; /* 0x571214 */
extern unsigned int DAT_00571240; /* 0x571240 */
extern unsigned int DAT_00571244; /* 0x571244 */
extern unsigned int DAT_00571248; /* 0x571248 */
extern unsigned int DAT_0057124c; /* 0x57124c */
extern unsigned int uRam00571268; /* 0x571268 */
extern unsigned int uRam0057126c; /* 0x57126c */
extern unsigned int DAT_00571280; /* 0x571280 */
extern unsigned int DAT_00571284; /* 0x571284 */
extern unsigned int DAT_00571288; /* 0x571288 */
extern unsigned int DAT_0057128c; /* 0x57128c */
extern unsigned int DAT_005712a0; /* 0x5712a0 */
extern unsigned int DAT_005712a4; /* 0x5712a4 */
extern unsigned int DAT_005712a8; /* 0x5712a8 */
extern unsigned int DAT_005712ac; /* 0x5712ac */
extern unsigned int DAT_005712b8; /* 0x5712b8 */
extern unsigned int DAT_005712bc; /* 0x5712bc */
extern unsigned int DAT_005712c0; /* 0x5712c0 */
extern unsigned int DAT_005712c4; /* 0x5712c4 */
extern unsigned int DAT_005712c8; /* 0x5712c8 */
extern unsigned int DAT_005712cc; /* 0x5712cc */
extern unsigned int uRam005712d0; /* 0x5712d0 */
extern unsigned int uRam005712d4; /* 0x5712d4 */
extern unsigned int DAT_005712e8; /* 0x5712e8 */
extern unsigned int DAT_005712ec; /* 0x5712ec */
extern int DAT_00573808; /* 0x573808 */
extern unsigned int DAT_00573898; /* 0x573898 */

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Unsupported intrinsic, declaration required: CONCAT44 (PIECE). */
/* Unsupported intrinsic, declaration required: NAN (FLOAT_NAN). */
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: ARM_common_memcpy4_9. */
extern char FUN_0014bef4(unsigned int);
/* Supplied declaration required: FUN_001568f8. */
extern int FUN_0018719c(unsigned int);
/* Supplied declaration required: FUN_001aba54. */
extern int FUN_002c7bf4(unsigned int *);
/* Supplied declaration required: FUN_0034a290. */
/* Supplied declaration required: FUN_003e77cc. */
/* Supplied declaration required: FUN_003e8430. */
/* Supplied declaration required: FUN_003e8bb0. */
extern int FUN_003eb1cc(unsigned int);
extern int FUN_003ec668(unsigned int, int, int);
extern int FUN_003eca48(unsigned int, unsigned short);
/* Supplied declaration required: FUN_003f0254. */
/* Supplied declaration required: FUN_003f06b4. */
/* Supplied declaration required: FUN_003f0e20. */
/* Supplied declaration required: FUN_003f21ec. */
/* Supplied declaration required: FUN_003f2aac. */
/* Supplied declaration required: FUN_003fd63c. */
/* Supplied declaration required: FUN_004bf348. */
/* Supplied declaration required: FUN_004bfa30. */
/* Supplied declaration required: FUN_004bfcfc. */
/* Supplied declaration required: FUN_004c0834. */
/* Supplied declaration required: FUN_004c14c8. */
/* Supplied declaration required: FUN_004c1598. */
/* Supplied declaration required: FUN_004c16c8. */
/* Supplied declaration required: FUN_004c2ca8. */
/* Supplied declaration required: FUN_004c34e0. */
/* Supplied declaration required: FUN_004c3a98. */
/* Supplied declaration required: FUN_004c3c84. */
/* Supplied declaration required: FUN_004c3cb0. */
/* Supplied declaration required: FUN_004c3d78. */
/* Supplied declaration required: FUN_004c4128. */
/* Supplied declaration required: FUN_004c45b4. */
/* Supplied declaration required: FUN_004c4604. */
/* Supplied declaration required: FUN_004c518c. */
extern int FUN_004c52ec(void);
/* Supplied declaration required: FUN_004c53fc. */
/* Supplied declaration required: FUN_004c571c. */
/* Supplied declaration required: FUN_004c579c. */
/* Supplied declaration required: FUN_004c5848. */
/* Supplied declaration required: FUN_004c5ec0. */
/* Supplied declaration required: FUN_004c63f0. */
extern int FUN_004c65e8(int);
extern int FUN_004c6b5c(int, int);
extern int FUN_004c6b8c(unsigned int *, unsigned int *);
/* Supplied declaration required: FUN_004c8340. */
/* Supplied declaration required: FUN_004c86cc. */
/* Supplied declaration required: FUN_004d7a60. */
/* Supplied declaration required: FUN_004e0114. */
/* Supplied declaration required: FUN_004e5a40. */
/* Supplied declaration required: FUN_004e5f2c. */
/* Supplied declaration required: FUN_004e62b4. */
/* Supplied declaration required: FUN_004e699c. */
extern int FUN_004e83ac(unsigned int *, unsigned int *, int);
extern int FUN_004ee568(unsigned int *);
extern int FUN_004f5d2c(int);
/* Supplied declaration required: FUN_004f5d64. */
extern int FUN_004f6478(int);
/* Supplied declaration required: FUN_004f7a58. */
extern int FUN_004f7aa4(int, unsigned int);
extern int FUN_004f8054(int);
/* Supplied declaration required: FUN_004f8f44. */
extern int FUN_004f9a20(int);
extern int FUN_004f9ae4(int, unsigned int);
/* Supplied declaration required: FUN_004fb43c. */
/* Supplied declaration required: FUN_004fb5dc. */
/* Supplied declaration required: FUN_004fb6f4. */
/* Supplied declaration required: FUN_004fb798. */
/* Supplied declaration required: FUN_004fbeac. */
/* Supplied declaration required: FUN_004fbf44. */
/* Supplied declaration required: FUN_004fc094. */
/* Supplied declaration required: FUN_004fd1b8. */
/* Supplied declaration required: FUN_004fda78. */
/* Supplied declaration required: FUN_004fe764. */
/* Supplied declaration required: FUN_004fec2c. */
/* Supplied declaration required: FUN_004fed90. */
/* Supplied declaration required: FUN_0050d740. */
/* Supplied declaration required: rt_memcpy_w. */


void FUN_004e20c0(unsigned int *param_1,unsigned int *param_2,int param_3,unsigned int *param_4,unsigned int param_5,
                 unsigned int param_6,int param_7,int param_8,unsigned int *param_9,unsigned int param_10,int param_11
                 ,int *param_12)

{
/* irregular: 28 goto(s); irregular input(s): in_fpscr, in_s0; 66 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned short temp_v2;
  unsigned char temp_v3;
  char temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int *puVar9;
  int temp_v8;
  int temp_v9;
  unsigned int *puVar12;
  unsigned int *puVar13;
  unsigned int *puVar14;
  int temp_v10;
  unsigned int temp_v11;
  int temp_v12;
  unsigned int temp_v13;
  unsigned char temp_v14;
  unsigned char temp_v15;
  unsigned int in_fpscr;
  float in_s0;
  float temp_v16;
  float temp_v17;
  unsigned int temp_v18;
  unsigned long long temp_v19;
  unsigned long long temp_v20;
  unsigned int *temp_v21;
  unsigned int *temp_v22;
  unsigned int *temp_v23;
  int temp_v24;
  unsigned int *temp_v25;
  int temp_v26;
  unsigned int temp_v27;
  unsigned int temp_v28;
  unsigned int temp_v29;
  int temp_v30;
  int temp_v31;
  unsigned int *temp_v32;
  unsigned int temp_v33;
  int temp_v34;
  unsigned int temp_v35;
  int temp_v36;
  unsigned int *temp_v37;
  unsigned int temp_v38;
  unsigned int uStack_198;
  unsigned int *temp_v39;
  unsigned char temp_v40 [2];
  short temp_v41;
  unsigned short temp_v42;
  short temp_v43;
  int temp_v44;
  char temp_v45;
  char temp_v46;
  unsigned int *temp_v47;
  unsigned int temp_v48;
  int temp_v49;
  unsigned int *temp_v50;
  unsigned int *temp_v51;
  int temp_v52;
  unsigned int *temp_v53;
  unsigned int *temp_v54;
  unsigned int *temp_v55;
  unsigned int temp_v56;
  int temp_v57;
  unsigned int *temp_v58;
  int temp_v59;
  unsigned int *temp_v60;
  int temp_v61;
  int temp_v62;
  unsigned int temp_v63;
  unsigned int temp_v64;
  unsigned int temp_v65;
  unsigned int temp_v66;
  unsigned int temp_v67;
  unsigned int temp_v68;
  unsigned int temp_v69;
  unsigned int temp_v70;
  unsigned int temp_v71;
  unsigned int temp_v72;
  unsigned int temp_v73;
  unsigned int temp_v74;
  unsigned int temp_v75;
  unsigned int temp_v76;
  int temp_v77;
  unsigned int *temp_v78;
  unsigned int *temp_v79;
  int temp_v80;
  int temp_v81;
  unsigned int *temp_v82;
  int temp_v83;
  int temp_v84;
  int temp_v85;
  int temp_v86;
  int temp_v87;
  unsigned int *temp_v88;
  unsigned int *temp_v89;
  int temp_v90;
  unsigned char temp_v91 [4];
  int temp_v92;
  int temp_v93;
  int temp_v94;
  int temp_v95;
  int temp_v96;
  unsigned int *temp_v97;
  unsigned int *temp_v98;
  unsigned int *temp_v99;
  unsigned int temp_v100;
  int temp_v101;
  int temp_v102;
  int temp_v103;
  int temp_v104;
  int temp_v105;
  int temp_v106;
  unsigned int *puStack_34;
  unsigned int *puStack_30;
  int temp_v107;
  unsigned int *temp_v108;
  
  temp_v16 = in_s0;
  puStack_34 = param_1;
  puStack_30 = param_2;
  temp_v107 = param_3;
  temp_v108 = param_4;
  FUN_001aba54();
  temp_v59 = 1;
  temp_v93 = 1;
  temp_v12 = 0;
  temp_v94 = 0;
  temp_v92 = 0;
  temp_v90 = 0;
  temp_v89 = param_4;
  if ((((((param_2 != (unsigned int *)0x0) && (temp_v5 = FUN_003e8430(*param_1), temp_v5 == 0)) &&
        (temp_v6 = param_2[8], temp_v6 != 0)) &&
       ((*(char *)(temp_v6 + 0x23a) != '\0' &&
        (temp_v5 = FUN_003eca48(*param_1,*(unsigned short *)(temp_v6 + 0x166)), temp_v5 != 0)))) &&
      (temp_v5 = FUN_003ec668(*param_1,(int)*(char *)(temp_v5 + 2),(int)(short)param_2[0x491]),
      temp_v5 != 0)) && (temp_v12 = DAT_00571140, DAT_00571140 < 1)) {
    temp_v12 = *(int *)(temp_v5 + 100);
  }
  temp_v51 = param_9;
  temp_v6 = 0;
  temp_v83 = 0;
  temp_v48 = param_10;
  temp_v78 = (unsigned int *)0x0;
  temp_v84 = 0;
  temp_v50 = (unsigned int *)0x0;
  temp_v57 = param_7;
  temp_v81 = param_8;
  temp_v55 = (unsigned int *)0x0;
  temp_v79 = (unsigned int *)0x0;
  temp_v56 = param_2[0x165];
  FUN_004c1598(param_7,param_8);
  temp_v16 = in_s0 * temp_v16;
  temp_v18 = 0;
  puVar9 = temp_v108;
  FUN_004c16c8(temp_v108,param_6,param_7,param_8,0);
  puVar13 = temp_v108;
  temp_v88 = puVar9;
  FUN_004bfa30(temp_v108,param_6,param_7,param_8,0);
  temp_v58 = (unsigned int *)0x0;
  temp_v13 = param_2[0x161];
  temp_v21 = (unsigned int *)0x0;
  puVar9 = temp_v108;
  temp_v82 = puVar13;
  FUN_004bfcfc(temp_v108,param_5,param_6,param_7,param_8,0);
  if (temp_v107 == 1) {
    param_2[0x161] = temp_v13;
  }
  temp_v47 = puVar9;
  if (puVar9 != (unsigned int *)0x1) {
    if (puVar9 == (unsigned int *)0x2) {
      FUN_004c0834(param_7);
    }
  }
  else {
    FUN_004c3d78(param_7,1);
  }
  if (param_2[0xc] == 4) {
    temp_v7 = param_2[0x160];
    FUN_0034a290();
    temp_v13 = 0;
    if (temp_v7 != 0) {
      temp_v13 = (unsigned int)*(unsigned char *)(temp_v7 + 0x2d);
    }
    if (temp_v7 != 0 && temp_v13 != 0) {
      temp_v17 = (float)VectorUnsignedToFloat(temp_v13,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v16 = temp_v16 * temp_v17 * 0.01f;
    }
  }
  temp_v19 = romwright_piece_4_4(temp_v18,0x40400000);
  temp_v18 = 0x3f800000;
  if ((*param_2 & 0x100) != 0) {
    temp_v18 = 0x40400000;
  }
  temp_v20 = CONCAT44(temp_v18,temp_v16);
  temp_v91[0] = 0;
  temp_v96 = 0;
  temp_v97 = (unsigned int *)0x0;
  temp_v95 = 0;
  if (temp_v107 != 1) {
    if (temp_v107 != 2) {
      if (temp_v107 != 3) {
        temp_v5 = FUN_002c7bf4(temp_v108);
        if ((temp_v5 != 0) && (((*(unsigned int *)(temp_v5 + 0xc) & 4) == 0 || (temp_v82 != (unsigned int *)0x0)))) {
          FUN_004e5a40(param_1,param_8,3);
        }
      }
      else {
        temp_v5 = FUN_004bf348(param_8,3,temp_v47);
        if (temp_v5 != 0) {
          FUN_003f2aac(*param_1,param_8,1);
        }
        temp_v13 = *param_1;
        FUN_003f0e20(temp_v13,param_7);
        if ((*(unsigned short *)(temp_v13 + 0x274) & 0x10) == 0) {
          FUN_003f2aac(*param_1,param_7,0);
        }
        temp_v13 = *param_1;
        temp_v51 = (unsigned int *)0x1;
        temp_v93 = 0;
        temp_v88 = (unsigned int *)0x0;
        temp_v96 = 0x10000;
        if (0 < *(int *)(temp_v13 + 0x4d6c)) {
          temp_v7 = *(unsigned int *)(temp_v13 + 0x45a4) | DAT_005712ac;
          *(unsigned int *)(temp_v13 + 0x45a0) = *(unsigned int *)(temp_v13 + 0x45a0) | DAT_005712a8;
          *(unsigned int *)(temp_v13 + 0x45a4) = temp_v7;
        }
      }
    }
    else {
      temp_v5 = FUN_004bf348(param_8,2,temp_v47);
      if (temp_v5 != 0) {
        FUN_003f2aac(*param_1,param_8,1);
      }
      temp_v13 = *param_1;
      FUN_003f0e20(temp_v13,param_7);
      if ((*(unsigned short *)(temp_v13 + 0x274) & 0x10) == 0) {
        FUN_003f2aac(*param_1,param_7,0);
      }
      FUN_004e0114(param_1,param_2,param_8,temp_v48,0xf,0x1e);
      temp_v48 = temp_v48 + 0xd;
      temp_v51 = (unsigned int *)0x1;
      temp_v93 = 0;
      temp_v88 = (unsigned int *)0x0;
      temp_v94 = 1;
      puVar9 = (unsigned int *)*param_1;
      FUN_003f0e20(puVar9,param_8);
      puVar13 = (unsigned int *)(*param_1 + 0x45a0);
      temp_v13 = *puVar13;
      temp_v7 = *(unsigned int *)(*param_1 + 0x45a4);
      if ((((DAT_00571214 & temp_v7) == 0 && (DAT_00571210 & temp_v13) == 0) ||
          ((DAT_00571240 & temp_v13) == 0 && (DAT_00571244 & temp_v7) == 0)) &&
         ((puVar9[1] & DAT_0057116c) != 0 || (*puVar9 & DAT_00571168) != 0)) goto LAB_004e2728;
    }
  }
  else {
    puVar9 = (unsigned int *)*param_1;
    FUN_003f0e20(puVar9,param_8);
    temp_v13 = *param_1;
    FUN_003f0e20(temp_v13,param_7);
    if ((puVar9[1] & DAT_005711d4) != 0 || (*puVar9 & DAT_005711d0) != 0) {
      temp_v95 = 1;
    }
    temp_v5 = FUN_004bf348(param_8,temp_v107,temp_v47);
    if (temp_v5 != 0) {
      FUN_003f2aac(*param_1,param_8,1);
    }
    if ((*(unsigned short *)(temp_v13 + 0x274) & 0x10) == 0) {
      FUN_003f2aac(*param_1,param_7,0);
    }
    FUN_004e0114(param_1,param_2,param_8,temp_v48,0xf,0x1e);
    temp_v48 = temp_v48 + 0xd;
    temp_v51 = (unsigned int *)0x1;
    temp_v22 = (unsigned int *)temp_v91;
    temp_v93 = 0;
    temp_v21 = (unsigned int *)0x0;
    puVar13 = temp_v108;
    FUN_004c4604(temp_v108,param_5,(int)*(short *)(param_2[10] + 0x1be),param_7,param_7,0);
    if (temp_v89 != (unsigned int *)0x0) {
      temp_v13 = 6;
      temp_v14 = (temp_v89[10] & 0xffff) >> 0xb != 6;
      if (temp_v14) {
        temp_v13 = 7;
      }
      if ((!temp_v14 || temp_v13 == (temp_v89[10] & 0xffff) >> 0xb) &&
         ((puVar13 == (unsigned int *)0x1 || puVar13 == (unsigned int *)0x2) || puVar13 == (unsigned int *)0x3)) {
        temp_v97 = (unsigned int *)0x1;
      }
    }
    puVar13 = temp_v108;
    FUN_004c16c8(temp_v108,param_6,param_7,param_7,0);
    temp_v88 = puVar13;
    if (temp_v47 == (unsigned int *)0x1) {
      temp_v18 = (unsigned int)temp_v20;
      FUN_004c3d78(param_7,0);
      temp_v20 = romwright_piece_4_4((int)((unsigned long long)temp_v20 >> 0x20),temp_v18);
    }
    temp_v47 = (unsigned int *)0x0;
    FUN_004e5a40(param_1,param_7,3);
    puVar13 = (unsigned int *)(*param_1 + 0x45a0);
    temp_v13 = *puVar13;
    temp_v7 = *(unsigned int *)(*param_1 + 0x45a4);
    param_8 = param_7;
    if ((((DAT_00571214 & temp_v7) == 0 && (DAT_00571210 & temp_v13) == 0) ||
        ((DAT_00571240 & temp_v13) == 0 && (DAT_00571244 & temp_v7) == 0)) &&
       ((*puVar9 & DAT_00571168) != 0 || (puVar9[1] & DAT_0057116c) != 0)) {
LAB_004e2728:
      temp_v13 = temp_v13 | DAT_00571248;
      temp_v7 = temp_v7 | DAT_0057124c;
      *puVar13 = temp_v13;
      puVar13[1] = temp_v7;
      temp_v11 = *param_1;
      temp_v7 = temp_v7 | DAT_0057128c;
      *(unsigned int *)(temp_v11 + 0x45a0) = temp_v13 | DAT_00571288;
      *(unsigned int *)(temp_v11 + 0x45a4) = temp_v7;
    }
  }
  if (((unsigned int)temp_v88 & 0x400) != 0) {
    puVar9 = (unsigned int *)*param_1;
    FUN_003f0e20(puVar9,param_8);
    if ((*puVar9 & DAT_00571160) != 0 || (puVar9[1] & DAT_00571164) != 0) {
      temp_v5 = FUN_0018719c(0x4b6);
      if (temp_v5 != 0) {
        FUN_003fd63c(0x4b6,0,1);
      }
      temp_v13 = *param_1;
      FUN_003f21ec();
      if ((temp_v13 != 0) && (temp_v5 = FUN_0018719c(0x4c6), temp_v5 == 0)) {
        FUN_003fd63c(0x4c6,1);
      }
    }
  }
  if ((((param_8 < 0x6d) &&
       (puVar9 = (unsigned int *)(*(int *)(*param_1 + 0x1ffc) +
                         *(short *)(*(int *)(*param_1 + 0x1ed4) + param_8 * 0x1d0 + 0x68) * 0x408),
       (DAT_00571178 & *puVar9) != 0 || (DAT_0057117c & puVar9[1]) != 0)) &&
      (temp_v51 = (unsigned int *)0x0, temp_v107 == 1)) && (temp_v81 < 0x6d)) {
    temp_v8 = FUN_004f6478(DAT_00573808);
    temp_v5 = temp_v81;
    if (temp_v8 >= 0) {
      if ((*(unsigned int *)(*(int *)(*param_1 + 0x1ed4) + temp_v81 * 0x1d0 + 0x50) & 0x400) == 0) {
        temp_v18 = 2;
      }
      else {
        temp_v18 = 0;
      }
      temp_v8 = FUN_004f5d2c(DAT_00573808);
      temp_v9 = FUN_004f6478(DAT_00573808);
      FUN_004fe764(temp_v9 + temp_v8 * param_11 + temp_v12,param_2,
                   *(int *)(*param_1 + 0x1ed4) + temp_v5 * 0x1d0,0,temp_v18);
      if (temp_v95 != 0) {
        temp_v5 = FUN_004f6478(DAT_00573808);
        FUN_004fbeac(temp_v5 + temp_v8 * param_11 + temp_v12,param_2,0,0x23,1);
      }
    }
    else {
      temp_v21 = (unsigned int *)0x0;
      FUN_004fb43c(0,0,0x100026f,0,1,0);
    }
  }
  temp_v99 = param_2 + param_8 * 4;
  if ((int)temp_v48 < (int)(unsigned int)(unsigned short)temp_v99[0x278]) {
    temp_v48 = (unsigned int)(unsigned short)temp_v99[0x278];
  }
  temp_v98 = temp_v47;
  FUN_003e8bb0(temp_v40,*param_1,param_2[8]);
  temp_v52 = 0;
  temp_v49 = param_7 * 0x1d;
  temp_v77 = param_7 * 0x1d0 + 0x6a;
  if (0 < (int)temp_v51) {
    temp_v80 = param_8 * 0x1d;
    temp_v102 = temp_v81 * 0x1d;
    temp_v104 = param_8 * 0x1d0 + 100;
    temp_v103 = temp_v81 * 0x1d0 + 0x50;
    temp_v86 = (int)temp_v51 - 1;
    temp_v105 = param_8 * 0x1d0 + 0x6a;
    temp_v101 = param_8 * 0x1d0 + 0x68;
    temp_v87 = param_8 * 0x1d0 + 0x50;
LAB_004e2ab0:
    temp_v23 = (unsigned int *)0x1;
    temp_v21 = temp_v51;
    temp_v22 = temp_v47;
    temp_v6 = (unsigned int)(((unsigned int)temp_v88 & 2) != 0);
    puVar9 = (unsigned int *)0x1;
    FUN_004c2ca8(1,temp_v108,param_5,param_6,param_7,param_8);
    temp_v21 = temp_v51;
    temp_v22 = temp_v47;
    puVar12 = (unsigned int *)0x0;
    FUN_004c2ca8(0,temp_v108,param_5,param_6,param_7,param_8);
    temp_v21 = temp_v51;
    puVar13 = (unsigned int *)0x1;
    temp_v53 = puVar12;
    FUN_004c34e0(1,temp_v108,param_5,param_6,param_7,param_8);
    temp_v21 = temp_v51;
    temp_v16 = (float)temp_v20;
    puVar12 = (unsigned int *)0x0;
    FUN_004c34e0(0,temp_v108,param_5,param_6,param_7,param_8);
    temp_v13 = *param_1;
    temp_v54 = puVar12;
    if (!((*(unsigned int *)(temp_v13 + 0x45a0) & uRam00571268) == 0 &&
         (*(unsigned int *)(temp_v13 + 0x45a4) & uRam0057126c) == 0)) {
      temp_v5 = (int)*(short *)(*(int *)(temp_v13 + 0x1ed4) + temp_v101);
      if ((-1 < temp_v5) &&
         (puVar12 = (unsigned int *)(*(int *)(temp_v13 + 0x1ffc) + temp_v5 * 0x408),
         (*puVar12 & DAT_00571168) != 0 || (puVar12[1] & DAT_0057116c) != 0)) {
        if (-1 < (int)puVar9) {
          puVar9 = (unsigned int *)0x1;
        }
        if (-1 < (int)puVar13) {
          puVar13 = (unsigned int *)0x1;
        }
      }
    }
    else if (!((*(unsigned int *)(temp_v13 + 0x45a8) & uRam005712d0) == 0 &&
              (*(unsigned int *)(temp_v13 + 0x45ac) & uRam005712d4) == 0)) {
      if (-1 < (int)puVar9) {
        puVar9 = (unsigned int *)0x1869f;
      }
      if (-1 < (int)temp_v53) {
        temp_v53 = (unsigned int *)0x1869f;
      }
      if (-1 < (int)puVar13) {
        puVar13 = (unsigned int *)0x1869f;
      }
      if (-1 < (int)puVar12) {
        temp_v54 = (unsigned int *)0x1869f;
      }
    }
    else {
      puVar14 = *(unsigned int **)(temp_v13 + 0x4d5c);
      if (puVar14 != (unsigned int *)0x0) {
        if (-1 < (int)puVar9) {
          puVar9 = puVar14;
        }
        if (-1 < (int)temp_v53) {
          temp_v53 = puVar14;
        }
        if (-1 < (int)puVar13) {
          puVar13 = puVar14;
        }
        if (-1 < (int)puVar12) {
          temp_v54 = puVar14;
        }
      }
    }
    if ((param_2[0xc] == 5) && (-1 < (int)puVar9)) {
      puVar9 = (unsigned int *)FUN_004c3a98(param_7,2);
    }
    if (temp_v94 != 0) {
      if (-1 < (int)puVar9) {
        if (-1 < (int)temp_v53) {
          puVar9 = (unsigned int *)((int)temp_v53 + (int)puVar9);
        }
        temp_v53 = puVar9;
        temp_v5 = (int)*(short *)(*(int *)(*param_1 + 0x1ed4) + temp_v101);
        if (-1 < temp_v5) {
          temp_v2 = *(unsigned short *)(*(int *)(*param_1 + 0x1ffc) + temp_v5 * 0x408 + 0x274);
          temp_v14 = (temp_v2 & 8) != 0;
          puVar9 = (unsigned int *)(temp_v2 & 8);
          if (temp_v14) {
            puVar9 = temp_v53;
          }
          if (temp_v14 && (int)puVar9 >= 2) {
            temp_v53 = (unsigned int *)0x1;
          }
        }
      }
      puVar9 = (unsigned int *)0xffffffff;
      if (-1 < (int)puVar13) {
        if (-1 < (int)temp_v54) {
          puVar13 = (unsigned int *)((int)temp_v54 + (int)puVar13);
        }
        temp_v54 = puVar13;
        temp_v5 = (int)*(short *)(*(int *)(*param_1 + 0x1ed4) + temp_v101);
        if (-1 < temp_v5) {
          temp_v2 = *(unsigned short *)(*(int *)(*param_1 + 0x1ffc) + temp_v5 * 0x408 + 0x274);
          temp_v14 = (temp_v2 & 8) != 0;
          puVar13 = (unsigned int *)(temp_v2 & 8);
          if (temp_v14) {
            puVar13 = temp_v54;
          }
          if (temp_v14 && (int)puVar13 >= 2) {
            temp_v54 = (unsigned int *)0x1;
          }
        }
      }
      puVar13 = (unsigned int *)0xffffffff;
      if (temp_v6 == 1) {
        temp_v6 = 0;
      }
    }
    else {
      if ((int)puVar9 >= 100000) {
        puVar9 = (unsigned int *)0x1869f;
      }
      if ((int)puVar13 >= 100000) {
        puVar13 = (unsigned int *)0x1869f;
      }
    }
    if (temp_v96 != 0x10000) {
      if ((0 < (int)puVar9) && (temp_v5 = FUN_004c3a98(param_8,0x25), 0 < temp_v5)) {
        puVar9 = (unsigned int *)0x0;
      }
    }
    else {
      puVar9 = (unsigned int *)0xffffffff;
      puVar13 = puVar9;
      if (temp_v6 != 0) {
        temp_v6 = 0;
      }
    }
    if (!(temp_v107 == 1 || temp_v107 == 2)) {
      if ((temp_v107 == 3) && (temp_v81 < 0x6d)) {
        temp_v5 = FUN_004f9ae4(DAT_00573808,1);
        temp_v8 = FUN_004f5d2c(DAT_00573808);
        temp_v21 = (unsigned int *)(temp_v8 * (param_11 + temp_v52));
        FUN_004c571c(temp_v81,1,1,0);
        temp_v5 = temp_v5 + (int)temp_v21;
        FUN_004fda78(temp_v5 + temp_v12,0,param_2,*(int *)(*param_1 + 0x1ed4) + temp_v102 * 0x10,4,0);
        temp_v8 = FUN_003e8430(*param_1);
        if (temp_v8 != 0) {
          temp_v18 = 0x100028c;
          temp_v21 = (unsigned int *)0x0;
          FUN_004fb43c(temp_v5,0,temp_v18,0,1,0);
        }
      }
    }
    else if (temp_v81 < 0x6d) {
      temp_v5 = FUN_004f6478(DAT_00573808);
      if (temp_v5 >= 0) {
        temp_v5 = FUN_004f5d2c(DAT_00573808);
        temp_v5 = temp_v5 * (param_11 + temp_v52);
        temp_v8 = FUN_004f6478(DAT_00573808);
        FUN_004fe764(temp_v8 + temp_v5 + temp_v12,param_2,*(int *)(*param_1 + 0x1ed4) + temp_v102 * 0x10);
        if ((temp_v107 == 1) && (temp_v95 != 0)) {
          temp_v8 = FUN_004f6478(DAT_00573808);
          FUN_004fbeac(temp_v8 + temp_v5 + temp_v12,param_2,0,0x23,1);
        }
      }
      else if (temp_v107 != 1) {
        if (temp_v107 == 2) {
          temp_v5 = 0;
          temp_v18 = 0x1000270;
          temp_v21 = (unsigned int *)0x0;
          FUN_004fb43c(temp_v5,0,temp_v18,0,1,0);
        }
      }
      else {
        temp_v21 = (unsigned int *)0x0;
        FUN_004fb43c(0,0,0x100026f,0,1,0);
      }
    }
    temp_v59 = 0;
    if ((temp_v52 == temp_v86) && (puVar12 = temp_v88, temp_v88 != (unsigned int *)0x0)) {
      temp_v59 = 1;
      temp_v58 = puVar12;
    }
    else if (-1 < (int)puVar9 || -1 < (int)puVar13) {
      puVar12 = (unsigned int *)0x0;
      temp_v59 = 1;
      temp_v58 = puVar12;
    }
    if (temp_v6 != 1) {
      if (temp_v59 != 0) goto LAB_004e30c4;
      goto LAB_004e4280;
    }
    temp_v58 = (unsigned int *)0x0;
    temp_v59 = 1;
LAB_004e30c4:
    if (temp_v107 == 0) {
      if (temp_v42 != 0) {
        if ((temp_v46 == '\0') && (temp_v42 < 2)) {
          temp_v90 = 1;
        }
      }
      else if (temp_v46 == '\0') {
        temp_v92 = 1;
        temp_v90 = 1;
      }
    }
    temp_v85 = FUN_004f5d2c(DAT_00573808);
    temp_v85 = temp_v85 * (temp_v52 + param_11);
    if (param_2[0x166] == 1) {
      temp_v85 = FUN_004f5d2c(DAT_00573808);
      temp_v85 = temp_v85 + *(int *)(*(int *)(*param_1 + 0x1ed4) + temp_v104);
    }
    temp_v5 = FUN_003e8430(*param_1);
    if (temp_v5 != 0) {
      temp_v85 = 0;
    }
    FUN_004f8f44(DAT_00573808);
    if (temp_v6 != 1) {
      if (0 < (int)puVar9) {
        if ((((int)temp_v99[0x279] <= (int)puVar9) &&
            (temp_v5 = *(short *)(*(int *)(*param_1 + 0x1ed4) + temp_v101) * 0x408 + 0x158,
            *(int *)(*(int *)(*param_1 + 0x1ffc) + temp_v5) == 0)) &&
           (temp_v8 = param_8, FUN_004c63f0(), 0 < temp_v8)) {
          *(int *)(*(int *)(*param_1 + 0x1ffc) + temp_v5) = temp_v8;
          temp_v13 = *param_1;
          temp_v7 = *(unsigned int *)(temp_v13 + 0x45a4) | DAT_00571284;
          *(unsigned int *)(temp_v13 + 0x45a0) = *(unsigned int *)(temp_v13 + 0x45a0) | DAT_00571280;
          *(unsigned int *)(temp_v13 + 0x45a4) = temp_v7;
        }
LAB_004e32dc:
        if (temp_v93 != 0) {
          puVar12 = puVar9;
          if ((int)temp_v99[0x279] < (int)puVar9) {
            puVar12 = (unsigned int *)temp_v99[0x279];
          }
          temp_v83 = temp_v83 + (int)puVar12;
        }
        FUN_004c4128(param_7,param_8);
        temp_v17 = (float)((unsigned long long)temp_v19 >> 0x20);
        temp_v13 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v16 < temp_v17) << 0x1f) |
                 ((unsigned int)(temp_v16 == temp_v17) << 0x1e);
        in_fpscr = temp_v13 | ((unsigned int)((temp_v16 != temp_v16) || (temp_v17 != temp_v17)) << 0x1c);
        temp_v3 = (unsigned char)(temp_v13 >> 0x18);
        if (!(unsigned char)((temp_v3 >> 6) & 1) && temp_v3 >> 7 == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
          temp_v17 = (float)VectorSignedToFloat(puVar9,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v16 = (float)(int)(temp_v17 * temp_v16);
          temp_v55 = (unsigned int *)((int)temp_v16 + (int)temp_v55);
        }
        FUN_004e5f2c(param_1,param_2,param_8,-(int)puVar9);
        temp_v5 = FUN_004e83ac(param_1,param_2,param_8);
        if (temp_v5 != 0) {
          temp_v56 = param_2[0x165];
          temp_v6 = 1;
        }
      }
    }
    else {
      temp_v5 = *(short *)(*(int *)(*param_1 + 0x1ed4) + temp_v101) * 0x408 + 0x158;
      if ((*(int *)(*(int *)(*param_1 + 0x1ffc) + temp_v5) == 0) &&
         (temp_v8 = param_8, FUN_004c63f0(), 0 < temp_v8)) {
        temp_v6 = 0;
        if (((unsigned int)temp_v58 & 2) != 0) {
          temp_v58 = (unsigned int *)0x0;
        }
        puVar9 = (unsigned int *)temp_v99[0x279];
        *(int *)(*(int *)(*param_1 + 0x1ffc) + temp_v5) = temp_v8;
        temp_v13 = *param_1;
        temp_v7 = *(unsigned int *)(temp_v13 + 0x45a4) | DAT_00571284;
        temp_v23 = (unsigned int *)0x0;
        *(unsigned int *)(temp_v13 + 0x45a0) = *(unsigned int *)(temp_v13 + 0x45a0) | DAT_00571280;
        *(unsigned int *)(temp_v13 + 0x45a4) = temp_v7;
      }
      if (0 < (int)puVar9) goto LAB_004e32dc;
    }
    if (0 < (int)puVar13) {
      if (temp_v93 != 0) {
        temp_v84 = temp_v84 + (int)puVar13;
      }
      FUN_004c45b4(param_7,param_8);
      temp_v17 = (float)((unsigned long long)temp_v19 >> 0x20);
      temp_v13 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v16 < temp_v17) << 0x1f) |
               ((unsigned int)(temp_v16 == temp_v17) << 0x1e);
      in_fpscr = temp_v13 | ((unsigned int)((temp_v16 != temp_v16) || (temp_v17 != temp_v17)) << 0x1c);
      temp_v3 = (unsigned char)(temp_v13 >> 0x18);
      if (!(unsigned char)((temp_v3 >> 6) & 1) && temp_v3 >> 7 == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
        temp_v17 = (float)VectorSignedToFloat(puVar13,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v79 = (unsigned int *)((int)(temp_v17 * temp_v16) + (int)temp_v79);
      }
    }
    puVar12 = (unsigned int *)*param_1;
    if (((puVar12[0x116a] & DAT_005712c8) != 0 || (puVar12[0x116b] & DAT_005712cc) != 0) &&
        temp_v6 != 0) {
      temp_v6 = 0;
    }
    FUN_003f0e20(puVar12,param_8);
    if (puVar12 != (unsigned int *)0x0) {
      if (((DAT_005711b4 & puVar12[1]) != 0 || (DAT_005711b0 & *puVar12) != 0) && temp_v6 != 0) {
        temp_v6 = 0;
      }
      if (((uRam005711f0 & *puVar12) != 0 || (uRam005711f4 & puVar12[1]) != 0) && temp_v6 != 0) {
        temp_v6 = 0;
      }
    }
    temp_v62 = 0;
    temp_v60 = puVar12;
    temp_v5 = FUN_0018719c(0x591);
    if (!(temp_v5 == 0 || temp_v6 == 0)) {
      temp_v100 = 0;
      if (temp_v60 != (unsigned int *)0x0) {
        if ((*temp_v60 & DAT_00571168) == 0 && (temp_v60[1] & DAT_0057116c) == 0) {
          temp_v6 = 0;
          temp_v62 = 1;
        }
        goto LAB_004e34b8;
      }
    }
    else {
LAB_004e34b8:
      temp_v100 = 0;
      if ((temp_v60 != (unsigned int *)0x0) &&
         ((*temp_v60 & DAT_00571188) != 0 || (temp_v60[1] & DAT_0057118c) != 0)) {
        temp_v100 = 1;
      }
    }
    temp_v5 = FUN_004f7aa4(DAT_00573808,temp_v100);
    if ((temp_v5 == 0) || (temp_v106 = temp_v85, *(short *)(temp_v5 + 0x12) != 4)) {
      temp_v106 = 0;
    }
    temp_v22 = (unsigned int *)0x1;
    puVar12 = (unsigned int *)*param_1;
    FUN_003f0e20(puVar12,param_7);
    if ((puVar12[1] & DAT_00571174) != 0 || (*puVar12 & DAT_00571170) != 0) {
      temp_v22 = (unsigned int *)0x0;
    }
    if ((temp_v81 < 0x6d) &&
       ((temp_v60[1] & DAT_005711cc) != 0 || (*temp_v60 & DAT_005711c8) != 0)) {
      FUN_003e8430(*param_1);
      temp_v13 = ~DAT_005711cc;
      *temp_v60 = *temp_v60 & ~DAT_005711c8;
      temp_v60[1] = temp_v60[1] & temp_v13;
      temp_v60[0x55] = 0;
    }
    if (((temp_v107 == 0) && ((temp_v60[1] & DAT_005711dc) == 0 && (*temp_v60 & DAT_005711d8) == 0)
        ) && ((*param_2 & 0x200) == 0)) {
      FUN_004c571c(param_8,3,1,0);
      temp_v13 = temp_v60[1] | DAT_005711dc;
      *temp_v60 = *temp_v60 | DAT_005711d8;
      temp_v60[1] = temp_v13;
    }
    if ((*(int *)(*param_1 + 0x4bc0) != 0) && (*param_12 == 0)) {
      *param_12 = temp_v85;
    }
    temp_v5 = FUN_004f9a20(DAT_00573808);
    temp_v24 = temp_v5 + temp_v85 + temp_v12;
    temp_v26 = FUN_004f5d64(DAT_00573808);
    temp_v5 = FUN_004f9ae4(DAT_00573808,1);
    temp_v25 = (unsigned int *)(temp_v5 + temp_v85 + temp_v12);
    temp_v5 = FUN_004f8054(DAT_00573808);
    temp_v8 = temp_v5 + temp_v85 + temp_v12;
    temp_v5 = FUN_004f8f44(DAT_00573808);
    temp_v21 = (unsigned int *)(temp_v5 + temp_v85 + temp_v12);
    temp_v5 = DAT_00573808;
    FUN_004f7a58(DAT_00573808,temp_v100);
    temp_v31 = temp_v106 + temp_v5 + temp_v12;
    temp_v37 = temp_v22;
    temp_v38 = 1;
    uStack_198 = 0;
    temp_v39 = temp_v23;
    temp_v36 = temp_v24;
    temp_v34 = (int)temp_v25;
    temp_v35 = temp_v26;
    if (temp_v107 == 1) {
      temp_v30 = 2;
    }
    else {
      temp_v30 = 0;
    }
    temp_v32 = temp_v21;
    temp_v29 = 1;
    temp_v25 = temp_v58;
    temp_v28 = temp_v56;
    temp_v26 = 0;
    temp_v5 = *(int *)(*param_1 + 0x1ed4);
    temp_v24 = *(int *)(*(int *)(*param_1 + 0x1ffc) + *(short *)(temp_v5 + temp_v101) * 0x408 + 0x25c)
    ;
    temp_v22 = (unsigned int *)0xffffffff;
    temp_v21 = puVar13;
    temp_v23 = (unsigned int *)temp_v99[0x279];
    temp_v27 = temp_v6;
    temp_v33 = temp_v8;
    FUN_004fc094(0,param_2,temp_v5 + temp_v49 * 0x10,temp_v5 + temp_v80 * 0x10,temp_v47,puVar9);
    FUN_004c571c(param_8,2,puVar9,0);
    if (puVar13 == (unsigned int *)0x0) {
      temp_v23 = (unsigned int *)0x3;
      temp_v5 = FUN_004ee568(param_1);
      temp_v8 = 0;
      temp_v9 = 0x85;
      do {
        temp_v10 = temp_v5 + temp_v8 * 8;
        if ((*(int *)(temp_v10 + 0x5b8) == param_8) && (*(unsigned int **)(temp_v10 + 0x5bc) == temp_v23)) {
          *(unsigned int *)(temp_v10 + 0x5b8) = 0xffffffff;
          *(unsigned int *)(temp_v10 + 0x5bc) = 0;
        }
        temp_v9 = temp_v9 - 1;
        temp_v8 = temp_v8 + 1;
      } while (temp_v9 != 0);
      temp_v21 = (unsigned int *)0x2;
      temp_v5 = FUN_004ee568(param_1);
      temp_v8 = 0;
      do {
        temp_v9 = temp_v5 + temp_v8 * 8;
        if ((*(int *)(temp_v9 + 0x5b8) < 0) && (*(int *)(temp_v9 + 0x5bc) == 0)) {
          *(int *)(temp_v5 + temp_v8 * 8 + 0x5b8) = param_8;
          *(unsigned int **)(temp_v9 + 0x5bc) = temp_v21;
          break;
        }
        temp_v8 = temp_v8 + 1;
      } while (temp_v8 < 0x85);
    }
    if (((unsigned int)temp_v88 & 2) != 0) {
      temp_v5 = FUN_004e83ac(param_1,param_2,param_8);
      if (((temp_v5 == 0) && (temp_v6 != 0)) && (temp_v41 != 6 && temp_v41 != 7)) {
        temp_v5 = DAT_00573808;
        FUN_004f7a58(DAT_00573808,temp_v100);
        FUN_004fbeac(temp_v5 + temp_v106 + temp_v12,param_2,0,0x20,1);
      }
      temp_v5 = FUN_004e83ac(param_1,param_2,param_8);
      if (((temp_v5 == 0 && temp_v6 == 0) && (temp_v62 != 0)) && ((*param_2 & 0x20000) == 0)) {
        temp_v5 = DAT_00573808;
        FUN_004f7a58(DAT_00573808,temp_v100);
        FUN_004fbeac(temp_v5 + temp_v106 + temp_v12,param_2,0,0x45,1);
        *param_2 = *param_2 | 0x20000;
      }
    }
    temp_v14 = *(char *)(*(int *)(*param_1 + 0x1ffc) +
                      *(short *)(*(int *)(*param_1 + 0x1ed4) + temp_v101) * 0x408 + 0x239) != '\0';
    temp_v5 = 0;
    if (temp_v14) {
      temp_v5 = temp_v44;
    }
    if (temp_v14 && 0 < temp_v5) {
      if (temp_v89 != (unsigned int *)0x0) {
        temp_v5 = FUN_004f8f44(DAT_00573808);
        FUN_004fd1b8(temp_v5 + temp_v85 + temp_v12,param_2,0x33,(short)temp_v89[8],param_2[8]);
      }
      else {
        temp_v5 = FUN_004f8f44(DAT_00573808);
        FUN_004fbf44(temp_v5 + temp_v85 + temp_v12,param_2,0x33,(int)temp_v43,param_2[8]);
        temp_v5 = FUN_0018719c(0xbb);
        if (temp_v5 != 0) {
          FUN_003fd63c(0xb9,1);
        }
      }
      *(unsigned int *)(*(int *)(*param_1 + 0x1ed4) + temp_v87) =
           *(unsigned int *)(*(int *)(*param_1 + 0x1ed4) + temp_v87) | 0x800000;
    }
    temp_v7 = *param_1;
    puVar12 = (unsigned int *)(temp_v7 + 0x45a0);
    temp_v11 = *puVar12;
    temp_v13 = *(unsigned int *)(temp_v7 + 0x45a4);
    if (((DAT_005712bc & temp_v13) != 0 || (DAT_005712b8 & temp_v11) != 0) ||
       ((DAT_005712c0 & temp_v11) != 0 || (DAT_005712c4 & temp_v13) != 0)) {
      if (temp_v6 != 0) {
        temp_v0 = ~DAT_005712a8;
        temp_v1 = ~DAT_005712ac;
        *puVar12 = temp_v11 & temp_v0;
        *(unsigned int *)(temp_v7 + 0x45a4) = temp_v13 & temp_v1;
        temp_v7 = *param_1;
        temp_v13 = DAT_005712a4 | (temp_v13 & temp_v1);
        *(unsigned int *)(temp_v7 + 0x45a0) = DAT_005712a0 | (temp_v11 & temp_v0);
        *(unsigned int *)(temp_v7 + 0x45a4) = temp_v13;
      }
      else {
        temp_v11 = temp_v11 | DAT_005712a8;
        *(unsigned int *)(temp_v7 + 0x45a4) = temp_v13 | DAT_005712ac;
        *puVar12 = temp_v11;
      }
    }
    if (((temp_v89 != (unsigned int *)0x0) && ((*(unsigned char *)((int)temp_v89 + 0x39) & 0x20) != 0)) &&
       (temp_v6 == 0)) {
      puVar12 = temp_v60;
      FUN_004c518c();
      if ((int)puVar12 >= 0) {
        temp_v61 = 0;
        temp_v62 = 0;
        temp_v63 = 0;
        temp_v64 = 0;
        temp_v65 = 0;
        temp_v66 = 0;
        temp_v67 = 0;
        temp_v68 = 0;
        temp_v69 = 0;
        temp_v70 = 0;
        temp_v71 = 0;
        temp_v72 = 0;
        temp_v73 = 0;
        temp_v74 = 0;
        temp_v75 = 0;
        temp_v76 = 0;
        switch((unsigned int)puVar12) {
        case (unsigned int)0x0:
          temp_v18 = 0x4e3f7c;
          ARM_common_memcpy4_9(&temp_v61,temp_v18);
          break;
        case (unsigned int)0x1:
          temp_v18 = 0x4e3f88;
          FUN_0050d740(&temp_v61,temp_v18);
          break;
        case (unsigned int)0x2:
          temp_v18 = 0x4e3f90;
          ARM_common_memcpy4_9(&temp_v61,temp_v18);
          break;
        case (unsigned int)0x3:
          temp_v18 = 0x4e3f9c;
          FUN_0050d740(&temp_v61,temp_v18);
          break;
        case (unsigned int)0x4:
          temp_v18 = 0x4e3fa4;
          ARM_common_memcpy4_9(&temp_v61,temp_v18);
          break;
        case (unsigned int)0x5:
          rt_memcpy_w(&temp_v61,&LAB_004e3fb0,0xb);
          break;
        case (unsigned int)0x6:
          rt_memcpy_w(&temp_v61,&LAB_004e3fbc,0xb);
          break;
        case (unsigned int)0x7:
          temp_v18 = 0x4e3fc8;
          ARM_common_memcpy4_9(&temp_v61,temp_v18);
        }
        temp_v5 = DAT_00573808;
        FUN_004f7a58(DAT_00573808,temp_v100);
        FUN_004fec2c(temp_v5 + temp_v106 + temp_v12,param_2,0x41,temp_v60,&temp_v61,1);
      }
      else {
        temp_v5 = DAT_00573808;
        FUN_004f7a58(DAT_00573808,temp_v100);
        FUN_004fbeac(temp_v5 + temp_v106 + temp_v12,param_2,0,0x42,1);
      }
    }
    temp_v22 = (unsigned int *)0x0;
    temp_v21 = (unsigned int *)0x0;
    FUN_004c3cb0((int)*(short *)(*(int *)(*param_1 + 0x1ed4) + temp_v77),&temp_v22,&temp_v21);
    temp_v13 = (unsigned int)*(short *)(*(int *)(*param_1 + 0x1ed4) + temp_v77);
    FUN_004c8340(temp_v13,(int)*(short *)(*(int *)(*param_1 + 0x1ed4) + temp_v105),temp_v22,temp_v21,
                 0xffffffff);
    if (((temp_v6 == 0) && ((temp_v47 == (unsigned int *)0x2 || ((temp_v13 & 0x800000) != 0)))) &&
       (temp_v5 = FUN_004c3a98(param_8,0x17), temp_v5 >= 1)) {
      puVar12 = temp_v60 + 0x59;
      do {
        temp_v4 = FUN_0014bef4(7);
        temp_v5 = FUN_004c86cc(puVar12,temp_v4);
      } while (temp_v5 != 0);
      temp_v39 = (unsigned int *)(int)temp_v4;
      temp_v13 = 0;
      *(short *)((int)puVar12 + 0x152) = (short)puVar12[0x4a];
      *(unsigned short *)(puVar12 + 0x55) = *(unsigned short *)((int)puVar12 + 0x12a);
      *(short *)((int)puVar12 + 0x156) = (short)puVar12[0x4b];
      *(unsigned short *)(puVar12 + 0x56) = *(unsigned short *)((int)puVar12 + 0x12e);
      *(short *)((int)puVar12 + 0x15a) = (short)puVar12[0x4c];
      *(unsigned short *)(puVar12 + 0x57) = *(unsigned short *)((int)puVar12 + 0x132);
      *(short *)((int)puVar12 + 0x15e) = (short)puVar12[0x4d];
      *(unsigned short *)(puVar12 + 0x58) = *(unsigned short *)((int)puVar12 + 0x136);
      do {
        temp_v5 = FUN_004c86cc(puVar12,temp_v13 & 0xff);
        if (temp_v5 != 0) {
          *(unsigned short *)((int)puVar12 + temp_v13 * 2 + 0x152) = 100;
        }
        temp_v13 = temp_v13 + 1;
      } while ((int)temp_v13 < 8);
      *(unsigned short *)((int)puVar12 + (int)temp_v39 * 2 + 0x152) = 0x87d;
      temp_v23 = (unsigned int *)0x0;
      temp_v24 = 0;
      temp_v25 = (unsigned int *)0x0;
      temp_v26 = 0;
      temp_v27 = 0;
      temp_v28 = 0;
      temp_v29 = 0;
      temp_v30 = 0;
      temp_v31 = 0;
      temp_v32 = (unsigned int *)0x0;
      temp_v33 = 0;
      temp_v34 = 0;
      temp_v35 = 0;
      temp_v36 = 0;
      temp_v37 = (unsigned int *)0x0;
      temp_v38 = 0;
      switch((unsigned int)temp_v39) {
      case (unsigned int)0x0:
        temp_v18 = 0x4e3f7c;
        ARM_common_memcpy4_9(&temp_v23,temp_v18);
        break;
      case (unsigned int)0x1:
        temp_v18 = 0x4e3f88;
        FUN_0050d740(&temp_v23,temp_v18);
        break;
      case (unsigned int)0x2:
        temp_v18 = 0x4e3f90;
        ARM_common_memcpy4_9(&temp_v23,temp_v18);
        break;
      case (unsigned int)0x3:
        temp_v18 = 0x4e3f9c;
        FUN_0050d740(&temp_v23,temp_v18);
        break;
      case (unsigned int)0x4:
        temp_v18 = 0x4e3fa4;
        ARM_common_memcpy4_9(&temp_v23,temp_v18);
        break;
      case (unsigned int)0x5:
        rt_memcpy_w(&temp_v23,&LAB_004e3fb0,0xb);
        break;
      case (unsigned int)0x6:
        rt_memcpy_w(&temp_v23,&LAB_004e3fbc,0xb);
        break;
      case (unsigned int)0x7:
        temp_v18 = 0x4e3fc8;
        ARM_common_memcpy4_9(&temp_v23,temp_v18);
      }
      temp_v5 = DAT_00573808;
      FUN_004f7a58(DAT_00573808,temp_v100);
      FUN_004fec2c(temp_v5 + temp_v106 + temp_v12,param_2,0x46,temp_v60,&temp_v23,1);
      temp_v18 = FUN_004c53fc(0x17);
      FUN_004c3c84(param_8,0x17,temp_v18);
    }
    temp_v5 = FUN_004f8f44(DAT_00573808);
    temp_v13 = temp_v5 + temp_v85 + temp_v12;
    if ((int)temp_v13 <= (int)param_2[7]) {
      temp_v13 = param_2[7];
    }
    param_2[7] = temp_v13;
    if (temp_v6 != 1) {
      if ((*(unsigned int *)(*(int *)(*param_1 + 0x1ed4) + temp_v80 * 0x10 + 0x50) & 0x400) != 0) {
        temp_v5 = (int)((float)temp_v19 / (float)((unsigned long long)temp_v20 >> 0x20));
        if (temp_v5 < 3) {
          temp_v5 = 3;
        }
        FUN_004e0114(param_1,param_2,param_8,temp_v48,temp_v5,temp_v5);
        temp_v48 = temp_v48 + temp_v5;
      }
      else {
        temp_v5 = FUN_0018719c(0x591);
        if (((temp_v5 != 0) && ((*param_2 & 0x20000) == 0)) && (temp_v59 != 0)) {
          if ((int)puVar9 < 1) {
            puVar9 = puVar13;
          }
          if (((0 < (int)puVar9) && (temp_v60 != (unsigned int *)0x0)) &&
             ((*temp_v60 & DAT_00571168) == 0 && (temp_v60[1] & DAT_0057116c) == 0)) {
            temp_v5 = FUN_004f8f44(DAT_00573808);
            FUN_004fbeac(temp_v5 + temp_v85 + temp_v12 + 0x1e,param_2,0,0x45,1);
            *param_2 = *param_2 | 0x20000;
          }
        }
      }
    }
    else {
      temp_v5 = DAT_00573808;
      FUN_004f7a58(DAT_00573808,temp_v100);
      temp_v8 = *(int *)(*param_1 + 0x1ed4) + temp_v80 * 0x10;
      if (temp_v8 != 0) {
        temp_v5 = temp_v48 + *(int *)(temp_v8 + 100) + temp_v85 + temp_v12 + temp_v5 + 10;
      }
      FUN_004e0114(param_1,param_2,param_8,temp_v5,0x14,0x14);
      FUN_004e5f2c(param_1,param_2,param_8,-temp_v99[0x279]);
      temp_v48 = temp_v48 + 0xf;
    }
LAB_004e4280:
    if (0 < (int)temp_v53) {
      temp_v78 = (unsigned int *)((int)temp_v78 + (int)temp_v53);
    }
    if (0 < (int)temp_v54) {
      temp_v50 = (unsigned int *)((int)temp_v50 + (int)temp_v54);
    }
    if (temp_v6 != 1) {
      puVar9 = (unsigned int *)*param_1;
      FUN_003f0e20(puVar9,param_8);
      temp_v5 = FUN_004f5d2c(DAT_00573808);
      temp_v5 = temp_v5 * (param_11 + temp_v52);
      if (puVar9 != (unsigned int *)0x0) {
        if ((((*puVar9 & DAT_00571200) != 0 || (puVar9[1] & DAT_00571204) != 0) &&
            ((DAT_0057120c & puVar9[1]) == 0 && (DAT_00571208 & *puVar9) == 0)) &&
           (temp_v8 = FUN_004c3a98(param_8,0x28), 0 < temp_v8)) {
          temp_v8 = FUN_004f8f44(DAT_00573808);
          temp_v21 = (unsigned int *)0xffffffff;
          FUN_004fb6f4(temp_v8 + temp_v5 + temp_v12,param_2,*(int *)(*param_1 + 0x1ed4) + temp_v80 * 0x10
                       ,3,1,0xffffffff);
          temp_v8 = FUN_004f8f44(DAT_00573808);
          FUN_004fbeac(temp_v8 + temp_v5 + temp_v12,param_2,0,0x37,1);
          temp_v13 = puVar9[1] | DAT_0057120c;
          *puVar9 = *puVar9 | DAT_00571208;
          puVar9[1] = temp_v13;
        }
      }
      if (temp_v59 == 0) {
        puVar9 = temp_v53;
        if ((int)temp_v53 < 1) {
          puVar9 = temp_v54;
        }
        if ((int)puVar9 < 1) {
          temp_v14 = (temp_v42 != 4 && temp_v42 != 7) && temp_v42 != 9;
          if ((temp_v42 != 4 && temp_v42 != 7) && temp_v42 != 9) {
            temp_v14 = temp_v82 == (unsigned int *)0x0;
          }
          if (temp_v14) {
            puVar9 = temp_v88;
            if (temp_v88 == (unsigned int *)0x0) {
              puVar9 = temp_v97;
            }
            if ((temp_v88 == (unsigned int *)0x0 && puVar9 == (unsigned int *)0x0) &&
               (temp_v107 != 2 && temp_v107 != 3)) {
              temp_v5 = FUN_004f9ae4(DAT_00573808,0);
              if (-1 < temp_v5) {
                temp_v8 = FUN_003e8430(*param_1);
                if (temp_v8 != 0) {
                  temp_v5 = 0;
                }
                temp_v8 = FUN_004f5d2c(DAT_00573808);
                temp_v13 = temp_v5 + temp_v8 * (param_11 + temp_v52) + temp_v12;
                FUN_004fda78(temp_v13,0,param_2,*(int *)(*param_1 + 0x1ed4) + temp_v80 * 0x10,3,0);
                if ((int)temp_v13 <= (int)param_2[7]) {
                  temp_v13 = param_2[7];
                }
                param_2[7] = temp_v13;
              }
              temp_v47 = (unsigned int *)0x4;
              temp_v13 = *param_1;
              FUN_001568f8(temp_v13,param_7);
              if ((temp_v13 != 0) && ((*(unsigned short *)(temp_v13 + 0x110) & 0x10) == 0)) {
                FUN_003f2aac(*param_1,param_7,0);
              }
              temp_v5 = param_8;
              temp_v8 = FUN_004ee568(param_1);
              temp_v9 = 0;
              goto LAB_004e4538;
            }
          }
        }
      }
      temp_v52 = temp_v52 + 1;
      if ((int)temp_v51 <= temp_v52) goto LAB_004e458c;
      if (0 < temp_v52) {
        puVar9 = temp_v47;
        if (temp_v47 == (unsigned int *)0x1) {
          puVar9 = temp_v98;
        }
        if (temp_v47 == (unsigned int *)0x1 && puVar9 == (unsigned int *)0x1) {
          temp_v18 = (unsigned int)temp_v20;
          temp_v47 = (unsigned int *)0x0;
          FUN_004c3d78(param_7,0);
          temp_v20 = romwright_piece_4_4((int)((unsigned long long)temp_v20 >> 0x20),temp_v18);
        }
      }
      goto LAB_004e2ab0;
    }
  }
  goto LAB_004e458c;
  while (temp_v9 = temp_v9 + 1, temp_v9 < 0x85) {
LAB_004e4538:
    temp_v10 = temp_v8 + temp_v9 * 8;
    if ((*(int *)(temp_v10 + 0x5b8) < 0) && (*(int *)(temp_v10 + 0x5bc) == 0)) {
      *(int *)(temp_v8 + temp_v9 * 8 + 0x5b8) = temp_v5;
      *(unsigned int *)(temp_v10 + 0x5bc) = 1;
      break;
    }
  }
LAB_004e458c:
  if (temp_v98 != (unsigned int *)0x1) {
    if (temp_v47 == (unsigned int *)0x2 || temp_v47 == (unsigned int *)0x1) {
LAB_004e45bc:
      temp_v5 = FUN_004bf348(param_7,temp_v107,temp_v47);
      if (temp_v5 != 0) {
        FUN_003f2aac(*param_1,param_7,1);
      }
    }
  }
  else if (temp_v47 != (unsigned int *)0x4) {
    temp_v47 = temp_v98;
    goto LAB_004e45bc;
  }
  if (((*(unsigned int *)(*param_1 + 0x45a8) & DAT_005712e8) != 0 ||
       (*(unsigned int *)(*param_1 + 0x45ac) & DAT_005712ec) != 0) &&
     (temp_v5 = FUN_004bf348(param_7,temp_v107,temp_v47), temp_v5 != 0)) {
    FUN_003f2aac(*param_1,param_7,1);
  }
  temp_v14 = temp_v47 != (unsigned int *)0x5;
  puVar9 = temp_v47;
  if (temp_v14) {
    puVar9 = temp_v89;
  }
  temp_v15 = puVar9 != (unsigned int *)0x0;
  if (temp_v14 && temp_v15) {
    puVar9 = (unsigned int *)(unsigned int)(unsigned char)puVar9[0x13];
  }
  if ((temp_v14 && temp_v15) && puVar9 != (unsigned int *)0x0) {
    FUN_004e699c(param_1,param_8,3);
  }
  param_2[0x162] = temp_v83 + param_2[0x162];
  temp_v33 = temp_v48;
  param_2[0x163] = param_2[0x163] + temp_v84;
  if (temp_v6 == 0) {
    puVar9 = temp_v78;
    if ((int)temp_v78 < 1) {
      puVar9 = temp_v50;
    }
    if ((int)puVar9 < 1) {
      puVar9 = temp_v82;
    }
    if (puVar9 != (unsigned int *)0x0) {
      if ((int)temp_v78 < 0) {
        temp_v78 = (unsigned int *)0xffffffff;
      }
      if ((int)temp_v50 < 0) {
        temp_v50 = (unsigned int *)0xffffffff;
      }
      temp_v5 = FUN_004f5d2c(DAT_00573808);
      temp_v5 = temp_v5 * param_11;
      temp_v8 = FUN_004f5d64(DAT_00573808);
      temp_v9 = FUN_004f9ae4(DAT_00573808,1);
      temp_v10 = FUN_004f8054(DAT_00573808);
      temp_v27 = 0;
      temp_v28 = 0;
      temp_v29 = 1;
      temp_v22 = (unsigned int *)0xffffffff;
      temp_v23 = temp_v82;
      temp_v24 = temp_v10 + temp_v5 + temp_v12;
      temp_v21 = temp_v50;
      temp_v25 = (unsigned int *)(temp_v9 + temp_v5 + temp_v12);
      temp_v26 = temp_v8;
      FUN_004fb798(0,param_2,*(int *)(*param_1 + 0x1ed4) + temp_v49 * 0x10,
                   *(int *)(*param_1 + 0x1ed4) + param_8 * 0x1d0,0,temp_v78);
      if (0 < (int)temp_v78) {
        FUN_004e5f2c(param_1,param_2,param_8,temp_v78);
      }
      FUN_004e0114(param_1,param_2,param_8,temp_v48,0xf,0x14);
      temp_v8 = FUN_004f9ae4(DAT_00573808,1);
      temp_v13 = temp_v8 + temp_v5 + temp_v12;
      if ((int)temp_v13 <= (int)param_2[7]) {
        temp_v13 = param_2[7];
      }
      param_2[7] = temp_v13;
      temp_v48 = temp_v48 + 0xf;
    }
    if (param_8 < 0x6d) {
      temp_v5 = 0;
      if (temp_v89 != (unsigned int *)0x0) {
        temp_v5 = temp_v107;
      }
      if ((temp_v89 != (unsigned int *)0x0 && temp_v5 != 2) && temp_v5 != 3) {
        if ((*(char *)((int)temp_v89 + 0x23) != '\x04') && (*(char *)((int)temp_v89 + 0x33) == '\0')
           ) {
          temp_v4 = *(char *)((int)temp_v89 + 0x32);
          temp_v14 = temp_v4 == '\0';
          if (temp_v14) {
            temp_v4 = (char)temp_v89[0xd];
          }
          temp_v15 = temp_v14 && temp_v4 == '\0';
          if (temp_v14 && temp_v4 == '\0') {
            temp_v15 = *(char *)((int)temp_v89 + 0x35) == '\0';
          }
          if ((temp_v15) && ((temp_v89[0xe] & 2) == 0)) goto LAB_004e4cac;
        }
        puVar9 = (unsigned int *)*param_1;
        FUN_003f0e20(puVar9,param_7);
        temp_v21 = puVar9;
        if ((temp_v45 != '\0') &&
           ((temp_v5 = FUN_004c6b8c(puVar9,temp_v108), temp_v5 != 0 || ((temp_v21[0x9d] & 0x10) == 0))))
        {
          FUN_004e699c(param_1,param_8,3);
        }
        else {
          temp_v18 = FUN_004f5d64(DAT_00573808);
          temp_v5 = FUN_004f8054(DAT_00573808);
          temp_v5 = temp_v5 + temp_v48;
          temp_v8 = FUN_004f8054(DAT_00573808);
          FUN_004fb5dc(temp_v8 + temp_v48 + temp_v12,param_2,temp_v108,
                       *(int *)(*param_1 + 0x1ed4) + param_8 * 0x1d0,temp_v5 + temp_v12,temp_v18);
          FUN_004e0114(param_1,param_2,param_8,temp_v48,10,0xf);
          puVar13 = (unsigned int *)*param_1;
          FUN_003f0e20(puVar13,param_8);
          puVar9 = temp_v89;
          if (*(char *)((int)temp_v89 + 0x23) != '\x04') {
            temp_v4 = *(char *)((int)temp_v89 + 0x33);
            temp_v14 = 1;
            if (temp_v4 != '\0') {
              if (temp_v4 != -5) {
                if (temp_v4 >= '\x01') {
                  temp_v5 = FUN_004c52ec();
                  temp_v8 = FUN_004c3a98(param_8,7);
                  if (temp_v5 == temp_v8) {
LAB_004e49f0:
                    temp_v14 = 0;
                    goto LAB_004e49f4;
                  }
                }
                else {
                  temp_v5 = FUN_004c53fc(7);
                  temp_v8 = FUN_004c3a98(param_8,7);
                  if (temp_v5 == temp_v8) goto LAB_004e49f0;
                }
              }
              else {
                temp_v5 = FUN_004c3a98(param_8,7);
                if (temp_v5 < 1) goto LAB_004e49f0;
              }
            }
            else {
LAB_004e49f4:
              temp_v4 = *(char *)((int)puVar9 + 0x32);
              if (temp_v4 != '\0') {
                if (temp_v4 != -5) {
                  if (temp_v4 >= '\x01') {
                    temp_v5 = FUN_004c52ec();
                    temp_v8 = FUN_004c3a98(param_8,8);
                    if (temp_v5 == temp_v8) {
LAB_004e4a78:
                      temp_v14 = 0;
                      goto LAB_004e4a7c;
                    }
                  }
                  else {
                    temp_v5 = FUN_004c53fc(8);
                    temp_v8 = FUN_004c3a98(param_8,8);
                    if (temp_v5 == temp_v8) goto LAB_004e4a78;
                  }
                }
                else {
                  temp_v5 = FUN_004c3a98(param_8,8);
                  if (temp_v5 < 1) goto LAB_004e4a78;
                }
              }
              else {
LAB_004e4a7c:
                temp_v4 = (char)puVar9[0xd];
                if (temp_v4 != '\0') {
                  if (temp_v4 != -5) {
                    if (temp_v4 >= '\x01') {
                      temp_v5 = FUN_004c52ec();
                      temp_v8 = FUN_004c3a98(param_8,10);
                      if (temp_v5 == temp_v8) {
LAB_004e4b00:
                        temp_v14 = 0;
                        goto LAB_004e4b04;
                      }
                    }
                    else {
                      temp_v5 = FUN_004c53fc(10);
                      temp_v8 = FUN_004c3a98(param_8,10);
                      if (temp_v5 == temp_v8) goto LAB_004e4b00;
                    }
                  }
                  else {
                    temp_v5 = FUN_004c3a98(param_8,10);
                    if (temp_v5 < 1) goto LAB_004e4b00;
                  }
                }
                else {
LAB_004e4b04:
                  temp_v4 = *(char *)((int)puVar9 + 0x35);
                  if (temp_v4 != '\0') {
                    if (temp_v4 != -5) {
                      if (temp_v4 >= '\x01') {
                        temp_v5 = FUN_004c52ec();
                        temp_v8 = FUN_004c3a98(param_8,0xb);
                        if (temp_v5 == temp_v8) {
LAB_004e4b94:
                          FUN_004e699c(param_1,param_8,3);
                          FUN_004e5a40(param_1,param_8,2);
                          if ((puVar13 != (unsigned int *)0x0) &&
                             ((*puVar13 & DAT_00571170) != 0 || (puVar13[1] & DAT_00571174) != 0)) {
                            FUN_004e699c(param_1,param_8,2);
                          }
                        }
                      }
                      else {
                        temp_v5 = FUN_004c53fc(0xb);
                        temp_v8 = FUN_004c3a98(param_8,0xb);
                        if (temp_v5 == temp_v8) goto LAB_004e4b94;
                      }
                    }
                    else {
                      temp_v5 = FUN_004c3a98(param_8,0xb);
                      if (temp_v5 < 1) goto LAB_004e4b94;
                    }
                  }
                  else if (!temp_v14) goto LAB_004e4b94;
                }
              }
            }
          }
          temp_v5 = FUN_002c7bf4(temp_v108);
          if (((temp_v5 != 0) && ((*(unsigned int *)(temp_v5 + 0xc) & 2) != 0 && puVar13 != (unsigned int *)0x0)) &&
             ((*puVar13 & DAT_00571170) != 0 || (puVar13[1] & DAT_00571174) != 0)) {
            FUN_004e699c(param_1,param_8,3);
          }
          if ((*temp_v21 & DAT_00571170) != 0 || (temp_v21[1] & DAT_00571174) != 0) {
            FUN_004fed90(0,param_2,1);
          }
          temp_v5 = FUN_004f8054(DAT_00573808);
          temp_v13 = temp_v5 + temp_v48 + temp_v12;
          if ((int)temp_v13 <= (int)param_2[7]) {
            temp_v13 = param_2[7];
          }
          param_2[7] = temp_v13;
          temp_v48 = temp_v48 + 10;
        }
      }
    }
  }
LAB_004e4cac:
  temp_v30 = param_7 * 0x1d0 + 0x68;
  puVar9 = temp_v55;
  if ((int)temp_v55 < 1) {
    puVar9 = temp_v79;
  }
  if ((0 < (int)puVar9) && (temp_v93 != 0)) {
    temp_v5 = 10;
    temp_v33 = temp_v33 + 5;
    if ((int)temp_v55 < 1) {
      temp_v55 = (unsigned int *)0xffffffff;
    }
    if ((int)temp_v79 < 1) {
      temp_v79 = (unsigned int *)0xffffffff;
    }
    temp_v8 = FUN_003e8430(*param_1);
    if (temp_v8 != 0) {
      temp_v5 = 0;
    }
    temp_v8 = (int)*(short *)(*(int *)(*param_1 + 0x1ed4) + temp_v30);
    if ((-1 < temp_v8) &&
       ((*(unsigned short *)(*(int *)(*param_1 + 0x1ffc) + temp_v8 * 0x408 + 0x274) & 8) != 0)) {
      if ((int)temp_v55 >= 2) {
        temp_v55 = (unsigned int *)0x1;
      }
      if ((int)temp_v79 >= 2) {
        temp_v79 = (unsigned int *)0x1;
      }
    }
    temp_v8 = FUN_004f5d64(DAT_00573808);
    temp_v10 = temp_v8 + temp_v5 + temp_v12;
    temp_v8 = FUN_004f9ae4(DAT_00573808,1);
    temp_v9 = FUN_004f8054(DAT_00573808);
    temp_v24 = temp_v9 + temp_v5 + temp_v12;
    temp_v27 = 0;
    temp_v22 = (unsigned int *)0xffffffff;
    temp_v28 = 0;
    temp_v29 = 1;
    temp_v23 = (unsigned int *)0x0;
    temp_v21 = temp_v79;
    temp_v9 = *(int *)(*param_1 + 0x1ed4) + temp_v49 * 0x10;
    temp_v25 = (unsigned int *)(temp_v8 + temp_v5 + temp_v12);
    temp_v26 = temp_v10;
    FUN_004fb798(temp_v48 + temp_v5 + temp_v12,param_2,temp_v9,temp_v9,2,temp_v55);
    if (0 < (int)temp_v55) {
      FUN_004e5f2c(param_1,param_2,param_7,temp_v55);
    }
    FUN_004e0114(param_1,param_2,param_7,temp_v33,0xf,0x14);
    temp_v8 = FUN_004f9ae4(DAT_00573808,1);
    temp_v13 = temp_v8 + temp_v5 + temp_v12;
    if ((int)temp_v13 <= (int)param_2[7]) {
      temp_v13 = param_2[7];
    }
    param_2[7] = temp_v13;
  }
  if (temp_v6 == 0) {
    if ((temp_v92 != 0) && (param_2[0xc] == 0)) {
      temp_v12 = FUN_004e83ac(param_1,param_2,param_7);
      if ((temp_v12 == 0) && (temp_v12 = FUN_004c6b5c(param_7,param_8), temp_v12 == 0)) {
        temp_v13 = *param_1;
        FUN_003f0e20(temp_v13,param_8);
        if (((*(unsigned short *)(temp_v13 + 0x274) & 0x11c0) == 0) &&
           (temp_v12 = param_8, FUN_004c14c8(), temp_v12 != 0)) {
          temp_v5 = *(int *)(*param_1 + 0x1ed4);
          FUN_003e77cc(*param_1,4,(int)*(short *)(temp_v5 + param_8 * 0x1d0 + 0x68),
                       (int)*(short *)(temp_v5 + temp_v30),temp_v12);
        }
      }
      temp_v12 = FUN_004e83ac(param_1,param_2,param_7);
      if ((temp_v12 == 0) && (temp_v12 = FUN_004c6b5c(param_7,param_8), temp_v12 == 0)) {
        temp_v12 = 0;
        do {
          temp_v13 = *(unsigned int *)(*(int *)(*param_1 + 0x1ed4) + temp_v12 * 0x1d0 + 0x50);
          temp_v14 = (temp_v13 & 1) != 0;
          temp_v15 = (temp_v13 & 0x80) != 0;
          temp_v5 = temp_v12 * 3;
          if (temp_v14 && temp_v15) {
            temp_v5 = param_8;
          }
          if (((temp_v14 && temp_v15) && temp_v12 != param_8) &&
             (temp_v5 = FUN_004c6b5c(temp_v12,temp_v5), temp_v5 != 0)) {
            temp_v13 = *param_1;
            FUN_003f0e20(temp_v13,temp_v12);
            if (((*(unsigned short *)(temp_v13 + 0x274) & 0x11c0) == 0) &&
               (temp_v5 = temp_v12, FUN_004c5ec0(), temp_v5 != 0)) {
              temp_v8 = *(int *)(*param_1 + 0x1ed4);
              FUN_003e77cc(*param_1,4,(int)*(short *)(temp_v8 + temp_v12 * 0x1d0 + 0x68),
                           (int)*(short *)(temp_v8 + param_7 * 0x1d0 + 0x68),temp_v5);
            }
          }
          temp_v12 = temp_v12 + 1;
        } while (temp_v12 < 0x6d);
      }
    }
    if (((temp_v90 != 0) && (param_2[0xc] == 0)) && ((*param_2 & 0x80000) == 0)) {
      temp_v12 = FUN_004e83ac(param_1,param_2,param_7);
      if (temp_v12 == 0) {
        temp_v13 = *param_1;
        FUN_003f0e20(temp_v13,param_8);
        if (((*(unsigned short *)(temp_v13 + 0x274) & 0x11c0) == 0) &&
           (temp_v12 = FUN_004c65e8(param_8), temp_v12 != 0)) {
          temp_v5 = *(int *)(*param_1 + 0x1ed4);
          FUN_003e77cc(*param_1,5,(int)*(short *)(temp_v5 + param_8 * 0x1d0 + 0x68),
                       (int)*(short *)(temp_v5 + temp_v30),temp_v12);
        }
      }
      *param_2 = *param_2 | 0x80000;
    }
  }
  temp_v21 = (unsigned int *)0x0;
  temp_v22 = (unsigned int *)0x0;
  FUN_004c3cb0((int)*(short *)(*(int *)(*param_1 + 0x1ed4) + temp_v77),&temp_v21,&temp_v22);
  temp_v13 = (unsigned int)*(short *)(*(int *)(*param_1 + 0x1ed4) + temp_v77);
  FUN_004c8340(temp_v13,(int)*(short *)(*(int *)(*param_1 + 0x1ed4) + param_8 * 0x1d0 + 0x6a),
               temp_v21,temp_v22,0xffffffff);
  if ((((temp_v6 == 0) && (temp_v59 != 0)) &&
      ((temp_v47 == (unsigned int *)0x2 || ((temp_v13 & 0x800000) != 0)))) &&
     (temp_v12 = FUN_004e83ac(param_1,param_2,param_7), temp_v12 == 0)) {
    FUN_003f0e20(*param_1,param_8);
    temp_v12 = param_8;
    FUN_004c5848();
    if ((temp_v12 != 0) && (temp_v12 = FUN_004c3a98(param_8,0x2c), temp_v12 < 1)) {
      temp_v12 = *(int *)(*param_1 + 0x1ed4);
      FUN_003e77cc(*param_1,7,(int)*(short *)(temp_v12 + param_8 * 0x1d0 + 0x68),
                   (int)*(short *)(temp_v12 + temp_v30),0x6a);
      FUN_004c571c(param_8,0x2c,1,0);
    }
  }
  if (param_8 < 0x6d) {
    FUN_004c579c();
  }
  if (temp_v6 == 1) {
    temp_v12 = DAT_00573808;
    FUN_004f7a58(DAT_00573808,0);
    FUN_004e62b4(param_1,param_2,param_8,temp_v12,0);
    temp_v6 = *param_1;
    temp_v12 = (int)*(short *)(*(int *)(temp_v6 + 0x1ed4) + param_8 * 0x1d0 + 0x68);
    puVar9 = (unsigned int *)(*(int *)(temp_v6 + 0x1ffc) + temp_v12 * 0x408);
    if ((DAT_00571168 & *puVar9) != 0 || (DAT_0057116c & puVar9[1]) != 0) {
      if (*(int *)(temp_v6 + 0xe4) == 1) {
        if (temp_v107 == 1) goto LAB_004e5308;
        *(unsigned int *)(temp_v6 + 0xa8) = 0xd;
      }
      puVar13 = *(unsigned int **)(*param_1 + 0xe4);
      puVar9 = puVar13;
      if (puVar13 == (unsigned int *)0x2) {
        puVar9 = temp_v58;
      }
      if (puVar13 == (unsigned int *)0x2 && puVar9 == (unsigned int *)0x0) {
        *(unsigned int *)(*param_1 + 0xa8) = 0xd;
      }
    }
LAB_004e5308:
    temp_v5 = FUN_004d7a60(DAT_00573898,*(int *)(*param_1 + 0x1ed4) + param_8 * 0x1d0,1);
    if (temp_v5 != 0) {
      temp_v6 = *param_1;
      FUN_003f06b4(temp_v6,*(int *)(temp_v6 + 0x1ed4) + param_8 * 0x1d0);
      if (temp_v6 != 0) {
        temp_v6 = *param_1;
        FUN_003f0254(temp_v6,*(int *)(temp_v6 + 0x1ed4) + param_8 * 0x1d0);
        if (temp_v6 != 0) {
          FUN_004d7a60(DAT_00573898,*(int *)(*param_1 + 0x1ed4) + param_8 * 0x1d0,0);
        }
        else {
          puVar9 = (unsigned int *)(*(int *)(*param_1 + 0x1ffc) + temp_v12 * 0x408);
          if ((puVar9[1] & DAT_0057116c) != 0 || (DAT_00571168 & *puVar9) != 0) {
            *(unsigned char *)(param_2 + 0x167) = 1;
          }
        }
      }
      else {
        FUN_004d7a60(DAT_00573898,*(int *)(*param_1 + 0x1ed4) + param_8 * 0x1d0,0);
      }
    }
    else {
      puVar9 = (unsigned int *)(*(int *)(*param_1 + 0x1ffc) + temp_v12 * 0x408);
      if ((DAT_00571168 & *puVar9) != 0 || (DAT_0057116c & puVar9[1]) != 0) {
        *(unsigned char *)(param_2 + 0x167) = 1;
      }
    }
  }
  temp_v12 = FUN_003eb1cc(*param_1);
  if (temp_v12 != 0) {
    temp_v5 = 0x85;
    temp_v12 = 0;
    do {
      temp_v5 = temp_v5 - 1;
      param_2[temp_v12 * 2 + 0x16e] = 0xffffffff;
      param_2[temp_v12 * 2 + 0x16f] = 0;
      temp_v12 = temp_v12 + 1;
    } while (temp_v5 != 0);
  }
  if (((DAT_00571284 & *(unsigned int *)(*param_1 + 0x45a4)) != 0 ||
       (*(unsigned int *)(*param_1 + 0x45a0) & DAT_00571280) != 0) &&
     (temp_v12 = FUN_0018719c(0xba), temp_v12 != 0)) {
    FUN_003fd63c(0xb8,1);
  }
  if (temp_v107 != 0) {
    if (temp_v107 != 1) {
      if (temp_v107 != 2) {
        if (temp_v107 != 3) {
          return;
        }
        temp_v12 = FUN_004c6b5c(temp_v57,temp_v81);
        temp_v6 = param_2[4];
        if (temp_v12 != 0) goto joined_r0x004e5590;
        temp_v13 = 6;
        if ((int)temp_v6 < 6) {
          temp_v6 = temp_v13;
        }
      }
      else {
        temp_v12 = FUN_004c6b5c(temp_v57,temp_v81);
        temp_v6 = param_2[4];
        if (temp_v12 != 0) goto joined_r0x004e5558;
        temp_v13 = 8;
        if ((int)temp_v6 < 8) {
          temp_v6 = temp_v13;
        }
      }
    }
    else {
      temp_v12 = FUN_004c6b5c(temp_v57,temp_v81);
      temp_v6 = param_2[4];
      if (temp_v12 != 0) goto joined_r0x004e5558;
      temp_v13 = 7;
      if ((int)temp_v6 < 7) {
        temp_v6 = temp_v13;
      }
    }
  }
  else {
    switch((unsigned int)temp_v47) {
    case (unsigned int)0x0:
    case (unsigned int)0x3:
      temp_v6 = param_2[4];
joined_r0x004e5558:
      temp_v13 = 0;
      if ((int)temp_v6 < 0) {
        temp_v6 = temp_v13;
      }
      break;
    case (unsigned int)0x1:
      temp_v12 = FUN_004c6b5c(temp_v57,temp_v81);
      temp_v6 = param_2[4];
      if (temp_v12 != 0) goto joined_r0x004e5558;
      temp_v13 = 3;
      if ((int)temp_v6 < 3) {
        temp_v6 = temp_v13;
      }
      break;
    case (unsigned int)0x2:
      temp_v12 = FUN_004c6b5c(temp_v57,temp_v81);
      temp_v6 = param_2[4];
      if (temp_v12 != 0) {
joined_r0x004e5590:
        temp_v13 = 0;
        if (-1 < (int)temp_v6) break;
        temp_v6 = temp_v13;
        break;
      }
      temp_v13 = 2;
      if ((int)temp_v6 < 2) {
        temp_v6 = temp_v13;
      }
      break;
    case (unsigned int)0x4:
      temp_v6 = param_2[4];
      temp_v13 = 4;
      if ((int)temp_v6 < 4) {
        temp_v6 = temp_v13;
      }
      break;
    default:
      return;
    }
  }
  param_2[4] = temp_v6;
  return;
}

} /* extern "C" */
