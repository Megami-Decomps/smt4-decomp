/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001fc610` (_code @ 0x1fc610, 0x34 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned char LAB_001920c8; /* 0x1920c8 */
extern unsigned char LAB_0019d6cc; /* 0x19d6cc */
extern unsigned int DAT_00434290; /* 0x434290 */
extern int DAT_004342c8; /* 0x4342c8 */
extern int DAT_00435d18; /* 0x435d18 */
extern unsigned int *DAT_00435d30; /* 0x435d30 */
extern int DAT_00435d48; /* 0x435d48 */
extern unsigned int DAT_00439a20; /* 0x439a20 */
extern unsigned int DAT_00439a24; /* 0x439a24 */
extern unsigned int DAT_00439a28; /* 0x439a28 */
extern unsigned int DAT_00439a2c; /* 0x439a2c */
extern unsigned int DAT_00439a30; /* 0x439a30 */
extern unsigned int DAT_00439a34; /* 0x439a34 */
extern unsigned int DAT_00439a38; /* 0x439a38 */
extern unsigned int DAT_00439ca8; /* 0x439ca8 */
extern unsigned int DAT_00439cf8; /* 0x439cf8 */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_002273ac. */
/* Supplied declaration required: FUN_002273e0. */
/* Supplied declaration required: FUN_0023f56c. */
/* Supplied declaration required: FUN_0023f640. */
/* Supplied declaration required: FUN_0023f8f8. */
/* Supplied declaration required: FUN_0023fc3c. */
/* Supplied declaration required: FUN_0023fce0. */
/* Supplied declaration required: FUN_0023fd38. */
/* Supplied declaration required: FUN_00240158. */
/* Supplied declaration required: FUN_00240420. */
extern unsigned int FUN_00240578(int);
extern int FUN_00240618(int);
/* Supplied declaration required: FUN_00240650. */
/* Supplied declaration required: FUN_00240660. */
/* Supplied declaration required: FUN_002406ac. */
extern int FUN_002406f8(int, unsigned short);
/* Supplied declaration required: FUN_00240744. */
extern unsigned int *FUN_002407a8(unsigned int *, int);
/* Supplied declaration required: FUN_0024095c. */
extern unsigned int *FUN_00240ac0(unsigned int *, int);
/* Supplied declaration required: FUN_00245330. */
/* Supplied declaration required: FUN_00250800. */
/* Supplied declaration required: FUN_00255198. */
extern int FUN_00256b80(int, int, unsigned int);
/* Supplied declaration required: FUN_00270298. */
extern int FUN_0027dc58(int, unsigned int);
/* Supplied declaration required: FUN_0027dca0. */
extern int FUN_0027dd20(int, int);
extern int FUN_0027e628(int);
/* Supplied declaration required: FUN_0027e668. */
extern int FUN_0027e92c(unsigned int, unsigned int *);
/* Supplied declaration required: FUN_0027e964. */
/* Supplied declaration required: FUN_00288424. */
extern int FUN_00289924(void);
/* Supplied declaration required: FUN_0029423c. */
extern unsigned int FUN_00294334(unsigned int, unsigned int);
extern int FUN_00295284(int);
extern int FUN_00295300(int);
/* Supplied declaration required: FUN_00297704. */
/* Supplied declaration required: FUN_002b087c. */
/* Supplied declaration required: FUN_002b7f0a. */
/* Supplied declaration required: FUN_002bcf58. */
/* Supplied declaration required: FUN_002be7fc. */
/* Supplied declaration required: FUN_002bf86c. */
extern int FUN_002c0ac8(void);
/* Supplied declaration required: FUN_002c2ba4. */
extern int FUN_002c2bd0(unsigned int);
/* Supplied declaration required: FUN_002c4360. */
/* Supplied declaration required: FUN_002c4450. */
/* Supplied declaration required: FUN_002c4b30. */
/* Supplied declaration required: FUN_002fe358. */
/* Supplied declaration required: FUN_0030a6f4. */
/* Supplied declaration required: FUN_00334a6c. */
/* Supplied declaration required: FUN_00336fdc. */
/* Supplied declaration required: FUN_003381cc. */
/* Supplied declaration required: FUN_0033854c. */
/* Supplied declaration required: FUN_00338658. */
/* Supplied declaration required: FUN_0033868c. */
extern int FUN_00339404(int, unsigned int);
/* Supplied declaration required: FUN_00339444. */
/* Supplied declaration required: FUN_0033a014. */
/* Supplied declaration required: FUN_0033a06c. */
/* Supplied declaration required: FUN_0033a250. */
/* Supplied declaration required: FUN_0033a378. */
/* Supplied declaration required: FUN_00394e88. */
extern int FUN_003ade5c(unsigned int);
/* Supplied declaration required: FUN_003ae940. */
/* Supplied declaration required: FUN_003d7228. */
extern int FUN_003db9e0(int);
/* Supplied declaration required: func_0x0027e5fc. */


unsigned int * FUN_001fc610(void)

{
/* irregular: 10 goto(s); 51 native warning(s); review required */
  short temp_v0;
  short temp_v1;
  short temp_v2;
  unsigned char temp_v3;
  unsigned short temp_v4;
  unsigned short temp_v5;
  char temp_v6;
  char temp_v7;
  char temp_v8;
  char temp_v9;
  unsigned char temp_v10;
  int temp_v11;
  int temp_v12;
  int temp_v13;
  unsigned int *puVar15;
  unsigned int temp_v14;
  int temp_v15;
  int temp_v16;
  unsigned int *puVar19;
  unsigned int *puVar20;
  int *piVar21;
  int *piVar22;
  int temp_v17;
  unsigned int temp_v18;
  short temp_v19;
  unsigned int temp_v20;
  int temp_v21;
  float temp_v22;
  int iStack_238;
  unsigned int *puStack_234;
  int iStack_22c;
  int iStack_224;
  unsigned int uStack_220;
  int iStack_214;
  unsigned int uStack_210;
  unsigned int uStack_20c;
  int iStack_208;
  int iStack_200;
  int iStack_170;
  unsigned char temp_v23 [44];
  unsigned int uStack_130;
  unsigned int uStack_12c;
  unsigned int uStack_128;
  unsigned char temp_v24 [24];
  int iStack_108;
  unsigned int uStack_104;
  int iStack_100;
  int iStack_fc;
  int aiStack_f8 [12];
  unsigned int temp_v25 [10];
  unsigned char temp_v26 [8];
  unsigned char temp_v27 [8];
  unsigned char temp_v28 [84];
  int iStack_3c;
  unsigned long long uStack_34;
  unsigned int *puStack_2c;
  int iStack_28;
  
  temp_v11 = FUN_002c0ac8();
  puVar19 = DAT_00435d30;
  if (DAT_00435d30 == (unsigned int *)0x0) {
    return (unsigned int *)0x0;
  }
  switch(*DAT_00435d30) {
  case 0:
    temp_v15 = FUN_0027e628(DAT_00435d48);
    if (temp_v15 != 0) {
      return (unsigned int *)0x0;
    }
    temp_v15 = DAT_00435d48;
    FUN_0027e668(DAT_00435d48,9,0xffffffff,0);
    if (temp_v15 != 0) {
      puVar20 = (unsigned int *)(temp_v11 + 0x44a0);
      if ((*puVar20 & 0x40000000) == 0) {
        FUN_00270298(2);
        *puVar20 = *puVar20 | 0x40000000;
        temp_v15 = FUN_002c2bd0(1);
        if (temp_v15 == 3) {
          FUN_002c2ba4(1,10,0xff);
        }
      }
      func_0x0027e5fc(DAT_00435d48);
    }
    *puVar19 = 1;
    temp_v15 = FUN_0027e628(DAT_00435d48);
    goto joined_r0x00334d18;
  case 1:
    temp_v15 = FUN_0027e628(DAT_00435d48);
joined_r0x00334d18:
    if (temp_v15 != 0) {
      return (unsigned int *)0x0;
    }
    *puVar19 = 2;
FUN_00334374:
    temp_v15 = temp_v11;
    FUN_0027e964(temp_v11,1);
    if (-1 < temp_v15) {
      *(unsigned int *)(temp_v11 + 0x44a0) = *(unsigned int *)(temp_v11 + 0x44a0) | 0x4000000;
      temp_v20 = (unsigned int)*(unsigned short *)(*(int *)(temp_v11 + 0x1fc0) + temp_v15 * 0x288 + 0xce);
      FUN_002b087c();
      FUN_002c4b30(temp_v28,0x80);
      FUN_002be7fc(temp_v28,"battle/arngmt/%02d_%02d.earg",*(unsigned char *)(temp_v20 + 0x9e),
                   *(unsigned char *)(temp_v20 + 0x9f));
      FUN_00297704(temp_v28,(int *)(temp_v11 + 0x1e88),0);
      *puVar19 = 3;
      if (*(int *)(temp_v11 + 0x1e88) == 0) {
        puVar19 = (unsigned int *)0x0;
      }
      else {
        *puVar19 = 4;
        puVar19 = (unsigned int *)FUN_00240ac0(puVar19,temp_v11);
      }
      return puVar19;
    }
    *puVar19 = 7;
FUN_002409dc:
    if ((*(unsigned int *)(temp_v11 + 0x44a0) & 0x20) != 0) {
      FUN_0023f56c(temp_v11,1,1,0);
    }
    else {
      FUN_0023f56c(temp_v11,1,1);
    }
    *puVar19 = 8;
    temp_v15 = temp_v11;
    FUN_0023fc3c(temp_v11,1);
    if (temp_v15 == 0) {
      return (unsigned int *)0x0;
    }
    FUN_0023f8f8(temp_v11,0x400);
    temp_v15 = 4;
    do {
      temp_v20 = *(unsigned int *)(*(int *)(temp_v11 + 0x1e98) + temp_v15 * 0x114 + 0x50);
      if (((temp_v20 & 1) != 0 && (temp_v20 & 0x80) != 0) && (temp_v20 & 0x400) != 0) {
        *(char *)(temp_v11 + 0x1e9d) = *(char *)(temp_v11 + 0x1e9d) + '\x01';
      }
      temp_v15 = temp_v15 + 1;
    } while (temp_v15 < 0x36);
    *puVar19 = 10;
    break;
  case 2:
    goto FUN_00334374;
  case 3:
    if (*(int *)(temp_v11 + 0x1e88) == 0) {
      return (unsigned int *)0x0;
    }
    *DAT_00435d30 = 4;
    goto code_r0x00240ac0;
  case 4:
code_r0x00240ac0:
    puVar15 = temp_v25;
    FUN_00336fdc(temp_v11);
    temp_v14 = *(unsigned int *)(temp_v11 + 0x1e88);
    FUN_002c4450(temp_v25,0xa8,0xffffffff);
    FUN_0030a6f4(temp_v25,0x2a,temp_v14);
    temp_v16 = 0;
    temp_v15 = 0;
    if (0 < (int)puVar15) {
      do {
        temp_v12 = FUN_00339404(temp_v11,temp_v25[temp_v15]);
        if (temp_v12 == 0) {
          temp_v14 = FUN_00294334(temp_v25[temp_v15],1);
          FUN_00339444(temp_v11,temp_v14);
          *(unsigned int *)(temp_v11 + temp_v16 * 8 + 0x1fe8) = temp_v25[temp_v15];
          FUN_0033854c(temp_v11,(int)(short)temp_v25[temp_v15]);
          temp_v16 = temp_v16 + 1;
        }
        temp_v15 = temp_v15 + 1;
      } while (temp_v15 < (int)puVar15);
    }
    *puVar19 = 5;
    puVar19[2] = temp_v16;
    FUN_00334a6c(puVar19,temp_v11);
    return puVar19;
  case 5:
    temp_v15 = 0;
    temp_v10 = 1;
    if (0 < (int)DAT_00435d30[2]) {
      do {
        temp_v12 = temp_v11 + temp_v15 * 8;
        temp_v16 = FUN_0027dc58(temp_v11,*(unsigned int *)(temp_v12 + 0x1fe8));
        puVar20 = (unsigned int *)(temp_v12 + 0x1fe4);
        if ((*puVar20 & 1) == 0) {
          temp_v12 = FUN_00295300(temp_v16);
          if (temp_v12 == 0) {
            temp_v10 = 0;
          }
          else {
            *puVar20 = *puVar20 | 1;
            FUN_0029423c(temp_v16,7);
          }
        }
        if ((*puVar20 & 2) == 0) {
          temp_v12 = FUN_00295284(temp_v16);
          if (temp_v12 == 0) {
            temp_v10 = 0;
          }
          else {
            FUN_0023fce0(temp_v16);
            *puVar20 = *puVar20 | 2;
            temp_v12 = temp_v11 + temp_v15 * 0x48;
            *(unsigned int *)(temp_v12 + 0x1078) = *(unsigned int *)(temp_v16 + 4);
            *(unsigned int *)(temp_v12 + 0x107c) = *(unsigned int *)(temp_v16 + 8);
            *(unsigned int *)(temp_v12 + 0x1080) = *(unsigned int *)(temp_v16 + 0xc);
            *(unsigned int *)(temp_v12 + 0x1084) = *(unsigned int *)(temp_v16 + 0x10);
            *(unsigned int *)(temp_v12 + 0x1088) = *(unsigned int *)(temp_v16 + 0x14);
            *(unsigned int *)(temp_v12 + 0x108c) = *(unsigned int *)(temp_v16 + 0x18);
            *(unsigned int *)(temp_v12 + 0x1090) = *(unsigned int *)(temp_v16 + 0x1c);
            *(unsigned int *)(temp_v12 + 0x1094) = *(unsigned int *)(temp_v16 + 0x20);
            *(unsigned int *)(temp_v12 + 0x1098) = *(unsigned int *)(temp_v16 + 0x24);
            *(unsigned int *)(temp_v12 + 0x109c) = *(unsigned int *)(temp_v16 + 0x28);
            *(unsigned int *)(temp_v12 + 0x10a0) = *(unsigned int *)(temp_v16 + 0x2c);
            *(unsigned int *)(temp_v12 + 0x10a4) = *(unsigned int *)(temp_v16 + 0x30);
            *(unsigned int *)(temp_v12 + 0x10a8) = *(unsigned int *)(temp_v16 + 0x34);
            *(unsigned int *)(temp_v12 + 0x10ac) = *(unsigned int *)(temp_v16 + 0x38);
            *(unsigned char *)(temp_v12 + 0x10b0) = *(unsigned char *)(temp_v16 + 0x3c);
            *(unsigned char *)(temp_v12 + 0x10b1) = *(unsigned char *)(temp_v16 + 0x3d);
            *(unsigned int *)(temp_v12 + 0x10b4) = *(unsigned int *)(temp_v16 + 0x40);
            *(unsigned int *)(temp_v12 + 0x10b8) = *(unsigned int *)(temp_v16 + 0x44);
          }
        }
        temp_v15 = temp_v15 + 1;
      } while (temp_v15 < (int)puVar19[2]);
      if (!temp_v10) {
        return (unsigned int *)0x0;
      }
    }
    *puVar19 = 6;
    goto FUN_0033445c;
  case 6:
FUN_0033445c:
    iStack_238 = puVar19[2];
    temp_v15 = temp_v11 + 0x3f4;
    puStack_2c = puVar19;
    iStack_28 = temp_v11;
    FUN_002fe358(temp_v15,0x32,*(unsigned int *)(temp_v11 + 0x1e88),temp_v11 + 0x1074);
    temp_v11 = iStack_28;
    iStack_238 = temp_v15;
    FUN_0027e964(iStack_28,1);
    piVar22 = (int *)(iStack_28 + 0x1fc0);
    temp_v20 = (unsigned int)*(unsigned short *)(*piVar22 + temp_v11 * 0x288 + 0xce);
    iStack_22c = temp_v11;
    FUN_002b087c();
    temp_v3 = *(unsigned char *)(temp_v20 + 0x9e);
    temp_v22 = 0.0f;
    if (temp_v3 == 0) {
      temp_v22 = 15.0f;
    }
    if ((temp_v3 >= 2) && (temp_v3 == 2)) {
      temp_v22 = -20.0f;
    }
    FUN_00288424();
    if (0 < iStack_238) {
      temp_v15 = 0;
      temp_v11 = iStack_238;
      do {
        temp_v11 = temp_v11 - 1;
        temp_v16 = iStack_28 + temp_v15 * 0x20;
        temp_v15 = temp_v15 + 1;
        *(float *)(temp_v16 + 0x40c) = *(float *)(temp_v16 + 0x40c) + temp_v22;
        *(unsigned int *)(temp_v16 + 0xa34) = *(unsigned int *)(temp_v16 + 0x3f4);
        *(unsigned int *)(temp_v16 + 0xa38) = *(unsigned int *)(temp_v16 + 0x3f8);
        *(unsigned int *)(temp_v16 + 0xa3c) = *(unsigned int *)(temp_v16 + 0x3fc);
        *(unsigned int *)(temp_v16 + 0xa40) = *(unsigned int *)(temp_v16 + 0x400);
        *(unsigned int *)(temp_v16 + 0xa44) = *(unsigned int *)(temp_v16 + 0x404);
        *(unsigned int *)(temp_v16 + 0xa48) = *(unsigned int *)(temp_v16 + 0x408);
        *(unsigned int *)(temp_v16 + 0xa4c) = *(unsigned int *)(temp_v16 + 0x40c);
        *(unsigned int *)(temp_v16 + 0xa50) = *(unsigned int *)(temp_v16 + 0x410);
      } while (temp_v11 != 0);
    }
    FUN_00240650(iStack_28 + 0x3f4,iStack_238);
    FUN_00240650(iStack_28 + 0xa34,iStack_238);
    temp_v15 = -1;
    iStack_208 = iStack_28 + 0x1e00;
    *(short *)(iStack_28 + 0x1e84) = (short)iStack_238;
    iStack_3c = 0xff;
    iStack_170 = 4;
    temp_v11 = 0;
    piVar21 = (int *)(iStack_28 + 0x1e98);
    do {
      temp_v12 = *piVar21;
      iStack_238 = iStack_170 * 0x45;
      temp_v16 = iStack_170 * 0x114 + 0x60;
      if (*(short *)(temp_v12 + temp_v16) >= 0) {
        if ((*(unsigned int *)(*piVar22 + *(short *)(temp_v12 + temp_v16) * 0x288) & 0x100) != 0) {
LAB_003345e4:
          *(unsigned int *)(temp_v12 + iStack_170 * 0x114 + 0x50) = 0x491;
          temp_v12 = iStack_28 + temp_v11 * 0x20;
          *(short *)(*piVar21 + temp_v16) = (short)iStack_22c;
          temp_v14 = *(unsigned int *)(temp_v12 + 0x408);
          temp_v18 = *(unsigned int *)(temp_v12 + 0x40c);
          puVar19 = (unsigned int *)(*piVar21 + iStack_170 * 0x114 + 0xc);
          *puVar19 = *(unsigned int *)(temp_v12 + 0x404);
          puVar19[1] = temp_v14;
          puVar19[2] = temp_v18;
          puStack_234 = (unsigned int *)(temp_v12 + 0x400);
          iStack_224 = iStack_170 * 0x114 + 100;
          *(unsigned short *)(*piVar21 + iStack_170 * 0x114 + 0x5a) = *(unsigned short *)(temp_v12 + 0x3f8);
          *(unsigned int *)(*piVar21 + iStack_224) = *(unsigned int *)(temp_v12 + 0x3fc);
          iStack_200 = iStack_170 * 0x114 + 0xfc;
          *(unsigned int *)(*piVar21 + iStack_170 * 0x114 + 0x40) = *puStack_234;
          *(unsigned int *)(*piVar21 + iStack_170 * 0x114 + 0xf0) = 0;
          *(unsigned int *)(*piVar21 + iStack_200) = (unsigned int)*(unsigned short *)(temp_v12 + 0x410);
          iStack_214 = *piVar21;
          uStack_20c = DAT_00439cf8 >> 0x18;
          uStack_220 = (DAT_00439cf8 & 0xff00) >> 8;
          temp_v20 = *(unsigned int *)(iStack_214 + iStack_224);
          uStack_210 = (temp_v20 & 0xff00) >> 8;
          temp_v15 = ((uStack_20c + (temp_v20 >> 0x18)) >> 1) * 0x1000000 +
                   ((((temp_v20 & 0xff0000) >> 0x10) + ((DAT_00439cf8 & 0xff0000) >> 0x10)) >> 1) *
                   0x10000 + ((uStack_210 + uStack_220) >> 1) * 0x100 + 0xff;
          *(int *)(iStack_214 + iStack_224) = temp_v15;
          *(int *)(*piVar21 + iStack_170 * 0x114 + 0x68) = temp_v15;
          *(unsigned int *)(*piVar21 + iStack_170 * 0x114 + 0x6c) =
               *(unsigned int *)(*piVar21 + iStack_224);
          *(unsigned int *)(*piVar21 + iStack_170 * 0x114 + 0x8c) =
               *(unsigned int *)(*piVar21 + iStack_224);
          *(unsigned int *)(*piVar21 + iStack_170 * 0x114 + 0x90) =
               *(unsigned int *)(*piVar21 + iStack_224);
          if (*(int *)(*piVar21 + iStack_200) < iStack_3c) {
            iStack_3c = *(int *)(*piVar21 + iStack_200);
          }
          temp_v21 = 0;
          temp_v13 = iStack_170 * 0x114 + 0x62;
          do {
            temp_v17 = *piVar22 + *(short *)(*piVar21 + temp_v16) * 0x288;
            temp_v15 = (int)*(short *)(temp_v17 + 0x6e);
            *(unsigned int *)(temp_v17 + temp_v11 * 4 + 0xd8) = *(unsigned int *)(temp_v12 + 0x3f4);
            temp_v19 = *(short *)(temp_v17 + temp_v21 * 2 + 8);
            if (*(short *)(*piVar21 + temp_v13) == temp_v19) break;
            if (temp_v19 < 0) {
              *(unsigned short *)(temp_v17 + temp_v21 * 2 + 8) = *(unsigned short *)(*piVar21 + temp_v13);
              break;
            }
            temp_v21 = temp_v21 + 1;
          } while (temp_v21 < 0x32);
          temp_v11 = temp_v11 + 1;
          if (*(short *)(iStack_28 + 0x1e84) - 1 < temp_v11) break;
        }
      }
      else {
        temp_v20 = *(unsigned int *)(temp_v12 + iStack_170 * 0x114 + 0x50);
        if ((temp_v20 & 1) == 0 && (temp_v20 & 0x80) == 0) goto LAB_003345e4;
      }
      iStack_170 = iStack_170 + 1;
    } while (iStack_170 < 0x36);
    if (temp_v15 != -1) {
      temp_v11 = 0;
      temp_v15 = *piVar22 + temp_v15 * 0x288;
      do {
        temp_v16 = (int)*(short *)(temp_v15 + temp_v11 * 2 + 8);
        if (-1 < temp_v16) {
          temp_v16 = *piVar21 + temp_v16 * 0x114;
          if ((((*(unsigned int *)(temp_v16 + 0x50) & 1) != 0 && (*(unsigned int *)(temp_v16 + 0x50) & 0x80) != 0) &&
              (*(int *)(temp_v16 + 0xfc) == iStack_3c)) &&
             ((temp_v12 = *piVar21 + *(short *)(temp_v15 + 8) * 0x114,
              *(int *)(temp_v12 + 0xfc) != iStack_3c ||
              (*(float *)(temp_v16 + 0xc) * *(float *)(temp_v16 + 0xc) <
               *(float *)(temp_v12 + 0xc) * *(float *)(temp_v12 + 0xc))))) {
            temp_v13 = FUN_0027dd20(iStack_28,temp_v12);
            temp_v21 = FUN_0027dd20(iStack_28,temp_v16);
            temp_v21 = temp_v15 + 0xcc + temp_v21 * 4;
            temp_v13 = temp_v15 + 0xcc + temp_v13 * 4;
            temp_v14 = *(unsigned int *)(temp_v13 + 0xc);
            *(unsigned int *)(temp_v13 + 0xc) = *(unsigned int *)(temp_v21 + 0xc);
            *(unsigned int *)(temp_v21 + 0xc) = temp_v14;
            temp_v4 = *(unsigned short *)(temp_v12 + 0x62);
            temp_v5 = *(unsigned short *)(temp_v16 + 0x62);
            FUN_002bcf58(temp_v23,temp_v12,0x114);
            FUN_002bcf58(temp_v12,temp_v16,0x114);
            FUN_002bcf58(temp_v16,temp_v23,0x114);
            *(unsigned short *)(temp_v12 + 0x62) = temp_v4;
            *(unsigned short *)(temp_v16 + 0x62) = temp_v5;
          }
        }
        temp_v11 = temp_v11 + 1;
      } while (temp_v11 < 0x32);
      temp_v16 = 0;
      temp_v11 = 0;
      do {
        temp_v12 = (int)*(short *)(temp_v15 + temp_v11 * 2 + 8);
        if (-1 < temp_v12) {
          (&iStack_238)[temp_v16] = *piVar21 + temp_v12 * 0x114;
          temp_v16 = temp_v16 + 1;
        }
        temp_v11 = temp_v11 + 1;
      } while (temp_v11 < 0x32);
      FUN_003381cc(iStack_28,temp_v15 + 0xcc);
      FUN_002b7f0a(&iStack_238,temp_v16,4,&LAB_001920c8);
      temp_v11 = 0;
      if (temp_v11 < temp_v16) {
        do {
          *(int *)((&iStack_238)[temp_v11] + 0xf4) = temp_v11;
          temp_v11 = temp_v11 + 1;
        } while (temp_v11 < temp_v16);
      }
    }
    *puStack_2c = 7;
    puVar19 = puStack_2c;
    temp_v11 = iStack_28;
    goto FUN_002409dc;
  case 7:
    goto FUN_002409dc;
  case 8:
    temp_v15 = temp_v11;
    FUN_0023fc3c(temp_v11,1);
    if (temp_v15 == 0) {
      return (unsigned int *)0x0;
    }
    FUN_0023f8f8(temp_v11,0x400);
    temp_v15 = 4;
    do {
      temp_v20 = *(unsigned int *)(*(int *)(temp_v11 + 0x1e98) + temp_v15 * 0x114 + 0x50);
      if (((temp_v20 & 1) != 0 && (temp_v20 & 0x80) != 0) && (temp_v20 & 0x400) != 0) {
        *(char *)(temp_v11 + 0x1e9d) = *(char *)(temp_v11 + 0x1e9d) + '\x01';
      }
      temp_v15 = temp_v15 + 1;
    } while (temp_v15 < 0x36);
    *puVar19 = 10;
    break;
  case 9:
    *DAT_00435d30 = 10;
    break;
  case 10:
    break;
  case 0xb:
    FUN_002c4b30(temp_v27,0x80);
    temp_v14 = FUN_00240578(temp_v11);
    FUN_002bf86c(temp_v27,temp_v14);
    if (puVar19[1] != 0) {
      FUN_002c4360();
      puVar19[1] = 0;
    }
    FUN_00297704(temp_v27,puVar19 + 1,0);
    *puVar19 = 0xc;
    FUN_00240158(puVar19,temp_v11);
    return puVar19;
  case 0xc:
    temp_v15 = DAT_00435d30[1];
    if (temp_v15 == 0) {
      return (unsigned int *)0x0;
    }
    puVar20 = (unsigned int *)(temp_v11 + 0x44a0);
    if (((*puVar20 & 0x200) == 0) && (*(char *)(temp_v15 + 10) == '\x01')) {
      temp_v6 = *(char *)(temp_v15 + 4);
      temp_v7 = *(char *)(temp_v15 + 5);
      temp_v8 = *(char *)(temp_v15 + 6);
      temp_v9 = *(char *)(temp_v15 + 7);
      temp_v16 = *(int *)(temp_v15 + 0xc);
      temp_v15 = (unsigned int)*(unsigned short *)(temp_v15 + 8) + temp_v15;
      *(unsigned int *)(temp_v11 + 0x1ea4) = 0;
      *(unsigned int *)(temp_v11 + 0x1ea8) = 0;
      *(unsigned int *)(temp_v11 + 0x1eac) = 0;
      *(unsigned int *)(temp_v11 + 0x1eb0) = 0;
      *(unsigned int *)(temp_v11 + 0x1eb4) = 0;
      *(unsigned int *)(temp_v11 + 0x1eb8) = 0;
      *(unsigned int *)(temp_v11 + 0x1ebc) = 0;
      if ((int)temp_v9 + ((temp_v6 * 1000 + temp_v7 * 100 + temp_v8 * 10) - 0xd050) == 0x44c) {
        FUN_002bcf58((unsigned int *)(temp_v11 + 0x1ea4),temp_v15,0x118);
        temp_v15 = temp_v15 + 0x118;
      }
      temp_v20 = (temp_v16 - 0x118U) / 0x18;
      if (*(unsigned char *)(temp_v11 + 0x1e9d) < temp_v20) {
        temp_v20 = (unsigned int)*(unsigned char *)(temp_v11 + 0x1e9d);
      }
      FUN_002bcf58(*(unsigned int *)(temp_v11 + 0x1fbc),temp_v15,temp_v20 * 0x18);
    }
    FUN_0033a250(temp_v11);
    FUN_0033a06c(temp_v11);
    FUN_003d7228(DAT_004342c8);
    if ((*(char *)(temp_v11 + 0x44b7) == '\0') &&
       (((*(unsigned int *)(temp_v11 + 0xe0) & 0x2000000) != 0 || ((*puVar20 & 2) != 0)))) {
      temp_v15 = 4;
      do {
        temp_v16 = *(int *)(temp_v11 + 0x1e98) + temp_v15 * 0x114;
        if ((((*(unsigned int *)(temp_v16 + 0x50) & 1) != 0 && (*(unsigned int *)(temp_v16 + 0x50) & 2) != 0) &&
            ((*(unsigned int *)(temp_v16 + 0x54) & 8) != 0)) &&
           (*(unsigned int *)(temp_v16 + 0x54) = *(unsigned int *)(temp_v16 + 0x54) & 0xfffffff7,
           (*(unsigned short *)(temp_v16 + 0x58) & 0x800) == 0)) {
          temp_v12 = temp_v11;
          FUN_0027dca0(temp_v11,(int)*(short *)(temp_v16 + 0x62));
          temp_v12 = FUN_002406f8(temp_v11,*(unsigned short *)(temp_v12 + 2));
          if (temp_v12 == 0) {
            *(unsigned short *)(temp_v16 + 0x58) = *(unsigned short *)(temp_v16 + 0x58) | 0x800;
          }
        }
        temp_v15 = temp_v15 + 1;
      } while (temp_v15 < 0x36);
      uStack_34 = uStack_34 & 0xffffffff;
      puStack_2c = (unsigned int *)0x0;
      iStack_28 = 0;
      FUN_00250800(0,0,0x100017b);
    }
    *puVar19 = 0xd;
    if ((*puVar20 & 0x40000000) == 0) {
      FUN_00270298(2);
      *puVar20 = *puVar20 | 0x40000000;
    }
    temp_v15 = FUN_002c2bd0(0);
    if (temp_v15 == 3) {
      FUN_002c2ba4(0,10,0xff);
    }
    temp_v15 = FUN_002c2bd0(1);
    if (temp_v15 == 3) {
      FUN_002c2ba4(1,10,0xff);
    }
    temp_v15 = FUN_00289924();
    if (temp_v15 == 0) {
      return (unsigned int *)0x0;
    }
    *puVar19 = 0xe;
    puVar19[3] = 0;
    goto code_r0x0023fd38;
  case 0xd:
    temp_v15 = FUN_002c2bd0(0);
    if (temp_v15 == 3) {
      FUN_002c2ba4(0,10,0xff);
    }
    temp_v15 = FUN_002c2bd0(1);
    if (temp_v15 == 3) {
      FUN_002c2ba4(1,10,0xff);
    }
    temp_v15 = FUN_00289924();
    if (temp_v15 == 0) {
      return (unsigned int *)0x0;
    }
    puVar19[3] = 0;
    *puVar19 = 0xe;
    goto code_r0x0023fd38;
  case 0xe:
code_r0x0023fd38:
    temp_v15 = DAT_00435d18;
    puVar20 = (unsigned int *)(temp_v11 + 0x44a0);
    if ((*(char *)(temp_v11 + 0x44b7) != '\0') ||
       (((*(unsigned int *)(temp_v11 + 0xe0) & 0x2000000) == 0 && ((*puVar20 & 2) == 0)))) {
      if ((puVar19[3] == 0) && ((*(unsigned int *)(DAT_00435d18 + 0x3028) & 0x400) != 0)) {
        *(unsigned int *)(DAT_004342c8 + 0x634) = *(unsigned int *)(DAT_004342c8 + 0x634) | 0x4000;
        FUN_00240744(temp_v15);
        puVar19[3] = puVar19[3] | 2;
      }
      puVar15 = (unsigned int *)0x0;
      if ((puVar19[3] & 2) != 0) {
        temp_v15 = FUN_003db9e0(DAT_00435d18);
        puVar15 = (unsigned int *)0x0;
        if (temp_v15 != 0) {
          temp_v16 = 0;
          temp_v15 = 4;
          do {
            temp_v12 = *(int *)(temp_v11 + 0x1e98) + temp_v15 * 0x114;
            if (((*(unsigned int *)(temp_v12 + 0x50) & 1) != 0 && (*(unsigned int *)(temp_v12 + 0x50) & 2) != 0) &&
               ((*(unsigned int *)(temp_v12 + 0x54) & 8) != 0)) {
              aiStack_f8[temp_v16] = temp_v12;
              temp_v16 = temp_v16 + 1;
            }
            temp_v15 = temp_v15 + 1;
          } while (temp_v15 < 0x36);
          FUN_002b7f0a(aiStack_f8,temp_v16,4,&LAB_0019d6cc);
          temp_v19 = 0;
          temp_v15 = 0;
          puStack_2c = (unsigned int *)0x0;
          if (0 < temp_v16) {
            do {
              temp_v12 = aiStack_f8[temp_v15];
              if ((((*(unsigned int *)(temp_v12 + 0x50) & 1) != 0 && (*(unsigned int *)(temp_v12 + 0x50) & 2) != 0) &&
                  ((*(unsigned int *)(temp_v12 + 0x54) & 8) != 0)) &&
                 (*(unsigned int *)(temp_v12 + 0x54) = *(unsigned int *)(temp_v12 + 0x54) & 0xfffffff7,
                 (*(unsigned short *)(temp_v12 + 0x58) & 0x800) == 0)) {
                temp_v13 = temp_v11;
                FUN_0027dca0(temp_v11,(int)*(short *)(temp_v12 + 0x62));
                temp_v13 = FUN_002406f8(temp_v11,*(unsigned short *)(temp_v13 + 2));
                if (temp_v13 == 0) {
                  *(unsigned short *)(temp_v12 + 0x58) = *(unsigned short *)(temp_v12 + 0x58) | 0x800;
                  if ((*(unsigned int *)(temp_v12 + 0x50) & 0x10) != 0) {
                    temp_v0 = (short)DAT_00439a2c;
                    temp_v1 = (short)DAT_00439a30;
                    temp_v2 = (short)DAT_00439a34;
                  }
                  else {
                    temp_v1 = (short)DAT_00439a24;
                    temp_v0 = (short)DAT_00439a20;
                    temp_v2 = (short)DAT_00439a28;
                  }
                  iStack_fc = (int)temp_v0;
                  iStack_100 = (int)(short)DAT_00439a38;
                  iStack_108 = (int)temp_v2;
                  uStack_34 = romwright_piece_4_4((int)temp_v1,(unsigned int)uStack_34);
                  FUN_002406ac(temp_v11,temp_v12,0);
                  uStack_104 = 0;
                  FUN_00245330((int)temp_v19 * (int)(short)iStack_fc + (*(unsigned int *)((unsigned char *)&uStack_34 + 4)) + iStack_100,
                               puVar19,temp_v12,0xff);
                  temp_v14 = 6;
                  iStack_108 = 0xd;
                  if ((*(unsigned int *)(temp_v12 + 0x50) & 0x10) != 0) {
                    temp_v14 = 7;
                  }
                  FUN_00240660((int)temp_v19 * (int)(short)iStack_fc + iStack_100,puVar19,temp_v12,
                               temp_v14);
                  if (puStack_2c == (unsigned int *)0x0) {
                    iStack_108 = 0;
                    uStack_104 = 0;
                    iStack_100 = 0;
                    FUN_00250800((int)temp_v19 * (int)(short)iStack_fc,puVar19,0x10001d4,0);
                    puStack_2c = (unsigned int *)0x1;
                  }
                  temp_v19 = temp_v19 + 1;
                }
              }
              temp_v15 = temp_v15 + 1;
            } while (temp_v15 < temp_v16);
          }
          if (*(int *)(DAT_004342c8 + 0x24) != 0) {
            FUN_0024095c();
          }
          else {
            FUN_0024095c(DAT_004342c8,0x78);
          }
          if ((*puVar20 & 2) == 0) {
            FUN_00255198(temp_v11);
            *puVar20 = *puVar20 | 0x200000;
            FUN_003ae940(DAT_00439ca8,0);
          }
          puVar19[3] = 0;
          *puVar19 = 0xf;
          puVar15 = (unsigned int *)FUN_002407a8(puVar19,temp_v11);
        }
      }
      return puVar15;
    }
    if (*(int *)(DAT_004342c8 + 0x24) != 0) {
      FUN_0024095c();
    }
    else {
      FUN_0024095c(DAT_004342c8,0x78);
    }
    if ((*puVar20 & 2) != 0) {
      FUN_00255198(temp_v11);
      *puVar20 = *puVar20 | 0x200000;
      temp_v15 = temp_v11;
      FUN_0027e964(temp_v11,1);
      if ((temp_v15 < 0) && ((*(unsigned int *)(temp_v11 + 0xe4) & 0x20) == 0)) {
        FUN_00394e88(3);
      }
    }
    else {
      FUN_00255198(temp_v11);
      *puVar20 = *puVar20 | 0x200000;
      FUN_003ae940(DAT_00439ca8,0);
    }
    puVar19[3] = 0;
    *puVar19 = 0xf;
code_r0x002407a8:
    if (((*(char *)(temp_v11 + 0x44b7) == '\0') ||
        (temp_v15 = FUN_0027e92c(DAT_00434290,puVar19), temp_v15 < 1)) &&
       ((temp_v15 = FUN_00240618(DAT_00435d18), temp_v15 != 0 &&
        (((*(unsigned int *)(temp_v11 + 0x44a0) & 8) == 0 ||
         (temp_v15 = FUN_003ade5c(DAT_00439ca8), temp_v15 != 0)))))) {
      if ((*(unsigned int *)(temp_v11 + 0xe0) & 0x4000000) != 0) {
        temp_v16 = 4;
        temp_v15 = 4;
        do {
          puVar20 = (unsigned int *)(*(int *)(temp_v11 + 0x1fc0) + temp_v15 * 0x288);
          temp_v20 = *puVar20;
          if ((((temp_v20 & 1) != 0) && ((temp_v20 & 0x40) == 0)) && ((temp_v20 & 0x10) != 0)) {
            *puVar20 = *puVar20 | 0x800000;
          }
          temp_v15 = temp_v15 + 1;
        } while (temp_v15 < 0x36);
        do {
          temp_v15 = *(int *)(temp_v11 + 0x1e98) + temp_v16 * 0x114;
          temp_v20 = *(unsigned int *)(temp_v15 + 0x50);
          if ((((temp_v20 & 1) != 0) && ((temp_v20 & 0x80) == 0)) && ((temp_v20 & 0x400) != 0)) {
            *(unsigned int *)(temp_v15 + 0x50) = temp_v20 | 0x40000;
          }
          temp_v16 = temp_v16 + 1;
        } while (temp_v16 < 0x36);
      }
      puVar19[3] = puVar19[3] | 4;
      temp_v15 = FUN_00256b80(DAT_004342c8,temp_v11,1);
      if (temp_v15 != 0) {
        temp_v19 = *(short *)(temp_v11 + 0x1fc8);
        temp_v14 = 0xffffffff;
        if (temp_v19 == 0) {
          temp_v14 = 1;
        }
        else if (temp_v19 == 1) {
          temp_v14 = 2;
        }
        else if (temp_v19 == 2) {
          temp_v14 = 3;
        }
        else if (temp_v19 == 3) {
          temp_v14 = 4;
        }
        *(unsigned int *)(DAT_004342c8 + 0x760) = temp_v14;
      }
      *puVar19 = 0x10;
      puVar19[4] = 1;
    }
    return (unsigned int *)0x0;
  case 0xf:
    goto code_r0x002407a8;
  case 0x10:
    temp_v15 = DAT_00435d30[4];
    DAT_00435d30[4] = temp_v15 + 1U;
    if ((temp_v15 + 1U >= 0x1f) && (temp_v15 = FUN_0027e92c(DAT_00434290,puVar19), temp_v15 < 1)) {
      temp_v15 = FUN_00240618(DAT_00435d18);
      if (temp_v15 == 0) {
        return (unsigned int *)0x0;
      }
      temp_v15 = DAT_004342c8;
      FUN_002273e0();
      if (temp_v15 == 0) {
        return (unsigned int *)0x0;
      }
      if ((*(unsigned int *)(DAT_004342c8 + 0x634) & 0x80000) != 0) {
        return (unsigned int *)0x0;
      }
      FUN_0023f640(temp_v11);
      *(unsigned int *)(DAT_004342c8 + 0x634) = *(unsigned int *)(DAT_004342c8 + 0x634) & 0xffffbfff;
      FUN_002273ac();
      return (unsigned int *)0xffffffff;
    }
  default:
    return (unsigned int *)0x0;
  }
  FUN_002c4b30(temp_v24,0x80);
  temp_v14 = FUN_00240578(temp_v11);
  FUN_002bf86c(temp_v24,temp_v14);
  temp_v15 = temp_v11;
  FUN_00240420(temp_v11,temp_v24);
  if (temp_v15 != 0) {
    *puVar19 = 0xb;
    FUN_002c4b30(temp_v26,0x80);
    temp_v14 = FUN_00240578(temp_v11);
    FUN_002bf86c(temp_v26,temp_v14);
    if (puVar19[1] != 0) {
      FUN_002c4360();
      puVar19[1] = 0;
    }
    FUN_00297704(temp_v26,puVar19 + 1,0);
    *puVar19 = 0xc;
    FUN_00240158(puVar19,temp_v11);
    puVar15 = puVar19;
  }
  else {
    puVar20 = (unsigned int *)(temp_v11 + 0x44a0);
    *puVar19 = 0xd;
    if ((*puVar20 & 0x40000000) == 0) {
      FUN_00270298(2);
      *puVar20 = *puVar20 | 0x40000000;
    }
    FUN_0033868c(temp_v11);
    FUN_0033a378(temp_v11);
    FUN_00338658(temp_v11);
    FUN_0033a014(temp_v11);
    FUN_003d7228(DAT_004342c8);
    if ((*(char *)(temp_v11 + 0x44b7) == '\0') &&
       (((*(unsigned int *)(temp_v11 + 0xe0) & 0x2000000) != 0 || ((*puVar20 & 2) != 0)))) {
      temp_v15 = 4;
      do {
        temp_v16 = *(int *)(temp_v11 + 0x1e98) + temp_v15 * 0x114;
        if ((((*(unsigned int *)(temp_v16 + 0x50) & 1) != 0 && (*(unsigned int *)(temp_v16 + 0x50) & 2) != 0) &&
            ((*(unsigned int *)(temp_v16 + 0x54) & 8) != 0)) &&
           (*(unsigned int *)(temp_v16 + 0x54) = *(unsigned int *)(temp_v16 + 0x54) & 0xfffffff7,
           (*(unsigned short *)(temp_v16 + 0x58) & 0x800) == 0)) {
          temp_v12 = temp_v11;
          FUN_0027dca0(temp_v11,(int)*(short *)(temp_v16 + 0x62));
          temp_v12 = FUN_002406f8(temp_v11,*(unsigned short *)(temp_v12 + 2));
          if (temp_v12 == 0) {
            *(unsigned short *)(temp_v16 + 0x58) = *(unsigned short *)(temp_v16 + 0x58) | 0x800;
          }
        }
        temp_v15 = temp_v15 + 1;
      } while (temp_v15 < 0x36);
      uStack_130 = 0;
      uStack_12c = 0;
      uStack_128 = 0;
      FUN_00250800(0,0,0x100017b);
      FUN_00255198(temp_v11);
      *puVar20 = *puVar20 | 0x200000;
      if ((*(unsigned int *)(temp_v11 + 0xe4) & 0x20) == 0) {
        FUN_00394e88(3);
      }
    }
    temp_v15 = FUN_002c2bd0(0);
    if (temp_v15 == 3) {
      FUN_002c2ba4(0,10,0xff);
    }
    temp_v15 = FUN_002c2bd0(1);
    if (temp_v15 == 3) {
      FUN_002c2ba4(1,10,0xff);
    }
    temp_v15 = FUN_00289924();
    puVar15 = (unsigned int *)0x0;
    if (temp_v15 != 0) {
      *puVar19 = 0xe;
      puVar19[3] = 0;
      FUN_0023fd38(puVar19,temp_v11);
      return puVar19;
    }
  }
  return puVar15;
}
