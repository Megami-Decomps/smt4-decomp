/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0049105c` (_code @ 0x49105c, 0x578 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int CONCAT44(double, double);
int FUN_002e1208(...);
int dataTable2BType1Count(void);
int VectorSignedToFloat(...);

/* stack frame of param_2: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
} param_2_stack;

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: CONCAT44 (PIECE). */
extern int FUN_0018719c(void);
/* Supplied declaration required: FUN_002e1208. */
extern unsigned int *FUN_00379890(int);
extern unsigned short FUN_003ae4d0(unsigned int);
extern int FUN_003b56bc(void);
extern char *dataTable2BType1GetEntry(unsigned char *, int);
/* Supplied declaration required: dataTable2BType1Count. */


void FUN_0049105c(int param_1,unsigned int param_2)

{
/* irregular: irregular input(s): in_fpscr; 4 native warning(s); review required */
  short temp_v0;
  unsigned short temp_v1;
  unsigned char *puVar3;
  int temp_v2;
  int temp_v3;
  unsigned int *puVar6;
  unsigned int temp_v4;
  char *unaff_r4;
  unsigned int temp_v5;
  int temp_v6;
  unsigned char temp_v7;
  unsigned int in_fpscr;
  float temp_v8;
  unsigned int temp_v9;
  float temp_v10;
  float temp_v11;
  unsigned long long temp_v12;
  unsigned long long temp_v13;
  float temp_v14;
  float temp_v15;
  unsigned long long temp_v16;
  unsigned long long temp_v17;
  int temp_v18;
  int temp_v19;
  int temp_v20;
  unsigned char temp_v21 [4];
  unsigned int temp_v22;
  short temp_v23;
  
  temp_v6 = 0;
  temp_v22 = 0;
  temp_v12 = 0;
  temp_v13 = 0;
  if (param_2 != 0x65) {
    if (param_2 != 0x66) {
      if (param_2 == 0x67) {
        temp_v9 = 0x46e5b000;
        temp_v5 = 0xc6947000;
        temp_v12 = romwright_piece_4_4(0xc6802000,temp_v5);
        temp_v13 = romwright_piece_4_4(temp_v9,0x47108800);
      }
    }
    else {
      temp_v9 = 0x46ed8000;
      temp_v5 = 0xc68ca000;
      temp_v12 = romwright_piece_4_4(0xc6802000,temp_v5);
      temp_v13 = romwright_piece_4_4(temp_v9,0x47108800);
    }
  }
  else {
    temp_v12 = 0xc6c67000c6802000;
    temp_v13 = 0x46ebb40047140c00;
  }
  temp_v19 = 0;
  puVar3 = temp_v21;
  dataTable2BType1Count();
  temp_v14 = 0.5f;
  temp_v15 = 512.0f;
  temp_v17 = 0x44200000;
  if (0 < (int)puVar3) {
    do {
      unaff_r4 = (char *)dataTable2BType1GetEntry(temp_v21,temp_v19);
      if ((((int)*unaff_r4 == param_2) &&
          ((*(short *)(unaff_r4 + 4) == 0 || (temp_v2 = FUN_0018719c(), temp_v2 != 0)))) &&
         ((*(short *)(unaff_r4 + 6) == 0 || (temp_v2 = FUN_0018719c(), temp_v2 == 0)))) {
        temp_v5 = 0xb;
        switch(*(unsigned short *)(unaff_r4 + 8)) {
        case 5:
          temp_v2 = 0x1bc1;
          break;
        case 6:
        case 0xc:
          temp_v2 = 0x1bc4;
          break;
        default:
          temp_v2 = 0x1bce;
          break;
        case 8:
          temp_v5 = 0x13;
          temp_v2 = *(unsigned short *)(unaff_r4 + 10) + 0x115a;
          break;
        case 9:
          temp_v2 = 0x1bcf;
          break;
        case 10:
          temp_v2 = 0x1bd6;
          break;
        case 0xb:
          temp_v2 = 0x1bd2;
          break;
        case 0xd:
          temp_v2 = 0x1bda;
          break;
        case 0xe:
          temp_v2 = 0x1bdb;
          break;
        case 0xf:
          temp_v2 = 0x1c0e;
          break;
        case 0x10:
          temp_v2 = 0x1c0f;
          break;
        case 0x11:
          temp_v2 = 0x1c10;
          break;
        case 0x18:
          temp_v2 = 0x1c11;
        }
        FUN_002e1208(temp_v5,temp_v2,&temp_v18,&temp_v20);
        temp_v0 = *(short *)(unaff_r4 + 0x10);
        temp_v3 = param_1 + temp_v6 * 100;
        temp_v10 = (float)VectorSignedToFloat((int)*(short *)(unaff_r4 + 0xe),
                                            (unsigned char)(in_fpscr >> 0x16) & 3);
        *(unsigned int *)(temp_v3 + 0x178c) = temp_v5;
        temp_v8 = (float)VectorSignedToFloat((int)temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
        *(char *)(temp_v3 + 0x1790) = unaff_r4[1];
        *(unsigned short *)(temp_v3 + 0x17b8) = *(unsigned short *)(unaff_r4 + 8);
        *(char *)(temp_v3 + 0x1791) = unaff_r4[2];
        *(unsigned short *)(temp_v3 + 0x17ba) = 0;
        temp_v11 = (float)VectorSignedToFloat(temp_v18,(unsigned char)(in_fpscr >> 0x16) & 3);
        *(unsigned short *)(temp_v3 + 0x1792) = 0;
        temp_v5 = VectorSignedToFloat(temp_v18,(unsigned char)(in_fpscr >> 0x16) & 3);
        *(unsigned short *)(temp_v3 + 0x17bc) = *(unsigned short *)(unaff_r4 + 4);
        temp_v10 = (float)VectorSignedToFloat((int)(short)(int)((temp_v15 / (float)((unsigned long long)temp_v13 >>
                                                                               0x20)) *
                                                             (temp_v10 - (float)((unsigned long long)temp_v12 >>
                                                                              0x20))),
                                            (unsigned char)(in_fpscr >> 0x16) & 3);
        *(unsigned short *)(temp_v3 + 0x17be) = *(unsigned short *)(unaff_r4 + 6);
        *(short *)(temp_v3 + 0x1794) = (short)temp_v2;
        *(unsigned int *)(temp_v3 + 0x17a0) = temp_v5;
        temp_v8 = (float)VectorSignedToFloat((int)(short)(int)(((float)temp_v17 / (float)temp_v13) *
                                                             (temp_v8 - (float)temp_v12)),
                                            (unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v5 = VectorSignedToFloat((int)(short)(int)(temp_v10 - temp_v11 * temp_v14),
                                    (unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v9 = VectorSignedToFloat((int)(short)(int)(temp_v8 - temp_v11 * temp_v14),
                                     (unsigned char)(in_fpscr >> 0x16) & 3);
        *(unsigned int *)(temp_v3 + 0x1798) = temp_v5;
        *(unsigned int *)(temp_v3 + 0x179c) = temp_v9;
        temp_v5 = VectorSignedToFloat(temp_v20,(unsigned char)(in_fpscr >> 0x16) & 3);
        *(unsigned int *)(temp_v3 + 0x17a4) = temp_v5;
        *(unsigned short *)(temp_v3 + 0x17c0) = 0;
        *(unsigned int *)(temp_v3 + 0x17d8) = 0;
        *(unsigned int *)(temp_v3 + 0x17d4) = 0xffffffff;
        *(unsigned char *)(temp_v3 + 0x17dc) = 0;
        temp_v5 = VectorSignedToFloat((int)unaff_r4[0x12],(unsigned char)(in_fpscr >> 0x16) & 3);
        *(unsigned int *)(temp_v3 + 0x17a8) = temp_v5;
        temp_v5 = VectorSignedToFloat((int)unaff_r4[0x13],(unsigned char)(in_fpscr >> 0x16) & 3);
        *(unsigned int *)(temp_v3 + 0x17ac) = temp_v5;
        temp_v6 = temp_v6 + 1;
        *(short *)(temp_v3 + 0x17de) = *(short *)(unaff_r4 + 10) + 0x115a;
        *(char *)(temp_v3 + 0x17e0) = unaff_r4[0x15];
      }
      temp_v19 = temp_v19 + 1;
      puVar3 = temp_v21;
      dataTable2BType1Count();
    } while (temp_v19 < (int)puVar3);
  }
  FUN_002e1208(0xb,0x1bc0,&temp_v18,&temp_v20);
  temp_v3 = 0;
  temp_v8 = (float)VectorSignedToFloat(temp_v18,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v16 = CONCAT44(temp_v15,temp_v8 * temp_v14);
  temp_v2 = FUN_003b56bc();
  if (0 < temp_v2) {
    temp_v19 = (int)temp_v23;
    do {
      puVar6 = (unsigned int *)FUN_00379890(temp_v3);
      temp_v4 = (unsigned int)*(char *)(puVar6 + 2);
      temp_v7 = temp_v4 == param_2;
      if (temp_v7) {
        temp_v4 = (unsigned int)*(unsigned char *)((int)puVar6 + 10);
      }
      if (temp_v7 && temp_v4 == 0x42) {
        temp_v2 = param_1 + temp_v6 * 100;
        temp_v15 = (float)VectorSignedToFloat((int)*(short *)((int)puVar6 + 0x16),
                                            (unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v14 = (float)VectorSignedToFloat((int)*(short *)((int)puVar6 + 0x1a),
                                            (unsigned char)(in_fpscr >> 0x16) & 3);
        *(unsigned int *)(temp_v2 + 0x178c) = 0xb;
        *(char *)(temp_v2 + 0x1790) = unaff_r4[1];
        *(unsigned short *)(temp_v2 + 0x17b8) = 2;
        *(unsigned char *)(temp_v2 + 0x1791) = 0xff;
        temp_v15 = (float)VectorSignedToFloat((int)(short)(int)(((float)((unsigned long long)temp_v16 >> 0x20) /
                                                              (float)((unsigned long long)temp_v13 >> 0x20)) *
                                                             (temp_v15 - (float)((unsigned long long)temp_v12 >>
                                                                              0x20))),
                                            (unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v14 = (float)VectorSignedToFloat((int)(short)(int)(((float)temp_v17 / (float)temp_v13) *
                                                             (temp_v14 - (float)temp_v12)),
                                            (unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v8 = (float)temp_v16;
        temp_v1 = FUN_003ae4d0(*puVar6);
        *(unsigned short *)(temp_v2 + 0x17ba) = temp_v1;
        temp_v9 = VectorSignedToFloat((int)(short)(int)(temp_v14 - temp_v8),(unsigned char)(in_fpscr >> 0x16) & 3
                                    );
        temp_v5 = VectorSignedToFloat((int)(short)(int)(temp_v15 - temp_v8),(unsigned char)(in_fpscr >> 0x16) & 3)
        ;
        *(short *)(temp_v2 + 0x1792) = (short)temp_v19;
        *(unsigned short *)(temp_v2 + 0x17bc) = 0;
        *(unsigned short *)(temp_v2 + 0x17be) = 0;
        *(unsigned short *)(temp_v2 + 0x1794) = 0x1bc0;
        *(unsigned int *)(temp_v2 + 0x1798) = temp_v5;
        *(unsigned int *)(temp_v2 + 0x179c) = temp_v9;
        temp_v6 = temp_v6 + 1;
        temp_v5 = VectorSignedToFloat(temp_v18,(unsigned char)(in_fpscr >> 0x16) & 3);
        *(unsigned int *)(temp_v2 + 0x17a0) = temp_v5;
        temp_v5 = VectorSignedToFloat(temp_v20,(unsigned char)(in_fpscr >> 0x16) & 3);
        *(unsigned int *)(temp_v2 + 0x17a4) = temp_v5;
        *(unsigned short *)(temp_v2 + 0x17c0) = 0;
        *(unsigned int *)(temp_v2 + 0x17d8) = 0;
        *(unsigned int *)(temp_v2 + 0x17d4) = 0xffffffff;
        *(unsigned char *)(temp_v2 + 0x17dc) = 0;
      }
      temp_v3 = temp_v3 + 1;
      temp_v2 = FUN_003b56bc();
    } while (temp_v3 < temp_v2);
  }
  *(int *)(param_1 + 0x7b8c) = temp_v6;
  *(unsigned int *)(param_1 + 0x84f4) = temp_v22;
  return;
}

} /* extern "C" */
