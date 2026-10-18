/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c5f60` (_code @ 0x2c5f60, 0x21c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
#ifndef ROMWRIGHT_CARRY_4_DEFINED
#define ROMWRIGHT_CARRY_4_DEFINED
#define romwright_carry_4(left, right) ((unsigned char)((unsigned long long)(unsigned int)(left) + (unsigned long long)(unsigned int)(right) > 0xffffffffULL))
#endif
#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
extern int FUN_001008c8(short *, char, int);
/* Supplied declaration required: FUN_00100a70. */
extern long long FUN_001527b4(void);
/* Supplied declaration required: FUN_00155afc. */
/* Supplied declaration required: FUN_002c6614. */
extern unsigned int *FUN_002c6644(void);
extern int FUN_002c66f2(unsigned int, unsigned int, int, int);
/* Supplied declaration required: FUN_002c67dc. */
/* Supplied declaration required: FUN_002c6808. */
extern int FUN_002c6a04(void);
extern int func_0x0014e6f8(int);
extern unsigned long long func_0x0015284c(unsigned int, int, unsigned int, unsigned int *);


/* WARNING: Removing unreachable block (ram,0x002c60fc) */

unsigned int * FUN_002c5f60(unsigned int *param_1,unsigned int *param_2,unsigned int param_3,unsigned int param_4,short *param_5
                   ,unsigned int param_6,unsigned int param_7,int param_8,unsigned int param_9,
                   unsigned int param_10,unsigned int param_11,unsigned int *param_12,int param_13,unsigned int param_14
                   ,unsigned int param_15,int param_16,unsigned int param_17,unsigned int param_18,int param_19,
                   unsigned int *param_20,int param_21,unsigned int param_22)

{
/* irregular: 5 goto(s); irregular input(s): in_stack_00000060; 15 native warning(s); review required */
  char temp_v0;
  unsigned char temp_v1;
  unsigned int *puVar3;
  short *psVar4;
  unsigned int temp_v2;
  char temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  romwright_code *pcVar11;
  int *unaff_r4;
  int unaff_r5;
  unsigned int *puVar12;
  int temp_v11;
  unsigned int *unaff_r6;
  unsigned int *puVar14;
  int unaff_r7;
  char *pcVar15;
  unsigned char temp_v12;
  unsigned char temp_v13;
  unsigned char temp_v14;
  unsigned char temp_v15;
  unsigned long long temp_v16;
  long long temp_v17;
  unsigned int in_stack_00000060;
  short asStack_4 [2];
  
  if (-1 < (int)((unsigned int)param_1 | (unsigned int)param_2)) {
    if ((unsigned int *)((unsigned int)param_1 >> 1) < param_2) {
      if (param_1 < param_2) {
        return (unsigned int *)0x0;
      }
      return (unsigned int *)0x1;
    }
    temp_v8 = 0;
    if (param_2 <= (unsigned int *)((unsigned int)param_1 >> 4)) {
      puVar12 = param_2;
      if (param_2 <= (unsigned int *)((unsigned int)param_1 >> 8)) {
        if ((unsigned int *)((unsigned int)param_1 >> 0xc) < param_2) goto LAB_002c5fec;
        if ((unsigned int *)((unsigned int)param_1 >> 0x10) < param_2) goto LAB_002c5fbc;
        puVar12 = (unsigned int *)((int)param_2 << 8);
        temp_v8 = -0x1000000;
        if (puVar12 <= (unsigned int *)((unsigned int)param_1 >> 0x10)) {
          temp_v8 = -0x10000;
          puVar12 = (unsigned int *)((int)param_2 << 0x10);
        }
        if ((unsigned int *)((unsigned int)param_1 >> 0xc) < puVar12) goto LAB_002c5fec;
        temp_v12 = 0;
        if (puVar12 == (unsigned int *)0x0) {
          return param_1;
        }
        do {
          if (temp_v12) {
            puVar12 = (unsigned int *)((unsigned int)puVar12 >> 8);
          }
LAB_002c5fbc:
          temp_v12 = puVar12 <= (unsigned int *)((unsigned int)param_1 >> 0xf);
          if (temp_v12) {
            param_1 = param_1 + (int)puVar12 * -0x2000;
          }
          temp_v13 = puVar12 <= (unsigned int *)((unsigned int)param_1 >> 0xe);
          if (temp_v13) {
            param_1 = param_1 + (int)puVar12 * -0x1000;
          }
          temp_v14 = puVar12 <= (unsigned int *)((unsigned int)param_1 >> 0xd);
          if (temp_v14) {
            param_1 = param_1 + (int)puVar12 * -0x800;
          }
          temp_v15 = puVar12 <= (unsigned int *)((unsigned int)param_1 >> 0xc);
          if (temp_v15) {
            param_1 = param_1 + (int)puVar12 * -0x400;
          }
          temp_v8 = (((temp_v8 * 2 + (unsigned int)temp_v12) * 2 + (unsigned int)temp_v13) * 2 + (unsigned int)temp_v14) * 2 +
                  (unsigned int)temp_v15;
LAB_002c5fec:
          temp_v12 = puVar12 <= (unsigned int *)((unsigned int)param_1 >> 0xb);
          if (temp_v12) {
            param_1 = param_1 + (int)puVar12 * -0x200;
          }
          temp_v13 = puVar12 <= (unsigned int *)((unsigned int)param_1 >> 10);
          if (temp_v13) {
            param_1 = param_1 + (int)puVar12 * -0x100;
          }
          temp_v14 = puVar12 <= (unsigned int *)((unsigned int)param_1 >> 9);
          if (temp_v14) {
            param_1 = param_1 + (int)puVar12 * -0x80;
          }
          temp_v9 = ((temp_v8 * 2 + (unsigned int)temp_v12) * 2 + (unsigned int)temp_v13) * 2 + (unsigned int)temp_v14;
          temp_v13 = puVar12 <= (unsigned int *)((unsigned int)param_1 >> 8);
          if (temp_v13) {
            param_1 = param_1 + (int)puVar12 * -0x40;
          }
          temp_v8 = temp_v9 * 2 + (unsigned int)temp_v13;
          temp_v12 = 1;
        } while (romwright_carry_4(temp_v9,temp_v9) || romwright_carry_4(temp_v9 * 2,(unsigned int)temp_v13));
      }
      puVar14 = (unsigned int *)0x0;
      if (puVar12 == (unsigned int *)0x0) {
        unaff_r7 = 1;
        unaff_r4 = (int *)0x2c61fc;
        param_5 = (short *)0x0;
      }
      if (param_8 == 0) {
        param_8 = FUN_002c66f2(0,5,temp_v8,((unsigned int)param_1 >> 7) - (int)puVar12);
      }
      while( 1 ) {
        temp_v12 = unaff_r7 == 0;
        unaff_r7 = unaff_r7 - 1;
        if (temp_v12) {
          return (unsigned int *)0xfffffffe;
        }
        temp_v8 = *unaff_r4;
        unaff_r4 = (int *)((int)unaff_r4 + 1);
        temp_v8 = FUN_001008c8(asStack_4,(char)temp_v8,param_8);
        puVar14 = (unsigned int *)((int)puVar14 + 1);
        if (temp_v8 == -1) break;
        if (temp_v8 != -2) {
          if (param_5 != (short *)0x0) {
            *param_5 = asStack_4[0];
          }
          puVar12 = (unsigned int *)0x0;
          if (asStack_4[0] != 0) {
            puVar12 = puVar14;
          }
          return puVar12;
        }
      }
      puVar3 = (unsigned int *)FUN_002c6644();
      *puVar3 = 4;
      return (unsigned int *)0xffffffff;
    }
    temp_v12 = param_2 <= (unsigned int *)((unsigned int)param_1 >> 3);
    if (temp_v12) {
      param_1 = param_1 + (int)param_2 * -2;
    }
    temp_v13 = param_2 <= (unsigned int *)((unsigned int)param_1 >> 2);
    if (temp_v13) {
      param_1 = param_1 + -(int)param_2;
    }
    temp_v14 = param_2 <= (unsigned int *)((unsigned int)param_1 >> 1);
    if (temp_v14) {
      param_1 = (unsigned int *)((int)param_1 + (int)param_2 * -2);
    }
    return (unsigned int *)((((unsigned int)temp_v12 * 2 + (unsigned int)temp_v13) * 2 + (unsigned int)temp_v14) * 2 +
                   (unsigned int)(param_2 <= param_1));
  }
  temp_v9 = (unsigned int)param_2 & 0x80000000;
  if ((int)temp_v9 < 0) {
    param_2 = (unsigned int *)-(int)param_2;
  }
  if (romwright_subpiece_4_1_0((unsigned int)param_1 >> 0x1f,0)) {
    param_1 = (unsigned int *)-(int)param_1;
  }
  puVar12 = param_2;
  if (param_2 <= (unsigned int *)((unsigned int)param_1 >> 4)) {
    if (param_2 <= (unsigned int *)((unsigned int)param_1 >> 8)) {
      puVar12 = (unsigned int *)((int)param_2 << 6);
      temp_v9 = 0xfc000000;
      if (puVar12 <= (unsigned int *)((unsigned int)param_1 >> 8)) {
        puVar12 = (unsigned int *)((int)param_2 << 0xc);
        temp_v9 = 0xfff00000;
        if (puVar12 <= (unsigned int *)((unsigned int)param_1 >> 8)) {
          puVar12 = (unsigned int *)((int)param_2 << 0x12);
          temp_v9 = 0xffffc000;
          if (puVar12 <= (unsigned int *)((unsigned int)param_1 >> 8)) {
            puVar12 = (unsigned int *)((int)param_2 << 0x18);
            temp_v9 = 0xffffff00;
          }
          if (puVar12 == (unsigned int *)0x0) {
            temp_v8 = *(int *)(unaff_r7 + 8);
            if (unaff_r5 <= (int)param_5) {
              param_5 = (short *)0xffffffff;
            }
            param_7 = param_7 & 0xffffff;
            pcVar15 = (char *)((int)&param_7 + 3);
            if (param_16 != -0x80000000) {
              param_21 = 2;
              param_22 = 0x2b;
              if (param_16 < 0) {
                param_16 = -param_16;
                param_22 = 0x2d;
              }
              while ((temp_v11 = param_21, param_21 = param_21 - 1, 0 < temp_v11 || (param_16 != 0))) {
                param_16 = func_0x0014e6f8(param_16);
                pcVar15 = pcVar15 + -1;
                *pcVar15 = temp_v3 + '0';
              }
              pcVar15[-1] = (char)param_22;
              if (*unaff_r4 << 0x14 < 0) {
                temp_v0 = 'E';
              }
              else {
                temp_v0 = 'e';
              }
              pcVar15 = pcVar15 + -2;
              *pcVar15 = temp_v0;
            }
            param_16 = (int)&param_7 + (3 - (int)pcVar15);
            unaff_r4[6] = (unaff_r4[6] -
                          ((unsigned int)(param_20 != (unsigned int *)0x0) + unaff_r5 + ((int)param_5 >> 0x1f) +
                          param_16)) - 1;
            if (-1 < *unaff_r4 << 0x1b) {
              FUN_002c67dc();
            }
            if (param_20 != (unsigned int *)0x0) {
              (*(romwright_code *)unaff_r4[1])(param_20,unaff_r4[2]);
              unaff_r4[8] = unaff_r4[8] + 1;
            }
            if (*unaff_r4 << 0x1b < 0) {
              FUN_002c67dc();
            }
            while (temp_v11 = unaff_r5 - 1, 0 < unaff_r5) {
              if ((temp_v8 >= 0) && (param_19 > temp_v8)) {
                pcVar11 = (romwright_code *)unaff_r4[1];
                temp_v1 = *(unsigned char *)((int)&param_8 + temp_v8);
                temp_v7 = unaff_r4[2];
              }
              else {
                pcVar11 = (romwright_code *)unaff_r4[1];
                temp_v7 = unaff_r4[2];
                temp_v1 = 0x30;
              }
              (*pcVar11)(temp_v1,temp_v7);
              temp_v8 = temp_v8 + 1;
              unaff_r4[8] = unaff_r4[8] + 1;
              param_5 = (short *)((int)param_5 - 1);
              unaff_r5 = temp_v11;
              if (param_5 == (short *)0x0) {
                temp_v11 = FUN_002c6a04();
                (*(romwright_code *)unaff_r4[1])
                          (*(unsigned char *)((int)*(int **)(temp_v11 + 0xc) + **(int **)(temp_v11 + 0xc)),
                           unaff_r4[2]);
                unaff_r4[8] = unaff_r4[8] + 1;
              }
            }
            while (temp_v8 = param_16, param_16 = param_16 - 1, 0 < temp_v8) {
              temp_v0 = *pcVar15;
              pcVar15 = pcVar15 + 1;
              (*(romwright_code *)unaff_r4[1])(temp_v0,unaff_r4[2]);
              unaff_r4[8] = unaff_r4[8] + 1;
            }
            FUN_002c6808();
            return (unsigned int *)0x2;
          }
        }
      }
    }
    temp_v12 = puVar12 <= (unsigned int *)((unsigned int)param_1 >> 7);
    if (temp_v12) {
      param_1 = param_1 + (int)puVar12 * -0x20;
    }
    temp_v13 = puVar12 <= (unsigned int *)((unsigned int)param_1 >> 6);
    if (temp_v13) {
      param_1 = param_1 + (int)puVar12 * -0x10;
    }
    temp_v14 = puVar12 <= (unsigned int *)((unsigned int)param_1 >> 5);
    if (temp_v14) {
      param_1 = param_1 + (int)puVar12 * -8;
    }
    temp_v15 = puVar12 <= (unsigned int *)((unsigned int)param_1 >> 4);
    if (temp_v15) {
      param_1 = param_1 + (int)puVar12 * -4;
    }
    temp_v9 = (((temp_v9 * 2 + (unsigned int)temp_v12) * 2 + (unsigned int)temp_v13) * 2 + (unsigned int)temp_v14) * 2 + (unsigned int)temp_v15;
  }
  temp_v12 = puVar12 <= (unsigned int *)((unsigned int)param_1 >> 3);
  if (temp_v12) {
    param_1 = param_1 + (int)puVar12 * -2;
  }
  param_15 = (unsigned int)param_1 & ((int)(puVar12 + 8) * 0x400000);
  if ((int)(temp_v9 * 2 + (unsigned int)temp_v12) < 0) {
    param_15 = (param_15 * 5 >> 1) & ((int)(puVar12 + 8) * 0x400000);
  }
  param_15 = param_15 >> 0x16;
  if (param_15 >= 2) {
    param_15 = 0xffffffff;
  }
  if (unaff_r7 == 0 && param_13 == 0) {
    if (in_stack_00000060 != 1) {
      for (temp_v8 = 0; temp_v8 < (int)unaff_r6; temp_v8 = temp_v8 + 1) {
        *(char *)((int)unaff_r4 + temp_v8) = '0';
      }
      temp_v9 = 0;
      puVar12 = unaff_r6;
    }
    else {
      puVar12 = (unsigned int *)0x0;
      temp_v9 = ~(unsigned int)unaff_r6;
    }
    *(char *)((int)unaff_r4 + (int)puVar12) = '\0';
    param_20[2] = in_stack_00000060;
    *param_20 = temp_v9;
    param_20[1] = (unsigned int)puVar12;
    return puVar12;
  }
  temp_v9 = (unaff_r5 - 0x3ff) * 0x4d10 >> 0x10;
  do {
    if (in_stack_00000060 != 0) {
      temp_v8 = -(int)unaff_r6;
    }
    else {
      temp_v8 = (temp_v9 - (int)unaff_r6) + 1;
    }
    temp_v10 = param_15;
    if (0 < temp_v8) {
      temp_v10 = -param_15;
    }
    temp_v11 = temp_v8;
    if (temp_v8 < 0) {
      temp_v11 = -temp_v8;
    }
    FUN_00100a70(&param_16,temp_v11,temp_v10);
    param_8 = param_16;
    param_9 = param_17;
    param_10 = param_18;
    temp_v6 = param_18;
    temp_v16 = func_0x0015284c(param_14,param_13,param_18,&param_11);
    param_6 = (unsigned int)((unsigned long long)temp_v16 >> 0x20);
    param_5 = (short *)((int)temp_v16 - 0x201f);
    psVar4 = (short *)register0x00000054;
    temp_v10 = param_15;
    param_7 = temp_v6;
    if (temp_v8 >= 1) {
      param_8 = param_8 + 0x201f;
      FUN_00155afc();
      param_6 = temp_v4;
    }
    else {
      param_8 = param_8 - 0x201f;
      FUN_002c6614();
      param_6 = temp_v5;
    }
    temp_v2 = temp_v10;
    temp_v6 = param_6;
    if (((unsigned int)psVar4 & 0xffff) != 0) {
      temp_v2 = 0xffffffff;
      temp_v6 = 0x7fffffff;
    }
    temp_v17 = romwright_piece_4_4(temp_v6,temp_v2);
    param_7 = temp_v10;
    if (in_stack_00000060 != 0) {
      param_5 = (short *)0x0;
      for (puVar12 = (unsigned int *)0x0;
          (temp_v10 = (unsigned int)temp_v17 | (unsigned int)((unsigned long long)temp_v17 >> 0x20), temp_v10 != 0 &&
          ((int)puVar12 < 0x11)); puVar12 = (unsigned int *)((int)puVar12 + 1)) {
        temp_v17 = FUN_001527b4();
        *(char *)((int)unaff_r4 + (int)puVar12) = (char)temp_v10 + '0';
      }
      if (temp_v17 != 0) {
        if (param_5 != (short *)0x0) goto code_r0x002c637e;
        unaff_r6 = (unsigned int *)0x11;
        in_stack_00000060 = 0;
        continue;
      }
      puVar14 = puVar12;
      for (temp_v8 = 0; puVar14 = (unsigned int *)((int)puVar14 - 1), temp_v8 < (int)puVar14; temp_v8 = temp_v8 + 1)
      {
        temp_v0 = *(char *)((int)unaff_r4 + temp_v8);
        *(char *)((int)unaff_r4 + temp_v8) = *(char *)((int)unaff_r4 + (int)puVar14);
        *(char *)((int)unaff_r4 + (int)puVar14) = temp_v0;
      }
      param_11 = (int)puVar12 + (-1 - (int)unaff_r6);
      param_12 = puVar12;
code_r0x002c637e:
      *(char *)((int)unaff_r4 + (int)param_12) = '\0';
      param_20[1] = (unsigned int)param_12;
      *param_20 = param_11;
      param_20[2] = in_stack_00000060;
      return param_20;
    }
    temp_v8 = 0;
    param_5 = psVar4;
    puVar12 = unaff_r6;
    while (puVar12 = (unsigned int *)((int)puVar12 - 1), -1 < (int)puVar12) {
      temp_v17 = FUN_001527b4();
      temp_v8 = temp_v8 + 0x30;
      *(char *)((int)unaff_r4 + (int)puVar12) = (char)temp_v8;
    }
    temp_v12 = 1;
    if (temp_v17 != 0) {
      temp_v12 = 0;
      temp_v9 = temp_v9 + 1;
    }
    else if ((char)*unaff_r4 == '0') {
      temp_v12 = 0;
      temp_v9 = temp_v9 - 1;
    }
    param_11 = temp_v9;
    param_12 = unaff_r6;
    if (temp_v12) goto code_r0x002c637e;
  } while( 1 );
}
