/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003cf02c` (_code @ 0x3cf02c, 0x10e4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spB8; /* 0xb8: local_b8 */
} void_stack;

extern unsigned char LAB_003cf760; /* 0x3cf760 */
extern unsigned char LAB_003cf7b8; /* 0x3cf7b8 */
extern unsigned char LAB_003cf7f8; /* 0x3cf7f8 */
extern unsigned char LAB_003cf814; /* 0x3cf814 */
extern unsigned char LAB_003cf830; /* 0x3cf830 */
extern unsigned char LAB_003cf850; /* 0x3cf850 */
extern unsigned char LAB_003cf86c; /* 0x3cf86c */
extern unsigned char LAB_003d009c; /* 0x3d009c */
extern unsigned char LAB_003d00a8; /* 0x3d00a8 */
extern unsigned char LAB_003d00b4; /* 0x3d00b4 */
extern unsigned int DAT_0056fcc0; /* 0x56fcc0 */
extern int DAT_0057f2c4; /* 0x57f2c4 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: NAN (FLOAT_NAN). */
#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
/* Supplied declaration required: FUN_0013c174. */
extern unsigned int FUN_0014bf3c(unsigned short, unsigned int);
/* Supplied declaration required: FUN_001517b4. */
/* Supplied declaration required: FUN_00163aa4. */
extern int FUN_00163e84(unsigned int);
/* Supplied declaration required: FUN_00167458. */
/* Supplied declaration required: FUN_001681cc. */
/* Supplied declaration required: FUN_00178b04. */
/* Supplied declaration required: FUN_00180118. */
extern int FUN_001834a4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_001846d0. */
/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_0019c364. */
/* Supplied declaration required: FUN_0019eb14. */
/* Supplied declaration required: FUN_001aea28. */
/* Supplied declaration required: FUN_001f4908. */
/* Supplied declaration required: FUN_001fc348. */
extern int FUN_00224880(unsigned int);
/* Supplied declaration required: FUN_0022677c. */
extern int FUN_0026c3a0(void);
/* Supplied declaration required: FUN_00275f44. */
/* Supplied declaration required: FUN_002859d8. */
/* Supplied declaration required: FUN_002c8894. */
/* Supplied declaration required: FUN_002e342c. */
/* Supplied declaration required: FUN_002f1908. */
/* Supplied declaration required: FUN_003180c4. */
/* Supplied declaration required: FUN_00336de4. */
/* Supplied declaration required: FUN_0035fc4c. */
/* Supplied declaration required: FUN_0035fd38. */
/* Supplied declaration required: FUN_0038b3f8. */
/* Supplied declaration required: FUN_003d2150. */
/* Supplied declaration required: FUN_003d2158. */
/* Supplied declaration required: FUN_003d2a00. */
/* Supplied declaration required: FUN_003d2d34. */
/* Supplied declaration required: FUN_003d2d6c. */
/* Supplied declaration required: FUN_003d54f8. */
/* Supplied declaration required: FUN_003f9ac4. */
/* Supplied declaration required: FUN_003f9c3c. */
/* Supplied declaration required: FUN_003f9e80. */
/* Supplied declaration required: FUN_003fe86c. */
/* Supplied declaration required: FUN_0040223c. */
/* Supplied declaration required: FUN_0040a244. */
/* Supplied declaration required: FUN_0040aa6c. */
/* Supplied declaration required: FUN_0040aad4. */
/* Supplied declaration required: FUN_0040ab7c. */
extern unsigned int FUN_0040ac08(void);
/* Supplied declaration required: FUN_0040ace8. */
/* Supplied declaration required: FUN_0040c190. */
/* Supplied declaration required: FUN_004ff364. */
/* Supplied declaration required: FUN_004ff920. */
extern int FUN_004ffba8(unsigned int);
/* Supplied declaration required: aeabi_idivmod. */


unsigned int FUN_003cf02c(void)

{
/* irregular: 1 goto(s); irregular input(s): in_fpscr; 48 native warning(s); review required */
  short temp_v0;
  unsigned char temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  unsigned short *puVar8;
  unsigned int *puVar9;
  int temp_v8;
  unsigned int *puVar11;
  int temp_v9;
  int temp_v10;
  char *pcVar14;
  unsigned int temp_v11;
  unsigned char temp_v12;
  unsigned int in_fpscr;
  float temp_v13;
  float temp_v14;
  unsigned long long temp_v15;
  float temp_v16;
  int temp_v17 [37];
  unsigned long long temp_v18;
  
  temp_v2 = DAT_0057f2c4;
  temp_v16 = 1.0f;
  temp_v18 = 0x3f800000;
  FUN_00163aa4(DAT_0057f2c4 + 0x964);
  *(int *)(temp_v2 + 0x88) = *(int *)(temp_v2 + 0x88) + 2;
  FUN_004ff364(*(unsigned int *)(temp_v2 + 0x8c),0);
  temp_v16 = (float)(int)temp_v16;
  aeabi_idivmod(*(unsigned int *)(temp_v2 + 0x88),temp_v16);
  *(unsigned int *)(temp_v2 + 0x88) = temp_v7;
  temp_v15 = 0x42652ee000000000;
  switch(*(unsigned int *)(temp_v2 + 4)) {
  case 1:
    temp_v6 = FUN_0026c3a0();
    if (temp_v6 == 0) break;
    FUN_003d54f8(0,10);
    FUN_003d54f8(1,10);
    FUN_003d2d34(0x1000052,10,0x3c);
    temp_v0 = *(short *)(temp_v2 + 0x1e);
    *(unsigned int *)(temp_v2 + 0x24) = 0xffffffff;
    if (temp_v0 != 2) {
      if (temp_v0 == 3) {
        temp_v5 = 0x10000b5;
      }
      else {
        if (temp_v0 != 4) {
          temp_v6 = DAT_0057f2c4;
          *(unsigned int *)(DAT_0057f2c4 + 4) = 2;
          *(unsigned int *)(temp_v6 + 8) = 0;
          break;
        }
        temp_v5 = 0x10000b6;
      }
      FUN_003d2150(temp_v5);
    }
    else {
      FUN_003d2150(0x10000b4);
    }
    temp_v6 = DAT_0057f2c4;
    *(unsigned int *)(DAT_0057f2c4 + 4) = 2;
    *(unsigned int *)(temp_v6 + 8) = 0;
    break;
  case 2:
    temp_v6 = 0;
    do {
      if (temp_v6 <= *(int *)(temp_v2 + 8) - 1) {
        FUN_00167458(temp_v2 + temp_v6 * 0x8c + 0x360,0);
      }
      temp_v16 = (float)((unsigned long long)temp_v15 >> 0x20);
      temp_v6 = temp_v6 + 1;
    } while (temp_v6 < 5);
    FUN_00163aa4(temp_v2 + 0x8d8);
    temp_v6 = FUN_00163e84(0);
    if (((temp_v6 != 0) && (temp_v6 = FUN_00163e84(1), temp_v6 != 0)) &&
       (*(char *)(temp_v2 + 0x61a) != '\0')) {
      temp_v6 = *(int *)(*(int *)(temp_v2 + 0x90) + 4);
      FUN_0040ace8(DAT_0056fcc0,temp_v6);
      FUN_003fe86c(temp_v6,0,2);
      *(unsigned int *)(temp_v6 + 4) = *(unsigned int *)(temp_v6 + 4) & 0xfffffffc;
      temp_v6 = *(int *)(temp_v2 + 0x98);
      temp_v12 = *(short *)(*(int *)(temp_v6 + 0x34) + 0x94) != 0;
      *(unsigned char *)(temp_v2 + 0x128) = temp_v12;
      if (temp_v12) {
        FUN_003f9c3c(temp_v6,temp_v2 + 0xa0,0);
      }
      else {
        temp_v6 = **(int **)(*(int *)(temp_v6 + 0x34) + 0x48);
        temp_v5 = *(unsigned int *)(temp_v6 + 0x1c);
        temp_v11 = *(unsigned int *)(temp_v6 + 0x20);
        puVar11 = *(unsigned int **)(temp_v6 + 0x30);
        puVar9 = *(unsigned int **)(temp_v6 + 0x34);
        *(unsigned int *)(temp_v2 + 0xa8) = *(unsigned int *)(temp_v6 + 0x24);
        *(unsigned int *)(temp_v2 + 0xa0) = temp_v5;
        *(unsigned int *)(temp_v2 + 0xa4) = temp_v11;
        temp_v5 = *puVar11;
        temp_v11 = puVar11[1];
        *(unsigned int *)(temp_v2 + 0xe0) = puVar11[2];
        *(unsigned int *)(temp_v2 + 0xd8) = temp_v5;
        *(unsigned int *)(temp_v2 + 0xdc) = temp_v11;
        *(unsigned int *)(temp_v2 + 200) = *puVar9;
        *(unsigned int *)(temp_v2 + 0xcc) = puVar9[1];
        *(unsigned int *)(temp_v2 + 0xd0) = puVar9[2];
        *(float *)(temp_v2 + 0xc4) = (float)puVar9[3] * temp_v16;
        FUN_0019eb14();
      }
      FUN_002859d8(temp_v2 + 0xa0);
      temp_v6 = DAT_0057f2c4;
      *(unsigned int *)(DAT_0057f2c4 + 4) = 3;
      *(unsigned int *)(temp_v6 + 8) = 0;
    }
    break;
  case 3:
    *(int *)(temp_v2 + 0x84) = *(int *)(temp_v2 + 0x84) + 1;
    temp_v6 = DAT_0057f2c4;
    temp_v10 = FUN_001834a4(0x1a,0x20b);
    temp_v17[0] = FUN_001834a4(0x1a,0x20e);
    temp_v14 = (float)((unsigned long long)temp_v15 >> 0x20);
    temp_v13 = (float)temp_v18;
    temp_v0 = *(short *)(temp_v6 + 0x1e);
    pcVar14 = (char *)0x0;
    if (temp_v0 == 2) {
      pcVar14 = (char *)0x52f330;
    }
    else if (temp_v0 == 3) {
      pcVar14 = (char *)0x52f340;
    }
    else if (temp_v0 == 4) {
      pcVar14 = "A\xa0ÍĘĬŨŲƮŀ";
    }
    temp_v9 = 0;
    if (temp_v0 != 0) {
      do {
        puVar8 = (unsigned short *)(pcVar14 + temp_v9 * 4);
        temp_v3 = *(int *)(temp_v6 + 8);
        temp_v4 = (unsigned int)*puVar8;
        if ((int)(temp_v4 - 5) <= temp_v3) {
          if (temp_v3 < (int)temp_v4) {
            *(unsigned int *)(temp_v6 + temp_v9 * 4 + 100) =
                 ((int)**(short **)(temp_v10 + 0xc) / 5) * ((temp_v3 - temp_v4) + 5);
          }
          else {
            temp_v4 = (unsigned int)puVar8[1];
            if (temp_v3 < (int)temp_v4) {
              temp_v3 = temp_v6 + temp_v9 * 4;
              *(int *)(temp_v3 + 100) = (int)**(short **)(temp_v10 + 0xc);
              temp_v14 = (float)VectorSignedToFloat((unsigned int)puVar8[1] - (unsigned int)*puVar8,
                                                  (unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v13 = (float)VectorSignedToFloat((int)*(short *)(*(int *)(temp_v17[0] + 0xc) + 2),
                                                  (unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v16 = (float)VectorSignedToFloat(*(int *)(temp_v6 + 8) - (unsigned int)*puVar8,
                                                  (unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v16 = (float)(int)-((temp_v13 / temp_v14) * temp_v16);
              *(float *)(temp_v3 + 0x74) = temp_v16;
            }
            else if (temp_v3 < (int)(temp_v4 + 5)) {
              temp_v8 = temp_v6 + temp_v9 * 4;
              *(unsigned int *)(temp_v8 + 100) =
                   ((int)**(short **)(temp_v10 + 0xc) / 5) * (5 - (temp_v3 - temp_v4));
              *(int *)(temp_v8 + 0x74) = -(int)*(short *)(*(int *)(temp_v17[0] + 0xc) + 2);
            }
            else {
              temp_v16 = (float)temp_v18;
              *(unsigned int *)(temp_v6 + temp_v9 * 4 + 100) = 0;
              FUN_00163aa4(temp_v6 + temp_v9 * 0x8c + 0x6a8);
            }
          }
        }
        temp_v14 = (float)((unsigned long long)temp_v15 >> 0x20);
        temp_v13 = (float)temp_v18;
        temp_v9 = temp_v9 + 1;
      } while (temp_v9 < (int)(unsigned int)*(unsigned short *)(temp_v6 + 0x1e));
    }
    if (*(int *)(temp_v2 + 0x98) != 0) {
      if (*(char *)(temp_v2 + 0x128) != '\0') {
        FUN_003f9ac4(*(int *)(temp_v2 + 0x98),temp_v2 + 0xa0,0);
        temp_v16 = temp_v13;
      }
      FUN_002c8894();
    }
    temp_v6 = FUN_004ffba8(*(unsigned int *)(*(int *)(temp_v2 + 0x90) + 4));
    if (temp_v6 != 0) {
      temp_v10 = *(int *)(*(int *)(temp_v2 + 0x90) + 4);
      *(unsigned int *)(temp_v10 + 4) = *(unsigned int *)(temp_v10 + 4) | 1;
      temp_v6 = 0x20;
      FUN_00178b04(0x20,&LAB_003cf760,0x300);
      temp_v5 = 0;
      if (temp_v6 != 0) {
        temp_v5 = FUN_0040ac08();
      }
      *(unsigned int *)(temp_v2 + 0x94) = temp_v5;
      if (*(short *)(temp_v2 + 0x1e) == 2) {
        if (*(char *)(temp_v2 + 0x20) != '\0') {
          FUN_0040aa6c();
          FUN_0040ab7c(*(unsigned int *)(temp_v2 + 0x94),0);
          FUN_0040aad4(*(unsigned int *)(temp_v2 + 0x94),0);
          FUN_0013c174(&LAB_003cf7b8,temp_v17,1);
          temp_v6 = 0x48;
          FUN_00178b04(0x48,&LAB_003cf760,0x309);
        }
        else {
          FUN_0040aa6c();
          FUN_0040ab7c(*(unsigned int *)(temp_v2 + 0x94),0);
          FUN_0040aad4(*(unsigned int *)(temp_v2 + 0x94),0);
          FUN_0013c174(&LAB_003cf7f8,temp_v17,1);
          temp_v6 = 0x48;
          FUN_00178b04(0x48,&LAB_003cf760,0x310);
        }
        if (temp_v6 != 0) {
          FUN_003f9e80();
        }
        *(int *)(temp_v2 + 0x9c) = temp_v6;
      }
      if (*(short *)(temp_v2 + 0x1e) == 3) {
        FUN_0040aa6c(*(unsigned int *)(temp_v2 + 0x94),&LAB_003cf814);
        FUN_0040ab7c(*(unsigned int *)(temp_v2 + 0x94),0);
        FUN_0040aad4(*(unsigned int *)(temp_v2 + 0x94),0);
        FUN_0013c174(&LAB_003cf830,temp_v17,1);
        temp_v6 = 0x48;
        FUN_00178b04(0x48,&LAB_003cf760,0x319);
        if (temp_v6 != 0) {
          FUN_003f9e80();
        }
        *(int *)(temp_v2 + 0x9c) = temp_v6;
      }
      if (*(short *)(temp_v2 + 0x1e) == 4) {
        FUN_0040aa6c(*(unsigned int *)(temp_v2 + 0x94),&LAB_003cf850);
        FUN_0040ab7c(*(unsigned int *)(temp_v2 + 0x94),0);
        FUN_0040aad4(*(unsigned int *)(temp_v2 + 0x94),0);
        FUN_0013c174(&LAB_003cf86c,temp_v17,1);
        temp_v6 = 0x48;
        FUN_00178b04(0x48,&LAB_003cf760,0x321);
        if (temp_v6 != 0) {
          FUN_003f9e80();
        }
        *(int *)(temp_v2 + 0x9c) = temp_v6;
      }
      if (*(int **)(temp_v2 + 0x98) != (int *)0x0) {
        (**(romwright_code **)(**(int **)(temp_v2 + 0x98) + 4))();
        *(unsigned int *)(temp_v2 + 0x98) = 0;
      }
      FUN_002f1908();
      temp_v6 = *(int *)(*(int *)(temp_v2 + 0x94) + 4);
      FUN_0040ace8(DAT_0056fcc0,temp_v6);
      FUN_003fe86c(temp_v6,0,2);
      *(unsigned int *)(temp_v6 + 4) = *(unsigned int *)(temp_v6 + 4) & 0xfffffffc;
      temp_v6 = *(int *)(temp_v2 + 0x9c);
      temp_v12 = *(short *)(*(int *)(temp_v6 + 0x34) + 0x94) != 0;
      *(unsigned char *)(temp_v2 + 0x128) = temp_v12;
      if (temp_v12) {
        FUN_003f9c3c(temp_v6,temp_v2 + 0xe4,0);
      }
      else {
        temp_v6 = **(int **)(*(int *)(temp_v6 + 0x34) + 0x48);
        temp_v5 = *(unsigned int *)(temp_v6 + 0x1c);
        temp_v11 = *(unsigned int *)(temp_v6 + 0x20);
        puVar11 = *(unsigned int **)(temp_v6 + 0x30);
        puVar9 = *(unsigned int **)(temp_v6 + 0x34);
        *(unsigned int *)(temp_v2 + 0xec) = *(unsigned int *)(temp_v6 + 0x24);
        *(unsigned int *)(temp_v2 + 0xe4) = temp_v5;
        *(unsigned int *)(temp_v2 + 0xe8) = temp_v11;
        temp_v5 = *puVar11;
        temp_v11 = puVar11[1];
        *(unsigned int *)(temp_v2 + 0x124) = puVar11[2];
        *(unsigned int *)(temp_v2 + 0x11c) = temp_v5;
        *(unsigned int *)(temp_v2 + 0x120) = temp_v11;
        *(unsigned int *)(temp_v2 + 0x10c) = *puVar9;
        *(unsigned int *)(temp_v2 + 0x110) = puVar9[1];
        *(unsigned int *)(temp_v2 + 0x114) = puVar9[2];
        *(float *)(temp_v2 + 0x108) = (float)puVar9[3] * temp_v14;
        FUN_0019eb14();
      }
      FUN_002859d8(temp_v2 + 0xe4);
      FUN_001aea28(DAT_0056fcc0,temp_v10);
      if (*(int **)(temp_v2 + 0x90) != (int *)0x0) {
        (**(romwright_code **)(**(int **)(temp_v2 + 0x90) + 4))();
        *(unsigned int *)(temp_v2 + 0x90) = 0;
      }
      temp_v6 = DAT_0057f2c4;
      if (*(char *)(temp_v2 + 0x20) != '\0') {
        FUN_00275f44(*(unsigned int *)(temp_v2 + 0x338),0x11);
        FUN_001681cc(0x5a);
        temp_v6 = DAT_0057f2c4;
        *(unsigned int *)(DAT_0057f2c4 + 4) = 4;
        *(unsigned int *)(temp_v6 + 8) = 0;
      }
      else {
        *(unsigned int *)(DAT_0057f2c4 + 4) = 5;
        *(unsigned int *)(temp_v6 + 8) = 0;
      }
      break;
    }
    temp_v5 = *(unsigned int *)(*(int *)(temp_v2 + 0x90) + 4);
    FUN_004ff920(temp_v5);
    temp_v10 = 9;
    FUN_001517b4(9,1);
    temp_v6 = 0x28e;
    temp_v9 = 0x311;
    if (temp_v10 == 0) {
      temp_v10 = 6;
      FUN_001517b4(6,1);
      if (temp_v10 != 0) goto LAB_003cf9bc;
    }
    else {
LAB_003cf9bc:
      temp_v0 = *(short *)(temp_v2 + 0x1e);
      temp_v10 = temp_v6;
      if (*(char *)(temp_v2 + 0x20) != '\0') {
        if ((temp_v0 != 2) && (temp_v10 = 0, temp_v0 == 3 || temp_v0 == 4)) {
          temp_v10 = temp_v9;
        }
        temp_v13 = (float)VectorSignedToFloat(temp_v10,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v4 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v16 < temp_v13) << 0x1f) |
                ((unsigned int)(temp_v16 == temp_v13) << 0x1e);
        in_fpscr = temp_v4 | ((unsigned int)(NAN(temp_v16) || NAN(temp_v13)) << 0x1c);
        temp_v1 = (unsigned char)(temp_v4 >> 0x18);
        if (!(unsigned char)((temp_v1 >> 6) & 1) && temp_v1 >> 7 == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
          if (temp_v0 == 2) {
            temp_v10 = 800;
          }
          else if (temp_v0 == 3 || temp_v0 == 4) {
            temp_v10 = 0x375;
          }
          if (*(int *)(temp_v2 + 0x24) != -1) {
            FUN_003d2158(*(int *)(temp_v2 + 0x24),0);
            *(unsigned int *)(temp_v2 + 0x24) = 0xffffffff;
            FUN_003d2150(0x10000b7);
          }
        }
      }
      else if ((temp_v0 != 2) && (temp_v10 = 0, temp_v0 == 3 || temp_v0 == 4)) {
        temp_v10 = temp_v9;
      }
      temp_v13 = (float)VectorSignedToFloat(temp_v10,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v4 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v13 <= temp_v16) << 0x1d);
      if (!romwright_subpiece_4_1_0(temp_v4 >> 0x1d,0)) {
        VectorSignedToFloat(temp_v10,(unsigned char)(temp_v4 >> 0x16) & 3);
        FUN_003fe86c(temp_v5,0,2);
        temp_v3 = *(int *)(temp_v2 + 0x98);
        temp_v12 = *(short *)(*(int *)(temp_v3 + 0x34) + 0x94) != 0;
        *(unsigned char *)(temp_v2 + 0x128) = temp_v12;
        if (temp_v12) {
          FUN_003f9c3c(temp_v3,temp_v2 + 0xa0,0);
          VectorSignedToFloat(temp_v10,(unsigned char)(temp_v4 >> 0x16) & 3);
          FUN_003f9ac4(*(unsigned int *)(temp_v2 + 0x98),temp_v2 + 0xa0,0);
        }
        else {
          temp_v3 = **(int **)(*(int *)(temp_v3 + 0x34) + 0x48);
          temp_v5 = *(unsigned int *)(temp_v3 + 0x1c);
          temp_v11 = *(unsigned int *)(temp_v3 + 0x20);
          puVar11 = *(unsigned int **)(temp_v3 + 0x30);
          puVar9 = *(unsigned int **)(temp_v3 + 0x34);
          *(unsigned int *)(temp_v2 + 0xa8) = *(unsigned int *)(temp_v3 + 0x24);
          *(unsigned int *)(temp_v2 + 0xa0) = temp_v5;
          *(unsigned int *)(temp_v2 + 0xa4) = temp_v11;
          temp_v5 = *puVar11;
          temp_v11 = puVar11[1];
          *(unsigned int *)(temp_v2 + 0xe0) = puVar11[2];
          *(unsigned int *)(temp_v2 + 0xd8) = temp_v5;
          *(unsigned int *)(temp_v2 + 0xdc) = temp_v11;
          *(unsigned int *)(temp_v2 + 200) = *puVar9;
          *(unsigned int *)(temp_v2 + 0xcc) = puVar9[1];
          *(unsigned int *)(temp_v2 + 0xd0) = puVar9[2];
          *(float *)(temp_v2 + 0xc4) = (float)puVar9[3] * temp_v14;
          FUN_0019eb14();
        }
        temp_v3 = 6;
        *(int *)(temp_v2 + 8) = temp_v10;
        do {
          FUN_001846d0(temp_v2 + temp_v3 * 0x8c + 0x360,1);
          temp_v3 = temp_v3 + 1;
        } while (temp_v3 < 10);
      }
    }
    if (*(char *)(temp_v2 + 0x20) != '\0') {
      temp_v0 = *(short *)(temp_v2 + 0x1e);
      temp_v10 = temp_v6;
      if ((temp_v0 != 2) && (temp_v10 = 0, temp_v0 == 3 || temp_v0 == 4)) {
        temp_v10 = temp_v9;
      }
      temp_v3 = 0;
      do {
        if (*(int *)(temp_v2 + 8) == temp_v10 + temp_v3 * 4) {
          FUN_001846d0(temp_v2 + temp_v3 * 0x8c + 0x6a8,0);
        }
        temp_v3 = temp_v3 + 1;
      } while (temp_v3 < 4);
    }
    temp_v0 = *(short *)(temp_v2 + 0x1e);
    if (*(char *)(temp_v2 + 0x20) != '\0') {
      if (temp_v0 == 2) {
        temp_v10 = 800;
      }
      else {
        temp_v10 = 0;
        if (temp_v0 == 3 || temp_v0 == 4) {
          temp_v10 = 0x375;
        }
      }
    }
    else {
      temp_v10 = temp_v6;
      if ((temp_v0 != 2) && (temp_v10 = 0, temp_v0 == 3 || temp_v0 == 4)) {
        temp_v10 = temp_v9;
      }
    }
    if (*(int *)(temp_v2 + 8) == temp_v10) {
      FUN_0022677c(0,0xffffffff);
    }
    if (*(int *)(temp_v2 + 8) == temp_v10 + 5) {
      FUN_003d54f8(0,0x1e);
    }
    if (*(char *)(temp_v2 + 0x20) != '\0') {
      temp_v0 = *(short *)(DAT_0057f2c4 + 0x1e);
      if (temp_v0 == 2) {
        temp_v6 = 0x28f;
      }
      else {
        temp_v6 = 0;
        if (temp_v0 == 3 || temp_v0 == 4) {
          temp_v6 = temp_v9;
        }
      }
      if (*(int *)(temp_v2 + 8) == temp_v6) {
        temp_v5 = FUN_003d2150(0x10000b8);
        *(unsigned int *)(temp_v2 + 0x24) = temp_v5;
      }
    }
    else {
      temp_v0 = *(short *)(temp_v2 + 0x1e);
      if ((temp_v0 != 2) && (temp_v6 = 0, temp_v0 == 3 || temp_v0 == 4)) {
        temp_v6 = temp_v9;
      }
      if (*(int *)(temp_v2 + 8) == temp_v6) {
        FUN_003d2150(0x10000b7);
      }
    }
    if (*(short *)(temp_v2 + 0x1e) == 2) {
      if (*(int *)(temp_v2 + 8) != 0xa0) break;
      *(unsigned int *)(temp_v2 + 0x3c) = *(unsigned int *)(temp_v2 + 0x2c);
      FUN_0040c190(temp_v2 + 0x38);
      FUN_003d2a00(&LAB_003d009c);
      FUN_001fc348(temp_v2 + 0x38);
    }
    if (*(short *)(temp_v2 + 0x1e) == 3) {
      if (*(int *)(temp_v2 + 8) == 0xa0) {
        *(unsigned int *)(temp_v2 + 0x3c) = *(unsigned int *)(temp_v2 + 0x2c);
        FUN_0040c190(temp_v2 + 0x38);
        FUN_003d2a00(&LAB_003d009c);
        FUN_001fc348(temp_v2 + 0x38);
      }
      if (*(int *)(temp_v2 + 8) == 0x11d) {
        *(unsigned int *)(temp_v2 + 0x3c) = *(unsigned int *)(temp_v2 + 0x30);
        FUN_0040c190(temp_v2 + 0x38);
        FUN_003d2a00(&LAB_003d00a8);
        FUN_001fc348(temp_v2 + 0x38);
      }
    }
    if (*(short *)(temp_v2 + 0x1e) == 4) {
      if (*(int *)(temp_v2 + 8) == 0xa0) {
        *(unsigned int *)(temp_v2 + 0x3c) = *(unsigned int *)(temp_v2 + 0x2c);
        FUN_0040c190(temp_v2 + 0x38);
        FUN_003d2a00(&LAB_003d009c);
        FUN_001fc348(temp_v2 + 0x38);
      }
      if (*(int *)(temp_v2 + 8) == 0x118) {
        *(unsigned int *)(temp_v2 + 0x3c) = *(unsigned int *)(temp_v2 + 0x30);
        FUN_0040c190(temp_v2 + 0x38);
        FUN_003d2a00(&LAB_003d00a8);
        FUN_001fc348(temp_v2 + 0x38);
      }
      if (*(int *)(temp_v2 + 8) == 0x168) {
        *(unsigned int *)(temp_v2 + 0x3c) = *(unsigned int *)(temp_v2 + 0x34);
        FUN_0040c190(temp_v2 + 0x38);
        FUN_003d2a00(&LAB_003d00b4);
        FUN_001fc348(temp_v2 + 0x38);
      }
    }
    break;
  case 4:
    FUN_00163aa4();
    temp_v6 = FUN_00224880(*(unsigned int *)(temp_v2 + 0x338));
    if ((temp_v6 != 2) || (*(char *)(temp_v2 + 0x6a6) == '\0')) break;
  case 5:
    temp_v4 = (unsigned int)*(unsigned short *)(temp_v2 + 0xc);
    FUN_00180118(temp_v4);
    FUN_002e342c(temp_v17,temp_v4);
    FUN_003180c4(8,temp_v17);
    temp_v5 = FUN_0014bf3c(*(unsigned short *)(temp_v2 + 0xc),0);
    FUN_002e342c(temp_v17,temp_v5);
    FUN_003180c4(0x10,temp_v17);
    FUN_00275f44(*(unsigned int *)(temp_v2 + 0x338),0x10);
    FUN_001681cc(0x5a);
    FUN_00336de4(*(unsigned short *)(temp_v2 + 0xc),1);
    FUN_0035fd38(1);
    temp_v6 = DAT_0057f2c4;
    *(unsigned int *)(DAT_0057f2c4 + 4) = 6;
    *(unsigned int *)(temp_v6 + 8) = 0;
    break;
  case 6:
    FUN_00163aa4();
    temp_v6 = FUN_00224880(*(unsigned int *)(temp_v2 + 0x338));
    if ((temp_v6 == 2) && (*(char *)(temp_v2 + 0x6a6) != '\0')) {
      FUN_001f4908(0,10,0xff);
      FUN_001f4908(1,10,0xff);
      FUN_003d2d6c(10);
      temp_v6 = DAT_0057f2c4;
      *(unsigned int *)(DAT_0057f2c4 + 4) = 7;
      *(unsigned int *)(temp_v6 + 8) = 0;
    }
    break;
  case 7:
    temp_v6 = FUN_00163e84(0);
    if ((temp_v6 != 0) && (temp_v6 = FUN_00163e84(1), temp_v6 != 0)) {
      FUN_0019c364(*(unsigned int *)(temp_v2 + 0x338));
      FUN_0019a5a0(*(unsigned int *)(temp_v2 + 0x33c));
      FUN_0019a5a0(*(unsigned int *)(temp_v2 + 0x334));
      temp_v6 = 0;
      if (*(short *)(temp_v2 + 0x1e) != 0) {
        do {
          FUN_0038b3f8((int)*(short *)(temp_v2 + temp_v6 * 2 + 0xe),1);
          temp_v10 = temp_v2 + temp_v6 * 4;
          FUN_0040a244(*(unsigned int *)(temp_v10 + 0x28));
          *(unsigned int *)(temp_v10 + 0x28) = 0;
          temp_v6 = temp_v6 + 1;
        } while (temp_v6 < (int)(unsigned int)*(unsigned short *)(temp_v2 + 0x1e));
      }
      FUN_0040223c(temp_v2 + 0x38);
      FUN_0040a244(*(unsigned int *)(temp_v2 + 0x8c));
      *(unsigned int *)(temp_v2 + 0x8c) = 0;
      FUN_0035fc4c();
      FUN_001aea28(DAT_0056fcc0,*(unsigned int *)(*(int *)(temp_v2 + 0x94) + 4));
      if (*(int **)(temp_v2 + 0x94) != (int *)0x0) {
        (**(romwright_code **)(**(int **)(temp_v2 + 0x94) + 4))();
        *(unsigned int *)(temp_v2 + 0x94) = 0;
      }
      if (*(int **)(temp_v2 + 0x9c) != (int *)0x0) {
        (**(romwright_code **)(**(int **)(temp_v2 + 0x9c) + 4))();
        *(unsigned int *)(temp_v2 + 0x9c) = 0;
      }
      FUN_002f1908();
      temp_v6 = DAT_0057f2c4;
      *(unsigned int *)(DAT_0057f2c4 + 4) = 8;
      *(unsigned int *)(temp_v6 + 8) = 0;
    }
  }
  *(int *)(temp_v2 + 8) = *(int *)(temp_v2 + 8) + 1;
  return 0;
}
