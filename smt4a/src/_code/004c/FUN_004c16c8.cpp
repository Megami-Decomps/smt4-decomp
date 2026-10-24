/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004c16c8` (_code @ 0x4c16c8, 0x11dc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int CONCAT44(...);
int btlGetMainState(void);
int FUN_00184310(void);
int dataTable8FindRecord(void);
int dataTable04FindById(void);
int sysMemClear(...);
int FUN_002efc44(...);
int dataTable41FindById(void);
int FUN_0034a304(...);
int FUN_003e8bb0(...);
int FUN_003f0e20(...);
int FUN_003f21ec(void);
int FUN_004bd098(...);
int FUN_004c0f74(...);
int source4CCopyHalves(void);
int kindIdStore(...);
int FUN_004c60c0(unsigned int, unsigned int);
int FUN_004c8340(unsigned int, unsigned int, unsigned int, unsigned int *);
int VectorSignedToFloat(...);
int VectorUnsignedToFloat(...);

/* stack frame of param_4: 50 slot(s), 185 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spA8; /* 0xa8: local_a8 */
    unsigned int spB0; /* 0xb0: local_b0 */
    unsigned int spB4; /* 0xb4: local_b4 */
    unsigned int sp10C; /* 0x10c: local_10c */
    unsigned int sp110; /* 0x110: local_110 */
    unsigned int sp114; /* 0x114: local_114 */
    unsigned int sp118; /* 0x118: local_118 */
    unsigned int sp11C; /* 0x11c: local_11c */
    unsigned int sp120; /* 0x120: local_120 */
    unsigned int sp124; /* 0x124: local_124 */
    unsigned int sp128; /* 0x128: local_128 */
    unsigned int sp12C; /* 0x12c: local_12c */
    unsigned int sp130; /* 0x130: local_130 */
    unsigned int sp134; /* 0x134: local_134 */
    unsigned int sp138; /* 0x138: local_138 */
    unsigned int sp13C; /* 0x13c: local_13c */
    unsigned int sp140; /* 0x140: local_140 */
    unsigned int sp144; /* 0x144: local_144 */
    unsigned char sp164; /* 0x164: local_164 */
    unsigned char sp166; /* 0x166: local_166 */
    unsigned char sp167; /* 0x167: local_167 */
    unsigned short sp176; /* 0x176: local_176 */
    unsigned short sp178; /* 0x178: local_178 */
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
    unsigned int sp1E8; /* 0x1e8: local_1e8 */
    unsigned int sp1EC; /* 0x1ec: local_1ec */
    unsigned int sp1F4; /* 0x1f4: local_1f4 */
    unsigned int sp1F8; /* 0x1f8: local_1f8 */
    unsigned short sp1FC; /* 0x1fc: local_1fc */
    unsigned int sp200; /* 0x200: local_200 */
} param_4_stack;

extern unsigned int g_btlScriptUnit; /* 0x57113c */
extern unsigned int DAT_005713f8; /* 0x5713f8 */
extern unsigned int DAT_005713fc; /* 0x5713fc */
extern unsigned int DAT_00571408; /* 0x571408 */
extern unsigned int DAT_0057140c; /* 0x57140c */
extern unsigned int DAT_00571410; /* 0x571410 */
extern unsigned int DAT_00571414; /* 0x571414 */
extern unsigned int DAT_00571418; /* 0x571418 */
extern unsigned int DAT_0057141c; /* 0x57141c */
extern unsigned int DAT_00571488; /* 0x571488 */
extern unsigned int DAT_0057148c; /* 0x57148c */
extern unsigned int DAT_00571498; /* 0x571498 */
extern unsigned int DAT_0057149c; /* 0x57149c */
extern unsigned int DAT_005714a8; /* 0x5714a8 */
extern unsigned int DAT_005714ac; /* 0x5714ac */
extern unsigned int DAT_005714b0; /* 0x5714b0 */
extern unsigned int DAT_005714b4; /* 0x5714b4 */
extern unsigned int uRam005714d8; /* 0x5714d8 */
extern unsigned int uRam005714dc; /* 0x5714dc */

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Unsupported intrinsic, declaration required: CONCAT44 (PIECE). */
#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
/* Supplied declaration required: btlGetMainState. */
extern int lcgRandomRange(unsigned int);
/* Supplied declaration required: FUN_00184310. */
extern int gameFlagIsSet(unsigned int);
/* Supplied declaration required: dataTable8FindRecord. */
extern unsigned int padGetMappedValue(unsigned int);
/* Supplied declaration required: dataTable04FindById. */
extern int FUN_0028cb6c(void);
/* Supplied declaration required: sysMemClear. */
/* Supplied declaration required: FUN_002efc44. */
/* Supplied declaration required: dataTable41FindById. */
/* Supplied declaration required: FUN_0034a304. */
extern unsigned int FUN_0034ef58(unsigned int, unsigned int);
/* Supplied declaration required: FUN_003e8bb0. */
/* Supplied declaration required: FUN_003f0e20. */
/* Supplied declaration required: FUN_003f21ec. */
/* Supplied declaration required: FUN_004bd098. */
extern unsigned int FUN_004bf9a0(unsigned int);
/* Supplied declaration required: FUN_004c0f74. */
/* Supplied declaration required: source4CCopyHalves. */
/* Supplied declaration required: kindIdStore. */
/* Supplied declaration required: FUN_004c60c0. */
/* Supplied declaration required: FUN_004c8340. */
extern int btlUnitGet(unsigned int);


/* WARNING: Type propagation algorithm not settling */

unsigned int FUN_004c16c8(unsigned int param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 goto(s); irregular input(s): in_fpscr; 22 native warning(s); review required */
  unsigned short temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int *puVar4;
  unsigned int *puVar5;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  unsigned int *puVar11;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  int temp_v11;
  unsigned int temp_v12;
  unsigned char temp_v13;
  unsigned int in_fpscr;
  float temp_v14;
  float temp_v15;
  float temp_v16;
  float temp_v17;
  float temp_v18;
  int temp_v19;
  int temp_v20;
  unsigned long long temp_v21;
  unsigned long long temp_v22;
  long long temp_v23;
  float temp_v24;
  unsigned long long temp_v25;
  float temp_v26;
  unsigned long long temp_v27;
  unsigned long long temp_v28;
  unsigned long long temp_v29;
  unsigned long long temp_v30;
  unsigned int temp_v31;
  short temp_v32;
  unsigned int temp_v33;
  unsigned int temp_v34;
  unsigned int temp_v35;
  unsigned int temp_v36;
  unsigned int temp_v37 [21];
  unsigned short temp_v38;
  unsigned short temp_v39;
  unsigned char temp_v40;
  unsigned char temp_v41;
  unsigned char temp_v42;
  unsigned int *temp_v43;
  unsigned int temp_v44 [35];
  unsigned int *temp_v45;
  unsigned int *temp_v46;
  unsigned int *temp_v47;
  unsigned short temp_v48 [10];
  unsigned int *temp_v49;
  unsigned int *temp_v50;
  int temp_v51;
  unsigned int temp_v52;
  int iStack_30;
  unsigned int temp_v53;
  unsigned int temp_v54;
  
  temp_v52 = param_1;
  iStack_30 = param_2;
  temp_v53 = param_3;
  temp_v54 = param_4;
  temp_v45 = (unsigned int *)btlGetMainState();
  temp_v1 = temp_v52;
  dataTable04FindById();
  dataTable8FindRecord();
  temp_v2 = 0;
  if (param_2 != 0) {
    temp_v2 = (unsigned int)*(unsigned short *)(param_2 + 0x32);
  }
  if (param_2 != 0 && temp_v2 != 0) {
    dataTable04FindById();
    temp_v1 = temp_v2;
  }
  puVar4 = temp_v45;
  FUN_003f0e20(temp_v45,temp_v53);
  puVar5 = temp_v45;
  temp_v43 = puVar4;
  FUN_003f0e20(temp_v45,temp_v54);
  temp_v47 = puVar5 + 0x59;
  temp_v49 = temp_v43 + 0x59;
  temp_v50 = puVar5;
  FUN_003e8bb0(&temp_v38,temp_v45,temp_v43);
  temp_v2 = (unsigned int)temp_v40;
  if (temp_v2 == 0) {
    if (temp_v1 != 0) {
      temp_v3 = (unsigned int)*(unsigned char *)(temp_v1 + 0x2f);
      temp_v13 = temp_v3 == 0;
      if (temp_v13) {
        temp_v3 = (unsigned int)*(unsigned char *)(temp_v1 + 0x31);
      }
      if (temp_v13 && temp_v3 == 0) {
        return temp_v3;
      }
    }
    else if (temp_v42 == 0) {
      return 0;
    }
  }
  temp_v3 = VectorUnsignedToFloat((unsigned int)temp_v41,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v23 = (unsigned long long)temp_v3 << 0x20;
  temp_v4 = btlUnitGet(g_btlScriptUnit);
  temp_v51 = 0;
  if ((*(short *)(*(int *)(temp_v4 + 0x28) + 0x1be) == 2) &&
     (*(short *)(*(int *)(temp_v4 + 0x28) + 0x1c0) == 0x189)) {
    if ((DAT_00571488 & temp_v45[0x1168]) == 0 && (DAT_0057148c & temp_v45[0x1169]) == 0) {
      if ((temp_v45[0x1169] & DAT_005714ac) == 0 && (temp_v45[0x1168] & DAT_005714a8) == 0) {
        temp_v23 = 0x42700000;
      }
      else {
        temp_v23 = 0x41a00000;
      }
      temp_v23 = temp_v23 << 0x20;
      temp_v51 = 1;
    }
  }
  temp_v25 = 0;
  temp_v3 = VectorUnsignedToFloat((unsigned int)temp_v42,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v27 = (unsigned long long)temp_v3;
  if (((temp_v1 != 0) && (*(short *)(temp_v1 + 0x86) == 3)) &&
     ((((DAT_00571408 & *temp_v43) != 0 || (temp_v43[1] & DAT_0057140c) != 0 &&
       (temp_v4 = FUN_004bd098(temp_v43[0xff],temp_v52), temp_v4 < 0)) ||
      ((temp_v49[0x44] & 0x10) == 0)))) {
    temp_v27 = temp_v25 >> 0x20;
  }
  temp_v3 = temp_v53;
  temp_v5 = btlGetMainState();
  FUN_003f0e20(temp_v5,temp_v3);
  temp_v6 = btlGetMainState();
  FUN_003e8bb0(&temp_v31,temp_v6,temp_v5);
  temp_v46 = (unsigned int *)(int)temp_v32;
  if ((temp_v1 != 0) && (*(short *)(temp_v1 + 0x86) == 1)) {
    if (((*temp_v43 & DAT_00571408) != 0 || (temp_v43[1] & DAT_0057140c) != 0) &&
       (temp_v4 = FUN_004bd098(temp_v43[0xff],temp_v52), temp_v4 < 0)) {
      return 0;
    }
    if (((unsigned short)temp_v49[0x44] & 0x10) == 0) {
      return (unsigned short)temp_v49[0x44] & 0x10;
    }
  }
  sysMemClear(temp_v37,0x54);
  temp_v4 = 0;
  sysMemClear(temp_v44 + 0xe,0x54);
  temp_v44[0] = 0;
  temp_v44[1] = 0;
  temp_v44[2] = 0;
  temp_v44[3] = 0;
  temp_v44[4] = 0;
  temp_v44[5] = 0;
  temp_v44[6] = 0;
  temp_v44[7] = 0;
  temp_v44[8] = 0;
  temp_v44[9] = 0;
  temp_v44[10] = 0;
  temp_v44[0xb] = 0;
  temp_v44[0xc] = 0;
  temp_v44[0xd] = 0;
  if (temp_v2 != 1) {
    temp_v10 = 5;
    temp_v3 = 8;
    if (!(temp_v2 == 0x1d || temp_v2 == 0x1e)) {
      if (temp_v2 != 0x20) {
        if (temp_v2 != 0x21) {
          if (temp_v2 != 0x22) {
            if (temp_v2 != 0x23) {
              if (temp_v2 != 0x24) {
                if (temp_v2 != 0x25) {
                  if (temp_v2 != 0) {
                    temp_v37[0] = FUN_004bf9a0(temp_v2);
                    temp_v4 = 1;
                    temp_v44[0] = temp_v2;
                  }
                }
                else {
                  temp_v37[0] = FUN_004bf9a0(1);
                  temp_v44[0] = 1;
                  temp_v37[1] = FUN_004bf9a0(3);
                  temp_v44[1] = 3;
                  temp_v37[2] = FUN_004bf9a0(5);
                  temp_v44[2] = temp_v10;
                  temp_v37[3] = FUN_004bf9a0(6);
                  temp_v44[3] = 6;
                  temp_v37[4] = FUN_004bf9a0(7);
                  temp_v44[4] = 7;
                  temp_v37[5] = FUN_004bf9a0(8);
                  temp_v44[5] = temp_v3;
                  temp_v37[6] = FUN_004bf9a0(9);
                  temp_v44[6] = 9;
                  temp_v37[7] = FUN_004bf9a0(0xb);
                  temp_v44[7] = 0xb;
                  temp_v37[8] = FUN_004bf9a0(0xc);
                  temp_v44[8] = 0xc;
                  temp_v37[9] = FUN_004bf9a0(0xd);
                  temp_v4 = 10;
                  temp_v44[9] = 0xd;
                }
              }
              else {
                temp_v37[0] = FUN_004bf9a0(0xb);
                temp_v44[0] = 0xb;
                temp_v37[1] = FUN_004bf9a0(6);
                temp_v44[1] = 6;
                temp_v37[2] = FUN_004bf9a0(8);
                temp_v44[2] = temp_v3;
                temp_v4 = 3;
              }
            }
            else {
              temp_v37[0] = FUN_004bf9a0(0xb);
              temp_v44[0] = 0xb;
              temp_v37[1] = FUN_004bf9a0(5);
              temp_v44[1] = temp_v10;
              temp_v37[2] = FUN_004bf9a0(8);
              temp_v4 = 3;
              temp_v44[2] = temp_v3;
            }
          }
          else {
            temp_v37[0] = FUN_004bf9a0(0xb);
            temp_v44[0] = 0xb;
            temp_v37[1] = FUN_004bf9a0(6);
            temp_v44[1] = 6;
            temp_v37[2] = FUN_004bf9a0(7);
            temp_v44[2] = 7;
            temp_v4 = 3;
          }
        }
        else {
          temp_v37[0] = FUN_004bf9a0(5);
          temp_v44[0] = temp_v10;
          temp_v37[1] = FUN_004bf9a0(9);
          temp_v44[1] = 9;
          temp_v37[2] = FUN_004bf9a0(8);
          temp_v4 = 3;
          temp_v44[2] = temp_v3;
        }
      }
      else {
        temp_v37[0] = FUN_004bf9a0(5);
        temp_v44[0] = temp_v10;
        temp_v37[1] = FUN_004bf9a0(6);
        temp_v44[1] = 6;
        temp_v37[2] = FUN_004bf9a0(7);
        temp_v44[2] = 7;
        temp_v37[3] = FUN_004bf9a0(8);
        temp_v44[3] = temp_v3;
        temp_v37[4] = FUN_004bf9a0(9);
        temp_v44[4] = 9;
        temp_v37[5] = FUN_004bf9a0(3);
        temp_v4 = 6;
        temp_v44[5] = 3;
      }
    }
    else {
      temp_v37[0] = FUN_004bf9a0(5);
      temp_v44[0] = temp_v10;
      temp_v37[1] = FUN_004bf9a0(6);
      temp_v44[1] = 6;
      temp_v37[2] = FUN_004bf9a0(7);
      temp_v44[2] = 7;
      temp_v37[3] = FUN_004bf9a0(8);
      temp_v44[3] = temp_v3;
      temp_v37[4] = FUN_004bf9a0(9);
      temp_v4 = 5;
      temp_v44[4] = 9;
    }
  }
  else {
    temp_v4 = 1;
    temp_v44[0] = 1;
    temp_v37[0] = (unsigned int)temp_v39;
  }
  temp_v19 = (int)(float)temp_v27;
  if (0 < temp_v19) {
    temp_v3 = FUN_004bf9a0(0xc);
    temp_v37[temp_v4] = temp_v3;
    temp_v44[temp_v4] = 0xc;
    temp_v4 = temp_v4 + 1;
  }
  temp_v5 = (unsigned int)temp_v27;
  temp_v24 = (float)((unsigned long long)temp_v23 >> 0x20);
  temp_v3 = 0xffffffff;
  if ((temp_v1 != 0) &&
     ((*(char *)(temp_v1 + 0x23) == '\x01' ||
      ((*(char *)(temp_v1 + 0x23) == '\x04' && (*(char *)(temp_v1 + 0x2f) != '\0')))))) {
    temp_v3 = (*(unsigned int *)(temp_v1 + 0x28) & 0xffff) >> 0xb;
  }
  temp_v20 = (int)temp_v24;
  if ((temp_v20 != 0xff) && (temp_v11 = 0, temp_v4 != 0)) {
    do {
      temp_v10 = temp_v53;
      temp_v31 = temp_v3;
      FUN_004c8340(temp_v53,temp_v54,temp_v37[temp_v11],temp_v46);
      temp_v44[temp_v11 + 0xe] = temp_v10;
      temp_v10 = temp_v54;
      FUN_004c60c0(temp_v54,temp_v37[temp_v11]);
      temp_v8 = temp_v44[temp_v11 + 0xe];
      temp_v44[temp_v11 + 0xe] = temp_v10 | temp_v8;
      temp_v12 = temp_v37[temp_v11];
      if (((temp_v10 | temp_v8) & 0x170000) == 0) {
        temp_v34 = temp_v54;
        temp_v7 = btlGetMainState();
        FUN_003f0e20(temp_v7,temp_v34);
        if ((temp_v7 != 0) && (*(int *)(temp_v7 + 0xd8) != 0)) {
          temp_v10 = 0;
          switch(temp_v12) {
          case 9:
          case 0xb:
          case 0xc:
          case 0xd:
          case 0xe:
          case 0xf:
          case 0x11:
          case 0x12:
          case 0x13:
            temp_v10 = 0x10000;
          }
        }
        else {
          temp_v10 = 0;
        }
      }
      else {
        temp_v10 = 0;
      }
      temp_v44[temp_v11 + 0xe] = temp_v10 | temp_v44[temp_v11 + 0xe];
      kindIdStore(temp_v37[temp_v11],&temp_v35);
      puVar4 = temp_v43;
      FUN_004c0f74(temp_v43,temp_v35 & 0xff);
      temp_v5 = (unsigned int)temp_v27;
      temp_v24 = (float)((unsigned long long)temp_v23 >> 0x20);
      if ((puVar4 == (unsigned int *)0x0) && ((temp_v44[temp_v11 + 0xe] & 0x170000) != 0)) {
        return 0;
      }
      temp_v11 = temp_v11 + 1;
    } while (temp_v11 < temp_v4);
  }
  puVar4 = temp_v45;
  temp_v3 = 0;
  switch(temp_v2) {
  case 0x1d:
  case 0x1e:
    temp_v3 = 0x3e0;
    break;
  default:
    if (temp_v2 != 0) {
      temp_v3 = 1 << temp_v2;
    }
    break;
  case 0x20:
    temp_v3 = 1000;
    break;
  case 0x21:
    temp_v3 = 800;
    break;
  case 0x22:
    temp_v3 = 0x8c0;
    break;
  case 0x23:
    temp_v3 = 0x920;
    break;
  case 0x24:
    temp_v3 = 0x940;
    break;
  case 0x25:
    temp_v3 = 0x3bea;
  }
  if (0 < temp_v19) {
    temp_v3 = temp_v3 | 0x1000;
  }
  if ((*temp_v50 & DAT_00571418) != 0 || (temp_v50[1] & DAT_0057141c) != 0) {
    return 0;
  }
  if (temp_v20 != 0xff) {
    if ((uRam005714d8 & temp_v45[0x116a]) != 0 || (uRam005714dc & temp_v45[0x116b]) != 0) {
      return 0;
    }
    if (!((temp_v45[0x116a] & DAT_005714b0) == 0 && (temp_v45[0x116b] & DAT_005714b4) == 0)) {
      temp_v2 = temp_v3 & 0xffff;
      temp_v0 = (unsigned short)temp_v47[0x44];
      if ((temp_v0 & 0x9c0) != 0 && (temp_v3 & 0x1000) != 0) {
        temp_v2 = temp_v3 & 0xefff;
      }
      if ((temp_v0 & 0x1000) != 0) {
        if ((temp_v2 & 0x9c0) == 0) {
          return temp_v2;
        }
        *(unsigned short *)(temp_v47 + 0x44) = temp_v0 & 0xefff;
        if ((temp_v2 & 0x1000) != 0) {
          return temp_v2 & 0xffffefff;
        }
        return temp_v2;
      }
    }
    else {
      puVar5 = temp_v45 + 0x1168;
      if ((*puVar5 & DAT_00571498) != 0 || (temp_v45[0x1169] & DAT_0057149c) != 0) {
        temp_v3 = temp_v3 & 0xfffffbff;
      }
      if (temp_v1 != 0) {
        if (*(char *)(temp_v1 + 0x54) != '\0') {
          temp_v2 = temp_v3 & 0xffff;
          temp_v0 = (unsigned short)temp_v47[0x44];
          if ((temp_v0 & 0x9c0) != 0 && (temp_v3 & 0x1000) != 0) {
            temp_v2 = temp_v3 & 0xefff;
          }
          if ((temp_v0 & 0x1000) == 0) {
            if ((temp_v2 & 0x9c0) == 0) {
              return temp_v2;
            }
          }
          else {
            if ((temp_v2 & 0x9c0) == 0) {
              return temp_v2;
            }
            *(unsigned short *)(temp_v47 + 0x44) = temp_v0 & 0xefff;
          }
          if ((temp_v2 & 0x1000) != 0) {
            return temp_v2 & 0xffffefff;
          }
          return temp_v2;
        }
        if ((((*(short *)(temp_v1 + 0x86) == 1) && ((temp_v49[0x44] & 0x10) != 0)) &&
            (temp_v50[0x101] != 0)) && ((*(unsigned short *)(temp_v50[0x101] + 0x16) & 0x100) != 0)) {
          if ((int)(temp_v47[0x3e] * 0x1e) / 100 <= (int)temp_v47[0x3d]) {
            return 0;
          }
          if (((*temp_v43 & DAT_00571408) != 0 || (temp_v43[1] & DAT_0057140c) != 0) &&
             (temp_v19 = FUN_004bd098(temp_v43[0xff],temp_v52), temp_v19 < 0)) {
            return 0;
          }
        }
      }
      temp_v18 = (float)(temp_v25 >> 0x20);
      temp_v17 = (float)VectorSignedToFloat((int)*(short *)((int)temp_v49 + 0x10a) -
                                          (int)*(short *)((int)temp_v47 + 0x10a),
                                          (unsigned char)(in_fpscr >> 0x16) & 3);
      if ((int)temp_v17 >= 0x41f00001) {
        temp_v14 = (float)VectorSignedToFloat((int)*(short *)((int)temp_v47 + 0x10a),
                                            (unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v14 = ((temp_v17 - 30.0f) / temp_v14) * 4.0f;
        temp_v15 = temp_v17 - 30.0f;
      }
      else {
        temp_v14 = temp_v18;
        temp_v15 = temp_v18;
        if (0xc1f00000 < (unsigned int)temp_v17) {
          temp_v15 = temp_v17 + 30.0f;
          temp_v14 = (float)VectorSignedToFloat((int)*(short *)((int)temp_v49 + 0x10a),
                                              (unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v14 = (temp_v15 / temp_v14) * 4.0f;
        }
      }
      temp_v14 = temp_v14 + (temp_v17 - temp_v15) * 0.2f;
      temp_v17 = (float)VectorSignedToFloat((int)(short)temp_v49[0x43] - (int)(short)temp_v47[0x43],
                                          (unsigned char)(in_fpscr >> 0x16) & 3);
      if ((int)temp_v17 >= 0x41f00001) {
        temp_v18 = temp_v17 - 30.0f;
        temp_v15 = (float)VectorSignedToFloat((int)(short)temp_v47[0x43],(unsigned char)(in_fpscr >> 0x16) & 3)
        ;
        temp_v15 = (temp_v18 / temp_v15) * 8.0f;
      }
      else {
        temp_v15 = temp_v18;
        if (0xc1f00000 < (unsigned int)temp_v17) {
          temp_v18 = temp_v17 + 30.0f;
          temp_v15 = (float)VectorSignedToFloat((int)(short)temp_v49[0x43],
                                              (unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v15 = (temp_v18 / temp_v15) * 8.0f;
        }
      }
      temp_v19 = 0;
      temp_v15 = temp_v15 + (temp_v17 - temp_v18) * 0.4f;
      if (temp_v4 != 0) {
        temp_v6 = 0x3f800000;
        temp_v17 = 0.01f;
        temp_v28 = romwright_piece_4_4(0x3e800000,temp_v5);
        temp_v29 = 0x3eb3333340000000;
        temp_v30 = 0x424800003f400000;
        do {
          temp_v10 = temp_v53;
          temp_v2 = temp_v52;
          temp_v18 = temp_v24;
          if (temp_v44[temp_v19] == 0xc) {
            temp_v18 = (float)temp_v28;
          }
          temp_v21 = CONCAT44(temp_v6,temp_v18);
          temp_v16 = (float)VectorUnsignedToFloat
                                    (temp_v44[temp_v19 + 0xe] & 0xffff,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v22 = CONCAT44(temp_v16 * temp_v17,temp_v18 + temp_v14 + temp_v15);
          puVar11 = (unsigned int *)btlGetMainState();
          FUN_003f0e20(puVar11,temp_v10);
          temp_v10 = *puVar11;
          temp_v8 = puVar11[1];
          if (!((DAT_005713f8 & temp_v10) == 0 && (DAT_005713fc & temp_v8) == 0)) {
            temp_v10 = temp_v2;
            dataTable04FindById();
            if (temp_v10 != 0) {
              temp_v5 = padGetMappedValue(temp_v2);
              FUN_002efc44(temp_v10,temp_v5,3);
              temp_v18 = (float)VectorSignedToFloat(temp_v10,(unsigned char)(in_fpscr >> 0x16) & 3);
            }
            else {
              temp_v18 = (float)(temp_v25 >> 0x20);
            }
          }
          else if (!((DAT_00571408 & temp_v10) == 0 && (DAT_0057140c & temp_v8) == 0)) {
            temp_v10 = temp_v2;
            dataTable04FindById();
            temp_v5 = (unsigned int)(temp_v25 >> 0x20);
            temp_v36 = temp_v10;
            if (temp_v10 != 0) {
              temp_v6 = FUN_004bd098(puVar11[0xff],temp_v2);
              temp_v10 = temp_v36;
              FUN_0034a304(temp_v36,temp_v6,3);
              temp_v6 = VectorSignedToFloat(temp_v10,(unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v25 = romwright_piece_4_4(temp_v5,temp_v6);
              temp_v5 = FUN_004bd098(puVar11[0xff],temp_v2);
              temp_v2 = temp_v36;
              FUN_0034a304(temp_v36,temp_v5,6);
              temp_v18 = (float)VectorSignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v18 = temp_v18 + (float)temp_v25;
            }
            else {
              temp_v18 = (float)(temp_v25 >> 0x20);
            }
          }
          else if ((temp_v10 & DAT_00571410) != 0 || (temp_v8 & DAT_00571414) != 0) {
            dataTable04FindById();
            temp_v5 = (unsigned int)(temp_v25 >> 0x20);
            temp_v33 = temp_v2;
            if (temp_v2 != 0) {
              temp_v46 = puVar11 + 0x40;
              temp_v0 = *(unsigned short *)(temp_v2 + 0x26);
              if (temp_v0 >= 0x12) {
                temp_v20 = 0;
              }
              else {
                temp_v2 = (unsigned int)*(unsigned short *)((int)puVar11 + 0x166);
                FUN_00184310();
                temp_v20 = 0;
                if (temp_v2 != 0) {
                  temp_v20 = (int)*(char *)(temp_v2 + temp_v0 + 0xa0);
                }
              }
              temp_v2 = temp_v33;
              FUN_0034a304(temp_v33,temp_v20,3);
              temp_v0 = *(unsigned short *)(temp_v33 + 0x26);
              temp_v6 = VectorSignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v25 = romwright_piece_4_4(temp_v5,temp_v6);
              if (temp_v0 >= 0x12) {
                temp_v20 = 0;
              }
              else {
                temp_v2 = (unsigned int)*(unsigned short *)((int)temp_v46 + 0x66);
                FUN_00184310();
                temp_v20 = 0;
                if (temp_v2 != 0) {
                  temp_v20 = (int)*(char *)(temp_v2 + temp_v0 + 0xa0);
                }
              }
              temp_v2 = temp_v33;
              FUN_0034a304(temp_v33,temp_v20,6);
              temp_v18 = (float)VectorSignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v18 = temp_v18 + (float)temp_v25;
            }
            else {
              temp_v18 = (float)(temp_v25 >> 0x20);
            }
          }
          else {
            temp_v18 = (float)(temp_v25 >> 0x20);
          }
          temp_v26 = (float)(temp_v25 >> 0x20);
          temp_v6 = (unsigned int)((unsigned long long)temp_v22 >> 0x20);
          temp_v18 = (float)temp_v22 + temp_v18;
          temp_v5 = FUN_0034ef58(0xfffffffb,5);
          temp_v2 = temp_v54;
          temp_v16 = (float)VectorSignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
          if ((puVar4[0x1169] & DAT_0057149c) != 0 || (DAT_00571498 & *puVar5) != 0) {
            temp_v16 = temp_v26;
          }
          temp_v25 = CONCAT44(temp_v26,temp_v16);
          temp_v10 = temp_v44[temp_v19] & 0xffff;
          temp_v22 = CONCAT44(temp_v6,temp_v18 + temp_v16 * temp_v17 * temp_v18);
          temp_v20 = btlGetMainState();
          FUN_003f0e20(temp_v20,temp_v2);
          if (temp_v20 == 0) {
            temp_v18 = (float)((unsigned long long)temp_v21 >> 0x20);
          }
          else {
            temp_v48[0] = 0;
            temp_v48[1] = 0;
            temp_v48[2] = 0;
            temp_v48[3] = 0;
            temp_v48[4] = 0;
            temp_v48[5] = 0;
            temp_v48[6] = 0;
            temp_v48[7] = 0;
            temp_v48[8] = 0;
            temp_v48[9] = 0;
            source4CCopyHalves();
            temp_v20 = 0;
            temp_v33 = 0;
            do {
              temp_v2 = (unsigned int)temp_v48[temp_v20];
              if (temp_v2 != 0) {
                dataTable41FindById();
                temp_v8 = temp_v9;
                if (temp_v2 != 0) {
                  temp_v8 = (unsigned int)*(unsigned char *)(temp_v2 + 0x2e);
                }
                if ((temp_v2 != 0 && temp_v8 != 0) && ((temp_v10 != 1 && temp_v10 != 4) && temp_v10 != 10)) {
                  temp_v33 = temp_v33 + temp_v8;
                }
              }
              temp_v20 = temp_v20 + 1;
            } while (temp_v20 < 9);
            temp_v18 = (float)VectorSignedToFloat(temp_v33,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v18 = (float)((unsigned long long)temp_v21 >> 0x20) - temp_v18 * temp_v17;
          }
          temp_v16 = (float)temp_v21 * (float)((unsigned long long)temp_v28 >> 0x20);
          temp_v18 = (float)temp_v22 * temp_v18;
          if (temp_v18 < temp_v16) {
            temp_v18 = temp_v16;
          }
          temp_v16 = (float)temp_v21 * (float)temp_v29;
          in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v18 <= temp_v16) << 0x1d);
          if (!romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0)) {
            temp_v18 = temp_v16;
          }
          temp_v6 = (unsigned int)((unsigned long long)temp_v21 >> 0x20);
          temp_v18 = temp_v18 * (float)((unsigned long long)temp_v22 >> 0x20);
          temp_v0 = (unsigned short)(unsigned char)*temp_v49;
          if ((((unsigned char)*temp_v49 & 4) != 0) && (temp_v0 = temp_v38, temp_v38 == 1)) {
            temp_v18 = temp_v18 - temp_v18 * (float)((unsigned long long)temp_v29 >> 0x20);
          }
          if (temp_v1 != 0) {
            temp_v0 = (unsigned short)*(unsigned char *)(temp_v1 + 0x45);
          }
          if ((temp_v1 != 0 && temp_v0 != 0) &&
             ((temp_v43[1] & DAT_00571414) == 0 && (DAT_00571410 & *temp_v43) == 0)) {
            temp_v18 = temp_v18 - temp_v18 * (float)temp_v30;
          }
          if ((*puVar5 & DAT_00571498) == 0 && (puVar4[0x1169] & DAT_0057149c) == 0) {
            if ((*temp_v47 & 4) != 0) {
              if (temp_v44[temp_v19] == 1) {
                temp_v20 = FUN_0028cb6c();
                temp_v16 = *(float *)(temp_v20 + 0x24);
                temp_v18 = temp_v16 * temp_v18;
              }
            }
            else {
              temp_v20 = FUN_0028cb6c();
              temp_v18 = *(float *)(temp_v20 + 0xc) * temp_v18;
              if (temp_v44[temp_v19] == 1) {
                temp_v20 = FUN_0028cb6c();
                temp_v16 = *(float *)(temp_v20 + 0x20);
                temp_v18 = temp_v16 * temp_v18;
              }
            }
          }
          temp_v20 = 0;
          temp_v2 = (unsigned int)(unsigned char)temp_v45[0x48];
          if (temp_v44[temp_v19] == temp_v2) {
            if ((temp_v2 == 1 || temp_v2 == 5) && ((*temp_v47 & 4) != 0)) {
              temp_v20 = (int)*(char *)((int)temp_v45 + 0x122);
            }
            if ((temp_v2 == 3 || temp_v2 == 5) && ((*temp_v47 & 4) == 0)) {
              temp_v20 = (int)*(char *)((int)temp_v45 + 0x122);
            }
          }
          if (temp_v44[temp_v19] == 1) {
            if (temp_v37[temp_v19] != 6 && temp_v37[temp_v19] != 7) {
              temp_v11 = lcgRandomRange(99);
              if ((int)(unsigned int)*(unsigned char *)((int)temp_v47 + 0x1bb) <= temp_v11) {
                temp_v18 = -1.0f;
                temp_v20 = -1;
              }
              goto LAB_004c270c;
            }
          }
          else {
LAB_004c270c:
            if ((temp_v44[temp_v19] == 10) &&
               ((*temp_v50 & DAT_00571408) != 0 || (temp_v50[1] & DAT_0057140c) != 0)) {
              temp_v11 = gameFlagIsSet(0x4b6);
              if (temp_v11 != 0) {
                temp_v18 = temp_v18 + (float)((unsigned long long)temp_v30 >> 0x20);
              }
              puVar11 = temp_v45;
              FUN_003f21ec();
              if ((puVar11 != (unsigned int *)0x0) && (temp_v11 = gameFlagIsSet(0x4c6), temp_v11 == 0)) {
                temp_v18 = temp_v18 + (float)((unsigned long long)temp_v30 >> 0x20);
              }
            }
          }
          if (!((*puVar5 & DAT_00571498) != 0 || (puVar4[0x1169] & DAT_0057149c) != 0)) {
            if ((temp_v44[temp_v19 + 0xe] & 0xffff) != 0) {
              if (temp_v51 != 0) {
                temp_v11 = lcgRandomRange(99);
                if (((int)(unsigned int)*(unsigned char *)((int)temp_v47 + 0x1bb) <= temp_v11) ||
                   (temp_v11 = lcgRandomRange(99), (int)(temp_v18 * 100.0f) / 100 + temp_v20 < temp_v11)) {
                  temp_v3 = temp_v3 & ~(1 << (temp_v44[temp_v19] & 0xff));
                }
              }
              else {
                temp_v11 = lcgRandomRange(99);
                if ((int)(temp_v18 * 100.0f) / 100 + temp_v20 < temp_v11) {
                  temp_v3 = temp_v3 & ~(1 << (temp_v44[temp_v19] & 0xff));
                }
              }
            }
            else {
              temp_v3 = temp_v3 & ~(1 << (temp_v44[temp_v19] & 0xff));
            }
          }
          temp_v19 = temp_v19 + 1;
        } while (temp_v19 < temp_v4);
      }
      temp_v2 = temp_v3 & 0xffff;
      temp_v0 = (unsigned short)temp_v47[0x44];
      if ((temp_v0 & 0x9c0) != 0 && (temp_v3 & 0x1000) != 0) {
        temp_v2 = temp_v3 & 0xefff;
      }
      if ((temp_v0 & 0x1000) != 0) {
        if ((temp_v2 & 0x9c0) == 0) {
          return temp_v2;
        }
        *(unsigned short *)(temp_v47 + 0x44) = temp_v0 & 0xefff;
        if ((temp_v2 & 0x1000) != 0) {
          return temp_v2 & 0xffffefff;
        }
        return temp_v2;
      }
    }
  }
  else {
    temp_v2 = temp_v3 & 0xffff;
    temp_v0 = (unsigned short)temp_v47[0x44];
    if (((temp_v0 & 0x9c0) != 0) && ((temp_v3 & 0x1000) != 0)) {
      temp_v2 = temp_v3 & 0xefff;
    }
    if ((temp_v0 & 0x1000) != 0) {
      if ((temp_v2 & 0x9c0) == 0) {
        return temp_v2;
      }
      *(unsigned short *)(temp_v47 + 0x44) = temp_v0 & 0xefff;
      if ((temp_v2 & 0x1000) != 0) {
        return temp_v2 & 0xffffefff;
      }
      return temp_v2;
    }
  }
  if ((temp_v2 & 0x9c0) == 0) {
    return temp_v2;
  }
  if ((temp_v2 & 0x1000) != 0) {
    return temp_v2 & 0xffffefff;
  }
  return temp_v2;
}

} /* extern "C" */
