/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002d966c` (_code @ 0x2d966c, 0x14d0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_002d966c_arg0 fn_002d966c_arg0;
struct fn_002d966c_arg0 {
    undefined4 field_0x0; /* +0x0 */
    unsigned char pad_0x4[0x30];
    byte field_0x34; /* +0x34 */
    unsigned char pad_0x35[0x43d];
    short field_0x472; /* +0x472 */
    short field_0x474; /* +0x474 */
    short field_0x476; /* +0x476 */
    unsigned char pad_0x478[0x8ec0];
    ushort field_0x9338; /* +0x9338 */
};

typedef int romwright_code();
/* stack frame of param_4: 17 slot(s), 68 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
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
} param_4_stack;

extern unsigned char LAB_002d9adc; /* 0x2d9adc */
extern unsigned char LAB_002d9b0c; /* 0x2d9b0c */
extern unsigned char LAB_002da0c0; /* 0x2da0c0 */
extern unsigned char LAB_002da0c4; /* 0x2da0c4 */
extern unsigned char LAB_002da6f8; /* 0x2da6f8 */
extern unsigned char LAB_002dab3c; /* 0x2dab3c */
extern unsigned char LAB_002dab40; /* 0x2dab40 */
extern int DAT_0044ea00; /* 0x44ea00 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00258308. */
extern unsigned int *FUN_00262a44(void);
extern int FUN_0028d260(unsigned int *);
/* Supplied declaration required: FUN_0028f2ec. */
/* Supplied declaration required: FUN_00290c38. */
/* Supplied declaration required: FUN_0029a418. */
extern int FUN_0029ba58(unsigned int, unsigned int, unsigned char *);
extern int FUN_0029d8e4(unsigned int *);
extern int FUN_0029d8fc(int);
extern unsigned int FUN_0029e080(void);
extern int FUN_0029eba8(unsigned int *);
extern int FUN_0029ebdc(unsigned int *);
/* Supplied declaration required: FUN_0029ed08. */
extern int FUN_0029f248(unsigned int *);
/* Supplied declaration required: FUN_0029f260. */
/* Supplied declaration required: FUN_0029fa74. */
extern int FUN_002a0fac(void);
/* Supplied declaration required: FUN_002b0824. */
/* Supplied declaration required: FUN_002b6a98. */
/* Supplied declaration required: FUN_002b7118. */
/* Supplied declaration required: FUN_002b9364. */
/* Supplied declaration required: FUN_002bd020. */
/* Supplied declaration required: FUN_002bd258. */
/* Supplied declaration required: FUN_002be16c. */
/* Supplied declaration required: FUN_002be4dc. */
/* Supplied declaration required: FUN_002be77c. */
/* Supplied declaration required: FUN_002be7fc. */
/* Supplied declaration required: FUN_002bef14. */
extern int FUN_002bef70(unsigned int *);
extern int FUN_002bef7c(unsigned int *);
/* Supplied declaration required: FUN_002bf460. */
/* Supplied declaration required: FUN_002bf558. */
/* Supplied declaration required: FUN_002bf6d0. */
/* Supplied declaration required: FUN_002bf710. */
extern int FUN_002c5fa4(unsigned int, unsigned int, unsigned int);


void FUN_002d966c(fn_002d966c_arg0 *param_1,int param_2,int param_3,int param_4)

{
/* irregular: irregular input(s): in_fpscr; 23 native warning(s); review required */
  short temp_v0;
  short temp_v1;
  short temp_v2;
  unsigned int *puVar4;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  short *psVar8;
  unsigned int temp_v6;
  unsigned short *puVar10;
  int temp_v7;
  int temp_v8;
  unsigned char *puVar13;
  unsigned int temp_v9;
  int temp_v10;
  unsigned int temp_v11;
  int temp_v12;
  int temp_v13;
  int *piVar19;
  unsigned int in_fpscr;
  unsigned int temp_v14;
  unsigned int temp_v15;
  unsigned int temp_v16;
  unsigned int temp_v17;
  unsigned int temp_v18;
  unsigned int temp_v19;
  unsigned char temp_v20 [64];
  unsigned int *temp_v21;
  unsigned int *temp_v22;
  unsigned char temp_v23 [24];
  unsigned int temp_v24;
  int temp_v25;
  fn_002d966c_arg0 *pfStack_34;
  int iStack_30;
  int temp_v26;
  int temp_v27;
  
  pfStack_34 = param_1;
  iStack_30 = param_2;
  temp_v26 = param_3;
  temp_v27 = param_4;
  puVar4 = (unsigned int *)FUN_00262a44();
  if (puVar4 != (unsigned int *)0x0) {
    temp_v3 = FUN_002a0fac();
    temp_v22 = puVar4 + 0x1885;
    temp_v18 = 0;
    temp_v21 = puVar4 + 0x186c;
    if (temp_v26 != 0) {
      temp_v22 = puVar4 + 0x24b5;
      temp_v21 = puVar4 + 0x249c;
    }
    if (*(char *)(temp_v3 + 0x34) != '\0') {
      FUN_002bf558(2,0x24,2,param_1,param_2,0x65);
      FUN_002bf460(2,0x24,0xf0,param_1,param_2,0x65);
      FUN_002bf460(2,0x24,0xf1,param_1,param_2,0x65);
      FUN_002bf460(2,0x24,0xf2,param_1,param_2,0x65);
    }
    else {
      FUN_002bf558(2,0x24,0,param_1,param_2,0x65);
    }
    FUN_002bf460(2,0x24,0xd0,param_1,param_2,0x65);
    FUN_002bf460(2,0x24,0x4a,param_1,param_2,0x65);
    temp_v4 = FUN_002bf6d0(0x24,0x49);
    FUN_002be7fc(temp_v20,&LAB_002d9adc);
    VectorSignedToFloat(*(short *)(temp_v4 + 10) + param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat((int)&param_1->field_0x0 + (int)*(short *)(temp_v4 + 8),
                        (unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_002be77c(2,0xffffffff,temp_v20);
    temp_v4 = FUN_002bf6d0(0x24,0x4c);
    temp_v5 = FUN_0029e080();
    FUN_002be16c(0,(int)&param_1->field_0x0 + (int)*(short *)(temp_v4 + 8),
                 *(short *)(temp_v4 + 10) + param_2,1,2,0x65,&LAB_002d9b0c,temp_v5);
    if (*(char *)(temp_v3 + 0x34) != '\0') {
      temp_v22 = (unsigned int *)FUN_0029f260(temp_v21);
      temp_v4 = 0;
      temp_v3 = FUN_0029d8e4(temp_v21);
      if (0 < temp_v3) {
        do {
          if ((temp_v27 == 0) || (temp_v3 = FUN_0029f248(temp_v21), temp_v3 != temp_v4)) {
            temp_v3 = (int)temp_v22 + temp_v4;
            psVar8 = (short *)(unsigned int)*(unsigned short *)((int)puVar4 + temp_v3 * 2 + 0x6278);
            FUN_002b9364();
            temp_v25 = 0;
            if (temp_v26 != 0) {
              temp_v13 = 0;
              if (*(short *)(puVar4 + 0x24ce) != 0) {
                do {
                  temp_v6 = (unsigned int)*(unsigned short *)((int)puVar4 + temp_v13 * 2 + 0x933c);
                  FUN_0029fa74();
                  if (*(short *)(temp_v6 + 0x1a) == *(short *)((int)puVar4 + temp_v3 * 2 + 0x6278)) {
                    temp_v18 = (unsigned int)*(unsigned short *)((int)puVar4 + temp_v13 * 2 + 0x933c);
                    break;
                  }
                  temp_v13 = temp_v13 + 1;
                } while (temp_v13 < (int)(unsigned int)*(unsigned short *)(puVar4 + 0x24ce));
              }
              temp_v3 = FUN_0029ba58(*puVar4,temp_v18,temp_v23);
              if (temp_v3 == 0) {
                temp_v25 = 1;
              }
            }
            temp_v3 = FUN_002bf6d0(0x24,temp_v4 + 0x2e);
            temp_v24 = 0xff;
            temp_v5 = 0xffffffff;
            temp_v6 = FUN_0029e080();
            if (temp_v6 < *(unsigned char *)((int)psVar8 + 3)) {
              temp_v24 = 0x5a5a5aff;
              temp_v5 = 0xdc0f14ff;
            }
            else {
              temp_v13 = FUN_002b0824(*psVar8);
              if (temp_v13 != 0) {
                temp_v24 = 0x5a5a5aff;
              }
            }
            temp_v13 = FUN_002bf6d0(0x24,0xf9);
            temp_v9 = FUN_002bd020(*psVar8,0);
            FUN_002be7fc(temp_v20,&LAB_002da0c4,temp_v9);
            puVar13 = temp_v20;
            FUN_002b7118(puVar13,2);
            VectorSignedToFloat((int)*(short *)(temp_v3 + 10) + (int)*(short *)(temp_v13 + 10) + param_2
                                ,(unsigned char)(in_fpscr >> 0x16) & 3);
            VectorSignedToFloat((int)&param_1->field_0x0 +
                                (int)*(short *)(temp_v3 + 8) + (int)*(short *)(temp_v13 + 8) +
                                ((int)**(short **)(temp_v13 + 0xc) - (int)puVar13) / 2,
                                (unsigned char)(in_fpscr >> 0x16) & 3);
            FUN_002be77c(2,0x7a4c00ff,temp_v20,(int)*(short *)(temp_v3 + 8));
            temp_v13 = FUN_002bf6d0(0x24,0xf8);
            if (temp_v25 != 0) {
              FUN_002be7fc(temp_v20,&LAB_002da0c0);
            }
            else {
              temp_v9 = FUN_002bd258(*psVar8);
              FUN_002be7fc(temp_v20,&LAB_002da0c4,temp_v9);
            }
            VectorSignedToFloat((int)*(short *)(temp_v3 + 10) + (int)*(short *)(temp_v13 + 10) + param_2
                                ,(unsigned char)(in_fpscr >> 0x16) & 3);
            VectorSignedToFloat((int)&param_1->field_0x0 +
                                (int)*(short *)(temp_v3 + 8) + (int)*(short *)(temp_v13 + 8),
                                (unsigned char)(in_fpscr >> 0x16) & 3);
            FUN_002be77c(2,temp_v24,temp_v20,(int)*(short *)(temp_v13 + 8));
            temp_v13 = FUN_002bf6d0(0x24,0xf7);
            FUN_002be4dc(temp_v5);
            FUN_002be16c(0,(int)&param_1->field_0x0 +
                           (int)*(short *)(temp_v3 + 8) + (int)*(short *)(temp_v13 + 8),
                         (int)*(short *)(temp_v3 + 10) + (int)*(short *)(temp_v13 + 10) + param_2,1,2,
                         0x6f,&LAB_002da6f8,*(unsigned char *)((int)psVar8 + 3));
            FUN_002bef14();
            temp_v13 = FUN_002bf6d0(0x24,0xf5);
            if (temp_v25 != 0) {
              FUN_002b6a98(0,(int)&param_1->field_0x0 +
                             (int)*(short *)(temp_v3 + 8) + (int)*(short *)(temp_v13 + 8),
                           (int)*(short *)(temp_v3 + 10) + (int)*(short *)(temp_v13 + 10) + param_2,0x6f
                           ,0);
            }
            else {
              FUN_002b6a98((int)*psVar8,
                           (int)&param_1->field_0x0 +
                           (int)*(short *)(temp_v3 + 8) + (int)*(short *)(temp_v13 + 8),
                           (int)*(short *)(temp_v3 + 10) + (int)*(short *)(temp_v13 + 10) + param_2,0x6f
                           ,0);
              FUN_00258308(*psVar8,(int)&param_1->field_0x0 +
                                   (int)*(short *)(temp_v3 + 8) + (int)*(short *)(temp_v13 + 8),
                           (int)*(short *)(temp_v3 + 10) + (int)*(short *)(temp_v13 + 10) + param_2,0x74
                          );
            }
            temp_v13 = FUN_002bf6d0(0x24,0xfa);
            temp_v10 = FUN_0029ed08(*psVar8);
            if (temp_v10 == 0) {
              FUN_002bf558(2,0x24,8,(int)&param_1->field_0x0 +
                                    (int)*(short *)(temp_v13 + 8) + (int)*(short *)(temp_v3 + 8),
                           (int)*(short *)(temp_v3 + 10) + (int)*(short *)(temp_v13 + 10) + param_2,0x6f
                          );
            }
          }
          temp_v4 = temp_v4 + 1;
          temp_v3 = FUN_0029d8e4(temp_v21);
        } while (temp_v4 < temp_v3);
      }
      temp_v3 = FUN_0029f248(temp_v21);
      temp_v3 = FUN_002bf6d0(0x24,temp_v3 + 0x3f);
      temp_v4 = FUN_0029f260(temp_v21);
      temp_v13 = FUN_0029f248(temp_v21);
      psVar8 = (short *)(unsigned int)*(unsigned short *)((int)puVar4 + (temp_v13 + temp_v4) * 2 + 0x6278);
      FUN_002b9364();
      if (temp_v27 != 0) {
        temp_v25 = 0;
        if (temp_v26 != 0) {
          temp_v10 = 0;
          if (*(short *)(puVar4 + 0x24ce) != 0) {
            do {
              temp_v6 = (unsigned int)*(unsigned short *)((int)puVar4 + temp_v10 * 2 + 0x933c);
              FUN_0029fa74();
              if (*(short *)(temp_v6 + 0x1a) ==
                  *(short *)((int)puVar4 + (temp_v13 + temp_v4) * 2 + 0x6278)) {
                temp_v18 = (unsigned int)*(unsigned short *)((int)puVar4 + temp_v10 * 2 + 0x933c);
                break;
              }
              temp_v10 = temp_v10 + 1;
            } while (temp_v10 < (int)(unsigned int)*(unsigned short *)(puVar4 + 0x24ce));
          }
          temp_v4 = FUN_0029ba58(*puVar4,temp_v18,temp_v23);
          if (temp_v4 == 0) {
            temp_v25 = 1;
          }
        }
        FUN_002bf710();
        FUN_002bf460(2,0x24,0x38,(int)&param_1->field_0x0 + (int)*(short *)(temp_v3 + 8),
                     *(short *)(temp_v3 + 10) + param_2,0x79);
        FUN_002bf460(2,0x24,0x39,(int)&param_1->field_0x0 + (int)*(short *)(temp_v3 + 8),
                     *(short *)(temp_v3 + 10) + param_2,0x79);
        FUN_002bf460(2,0x24,0x3a,(int)&param_1->field_0x0 + (int)*(short *)(temp_v3 + 8),
                     *(short *)(temp_v3 + 10) + param_2,0x79);
        FUN_002bf710();
        FUN_002bf460(2,0x24,0x3b,(int)&param_1->field_0x0 + (int)*(short *)(temp_v3 + 8),
                     *(short *)(temp_v3 + 10) + param_2,0x7e);
        temp_v4 = FUN_0029f248(temp_v21);
        temp_v4 = FUN_0029d8fc((int)*(short *)((int)puVar4 + temp_v4 * 2 + 0x438));
        temp_v13 = *(short *)(temp_v3 + 10) + param_2;
        temp_v10 = (int)&param_1->field_0x0 + (int)*(short *)(temp_v3 + 8);
        if (!((temp_v4 == 1 || temp_v4 == 2) || temp_v4 == 6)) {
          FUN_002bf460(2,0x24,0x3c,temp_v10,temp_v13,0x7e);
        }
        else {
          FUN_002bf460(2,0x24,0x3d,temp_v10,temp_v13,0x7e);
        }
        temp_v13 = FUN_002bf6d0(0x24,0x3c);
        temp_v4 = DAT_0044ea00;
        piVar19 = (int *)(DAT_0044ea00 + 0x130c);
        temp_v10 = piVar19[*piVar19 + 2];
        piVar19[*piVar19 + 2] = 3;
        if (*(char *)(temp_v4 + 0x1324) != '\0' || temp_v10 != 3) {
          (**(romwright_code **)(temp_v4 + 0x1328))();
          *(unsigned char *)(temp_v4 + 0x1324) = 0;
        }
        FUN_0029a418((int)&param_1->field_0x0 +
                     (int)*(short *)(temp_v3 + 8) + (int)*(short *)(temp_v13 + 8),
                     (int)*(short *)(temp_v3 + 10) + (int)*(short *)(temp_v13 + 10) + param_2,
                     (int)**(short **)(temp_v13 + 0xc),(int)(*(short **)(temp_v13 + 0xc))[1],1);
        temp_v4 = FUN_002bef70(puVar4 + 0x2c);
        temp_v0 = *(short *)(temp_v3 + 10);
        temp_v13 = FUN_002bef7c(puVar4 + 0x2c);
        FUN_002bf460(2,0x24,0x3e,(int)&param_1->field_0x0 + *(short *)(temp_v3 + 8) + temp_v13,
                     temp_v4 + param_2 + (int)temp_v0,0x83);
        temp_v4 = DAT_0044ea00;
        piVar19 = (int *)(DAT_0044ea00 + 0x130c);
        temp_v13 = piVar19[*piVar19 + 2];
        piVar19[*piVar19 + 2] = 0;
        if (*(char *)(temp_v4 + 0x1324) != '\0' || temp_v13 != 0) {
          (**(romwright_code **)(temp_v4 + 0x1328))();
          *(unsigned char *)(temp_v4 + 0x1324) = 0;
        }
        temp_v9 = 0xffffffff;
        temp_v5 = 0xffffffff;
        temp_v18 = FUN_0029e080();
        if (temp_v18 < *(unsigned char *)((int)psVar8 + 3)) {
          temp_v9 = 0x5a5a5aff;
          temp_v5 = 0xdc0f14ff;
        }
        else {
          temp_v4 = FUN_002b0824(*psVar8);
          if (temp_v4 != 0) {
            temp_v9 = 0x5a5a5aff;
          }
        }
        temp_v4 = FUN_002bf6d0(0x24,0xff);
        temp_v11 = FUN_002bd020(*psVar8,0);
        FUN_002be7fc(temp_v20,&LAB_002dab3c,temp_v11);
        puVar13 = temp_v20;
        FUN_002b7118(puVar13,3);
        VectorSignedToFloat((int)*(short *)(temp_v3 + 10) + (int)*(short *)(temp_v4 + 10) + param_2,
                            (unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat((int)&param_1->field_0x0 +
                            (int)*(short *)(temp_v3 + 8) + (int)*(short *)(temp_v4 + 8) +
                            ((int)**(short **)(temp_v4 + 0xc) - (int)puVar13) / 2,
                            (unsigned char)(in_fpscr >> 0x16) & 3);
        FUN_002be77c(3,0xffffffff,temp_v20,(int)*(short *)(temp_v3 + 8));
        temp_v4 = FUN_002bf6d0(0x24,0xfe);
        if (temp_v25 != 0) {
          FUN_002be7fc(temp_v20,&LAB_002dab40);
        }
        else {
          temp_v11 = FUN_002bd258(*psVar8);
          FUN_002be7fc(temp_v20,&LAB_002dab3c,temp_v11);
        }
        VectorSignedToFloat((int)*(short *)(temp_v3 + 10) + (int)*(short *)(temp_v4 + 10) + param_2,
                            (unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat((int)&param_1->field_0x0 +
                            (int)*(short *)(temp_v3 + 8) + (int)*(short *)(temp_v4 + 8),
                            (unsigned char)(in_fpscr >> 0x16) & 3);
        FUN_002be77c(3,temp_v9,temp_v20,(int)*(short *)(temp_v4 + 8));
        temp_v4 = FUN_002bf6d0(0x24,0xfd);
        FUN_002be4dc(temp_v5);
        FUN_002be16c(0,(int)&param_1->field_0x0 +
                       (int)*(short *)(temp_v3 + 8) + (int)*(short *)(temp_v4 + 8),
                     (int)*(short *)(temp_v4 + 10) + (int)*(short *)(temp_v3 + 10) + param_2,1,2,0x83,
                     &LAB_002da6f8,*(unsigned char *)((int)psVar8 + 3));
        FUN_002bef14();
        temp_v4 = FUN_002bf6d0(0x24,0xfb);
        if (temp_v25 != 0) {
          FUN_002b6a98(0,(int)&param_1->field_0x0 +
                         (int)*(short *)(temp_v3 + 8) + (int)*(short *)(temp_v4 + 8),
                       (int)*(short *)(temp_v3 + 10) + (int)*(short *)(temp_v4 + 10) + param_2,0x83,0);
        }
        else {
          FUN_002b6a98((int)*psVar8,
                       (int)&param_1->field_0x0 +
                       (int)*(short *)(temp_v3 + 8) + (int)*(short *)(temp_v4 + 8),
                       (int)*(short *)(temp_v4 + 10) + (int)*(short *)(temp_v3 + 10) + param_2,0x83,0);
          FUN_00258308(*psVar8,(int)&param_1->field_0x0 +
                               (int)*(short *)(temp_v3 + 8) + (int)*(short *)(temp_v4 + 8),
                       (int)*(short *)(temp_v4 + 10) + (int)*(short *)(temp_v3 + 10) + param_2,0x88);
        }
        temp_v4 = FUN_002bf6d0(0x24,0x100);
        temp_v13 = FUN_0029ed08(*psVar8);
        if (temp_v13 == 0) {
          FUN_002bf558(2,0x24,8,(int)&param_1->field_0x0 +
                                (int)*(short *)(temp_v3 + 8) + (int)*(short *)(temp_v4 + 8),
                       (int)*(short *)(temp_v3 + 10) + (int)*(short *)(temp_v4 + 10) + param_2,0x83);
        }
      }
      temp_v0 = *(short *)(puVar4 + 0x11d);
      temp_v1 = *(short *)((int)puVar4 + 0x472);
      temp_v19 = 0;
      temp_v2 = *(short *)((int)puVar4 + 0x476);
      temp_v14 = 0x1f;
      temp_v15 = 0x21;
      temp_v5 = 0x23;
      temp_v16 = 0x20;
      temp_v17 = 0x22;
      temp_v9 = 0x24;
      temp_v11 = 0x25;
      puVar4 = temp_v21;
    }
    else {
      temp_v3 = FUN_0029ebdc(temp_v22);
      temp_v13 = 0;
      temp_v4 = FUN_0028d260(temp_v22);
      if (0 < temp_v4) {
        do {
          temp_v4 = temp_v3 + temp_v13;
          puVar10 = (unsigned short *)(unsigned int)*(unsigned short *)((int)puVar4 + temp_v4 * 2 + 0x6278);
          FUN_002b9364();
          temp_v25 = 0;
          if (temp_v26 != 0) {
            temp_v10 = 0;
            if (*(short *)(puVar4 + 0x24ce) != 0) {
              do {
                temp_v6 = (unsigned int)*(unsigned short *)((int)puVar4 + temp_v10 * 2 + 0x933c);
                FUN_0029fa74();
                if (*(short *)(temp_v6 + 0x1a) == *(short *)((int)puVar4 + temp_v4 * 2 + 0x6278)) {
                  temp_v18 = (unsigned int)*(unsigned short *)((int)puVar4 + temp_v10 * 2 + 0x933c);
                  break;
                }
                temp_v10 = temp_v10 + 1;
              } while (temp_v10 < (int)(unsigned int)*(unsigned short *)(puVar4 + 0x24ce));
            }
            temp_v10 = FUN_0029ba58(*puVar4,temp_v18,temp_v23);
            if (temp_v10 == 0) {
              temp_v25 = 1;
            }
          }
          temp_v7 = FUN_002bf6d0(0x24,temp_v13 + 0xe3);
          temp_v10 = DAT_0044ea00;
          temp_v8 = FUN_002c5fa4(6,1,0);
          piVar19 = (int *)(temp_v10 + 0x12ac);
          temp_v12 = piVar19[*piVar19 + 2];
          piVar19[*piVar19 + 2] = temp_v8;
          if (*(char *)(temp_v10 + 0x12c4) != '\0' || temp_v12 != temp_v8) {
            (**(romwright_code **)(temp_v10 + 0x12c8))();
            *(unsigned char *)(temp_v10 + 0x12c4) = 0;
          }
          FUN_002bf460(2,0x24,0xd2,(int)&param_1->field_0x0 + (int)*(short *)(temp_v7 + 8),
                       *(short *)(temp_v7 + 10) + param_2,0x65);
          temp_v10 = DAT_0044ea00;
          temp_v8 = FUN_002c5fa4(6,7,0);
          piVar19 = (int *)(temp_v10 + 0x12ac);
          temp_v12 = piVar19[*piVar19 + 2];
          piVar19[*piVar19 + 2] = temp_v8;
          if (*(char *)(temp_v10 + 0x12c4) != '\0' || temp_v12 != temp_v8) {
            (**(romwright_code **)(temp_v10 + 0x12c8))();
            *(unsigned char *)(temp_v10 + 0x12c4) = 0;
          }
          FUN_002be4dc(0xffffffff);
          if (temp_v25 != 0) {
            FUN_002be4dc(0xff);
            FUN_002bf710();
          }
          else {
            temp_v6 = FUN_0029e080();
            if (temp_v6 < *(unsigned char *)((int)puVar10 + 3)) {
              FUN_002be4dc(0x5a5a5aff);
              FUN_002bf710();
            }
          }
          temp_v8 = FUN_002bf6d0(0x24,0xd2);
          temp_v10 = DAT_0044ea00;
          piVar19 = (int *)(DAT_0044ea00 + 0x130c);
          temp_v12 = piVar19[*piVar19 + 2];
          piVar19[*piVar19 + 2] = 3;
          if (*(char *)(temp_v10 + 0x1324) != '\0' || temp_v12 != 3) {
            (**(romwright_code **)(temp_v10 + 0x1328))();
            *(unsigned char *)(temp_v10 + 0x1324) = 0;
          }
          FUN_0029a418((int)&param_1->field_0x0 +
                       (int)*(short *)(temp_v7 + 8) + (int)*(short *)(temp_v8 + 8),
                       (int)*(short *)(temp_v7 + 10) + (int)*(short *)(temp_v8 + 10) + param_2,
                       (int)**(short **)(temp_v8 + 0xc),(int)(*(short **)(temp_v8 + 0xc))[1],1);
          temp_v10 = FUN_002bf6d0(0x24,0xda);
          FUN_0028f2ec((int)*(short *)((int)puVar4 + temp_v4 * 2 + 0x6278),
                       (int)&param_1->field_0x0 +
                       (int)*(short *)(temp_v7 + 8) + (int)*(short *)(temp_v10 + 8),
                       (int)*(short *)(temp_v7 + 10) + (int)*(short *)(temp_v10 + 10) + param_2,0x68,1)
          ;
          temp_v4 = DAT_0044ea00;
          piVar19 = (int *)(DAT_0044ea00 + 0x130c);
          temp_v10 = piVar19[*piVar19 + 2];
          piVar19[*piVar19 + 2] = 0;
          if (*(char *)(temp_v4 + 0x1324) != '\0' || temp_v10 != 0) {
            (**(romwright_code **)(temp_v4 + 0x1328))();
            *(unsigned char *)(temp_v4 + 0x1324) = 0;
          }
          FUN_002bef14();
          FUN_002bf710();
          FUN_002bf558(2,0x24,0xc,(int)&param_1->field_0x0 + (int)*(short *)(temp_v7 + 8),
                       *(short *)(temp_v7 + 10) + param_2,0x6a);
          if (temp_v25 != 0) {
            FUN_002bf460(2,0x24,0xd9,(int)&param_1->field_0x0 + (int)*(short *)(temp_v7 + 8),
                         *(short *)(temp_v7 + 10) + param_2,0x6f);
          }
          FUN_002bf460(2,0x24,0xd8,(int)&param_1->field_0x0 + (int)*(short *)(temp_v7 + 8),
                       *(short *)(temp_v7 + 10) + param_2,0x6a);
          temp_v5 = 0xffffffff;
          temp_v9 = 0xffffffff;
          if (temp_v25 != 0) {
            FUN_002be7fc(temp_v20,&LAB_002da0c0);
          }
          else {
            temp_v11 = FUN_002bd258(*puVar10);
            FUN_002be7fc(temp_v20,&LAB_002da0c4,temp_v11);
          }
          temp_v6 = FUN_0029e080();
          if (temp_v6 < *(unsigned char *)((int)puVar10 + 3)) {
            temp_v5 = 0x5a5a5aff;
            temp_v9 = 0xdc0f14ff;
          }
          else {
            temp_v4 = FUN_002b0824(*puVar10);
            if (temp_v4 != 0) {
              temp_v5 = 0x5a5a5aff;
            }
          }
          temp_v4 = FUN_002bf6d0(0x24,0xdc);
          puVar13 = temp_v20;
          FUN_002b7118(puVar13,1);
          VectorSignedToFloat((int)*(short *)(temp_v7 + 10) + (int)*(short *)(temp_v4 + 10) + param_2,
                              (unsigned char)(in_fpscr >> 0x16) & 3);
          VectorSignedToFloat((int)&param_1->field_0x0 +
                              (int)*(short *)(temp_v7 + 8) + (int)*(short *)(temp_v4 + 8) +
                              ((int)**(short **)(temp_v4 + 0xc) - (int)puVar13) / 2,
                              (unsigned char)(in_fpscr >> 0x16) & 3);
          FUN_002be77c(1,temp_v5,temp_v20);
          temp_v4 = FUN_002bf6d0(0x24,0xdd);
          temp_v5 = FUN_002bd020(*puVar10,0);
          FUN_002be7fc(temp_v20,&LAB_002da0c4,temp_v5);
          puVar13 = temp_v20;
          FUN_002b7118(puVar13,2);
          VectorSignedToFloat((int)*(short *)(temp_v7 + 10) + (int)*(short *)(temp_v4 + 10) + param_2,
                              (unsigned char)(in_fpscr >> 0x16) & 3);
          VectorSignedToFloat((int)param_1 +
                              (int)*(short *)(temp_v4 + 8) + (int)*(short *)(temp_v7 + 8) +
                              ((int)**(short **)(temp_v4 + 0xc) - (int)puVar13),
                              (unsigned char)(in_fpscr >> 0x16) & 3);
          FUN_002be77c(2,0xffffffff,temp_v20,(int)*(short *)(temp_v7 + 8));
          temp_v4 = FUN_002bf6d0(0x24,0xdf);
          FUN_002be4dc(temp_v9);
          FUN_002be16c(0,(int)&param_1->field_0x0 +
                         (int)*(short *)(temp_v4 + 8) + (int)*(short *)(temp_v7 + 8),
                       (int)*(short *)(temp_v7 + 10) + (int)*(short *)(temp_v4 + 10) + param_2,1,2,0x6f
                       ,&LAB_002d9b0c,*(unsigned char *)((int)puVar10 + 3));
          FUN_002bef14();
          temp_v13 = temp_v13 + 1;
          temp_v4 = FUN_0028d260(temp_v22);
        } while (temp_v13 < temp_v4);
      }
      if (temp_v27 != 0) {
        temp_v4 = FUN_0029eba8(temp_v22);
        temp_v13 = FUN_002bf6d0(0x24,temp_v4 + 0xe3);
        temp_v4 = DAT_0044ea00;
        temp_v10 = FUN_002c5fa4(6,1,0);
        piVar19 = (int *)(temp_v4 + 0x12ac);
        temp_v7 = piVar19[*piVar19 + 2];
        piVar19[*piVar19 + 2] = temp_v10;
        if (*(char *)(temp_v4 + 0x12c4) != '\0' || temp_v7 != temp_v10) {
          (**(romwright_code **)(temp_v4 + 0x12c8))();
          *(unsigned char *)(temp_v4 + 0x12c4) = 0;
        }
        FUN_002bf558(2,0x24,0xd,(int)&param_1->field_0x0 + (int)*(short *)(temp_v13 + 8),
                     *(short *)(temp_v13 + 10) + param_2,0x79);
        temp_v4 = DAT_0044ea00;
        temp_v13 = FUN_002c5fa4(6,7,0);
        piVar19 = (int *)(temp_v4 + 0x12ac);
        temp_v10 = piVar19[*piVar19 + 2];
        piVar19[*piVar19 + 2] = temp_v13;
        if (*(char *)(temp_v4 + 0x12c4) != '\0' || temp_v10 != temp_v13) {
          (**(romwright_code **)(temp_v4 + 0x12c8))(temp_v13);
          *(unsigned char *)(temp_v4 + 0x12c4) = 0;
        }
      }
      temp_v13 = 0;
      temp_v4 = FUN_0028d260(temp_v22);
      if (0 < temp_v4) {
        do {
          puVar10 = (unsigned short *)(unsigned int)*(unsigned short *)((int)puVar4 + (temp_v3 + temp_v13) * 2 + 0x6278);
          FUN_002b9364();
          temp_v4 = FUN_002bf6d0(0x24,temp_v13 + 0xe3);
          temp_v10 = FUN_002bf6d0(0x24,0xdb);
          temp_v7 = FUN_0029ed08(*puVar10);
          if (temp_v7 == 0) {
            FUN_002bf558(2,0x24,8,(int)&param_1->field_0x0 +
                                  (int)*(short *)(temp_v10 + 8) + (int)*(short *)(temp_v4 + 8),
                         (int)*(short *)(temp_v4 + 10) + (int)*(short *)(temp_v10 + 10) + param_2,0x83);
          }
          temp_v13 = temp_v13 + 1;
          temp_v4 = FUN_0028d260(temp_v22);
        } while (temp_v13 < temp_v4);
      }
      FUN_002bf460(2,0x24,0xe7,param_1,param_2,0x8d);
      FUN_002bf460(2,0x24,0xe8,param_1,param_2,0x8d);
      temp_v0 = *(short *)(puVar4 + 0x11d);
      temp_v1 = *(short *)((int)puVar4 + 0x472);
      temp_v19 = 1;
      temp_v2 = *(short *)((int)puVar4 + 0x476);
      temp_v11 = 0xef;
      temp_v14 = 0xea;
      temp_v17 = 0xeb;
      temp_v15 = 0xec;
      temp_v16 = 0xe9;
      temp_v5 = 0xed;
      temp_v9 = 0xee;
      puVar4 = temp_v22;
    }
    FUN_00290c38(puVar4,param_1,param_2,0x24,temp_v5,temp_v9,temp_v11,temp_v14,temp_v15,temp_v16,temp_v17,
                 (int)temp_v2,(int)temp_v1,(int)temp_v0,0x97,temp_v19);
  }
  return;
}
