/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00292b84` (_code @ 0x292b84, 0x1398 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
} void_stack;

extern int *DAT_005806a4; /* 0x5806a4 */
extern int DAT_00581288; /* 0x581288 */
extern unsigned char DAT_005f10cc; /* 0x5f10cc */
extern int DAT_005f15fc; /* 0x5f15fc */
extern int DAT_005f1600; /* 0x5f1600 */
extern signed char DAT_005f199e; /* 0x5f199e */
extern float DAT_005f1a88; /* 0x5f1a88 */
extern int DAT_005f1bec; /* 0x5f1bec */
extern unsigned int DAT_005f1bfc; /* 0x5f1bfc */
extern unsigned char DAT_005f1c48; /* 0x5f1c48 */

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_FABS_4_DEFINED
#define ROMWRIGHT_FABS_4_DEFINED
static float romwright_fabs_4(float value)
{
    return value < (float)0 ? -value : value;
}
#endif
#ifndef ROMWRIGHT_SQRT_4_DEFINED
#define ROMWRIGHT_SQRT_4_DEFINED
double sqrt(double);
static float romwright_sqrt_4(float value)
{
    return (float)sqrt((double)value);
}
#endif
#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Unsupported intrinsic, declaration required: NAN (FLOAT_NAN). */
/* Supplied declaration required: FUN_001418fc. */
/* Supplied declaration required: FUN_0014f0dc. */
/* Supplied declaration required: FUN_001523b8. */
/* Supplied declaration required: FUN_00162e8c. */
extern int FUN_0018719c(unsigned int);
/* Supplied declaration required: FUN_001bbf0c. */
/* Supplied declaration required: FUN_001bc124. */
/* Supplied declaration required: FUN_0025cb1c. */
/* Supplied declaration required: FUN_00275ffc. */
/* Supplied declaration required: FUN_002b5cb4. */
/* Supplied declaration required: FUN_002b5cd4. */
/* Supplied declaration required: FUN_003033d4. */
/* Supplied declaration required: FUN_00303564. */
/* Supplied declaration required: FUN_00324b68. */
/* Supplied declaration required: FUN_00330108. */
/* Supplied declaration required: FUN_00352bc4. */
/* Supplied declaration required: FUN_0036b824. */
/* Supplied declaration required: FUN_003f9c6c. */
/* Supplied declaration required: FUN_0050d8e4. */
extern short aeabi_idivmod(short, int);


void FUN_00292b84(void)

{
/* irregular: 2 goto(s); irregular input(s): in_fpscr; 20 native warning(s); review required */
  int *piVar1;
  short temp_v0;
  short temp_v1;
  int temp_v2;
  int *piVar5;
  int *piVar6;
  unsigned int *puVar7;
  float *pfVar8;
  unsigned char temp_v3;
  unsigned char temp_v4;
  unsigned char temp_v5;
  unsigned char temp_v6;
  unsigned int in_fpscr;
  float temp_v7;
  float temp_v8;
  float temp_v9;
  int temp_v10;
  int temp_v11;
  float temp_v12;
  float temp_v13;
  float temp_v14;
  float temp_v15;
  unsigned long long temp_v16;
  float temp_v17;
  float temp_v18;
  float temp_v19;
  unsigned int temp_v20;
  float temp_v21;
  float temp_v22;
  float temp_v23;
  float temp_v24 [3];
  float temp_v25;
  char acStack_64 [64];
  unsigned long long temp_v26;
  float temp_v27;
  unsigned long long temp_v28;
  
  FUN_00162e8c();
  piVar5 = DAT_005806a4;
  if (*DAT_005806a4 == 0x11) {
    return;
  }
  temp_v15 = 20.0f;
  temp_v26 = 0x41a00000;
  temp_v17 = 1.0f;
  if ((char)DAT_005806a4[0xae] != '\0') {
    if ((char)DAT_005806a4[0xc1] == '\0') {
      return;
    }
    temp_v2 = DAT_005806a4[0xaf];
    FUN_003f9c6c(temp_v2,DAT_005806a4 + 0xb0,0);
    if (temp_v2 != 0) {
      FUN_00303564();
      piVar5 = DAT_005806a4;
      temp_v10 = DAT_005806a4[0xb3];
      temp_v2 = DAT_005806a4[0xb4];
      temp_v11 = DAT_005806a4[0xb5];
      DAT_005806a4[0x11] = temp_v10;
      piVar5[0x12] = temp_v2;
      piVar5[0x13] = temp_v11;
      piVar5[0xe] = piVar5[0xb0];
      piVar5[0xf] = piVar5[0xb1];
      piVar5[0x10] = piVar5[0xb2];
      piVar5[0x17] = temp_v10;
      piVar5[0x18] = temp_v2;
      piVar5[0x19] = temp_v11;
      piVar5[0x14] = piVar5[0xb0];
      piVar5[0x15] = piVar5[0xb1];
      piVar5[0x16] = piVar5[0xb2];
      FUN_0050d8e4();
      FUN_00275ffc();
      FUN_0014f0dc(&DAT_005f10cc,DAT_005806a4 + 0x14,DAT_005806a4 + 0x17,DAT_005806a4 + 8);
      FUN_001523b8(&DAT_005f10cc,1);
      *(unsigned char **)(DAT_005806a4[0xc5] + 0xc) = &DAT_005f10cc;
      return;
    }
    *(unsigned char *)(DAT_005806a4 + 0xc1) = 0;
    return;
  }
  temp_v19 = 0.01f;
  temp_v28 = 0x3c23d70a;
  temp_v18 = 0.5f;
  temp_v27 = 0.0f;
  temp_v16 = 0;
  temp_v25 = (float)0x3f19999a;
  acStack_64[0] = -0x66;
  acStack_64[1] = -0x67;
  acStack_64[2] = '\x19';
  acStack_64[3] = '?';
  acStack_64[4] = -0x66;
  acStack_64[5] = -0x67;
  acStack_64[6] = '\x19';
  acStack_64[7] = '?';
  if (DAT_005806a4[0xaa] != 0) {
    if ((short)DAT_005806a4[0xac] == 0) {
      DAT_005806a4[0xaa] = 0;
    }
    else {
      temp_v12 = 2.0f;
      temp_v2 = 0;
      temp_v15 = (float)VectorUnsignedToFloat
                                ((unsigned int)*(unsigned short *)((int)DAT_005806a4 + 0x2b2),
                                 (unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v24[0] = temp_v15 * 0.01f;
      temp_v15 = (float)VectorUnsignedToFloat
                                ((unsigned int)*(unsigned short *)(DAT_005806a4 + 0xad),(unsigned char)(in_fpscr >> 0x16) & 3
                                );
      temp_v24[1] = temp_v15 * 0.01f;
      temp_v15 = (float)VectorUnsignedToFloat
                                ((unsigned int)*(unsigned short *)((int)DAT_005806a4 + 0x2b6),
                                 (unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v24[2] = temp_v15 * 0.01f;
      do {
        pfVar8 = temp_v24 + temp_v2;
        temp_v15 = *pfVar8;
        if (temp_v15 != (float)((unsigned long long)temp_v16 >> 0x20)) {
          FUN_0025cb1c();
          temp_v19 = *pfVar8;
          piVar5 = DAT_005806a4 + temp_v2;
          temp_v27 = (float)piVar5[0xa7];
          temp_v15 = temp_v15 * temp_v18 * temp_v19 + temp_v19 * temp_v18;
          if (romwright_fabs_4(temp_v27) >= temp_v19 * temp_v24[temp_v2 + 3]) {
            if ((float)((unsigned long long)temp_v16 >> 0x20) >= temp_v27) {
              piVar5[0xa7] = (int)(temp_v27 + temp_v15);
            }
            else {
              temp_v27 = temp_v27 - temp_v15;
              piVar5[0xa7] = (int)temp_v27;
            }
          }
          else {
            FUN_0025cb1c();
            piVar5 = DAT_005806a4 + temp_v2;
            temp_v27 = (float)piVar5[0xa7] + (temp_v27 - temp_v18) * temp_v15 * temp_v12;
            piVar5[0xa7] = (int)temp_v27;
          }
          piVar5 = DAT_005806a4;
          temp_v15 = -*pfVar8;
          if (-*pfVar8 < (float)DAT_005806a4[temp_v2 + 0xa7]) {
            temp_v15 = (float)DAT_005806a4[temp_v2 + 0xa7];
          }
          DAT_005806a4[temp_v2 + 0xa7] = (int)temp_v15;
          if (*pfVar8 < temp_v15) {
            temp_v15 = *pfVar8;
          }
          piVar5[temp_v2 + 0xa7] = (int)temp_v15;
        }
        piVar5 = DAT_005806a4;
        temp_v27 = (float)((unsigned long long)temp_v16 >> 0x20);
        temp_v15 = (float)temp_v26;
        temp_v19 = (float)temp_v28;
        temp_v2 = temp_v2 + 1;
      } while (temp_v2 < 3);
      temp_v2 = DAT_005806a4[0xac];
      temp_v10 = (int)(short)temp_v2;
      if (0 < temp_v10) {
        temp_v1 = *(short *)((int)DAT_005806a4 + 0x2b2);
        temp_v0 = aeabi_idivmod(temp_v1,temp_v10 + 5);
        *(short *)((int)piVar5 + 0x2b2) = temp_v1 - temp_v0;
        temp_v11 = piVar5[0xad];
        temp_v1 = aeabi_idivmod((short)temp_v11,temp_v10 + 5);
        *(short *)(piVar5 + 0xad) = (short)temp_v11 - temp_v1;
        temp_v1 = *(short *)((int)piVar5 + 0x2b6);
        temp_v0 = aeabi_idivmod(temp_v1,temp_v10 + 5);
        *(short *)((int)piVar5 + 0x2b6) = temp_v1 - temp_v0;
        *(short *)(piVar5 + 0xac) = (short)temp_v2 - 1;
      }
    }
  }
  else {
    DAT_005806a4[0xa7] = 0;
    piVar5[0xa8] = 0;
    piVar5[0xa9] = 0;
  }
  piVar5 = DAT_005806a4;
  temp_v2 = *DAT_005806a4;
  if (temp_v2 == 3) {
    FUN_001418fc(&DAT_005f10cc);
    FUN_001523b8(&DAT_005f10cc,1);
    FUN_00324b68();
    FUN_0036b824(&DAT_005f10cc);
    *(unsigned char **)(DAT_005806a4[0xc5] + 0xc) = &DAT_005f10cc;
    FUN_0050d8e4();
    FUN_00275ffc();
    return;
  }
  temp_v20 = 0x42340000;
  if (temp_v2 == 4) {
    FUN_001418fc(&DAT_005f10cc);
    FUN_001523b8(&DAT_005f10cc,1);
    FUN_0014f0dc(&DAT_005f10cc,DAT_005806a4 + 0x21,DAT_005806a4 + 0x24,DAT_005806a4 + 8);
    FUN_00324b68();
    FUN_0036b824(&DAT_005f10cc);
    *(unsigned char **)(DAT_005806a4[0xc5] + 0xc) = &DAT_005f10cc;
    FUN_0050d8e4();
    FUN_00275ffc();
    return;
  }
  temp_v12 = 10.0f;
  if ((char)DAT_005806a4[0x88] != '\0') {
    FUN_003033d4();
    FUN_001523b8(&DAT_005f10cc,1);
    FUN_00303564();
    FUN_00324b68();
    FUN_0036b824(&DAT_005f10cc);
    *(unsigned char **)(DAT_005806a4[0xc5] + 0xc) = &DAT_005f10cc;
    FUN_0050d8e4();
    FUN_00275ffc();
    piVar1 = DAT_005806a4;
    temp_v2 = piVar5[0x99];
    temp_v10 = piVar5[0x9a];
    piVar6 = DAT_005806a4 + 0x17;
    DAT_005806a4[0x14] = piVar5[0x98];
    piVar1[0x15] = temp_v2;
    piVar1[0x16] = temp_v10;
    temp_v2 = piVar5[0x96];
    temp_v10 = piVar5[0x97];
    *piVar6 = piVar5[0x95];
    piVar1[0x18] = temp_v2;
    piVar1[0x19] = temp_v10;
    return;
  }
  if (temp_v2 == 6 || temp_v2 == 0xf) {
    FUN_0014f0dc(&DAT_005f10cc,DAT_005806a4 + 0x14,DAT_005806a4 + 0x17,DAT_005806a4 + 8);
    FUN_00324b68();
    FUN_0036b824(&DAT_005f10cc);
    *(unsigned char **)(DAT_005806a4[0xc5] + 0xc) = &DAT_005f10cc;
    FUN_0050d8e4();
    FUN_00275ffc();
    return;
  }
  temp_v10 = FUN_003033d4();
  temp_v2 = DAT_00581288;
  piVar5 = DAT_005806a4;
  temp_v13 = 0.017453292f;
  DAT_005806a4[0x11] = *(int *)(DAT_00581288 + 0x1c);
  piVar5[0x13] = *(int *)(temp_v2 + 0x24);
  temp_v7 = (float)piVar5[6] * 0.017453292f;
  FUN_001bc124();
  piVar5 = DAT_005806a4;
  DAT_005806a4[0xe] =
       (int)(*(float *)(DAT_00581288 + 0x1c) - temp_v7 * (float)DAT_005806a4[temp_v10 + 99]);
  temp_v8 = (float)piVar5[6] * temp_v13;
  FUN_001bbf0c();
  temp_v2 = DAT_00581288;
  piVar5 = DAT_005806a4;
  temp_v7 = 90.0f;
  DAT_005806a4[0x10] =
       (int)(*(float *)(DAT_00581288 + 0x24) - temp_v8 * (float)DAT_005806a4[temp_v10 + 99]);
  piVar5[0x12] = (int)(*(float *)(temp_v2 + 0x20) + (float)piVar5[temp_v10 + 0x33]);
  piVar5[0xf] = (int)(*(float *)(temp_v2 + 0x20) + (float)piVar5[temp_v10 + 0x43] + (float)piVar5[7]);
  temp_v8 = ((float)piVar5[6] - 90.0f) * temp_v13;
  FUN_001bc124();
  piVar5 = DAT_005806a4;
  DAT_005806a4[0x11] =
       (int)((float)DAT_005806a4[0x11] + temp_v8 * (float)DAT_005806a4[temp_v10 + 0x53]);
  temp_v8 = ((float)piVar5[6] - temp_v7) * temp_v13;
  FUN_001bbf0c();
  piVar5 = DAT_005806a4;
  DAT_005806a4[0x13] =
       (int)((float)DAT_005806a4[0x13] + temp_v8 * (float)DAT_005806a4[temp_v10 + 0x53]);
  temp_v8 = ((float)piVar5[6] - temp_v7) * temp_v13;
  FUN_001bc124();
  piVar5 = DAT_005806a4;
  DAT_005806a4[0xe] = (int)((float)DAT_005806a4[0xe] + temp_v8 * (float)DAT_005806a4[temp_v10 + 0x53]);
  temp_v13 = ((float)piVar5[6] - temp_v7) * temp_v13;
  FUN_001bbf0c();
  piVar5 = DAT_005806a4;
  pfVar8 = (float *)(DAT_005806a4 + 0x12);
  temp_v14 = -20.0f;
  DAT_005806a4[0x10] =
       (int)((float)DAT_005806a4[0x10] + temp_v13 * (float)DAT_005806a4[temp_v10 + 0x53]);
  temp_v8 = romwright_sqrt_4(((float)piVar5[0xe] - (float)piVar5[0x11]) *
                ((float)piVar5[0xe] - (float)piVar5[0x11]) +
                ((float)piVar5[0xf] - *pfVar8) * ((float)piVar5[0xf] - *pfVar8) +
                ((float)piVar5[0x10] - (float)piVar5[0x13]) *
                ((float)piVar5[0x10] - (float)piVar5[0x13]));
  if ((int)temp_v8 < 0x3c23d70a) {
    temp_v8 = temp_v19;
  }
  temp_v26 = romwright_piece_4_4(temp_v20,0x3d888889);
  if ((char)piVar5[0x2a] != '\0') {
    temp_v13 = (float)piVar5[0x87];
    temp_v9 = (float)piVar5[0x86] - temp_v13;
  }
  else {
    temp_v13 = (float)piVar5[0x87];
    temp_v19 = (float)piVar5[0x86] - temp_v13;
    if (DAT_005f199e != '\0') {
      temp_v19 = temp_v19 * 0.06666667f;
    }
    temp_v9 = temp_v15;
    if (((int)temp_v19 < 0x41a00001) && (temp_v9 = temp_v19, 0xc1a00000 < (unsigned int)temp_v19)) {
      temp_v9 = temp_v14;
    }
  }
  piVar5[0xf] = (int)((float)piVar5[0xf] + temp_v13 + temp_v9);
  piVar5[0x87] = (int)(temp_v13 + temp_v9);
  if (DAT_005f15fc != 1) {
    if (DAT_005f15fc != 2) {
      if ((DAT_005f15fc == 4) && (DAT_005f1600 == 2)) {
        temp_v2 = FUN_0018719c(0xf4);
        if (temp_v2 != 0) {
          temp_v2 = FUN_0018719c(0xf6);
          if (temp_v2 != 0) {
            DAT_005f1a88 = temp_v27;
          }
        }
        else {
          DAT_005f1a88 = temp_v27;
        }
      }
    }
    else if ((DAT_005f1600 == 5) &&
            ((temp_v2 = FUN_0018719c(0x91), temp_v2 != 0 || (temp_v2 = FUN_003033d4(), temp_v2 == 4)))) {
      DAT_005f1a88 = temp_v27;
    }
  }
  else if (DAT_005f1600 == 1) {
    temp_v2 = FUN_0018719c(0x72);
    if (temp_v2 != 0) {
      temp_v2 = FUN_0018719c(0xb1);
      if (temp_v2 != 0) {
        DAT_005f1a88 = temp_v27;
      }
    }
    else {
      DAT_005f1a88 = temp_v27;
    }
  }
  piVar5 = DAT_005806a4;
  temp_v19 = ((float)DAT_005806a4[0xc3] - (float)DAT_005806a4[0xc4]) * (float)temp_v26;
  if (((int)temp_v19 < 0x41a00001) && (temp_v15 = temp_v19, 0xc1a00000 < (unsigned int)temp_v19)) {
    temp_v15 = temp_v14;
  }
  temp_v15 = (float)DAT_005806a4[0xc4] + temp_v15;
  temp_v19 = (float)DAT_005806a4[0xf] - temp_v15;
  DAT_005806a4[0xf] = (int)temp_v19;
  piVar5[0xc4] = (int)temp_v15;
  piVar5[0xc3] = (int)DAT_005f1a88;
  temp_v2 = DAT_00581288;
  if (*(char *)((int)piVar5 + 0x305) == '\0') {
    temp_v15 = *(float *)(DAT_00581288 + 0x20) + 5.0f;
    if (temp_v19 <= temp_v15) {
      temp_v19 = temp_v15;
    }
    piVar5[0xf] = (int)temp_v19;
    temp_v15 = *(float *)(temp_v2 + 0x20) + 450.0f;
    if (temp_v15 < temp_v19) {
      temp_v19 = temp_v15;
    }
    piVar5[0xf] = (int)temp_v19;
  }
  temp_v19 = (float)piVar5[0xe] - (float)piVar5[0x11];
  temp_v15 = (float)piVar5[0xf] - (float)piVar5[0x12];
  temp_v14 = (float)piVar5[0x10] - (float)piVar5[0x13];
  temp_v13 = temp_v17 / romwright_sqrt_4(temp_v19 * temp_v19 + temp_v15 * temp_v15 + temp_v14 * temp_v14);
  piVar5[0xe] = (int)((float)piVar5[0x11] + temp_v19 * temp_v13 * temp_v8);
  piVar5[0xf] = (int)((float)piVar5[0x12] + temp_v15 * temp_v13 * temp_v8);
  piVar5[0x10] = (int)((float)piVar5[0x13] + temp_v14 * temp_v13 * temp_v8);
  if ((*(char *)((int)piVar5 + 0x305) != '\0') && (piVar5[0x2c] == 0)) {
    temp_v13 = 500.0f;
    piVar5[0xf] = -0x3d380000;
    temp_v14 = -600.0f;
    temp_v8 = 70.0f;
    FUN_00352bc4();
    temp_v15 = (float)DAT_005806a4[6];
    FUN_002b5cd4();
    temp_v19 = *(float *)(DAT_00581288 + 0x20);
    if (temp_v15 < temp_v27) {
      temp_v15 = -temp_v15;
    }
    temp_v5 = temp_v19 < temp_v14;
    temp_v6 = temp_v19 == temp_v14;
    temp_v3 = (temp_v19 != temp_v19) || (temp_v14 != temp_v14);
    if (!temp_v6 && !temp_v5) {
      temp_v5 = temp_v15 < temp_v8;
      temp_v6 = temp_v15 == temp_v8;
      temp_v3 = (temp_v15 != temp_v15) || (temp_v8 != temp_v8);
    }
    if (!temp_v6 && temp_v5 == temp_v3) {
      temp_v19 = temp_v19 - temp_v14;
      temp_v14 = temp_v15 - temp_v8;
      if ((int)(temp_v15 - temp_v8) >= 0x42b40001) {
        temp_v14 = temp_v7;
      }
      temp_v15 = temp_v27;
      if ((temp_v27 <= temp_v19) && (temp_v15 = temp_v19, (int)temp_v19 >= 0x43fa0001)) {
        temp_v15 = temp_v13;
      }
      DAT_005806a4[0xf] =
           (int)((float)DAT_005806a4[0xf] + temp_v15 * 0.002f * (temp_v27 + temp_v12 * temp_v14));
    }
  }
  temp_v15 = (float)((unsigned long long)temp_v26 >> 0x20);
  puVar7 = &DAT_005f1bfc;
  temp_v2 = *DAT_005806a4;
  if (temp_v2 != 2) {
    if (temp_v2 < 3) {
      if (temp_v2 == 0) {
        puVar7 = (unsigned int *)(unsigned int)DAT_005f1c48;
      }
      if (((!(temp_v2 == 0 && puVar7 == (unsigned int *)0x0)) || (DAT_005f1bec == 1)) ||
         (*(char *)((int)DAT_005806a4 + 0x305) != '\0')) {
        temp_v22 = (float)DAT_005806a4[0xf];
        temp_v21 = (float)DAT_005806a4[0xe];
        temp_v23 = (float)DAT_005806a4[0x10];
      }
      else {
        FUN_00330108(DAT_005806a4 + 0xe,DAT_005806a4 + 0x11,&temp_v21);
      }
    }
    else {
      if (temp_v2 != 0x10) {
        if (temp_v2 != 0x17) goto LAB_002936f8;
      }
      else if (((DAT_005f1c48 != 0) || (DAT_005f1bec == 1)) ||
              (*(char *)((int)DAT_005806a4 + 0x305) != '\0')) goto LAB_002936f8;
      FUN_00330108(DAT_005806a4 + 0xe,DAT_005806a4 + 0x11,&temp_v21);
    }
  }
  else {
LAB_002936f8:
    temp_v22 = (float)DAT_005806a4[0xf];
    temp_v21 = (float)DAT_005806a4[0xe];
    temp_v23 = (float)DAT_005806a4[0x10];
  }
  temp_v19 = romwright_sqrt_4((temp_v21 - (float)DAT_005806a4[0x11]) * (temp_v21 - (float)DAT_005806a4[0x11]) +
                (temp_v22 - (float)DAT_005806a4[0x12]) * (temp_v22 - (float)DAT_005806a4[0x12]) +
                (temp_v23 - (float)DAT_005806a4[0x13]) * (temp_v23 - (float)DAT_005806a4[0x13]));
  if ((int)temp_v19 >= 0x38d1b718) {
    temp_v12 = (float)DAT_005806a4[0x13] - temp_v23;
    temp_v7 = temp_v17 / temp_v19;
    temp_v8 = ((float)DAT_005806a4[0x12] - temp_v22) * temp_v7;
    temp_v14 = ((float)DAT_005806a4[0x11] - temp_v21) * temp_v7;
    temp_v7 = temp_v12 * temp_v7;
  }
  else {
    temp_v14 = (float)DAT_005806a4[0x11] - (float)DAT_005806a4[0xe];
    temp_v12 = (float)DAT_005806a4[0x12] - (float)DAT_005806a4[0xf];
    temp_v7 = (float)DAT_005806a4[0x13] - (float)DAT_005806a4[0x10];
    temp_v13 = temp_v17 / romwright_sqrt_4(temp_v14 * temp_v14 + temp_v12 * temp_v12 + temp_v7 * temp_v7);
    temp_v14 = temp_v14 * temp_v13;
    temp_v8 = temp_v12 * temp_v13;
    temp_v7 = temp_v7 * temp_v13;
  }
  temp_v13 = temp_v27;
  if (*(char *)((int)DAT_005806a4 + 0x305) == '\0') {
    temp_v12 = (float)DAT_005806a4[temp_v10 + 0x33];
    FUN_002b5cb4();
    if (temp_v27 < temp_v19) {
      temp_v14 = (float)DAT_005806a4[0x11] - (float)DAT_005806a4[0xe];
      temp_v8 = (float)DAT_005806a4[0x12] - (float)DAT_005806a4[0xf];
      temp_v12 = (float)DAT_005806a4[0x13] - (float)DAT_005806a4[0x10];
      temp_v7 = temp_v17 / romwright_sqrt_4(temp_v14 * temp_v14 + temp_v8 * temp_v8 + temp_v12 * temp_v12);
      temp_v14 = temp_v14 * temp_v7;
      temp_v8 = temp_v8 * temp_v7;
      temp_v7 = temp_v12 * temp_v7;
      temp_v19 = temp_v27;
    }
    if ((int)temp_v19 < 0x42340000) {
      temp_v14 = (float)DAT_005806a4[0x11] - (float)DAT_005806a4[0xe];
      temp_v12 = (float)DAT_005806a4[0x12] - (float)DAT_005806a4[0xf];
      temp_v7 = (float)DAT_005806a4[0x13] - (float)DAT_005806a4[0x10];
      temp_v17 = temp_v17 / romwright_sqrt_4(temp_v14 * temp_v14 + temp_v12 * temp_v12 + temp_v7 * temp_v7);
      temp_v14 = temp_v14 * temp_v17;
      temp_v8 = temp_v12 * temp_v17;
      temp_v7 = temp_v7 * temp_v17;
      temp_v19 = temp_v15;
    }
  }
  piVar5 = DAT_005806a4;
  if (((char)DAT_005806a4[0x2a] == '\0') && (*(char *)((int)DAT_005806a4 + 0x305) == '\0')) {
    temp_v2 = DAT_005806a4[0x2b];
    temp_v5 = temp_v2 < 0;
    temp_v6 = temp_v2 == 0;
    temp_v3 = 1;
    temp_v4 = 0;
    if (temp_v2 < 1) {
      temp_v12 = (float)DAT_005806a4[0x28];
      temp_v5 = temp_v12 < temp_v19;
      temp_v6 = temp_v12 == temp_v19;
      temp_v3 = temp_v19 <= temp_v12;
      temp_v4 = (temp_v12 != temp_v12) || (temp_v19 != temp_v19);
    }
    if ((!(!temp_v6 && temp_v5 == temp_v4)) && (!temp_v3)) {
      temp_v17 = (float)DAT_005806a4[0x29] + 8.0f;
      DAT_005806a4[0x29] = (int)temp_v17;
      if ((int)temp_v17 >= 0x42200001) {
        temp_v17 = 40.0f;
      }
      piVar5[0x29] = (int)temp_v17;
      temp_v12 = temp_v12 + temp_v17;
      piVar5[0x28] = (int)temp_v12;
      if (temp_v12 <= temp_v19) {
        temp_v19 = temp_v12;
      }
      piVar5[0x28] = (int)temp_v19;
    }
    else {
      DAT_005806a4[0x28] = (int)temp_v19;
      piVar5[0x29] = (int)temp_v13;
    }
  }
  else {
    DAT_005806a4[0x28] = (int)temp_v19;
    piVar5[0x29] = (int)temp_v13;
  }
  temp_v21 = (float)piVar5[0x11] - temp_v14 * temp_v19;
  temp_v22 = (float)piVar5[0x12] - temp_v8 * temp_v19;
  temp_v23 = (float)piVar5[0x13] - temp_v7 * (float)piVar5[0x28];
  if ((char)piVar5[0x2a] != '\0') {
    piVar5[0x17] = piVar5[0x11];
    piVar5[0x18] = piVar5[0x12];
    piVar5[0x19] = piVar5[0x13];
    piVar5[0x2b] = 0;
    *(unsigned char *)(piVar5 + 0x2a) = 0;
    piVar5[0x14] = (int)temp_v21;
    piVar5[0x15] = (int)temp_v22;
    piVar5[0x16] = (int)temp_v23;
  }
  else if (piVar5[0x83] != -1) {
    piVar5[0x17] = (int)((float)piVar5[0x17] + ((float)piVar5[0x11] - (float)piVar5[0x17]) * 0.125f);
    piVar5[0x18] = (int)((float)piVar5[0x18] + ((float)piVar5[0x12] - (float)piVar5[0x18]) * 0.125f);
    piVar5[0x19] = (int)((float)piVar5[0x19] + ((float)piVar5[0x13] - (float)piVar5[0x19]) * 0.125f);
    piVar5[0x14] = (int)((float)piVar5[0x14] + (temp_v21 - (float)piVar5[0x14]) * 0.125f);
    piVar5[0x15] = (int)((float)piVar5[0x15] + (temp_v22 - (float)piVar5[0x15]) * 0.125f);
    piVar5[0x16] = (int)((float)piVar5[0x16] + (temp_v23 - (float)piVar5[0x16]) * 0.125f);
  }
  else {
    switch(piVar5[0x2c]) {
    case 0:
      if (piVar5[0x2b] >= 1) {
        piVar5[0x2b] = piVar5[0x2b] - 1;
        if (*(char *)((int)piVar5 + 0x305) != '\0') {
          piVar5[0x19] = (int)(((float)piVar5[0x13] - (float)piVar5[0x19]) + (float)piVar5[0x19]);
          piVar5[0x14] = (int)((temp_v21 - (float)piVar5[0x14]) + (float)piVar5[0x14]);
          piVar5[0x17] = (int)(((float)piVar5[0x11] - (float)piVar5[0x17]) + (float)piVar5[0x17]);
          piVar5[0x18] = (int)(((float)piVar5[0x12] - (float)piVar5[0x18]) + (float)piVar5[0x18]);
          piVar5[0x15] = (int)((temp_v22 - (float)piVar5[0x15]) + (float)piVar5[0x15]);
          piVar5[0x2b] = 0;
          temp_v17 = (temp_v23 - (float)piVar5[0x16]) + (float)piVar5[0x16];
          piVar5[0x16] = (int)temp_v17;
          break;
        }
        piVar5[0x17] = (int)((float)piVar5[0x17] +
                            ((float)piVar5[0x11] - (float)piVar5[0x17]) * temp_v18);
        piVar5[0x18] = (int)((float)piVar5[0x18] +
                            ((float)piVar5[0x12] - (float)piVar5[0x18]) * temp_v18);
        piVar5[0x19] = (int)((float)piVar5[0x19] +
                            ((float)piVar5[0x13] - (float)piVar5[0x19]) * temp_v18);
        piVar5[0x14] = (int)((float)piVar5[0x14] + (temp_v21 - (float)piVar5[0x14]) * temp_v18);
        piVar5[0x15] = (int)((float)piVar5[0x15] + (temp_v22 - (float)piVar5[0x15]) * temp_v18);
        temp_v17 = (float)piVar5[0x16] + (temp_v23 - (float)piVar5[0x16]) * temp_v18;
      }
      else {
        piVar5[0x17] = (int)(((float)piVar5[0x11] - (float)piVar5[0x17]) + (float)piVar5[0x17]);
        piVar5[0x18] = (int)(((float)piVar5[0x12] - (float)piVar5[0x18]) + (float)piVar5[0x18]);
        piVar5[0x19] = (int)(((float)piVar5[0x13] - (float)piVar5[0x19]) + (float)piVar5[0x19]);
        if (*(char *)((int)piVar5 + 0x305) != '\0') {
          piVar5[0x14] = (int)((float)piVar5[0x14] + (temp_v21 - (float)piVar5[0x14]) * 0.6666667f);
          piVar5[0x15] = (int)((float)piVar5[0x15] + (temp_v22 - (float)piVar5[0x15]) * 0.6666667f);
          piVar5[0x16] = (int)((float)piVar5[0x16] + (temp_v23 - (float)piVar5[0x16]) * 0.6666667f);
          break;
        }
        piVar5[0x14] = (int)((float)piVar5[0x14] + (temp_v21 - (float)piVar5[0x14]) * 0.6666667f);
        piVar5[0x15] = (int)((float)piVar5[0x15] + (temp_v22 - (float)piVar5[0x15]) * 0.33333334f);
        temp_v17 = (float)piVar5[0x16] + (temp_v23 - (float)piVar5[0x16]) * 0.6666667f;
      }
      piVar5[0x16] = (int)temp_v17;
      break;
    case 2:
      if (*(char *)((int)piVar5 + 0x305) != '\0') {
        piVar5[0x17] = (int)(((float)piVar5[0x11] - (float)piVar5[0x17]) + (float)piVar5[0x17]);
        piVar5[0x14] = (int)((temp_v21 - (float)piVar5[0x14]) + (float)piVar5[0x14]);
        piVar5[0x18] = (int)(((float)piVar5[0x12] - (float)piVar5[0x18]) + (float)piVar5[0x18]);
        piVar5[0x19] = (int)(((float)piVar5[0x13] - (float)piVar5[0x19]) + (float)piVar5[0x19]);
        piVar5[0x15] = (int)((temp_v22 - (float)piVar5[0x15]) + (float)piVar5[0x15]);
        piVar5[0x16] = (int)((temp_v23 - (float)piVar5[0x16]) + (float)piVar5[0x16]);
      }
      else {
        piVar5[0x19] = (int)((float)piVar5[0x19] +
                            ((float)piVar5[0x13] - (float)piVar5[0x19]) * temp_v18);
        piVar5[0x14] = (int)((float)piVar5[0x14] + (temp_v21 - (float)piVar5[0x14]) * temp_v18);
        piVar5[0x17] = (int)((float)piVar5[0x17] +
                            ((float)piVar5[0x11] - (float)piVar5[0x17]) * temp_v18);
        piVar5[0x18] = (int)((float)piVar5[0x18] +
                            ((float)piVar5[0x12] - (float)piVar5[0x18]) * temp_v18);
        piVar5[0x15] = (int)((float)piVar5[0x15] + (temp_v22 - (float)piVar5[0x15]) * temp_v18);
        piVar5[0x16] = (int)((float)piVar5[0x16] + (temp_v23 - (float)piVar5[0x16]) * temp_v18);
      }
      break;
    case -3:
    case -2:
    case -1:
    case 1:
      if (*(char *)((int)piVar5 + 0x305) == '\0') {
        piVar5[0x19] = (int)((float)piVar5[0x19] +
                            ((float)piVar5[0x13] - (float)piVar5[0x19]) * temp_v18);
        piVar5[0x14] = (int)((float)piVar5[0x14] + (temp_v21 - (float)piVar5[0x14]) * 0.33333334f);
        piVar5[0x17] = (int)((float)piVar5[0x17] +
                            ((float)piVar5[0x11] - (float)piVar5[0x17]) * temp_v18);
        piVar5[0x18] = (int)((float)piVar5[0x18] +
                            ((float)piVar5[0x12] - (float)piVar5[0x18]) * temp_v18);
        piVar5[0x15] = (int)((float)piVar5[0x15] + (temp_v22 - (float)piVar5[0x15]) * 0.33333334f);
        piVar5[0x16] = (int)((float)piVar5[0x16] + (temp_v23 - (float)piVar5[0x16]) * 0.33333334f);
        break;
      }
      piVar5[0x17] = (int)(((float)piVar5[0x11] - (float)piVar5[0x17]) + (float)piVar5[0x17]);
      piVar5[0x18] = (int)(((float)piVar5[0x12] - (float)piVar5[0x18]) + (float)piVar5[0x18]);
      piVar5[0x19] = (int)(((float)piVar5[0x13] - (float)piVar5[0x19]) + (float)piVar5[0x19]);
      piVar5[0x14] = (int)((temp_v21 - (float)piVar5[0x14]) + (float)piVar5[0x14]);
      piVar5[0x15] = (int)((temp_v22 - (float)piVar5[0x15]) + (float)piVar5[0x15]);
      temp_v17 = (temp_v23 - (float)piVar5[0x16]) + (float)piVar5[0x16];
      piVar5[0x16] = (int)temp_v17;
    }
  }
  FUN_0036b824(&DAT_005f10cc);
  *(unsigned char **)(DAT_005806a4[0xc5] + 0xc) = &DAT_005f10cc;
  FUN_00303564();
  FUN_001523b8(&DAT_005f10cc,1);
  temp_v2 = *DAT_005806a4;
  if (!((temp_v2 == 7 || temp_v2 == 8) || temp_v2 == 9)) {
    FUN_00324b68();
  }
  else {
    FUN_0014f0dc(&DAT_005f10cc,DAT_005806a4 + 0x14,DAT_005806a4 + 0x17,DAT_005806a4 + 0xb);
  }
  FUN_0050d8e4();
  FUN_00275ffc();
  return;
}
