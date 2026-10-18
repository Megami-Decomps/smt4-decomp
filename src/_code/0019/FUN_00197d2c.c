/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00197d2c` (_code @ 0x197d2c, 0x1150 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of void: 9 slot(s), 36 byte(s) */
typedef struct {
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int spE8; /* 0xe8: local_e8 */
    unsigned int sp16C; /* 0x16c: local_16c */
    unsigned int sp170; /* 0x170: local_170 */
    unsigned int sp174; /* 0x174: local_174 */
    unsigned int sp17C; /* 0x17c: local_17c */
    unsigned int sp180; /* 0x180: local_180 */
} void_stack;

extern unsigned char LAB_00198100; /* 0x198100 */
extern unsigned char LAB_00198500; /* 0x198500 */
extern unsigned char LAB_0019850c; /* 0x19850c */
extern unsigned char LAB_00198510; /* 0x198510 */
extern unsigned char LAB_00198520; /* 0x198520 */
extern unsigned char LAB_00198cb8; /* 0x198cb8 */
extern unsigned char LAB_00198cc0; /* 0x198cc0 */
extern int DAT_0043dd50; /* 0x43dd50 */
extern int DAT_0044ea00; /* 0x44ea00 */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern unsigned int FUN_0011b374(unsigned int);
extern int FUN_0028f460(unsigned int);
extern int FUN_0028f5a8(void);
/* Supplied declaration required: FUN_0028f758. */
extern unsigned int FUN_00290694(void);
/* Supplied declaration required: FUN_00290a68. */
extern int FUN_00299084(unsigned int);
/* Supplied declaration required: FUN_002990bc. */
extern int FUN_002990dc(unsigned int, int, unsigned char **);
/* Supplied declaration required: FUN_0029af60. */
extern int FUN_0029f248(int);
extern int FUN_0029f260(int);
extern int FUN_002adf14(void);
/* Supplied declaration required: FUN_002b6700. */
/* Supplied declaration required: FUN_002b792c. */
/* Supplied declaration required: FUN_002b9708. */
/* Supplied declaration required: FUN_002ba46c. */
extern unsigned int FUN_002bcfcc(unsigned int, unsigned int);
extern unsigned int FUN_002bd258(unsigned int);
/* Supplied declaration required: FUN_002be16c. */
/* Supplied declaration required: FUN_002be548. */
/* Supplied declaration required: FUN_002be77c. */
/* Supplied declaration required: FUN_002be7fc. */
/* Supplied declaration required: FUN_002be828. */
extern int FUN_002bef70(int);
/* Supplied declaration required: FUN_002bef7c. */
/* Supplied declaration required: FUN_002bf460. */
/* Supplied declaration required: FUN_002bf558. */
/* Supplied declaration required: FUN_002bf6d0. */
/* Supplied declaration required: FUN_002bf710. */
extern unsigned int FUN_002c0e4c(unsigned int);
extern int FUN_002c0e9c(void);
extern unsigned int FUN_002c0ec4(unsigned int, unsigned int);
extern int FUN_002c5fa4(unsigned int, unsigned int, unsigned int);
extern unsigned int FUN_00333be8(short);


void FUN_00197d2c(void)

{
/* irregular: 4 unstructured edge(s); 3 goto(s); irregular input(s): in_fpscr; 19 native warning(s); review required */
  unsigned char temp_v0;
  unsigned short temp_v1;
  short temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  int temp_v9;
  unsigned int temp_v10;
  int temp_v11;
  unsigned int temp_v12;
  short *psVar14;
  int temp_v13;
  int *piVar16;
  unsigned int temp_v14;
  unsigned int in_fpscr;
  unsigned long long temp_v15;
  float temp_v16;
  float temp_v17;
  long long temp_v18;
  unsigned int temp_v19;
  unsigned long long temp_v20;
  unsigned char *puStack_178;
  unsigned int temp_v21;
  unsigned int temp_v22;
  int temp_v23;
  unsigned char temp_v24 [128];
  unsigned int temp_v25;
  unsigned char temp_v26 [64];
  int temp_v27;
  int temp_v28 [8];
  unsigned char temp_v29 [32];
  int temp_v30;
  float temp_v31;
  
  temp_v3 = DAT_0043dd50;
  temp_v19 = 0x3ea66666;
  FUN_002ba46c(DAT_0044ea00);
  temp_v4 = FUN_002bef7c(temp_v3 + 0x34);
  temp_v5 = FUN_002bef70(temp_v3 + 0x34);
  temp_v28[0] = temp_v3 + 0x500;
  if (*(char *)(temp_v3 + 0x5c4) != '\0') {
    temp_v13 = temp_v3 + 0x5fc;
    temp_v11 = temp_v3 + 0x6c4;
  }
  else {
    temp_v13 = temp_v3 + 0x660;
    temp_v11 = temp_v3 + 0x78a;
  }
  temp_v6 = FUN_0029f260(temp_v13);
  temp_v13 = FUN_0029f248(temp_v13);
  temp_v1 = *(unsigned short *)(temp_v11 + (temp_v13 + temp_v6) * 2);
  if (*(char *)(temp_v28[0] + 0xf2) != '\0') {
    temp_v1 = *(unsigned short *)(temp_v3 + 0x97e);
  }
  temp_v25 = (unsigned int)temp_v1;
  temp_v31 = 0.32f;
  temp_v20 = romwright_piece_4_4(0x3ea3d70a,temp_v19);
  FUN_002ba46c(DAT_0044ea00);
  temp_v6 = *(int *)(temp_v3 + 4);
  temp_v13 = temp_v5;
  temp_v11 = temp_v4;
  if ((temp_v6 == 0x17 || temp_v6 == 0x18) || temp_v6 == 0x19) {
    temp_v11 = FUN_002bef7c();
    temp_v11 = temp_v11 + temp_v4;
    temp_v13 = FUN_002bef70(temp_v3 + 0x494);
    temp_v13 = temp_v13 + temp_v5;
  }
  FUN_002bf558(2,0x29,2,temp_v11 + (int)temp_v31,temp_v13,0x65);
  temp_v17 = 0.315f;
  temp_v31 = temp_v17;
  FUN_002ba46c(DAT_0044ea00);
  FUN_002bf558(2,0x29,1,temp_v4 + (int)temp_v17,temp_v5,0x65);
  temp_v16 = 0.31f;
  temp_v17 = temp_v16;
  FUN_002ba46c(DAT_0044ea00);
  FUN_002bf558(2,0x29,0,temp_v4 + (int)temp_v16,temp_v5,0x65);
  temp_v15 = 0;
  if (temp_v25 != 0) {
    temp_v7 = temp_v25;
    FUN_002b6700();
    FUN_002ba46c(DAT_0044ea00);
    temp_v13 = FUN_002990bc(temp_v25);
    temp_v11 = temp_v4 + (int)temp_v17;
    if (temp_v13 != 0) {
      FUN_002bf460(2,0x29,0x10,temp_v11,temp_v5,0x68);
    }
    else {
      FUN_002bf460(2,0x29,0xf,temp_v11,temp_v5,0x68);
    }
    temp_v13 = FUN_002bf6d0(0x29,0x11);
    temp_v11 = temp_v4 + (int)temp_v17;
    FUN_0029af60(temp_v25,*(short *)(temp_v13 + 8) + temp_v11,*(short *)(temp_v13 + 10) + temp_v5,0x6a);
    temp_v13 = FUN_002bf6d0(0x29,0x12);
    temp_v19 = FUN_002bcfcc(temp_v25,0);
    FUN_002be7fc(temp_v24,&LAB_00198100,temp_v19);
    temp_v18 = (unsigned long long)(unsigned int)temp_v31 << 0x20;
    VectorSignedToFloat(*(short *)(temp_v13 + 8) + temp_v11,(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat(*(short *)(temp_v13 + 10) + temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_002be77c(3,0xffffffff,temp_v24);
    temp_v31 = 0.305f;
    FUN_002ba46c(DAT_0044ea00);
    temp_v16 = (float)((unsigned long long)temp_v15 >> 0x20);
    temp_v17 = (float)((unsigned long long)temp_v18 >> 0x20);
    temp_v12 = 0;
    if (*(int *)(temp_v7 + 0x150) != 0) {
      do {
        temp_v13 = FUN_002bf6d0(0x29,(int)temp_v12 / 2 + 5);
        temp_v11 = *(short *)(temp_v13 + 10) + temp_v5;
        temp_v13 = (int)*(short *)(temp_v13 + 8) + temp_v4 + (int)temp_v31;
        if ((temp_v12 & 1) != 0) {
          FUN_002bf460(2,0x29,0xe,temp_v13,temp_v11,0x6a);
        }
        else {
          FUN_002bf460(2,0x29,0xd,temp_v13,temp_v11,0x6a);
        }
        temp_v16 = (float)((unsigned long long)temp_v15 >> 0x20);
        temp_v17 = (float)((unsigned long long)temp_v18 >> 0x20);
        temp_v12 = temp_v12 + 1;
      } while (temp_v12 < *(unsigned int *)(temp_v7 + 0x150));
    }
    FUN_002ba46c(DAT_0044ea00);
    temp_v13 = FUN_002bf6d0(0x29,0x1a);
    temp_v19 = FUN_0011b374(temp_v25);
    FUN_002be7fc(temp_v24,&LAB_00198100,temp_v19);
    temp_v11 = temp_v4 + (int)temp_v17;
    VectorSignedToFloat(*(short *)(temp_v13 + 8) + temp_v11,(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat(*(short *)(temp_v13 + 10) + temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_002be77c(2,0xff,temp_v24);
    temp_v13 = FUN_002adf14();
    temp_v0 = *(unsigned char *)(temp_v13 + temp_v25 * 4 + 0x200);
    psVar14 = (short *)(temp_v7 + ((int)((unsigned int)temp_v0 << 0x1c) >> 0x1f) * -0xc + 0x154);
    if (((temp_v0 & 8) != 0) && (*psVar14 == 0)) {
      psVar14 = (short *)(temp_v7 + 0x154);
    }
    temp_v2 = *psVar14;
    if (temp_v2 != 1) {
      if (temp_v2 != 3) {
        if (temp_v2 != 4) {
          FUN_002be7fc(temp_v24,&LAB_00198500);
          temp_v13 = FUN_002bf6d0(0x29,0x1b);
        }
        else {
          temp_v19 = FUN_00333be8(psVar14[1]);
          FUN_002be7fc(temp_v24,&LAB_00198100,temp_v19);
          temp_v13 = FUN_002bf6d0(0x29,0x1b);
        }
      }
      else {
        FUN_00290a68(temp_v26,psVar14[2]);
        FUN_002be7fc(temp_v24,&LAB_00198520,temp_v26);
        temp_v13 = FUN_002bf6d0(0x29,0x1b);
      }
      VectorSignedToFloat(*(short *)(temp_v13 + 8) + temp_v11,(unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat(*(short *)(temp_v13 + 10) + temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_002be77c(2,0xffffffff,temp_v24);
    }
    else if (psVar14[1] != 0) {
      temp_v13 = FUN_002bf6d0(0x29,0x1b);
      FUN_002be548((int)psVar14[1],*(short *)(temp_v13 + 8) + temp_v11,*(short *)(temp_v13 + 10) + temp_v5,
                   0x6a,0);
      temp_v13 = FUN_002bf6d0(0x29,0x1c);
      temp_v19 = FUN_002be828(psVar14[1],0);
      FUN_002be7fc(temp_v24,&LAB_00198100,temp_v19);
      VectorSignedToFloat(*(short *)(temp_v13 + 8) + temp_v11,(unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat(*(short *)(temp_v13 + 10) + temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_002be77c(2,0xffffffff,temp_v24);
      FUN_0028f758(temp_v24,2);
      puStack_178 = &LAB_0019850c;
      temp_v11 = (int)(temp_v16 + 3.0f) + (int)temp_v17;
      FUN_002be16c(0,*(short *)(temp_v13 + 8) + temp_v4 + temp_v11,*(short *)(temp_v13 + 10) + temp_v5,0,7,
                   0x6a);
      FUN_00290a68(temp_v26,psVar14[2]);
      VectorSignedToFloat(*(short *)(temp_v13 + 10) + temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat(*(short *)(temp_v13 + 8) + temp_v4 + temp_v11 + 7,(unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_002be77c(2,0xffffffff,temp_v26);
    }
    else {
      FUN_002be7fc(temp_v24,&LAB_00198510,psVar14[2]);
      FUN_002bf6d0(0x29,0x1c);
    }
    temp_v31 = (float)((unsigned long long)temp_v20 >> 0x20);
    FUN_002ba46c(DAT_0044ea00);
    temp_v11 = *(int *)(temp_v3 + 4);
    temp_v6 = temp_v4 + (int)temp_v31;
    temp_v13 = temp_v5;
    if ((temp_v11 == 0x17 || temp_v11 == 0x18) || temp_v11 == 0x19) {
      temp_v13 = FUN_002bef7c();
      temp_v6 = temp_v13 + temp_v4 + (int)temp_v31;
      temp_v13 = FUN_002bef70(temp_v3 + 0x494);
      temp_v13 = temp_v13 + temp_v5;
      if (*(int *)(temp_v3 + 4) != 0x18) goto LAB_00198410;
LAB_0019857c:
      FUN_002bf710();
      temp_v11 = DAT_0044ea00;
      temp_v8 = FUN_002c5fa4(6,1,0);
      piVar16 = (int *)(temp_v11 + 0x12ac);
      temp_v9 = piVar16[*piVar16 + 2];
      piVar16[*piVar16 + 2] = temp_v8;
      if (*(char *)(temp_v11 + 0x12c4) != '\0' || temp_v9 != temp_v8) {
        (**(romwright_code **)(temp_v11 + 0x12c8))();
        *(unsigned char *)(temp_v11 + 0x12c4) = 0;
      }
      FUN_002bf460(2,0x29,0x60,temp_v6,temp_v13,0x68);
      temp_v11 = DAT_0044ea00;
      temp_v8 = FUN_002c5fa4(6,7,0);
      piVar16 = (int *)(temp_v11 + 0x12ac);
      temp_v9 = piVar16[*piVar16 + 2];
      piVar16[*piVar16 + 2] = temp_v8;
      if (*(char *)(temp_v11 + 0x12c4) != '\0' || temp_v9 != temp_v8) {
        (**(romwright_code **)(temp_v11 + 0x12c8))();
        *(unsigned char *)(temp_v11 + 0x12c4) = 0;
      }
      FUN_002bf710();
      FUN_002bf460(2,0x29,0x24,temp_v6,temp_v13,0x6a);
    }
    else {
LAB_00198410:
      if (*(int *)(temp_v3 + 8) == 0x18) goto LAB_0019857c;
      FUN_002bf460(2,0x29,0x23,temp_v6,temp_v13,0x6a);
    }
    temp_v11 = FUN_002bf6d0(0x29,0x25);
    FUN_002b792c(*(unsigned int *)(temp_v3 + 0x5d8),*(short *)(temp_v11 + 8) + temp_v6,
                 *(short *)(temp_v11 + 10) + temp_v13,0x6f,6,0);
    temp_v11 = FUN_002bf6d0(0x29,0x26);
    FUN_002b792c(*(unsigned int *)(temp_v3 + 0x5d8),*(short *)(temp_v11 + 8) + temp_v6,
                 *(short *)(temp_v11 + 10) + temp_v13,0x6f,6,1);
  }
  temp_v31 = (float)temp_v20;
  FUN_002ba46c(DAT_0044ea00);
  temp_v6 = (int)temp_v31;
  temp_v13 = FUN_002bef7c(temp_v3 + 0x1d8);
  temp_v11 = temp_v13 + temp_v4 + temp_v6;
  temp_v13 = FUN_002bef70(temp_v3 + 0x1d8);
  temp_v13 = temp_v13 + temp_v5;
  FUN_002bf558(2,0x29,3,temp_v11,temp_v13,0x65);
  if (temp_v25 == 0) {
    return;
  }
  temp_v7 = temp_v25;
  FUN_002b6700();
  if (*(char *)(temp_v28[0] + 0xc4) != '\0') {
    temp_v8 = FUN_002990bc(temp_v25);
    if (temp_v8 != 0) {
      FUN_002bf460(2,0x29,0x2b,temp_v11,temp_v13,0x68);
    }
  }
  else if (*(char *)(temp_v7 + 6) != '\0') {
    temp_v8 = FUN_0028f5a8();
    if (temp_v8 != 0) {
      temp_v12 = FUN_00290694();
      if (temp_v12 == temp_v25) {
        if (*(int *)(temp_v3 + 4) != 0xc) {
          FUN_002bf460(2,0x29,0x2a,temp_v11,temp_v13,0x68);
        }
        else {
          VectorSignedToFloat(temp_v6,(unsigned char)(in_fpscr >> 0x16) & 3);
          FUN_002b9708(temp_v3 + 0x264);
        }
      }
      else {
        temp_v8 = FUN_002990bc();
        if (temp_v8 != 0) {
          FUN_002bf460(2,0x29,0x2b,temp_v11,temp_v13,0x68);
        }
      }
    }
    else {
      temp_v8 = FUN_002990bc(temp_v25);
      if (temp_v8 != 0) {
        FUN_002bf460(2,0x29,0x2b,temp_v11,temp_v13,0x68);
      }
    }
  }
  else {
    temp_v8 = FUN_002990bc(temp_v25);
    if (temp_v8 != 0) {
      FUN_002bf460(2,0x29,0x2b,temp_v11,temp_v13,0x68);
    }
  }
  temp_v8 = 0;
  if (0 < *(int *)(temp_v3 + 0x5d0)) {
    temp_v21 = temp_v4 + temp_v6;
    do {
      if (*(int *)(temp_v3 + 0x5c8) != temp_v8) {
        temp_v6 = FUN_002bf6d0(0x29,temp_v8 + 0x48);
        FUN_002bf460(2,0x29,0x40,(int)*(short *)(temp_v6 + 8) + temp_v21,
                     *(short *)(temp_v6 + 10) + temp_v5,0x65);
        if (temp_v8 != 0) {
          if (temp_v8 != 1) {
            if (temp_v8 == 2) {
              FUN_002bf460(2,0x29,0x43,(int)*(short *)(temp_v6 + 8) + temp_v21,
                           *(short *)(temp_v6 + 10) + temp_v5,0x6a);
            }
          }
          else if ((*(unsigned char *)(temp_v7 + 7) & 0x40) != 0) {
            FUN_002bf460(2,0x29,0x42,(int)*(short *)(temp_v6 + 8) + temp_v21,
                         *(short *)(temp_v6 + 10) + temp_v5,0x6a);
          }
          else {
            FUN_002bf460(2,0x29,0x43,(int)*(short *)(temp_v6 + 8) + temp_v21,
                         *(short *)(temp_v6 + 10) + temp_v5,0x6a);
          }
        }
        else {
          FUN_002bf460(2,0x29,0x41,(int)*(short *)(temp_v6 + 8) + temp_v21,
                       *(short *)(temp_v6 + 10) + temp_v5,0x6a);
        }
      }
      temp_v8 = temp_v8 + 1;
    } while (temp_v8 < *(int *)(temp_v3 + 0x5d0));
  }
  if (*(int *)(temp_v3 + 0x5c8) == 0) {
    temp_v6 = 0;
    do {
      temp_v8 = FUN_002bf6d0(0x29,0x34);
      FUN_002b792c(*(unsigned int *)(temp_v3 + 0x5d4),*(short *)(temp_v8 + 8) + temp_v11,
                   (int)*(short *)(temp_v8 + 10) + temp_v6 * 0x11 + temp_v13,0x6f,6,temp_v6);
      temp_v6 = temp_v6 + 1;
    } while (temp_v6 < 7);
    temp_v31 = (float)((unsigned long long)temp_v20 >> 0x20);
    FUN_002ba46c(DAT_0044ea00);
    temp_v6 = FUN_002bf6d0(0x29,0x48);
    FUN_002bf460(2,0x29,0x44,(int)*(short *)(temp_v6 + 8) + (int)temp_v31 + temp_v4,
                 *(short *)(temp_v6 + 10) + temp_v5,0x6f);
    FUN_002bf460(2,0x29,0x45,(int)*(short *)(temp_v6 + 8) + (int)temp_v31 + temp_v4,
                 *(short *)(temp_v6 + 10) + temp_v5,0x74);
  }
  if (*(int *)(temp_v3 + 0x5c8) == 1) {
    if ((*(unsigned char *)(temp_v7 + 7) & 0x40) == 0) goto LAB_00198cdc;
    temp_v8 = 0;
    temp_v6 = 0;
    temp_v30 = 1;
    do {
      temp_v9 = FUN_002990dc(temp_v25,temp_v6,&puStack_178);
      if (temp_v9 != 0) {
        temp_v27 = FUN_002bf6d0(0x29,0x34);
        FUN_00290a68(temp_v29,temp_v22);
        temp_v23 = temp_v7 + temp_v6 * 8;
        FUN_00290a68(temp_v28,*(unsigned int *)(temp_v23 + 0x170));
        if ((*(unsigned char *)((unsigned char *)&temp_v21 + 2)) != '\0') {
          temp_v19 = FUN_002be828(temp_v21 & 0xffff,0);
          FUN_002be7fc(temp_v24,&LAB_00198cb8,temp_v19,temp_v29,temp_v28);
        }
        else {
          temp_v19 = FUN_002bd258(temp_v21 & 0xffff);
          FUN_002be7fc(temp_v24,&LAB_00198cb8,temp_v19,temp_v29,temp_v28);
        }
        if (temp_v22 < *(unsigned int *)(temp_v23 + 0x170)) {
          temp_v30 = 0;
        }
        VectorSignedToFloat((int)*(short *)(temp_v27 + 10) + temp_v6 * 0x11 + temp_v13,
                            (unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat(*(short *)(temp_v27 + 8) + temp_v11,(unsigned char)(in_fpscr >> 0x16) & 3);
        FUN_002be77c(3,0x320202ff,temp_v24);
        temp_v8 = temp_v8 + 1;
      }
      temp_v6 = temp_v6 + 1;
    } while (temp_v6 < 6);
    if (*(char *)(temp_v7 + 6) == '\0') {
      temp_v6 = FUN_00299084(temp_v25);
      if ((temp_v6 != 0) && (temp_v6 = FUN_0028f460(temp_v25), temp_v6 == 0)) {
        temp_v30 = 0;
      }
      if ((*(char *)(temp_v7 + 6) == '\0') && (temp_v30 != 0)) {
        temp_v27 = FUN_002bf6d0(0x29,0x34);
        temp_v6 = FUN_00299084(temp_v25);
        if ((temp_v6 == 0) && (*(short *)(temp_v7 + 0x19c) != 0)) {
          if (*(short *)(temp_v7 + 0x19c) == 1) {
            temp_v12 = 7;
          }
          else {
            temp_v12 = 8;
          }
        }
        else {
          temp_v12 = 9;
        }
        temp_v19 = FUN_002c0ec4(0x34,0);
        temp_v23 = FUN_002c0e9c();
        temp_v10 = FUN_002c0e4c(temp_v19);
        if ((temp_v12 < temp_v10) && (temp_v23 + temp_v12 * 0x4a != -1)) {
          FUN_002be7fc(temp_v24,&LAB_00198cc0);
          VectorSignedToFloat(*(short *)(temp_v27 + 10) + temp_v13 + temp_v8 * 0x11 + 0x11,
                              (unsigned char)(in_fpscr >> 0x16) & 3);
          VectorSignedToFloat(*(short *)(temp_v27 + 8) + temp_v11,(unsigned char)(in_fpscr >> 0x16) & 3);
          FUN_002be77c(3,0x320202ff,temp_v24);
        }
      }
    }
    temp_v31 = (float)((unsigned long long)temp_v20 >> 0x20);
    FUN_002ba46c(DAT_0044ea00);
    temp_v6 = FUN_002bf6d0(0x29,0x49);
    FUN_002bf460(2,0x29,0x44,(int)*(short *)(temp_v6 + 8) + (int)temp_v31 + temp_v4,
                 *(short *)(temp_v6 + 10) + temp_v5,0x6f);
    FUN_002bf460(2,0x29,0x46,(int)*(short *)(temp_v6 + 8) + (int)temp_v31 + temp_v4,
                 *(short *)(temp_v6 + 10) + temp_v5,0x74);
  }
  temp_v31 = (float)((unsigned long long)temp_v20 >> 0x20);
  if ((*(int *)(temp_v3 + 0x5c8) == 2) ||
     ((*(int *)(temp_v3 + 0x5c8) == 1 && ((*(unsigned char *)(temp_v7 + 7) & 0x40) == 0)))) {
LAB_00198cdc:
    temp_v6 = 0;
    do {
      temp_v8 = FUN_002bf6d0(0x29,0x34);
      FUN_002b792c(*(unsigned int *)(temp_v3 + 0x5dc),*(short *)(temp_v8 + 8) + temp_v11,
                   (int)*(short *)(temp_v8 + 10) + temp_v6 * 0x11 + temp_v13,0x6f,6,temp_v6);
      temp_v17 = (float)((unsigned long long)temp_v20 >> 0x20);
      temp_v6 = temp_v6 + 1;
    } while (temp_v6 < 7);
    temp_v31 = temp_v17;
    FUN_002ba46c(DAT_0044ea00);
    if (*(int *)(temp_v3 + 0x5c8) != 2) {
      temp_v13 = FUN_002bf6d0(0x29,0x49);
    }
    else {
      temp_v13 = FUN_002bf6d0(0x29,0x4a);
    }
    FUN_002bf460(2,0x29,0x44,(int)*(short *)(temp_v13 + 8) + (int)temp_v17 + temp_v4,
                 *(short *)(temp_v13 + 10) + temp_v5,0x6f);
    FUN_002bf460(2,0x29,0x47,(int)*(short *)(temp_v13 + 8) + (int)temp_v17 + temp_v4,
                 *(short *)(temp_v13 + 10) + temp_v5,0x74);
  }
  if (*(int *)(temp_v3 + 0x5d0) >= 2) {
    FUN_002ba46c(DAT_0044ea00);
    temp_v14 = 4;
    temp_v19 = 5;
    if (*(int *)(temp_v3 + 4) == 5 || *(int *)(temp_v3 + 4) == 4) {
      temp_v2 = *(short *)(temp_v3 + 0x228);
      if (temp_v2 == 3 || temp_v2 == 1) {
        temp_v14 = 6;
      }
      else if (temp_v2 == 2 || temp_v2 == 0) {
        temp_v19 = 7;
      }
    }
    FUN_002bf558(2,0x29,temp_v14,temp_v4 + (int)temp_v31,temp_v5,0x79);
    FUN_002bf558(2,0x29,temp_v19,temp_v4 + (int)temp_v31,temp_v5,0x79);
  }
  return;
}
