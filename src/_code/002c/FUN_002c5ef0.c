/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c5ef0` (_code @ 0x2c5ef0, 0x70 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

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
extern int FUN_001008c8(unsigned int *, char, int);
/* Supplied declaration required: FUN_00100a70. */
extern long long FUN_001527b4(void);
/* Supplied declaration required: FUN_00155afc. */
extern int FUN_002adc88(void);
/* Supplied declaration required: FUN_002b63c0. */
/* Supplied declaration required: FUN_002c6614. */
extern unsigned int *FUN_002c6644(void);
extern int FUN_002c66f2(unsigned int, unsigned int, int, int);
/* Supplied declaration required: FUN_002c67dc. */
/* Supplied declaration required: FUN_002c6808. */
extern int FUN_002c6a04(void);
extern int func_0x0014e6f8(int);
extern unsigned long long func_0x0015284c(unsigned int, int, unsigned int, unsigned int *);


/* WARNING: Removing unreachable block (ram,0x002c60fc) */

unsigned int * FUN_002c5ef0(void)

{
/* irregular: 5 goto(s); irregular input(s): in_lr, in_stack_00000000, in_stack_00000004, in_stack_00000008, in_stack_0000000c, in_stack_00000010, in_stack_00000014, in_stack_00000018, in_stack_0000001c, in_stack_00000020, in_stack_00000024, in_stack_00000028, in_stack_0000002c, in_stack_00000030, in_stack_00000034, in_stack_00000038, in_stack_0000003c, in_stack_00000040, in_stack_00000044, in_stack_00000060; 16 native warning(s); review required */
  char temp_v0;
  unsigned char temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int *puVar5;
  unsigned int *puVar6;
  unsigned short *puVar7;
  unsigned int temp_v4;
  char temp_v5;
  unsigned int *puVar9;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  int temp_v9;
  romwright_code *pcVar12;
  int *unaff_r4;
  unsigned int temp_v10;
  int unaff_r5;
  unsigned int *puVar14;
  unsigned int *unaff_r6;
  int unaff_r7;
  int temp_v11;
  char *pcVar16;
  unsigned int in_lr;
  unsigned char temp_v12;
  unsigned char temp_v13;
  unsigned char temp_v14;
  unsigned char temp_v15;
  unsigned long long temp_v16;
  long long temp_v17;
  unsigned short *in_stack_00000000;
  unsigned int in_stack_00000004;
  unsigned int in_stack_00000008;
  int in_stack_0000000c;
  unsigned int in_stack_00000010;
  unsigned int in_stack_00000014;
  unsigned int in_stack_00000018;
  unsigned int *in_stack_0000001c;
  int in_stack_00000020;
  unsigned int in_stack_00000024;
  unsigned int in_stack_00000028;
  int in_stack_0000002c;
  unsigned int in_stack_00000030;
  unsigned int in_stack_00000034;
  int in_stack_00000038;
  unsigned int *in_stack_0000003c;
  int in_stack_00000040;
  unsigned int in_stack_00000044;
  unsigned int in_stack_00000060;
  unsigned int uStack_4;
  
  puVar14 = (unsigned int *)0x0;
  temp_v11 = 0;
  temp_v10 = 0;
  uStack_4 = in_lr;
  do {
    temp_v2 = temp_v10 & 0xffff;
    FUN_002b63c0();
    if ((temp_v2 != 0) && ((*(unsigned char *)(temp_v2 + 7) & 0x80) != 0)) {
      puVar14 = (unsigned int *)((int)puVar14 + 1);
      temp_v3 = FUN_002adc88();
      if ((*(unsigned char *)(temp_v3 + (temp_v10 & 0xffff) * 4 + 0x200) & 8) != 0) {
        temp_v11 = temp_v11 + 1;
      }
    }
    temp_v10 = temp_v10 + 1;
  } while ((int)temp_v10 < 400);
  puVar5 = (unsigned int *)(temp_v11 * 100);
  if (-1 < (int)((unsigned int)puVar5 | (unsigned int)puVar14)) {
    if ((unsigned int *)((unsigned int)puVar5 >> 1) < puVar14) {
      if (puVar5 < puVar14) {
        return (unsigned int *)0x0;
      }
      return (unsigned int *)0x1;
    }
    temp_v11 = 0;
    if (puVar14 <= (unsigned int *)((unsigned int)puVar5 >> 4)) {
      puVar9 = puVar14;
      if (puVar14 <= (unsigned int *)((unsigned int)puVar5 >> 8)) {
        if ((unsigned int *)((unsigned int)puVar5 >> 0xc) < puVar14) goto LAB_002c5fec;
        if ((unsigned int *)((unsigned int)puVar5 >> 0x10) < puVar14) goto LAB_002c5fbc;
        puVar9 = (unsigned int *)((int)puVar14 << 8);
        temp_v11 = -0x1000000;
        if (puVar9 <= (unsigned int *)((unsigned int)puVar5 >> 0x10)) {
          temp_v11 = -0x10000;
          puVar9 = (unsigned int *)((int)puVar14 << 0x10);
        }
        if ((unsigned int *)((unsigned int)puVar5 >> 0xc) < puVar9) goto LAB_002c5fec;
        temp_v12 = 0;
        if (puVar9 == (unsigned int *)0x0) {
          return puVar5;
        }
        do {
          if (temp_v12) {
            puVar9 = (unsigned int *)((unsigned int)puVar9 >> 8);
          }
LAB_002c5fbc:
          temp_v12 = puVar9 <= (unsigned int *)((unsigned int)puVar5 >> 0xf);
          if (temp_v12) {
            puVar5 = puVar5 + (int)puVar9 * -0x2000;
          }
          temp_v13 = puVar9 <= (unsigned int *)((unsigned int)puVar5 >> 0xe);
          if (temp_v13) {
            puVar5 = puVar5 + (int)puVar9 * -0x1000;
          }
          temp_v14 = puVar9 <= (unsigned int *)((unsigned int)puVar5 >> 0xd);
          if (temp_v14) {
            puVar5 = puVar5 + (int)puVar9 * -0x800;
          }
          temp_v15 = puVar9 <= (unsigned int *)((unsigned int)puVar5 >> 0xc);
          if (temp_v15) {
            puVar5 = puVar5 + (int)puVar9 * -0x400;
          }
          temp_v11 = (((temp_v11 * 2 + (unsigned int)temp_v12) * 2 + (unsigned int)temp_v13) * 2 + (unsigned int)temp_v14) * 2 +
                   (unsigned int)temp_v15;
LAB_002c5fec:
          temp_v12 = puVar9 <= (unsigned int *)((unsigned int)puVar5 >> 0xb);
          if (temp_v12) {
            puVar5 = puVar5 + (int)puVar9 * -0x200;
          }
          temp_v13 = puVar9 <= (unsigned int *)((unsigned int)puVar5 >> 10);
          if (temp_v13) {
            puVar5 = puVar5 + (int)puVar9 * -0x100;
          }
          temp_v14 = puVar9 <= (unsigned int *)((unsigned int)puVar5 >> 9);
          if (temp_v14) {
            puVar5 = puVar5 + (int)puVar9 * -0x80;
          }
          temp_v10 = ((temp_v11 * 2 + (unsigned int)temp_v12) * 2 + (unsigned int)temp_v13) * 2 + (unsigned int)temp_v14;
          temp_v13 = puVar9 <= (unsigned int *)((unsigned int)puVar5 >> 8);
          if (temp_v13) {
            puVar5 = puVar5 + (int)puVar9 * -0x40;
          }
          temp_v11 = temp_v10 * 2 + (unsigned int)temp_v13;
          temp_v12 = 1;
        } while (romwright_carry_4(temp_v10,temp_v10) || romwright_carry_4(temp_v10 * 2,(unsigned int)temp_v13));
      }
      puVar14 = (unsigned int *)0x0;
      if (puVar9 == (unsigned int *)0x0) {
        unaff_r7 = 1;
        unaff_r4 = (int *)0x2c61fc;
        in_stack_00000000 = (unsigned short *)0x0;
      }
      if (in_stack_0000000c == 0) {
        in_stack_0000000c = FUN_002c66f2(0,5,temp_v11,((unsigned int)puVar5 >> 7) - (int)puVar9);
      }
      while( 1 ) {
        temp_v12 = unaff_r7 == 0;
        unaff_r7 = unaff_r7 - 1;
        if (temp_v12) {
          return (unsigned int *)0xfffffffe;
        }
        temp_v11 = *unaff_r4;
        unaff_r4 = (int *)((int)unaff_r4 + 1);
        temp_v11 = FUN_001008c8(&uStack_4,(char)temp_v11,in_stack_0000000c);
        puVar14 = (unsigned int *)((int)puVar14 + 1);
        if (temp_v11 == -1) break;
        if (temp_v11 != -2) {
          if (in_stack_00000000 != (unsigned short *)0x0) {
            *in_stack_00000000 = (unsigned short)uStack_4;
          }
          puVar5 = (unsigned int *)0x0;
          if ((uStack_4 & 0xffff) != 0) {
            puVar5 = puVar14;
          }
          return puVar5;
        }
      }
      puVar6 = (unsigned int *)FUN_002c6644();
      *puVar6 = 4;
      return (unsigned int *)0xffffffff;
    }
    temp_v12 = puVar14 <= (unsigned int *)((unsigned int)puVar5 >> 3);
    if (temp_v12) {
      puVar5 = puVar5 + (int)puVar14 * -2;
    }
    temp_v13 = puVar14 <= (unsigned int *)((unsigned int)puVar5 >> 2);
    if (temp_v13) {
      puVar5 = puVar5 + -(int)puVar14;
    }
    temp_v14 = puVar14 <= (unsigned int *)((unsigned int)puVar5 >> 1);
    if (temp_v14) {
      puVar5 = (unsigned int *)((int)puVar5 + (int)puVar14 * -2);
    }
    return (unsigned int *)((((unsigned int)temp_v12 * 2 + (unsigned int)temp_v13) * 2 + (unsigned int)temp_v14) * 2 +
                   (unsigned int)(puVar14 <= puVar5));
  }
  temp_v10 = (unsigned int)puVar14 & 0x80000000;
  if ((int)temp_v10 < 0) {
    puVar14 = (unsigned int *)-(int)puVar14;
  }
  if (romwright_subpiece_4_1_0((unsigned int)puVar5 >> 0x1f,0)) {
    puVar5 = (unsigned int *)(temp_v11 * -100);
  }
  puVar9 = puVar14;
  if (puVar14 <= (unsigned int *)((unsigned int)puVar5 >> 4)) {
    if (puVar14 <= (unsigned int *)((unsigned int)puVar5 >> 8)) {
      puVar9 = (unsigned int *)((int)puVar14 << 6);
      temp_v10 = 0xfc000000;
      if (puVar9 <= (unsigned int *)((unsigned int)puVar5 >> 8)) {
        puVar9 = (unsigned int *)((int)puVar14 << 0xc);
        temp_v10 = 0xfff00000;
        if (puVar9 <= (unsigned int *)((unsigned int)puVar5 >> 8)) {
          puVar9 = (unsigned int *)((int)puVar14 << 0x12);
          temp_v10 = 0xffffc000;
          if (puVar9 <= (unsigned int *)((unsigned int)puVar5 >> 8)) {
            puVar9 = (unsigned int *)((int)puVar14 << 0x18);
            temp_v10 = 0xffffff00;
          }
          if (puVar9 == (unsigned int *)0x0) {
            temp_v11 = *(int *)(unaff_r7 + 8);
            if (unaff_r5 <= (int)in_stack_00000000) {
              in_stack_00000000 = (unsigned short *)0xffffffff;
            }
            in_stack_00000008 = in_stack_00000008 & 0xffffff;
            pcVar16 = (char *)((int)&in_stack_00000008 + 3);
            if (in_stack_0000002c != -0x80000000) {
              in_stack_00000040 = 2;
              in_stack_00000044 = 0x2b;
              if (in_stack_0000002c < 0) {
                in_stack_0000002c = -in_stack_0000002c;
                in_stack_00000044 = 0x2d;
              }
              while ((temp_v3 = in_stack_00000040, in_stack_00000040 = in_stack_00000040 - 1,
                     0 < temp_v3 || (in_stack_0000002c != 0))) {
                in_stack_0000002c = func_0x0014e6f8(in_stack_0000002c);
                pcVar16 = pcVar16 + -1;
                *pcVar16 = temp_v5 + '0';
              }
              pcVar16[-1] = (char)in_stack_00000044;
              if (*unaff_r4 << 0x14 < 0) {
                temp_v0 = 'E';
              }
              else {
                temp_v0 = 'e';
              }
              pcVar16 = pcVar16 + -2;
              *pcVar16 = temp_v0;
            }
            in_stack_0000002c = (int)&in_stack_00000008 + (3 - (int)pcVar16);
            unaff_r4[6] = (unaff_r4[6] -
                          ((unsigned int)(in_stack_0000003c != (unsigned int *)0x0) + unaff_r5 +
                           ((int)in_stack_00000000 >> 0x1f) + in_stack_0000002c)) - 1;
            if (-1 < *unaff_r4 << 0x1b) {
              FUN_002c67dc(unaff_r4);
            }
            if (in_stack_0000003c != (unsigned int *)0x0) {
              (*(romwright_code *)unaff_r4[1])(in_stack_0000003c,unaff_r4[2]);
              unaff_r4[8] = unaff_r4[8] + 1;
            }
            if (*unaff_r4 << 0x1b < 0) {
              FUN_002c67dc(unaff_r4);
            }
            while (temp_v3 = unaff_r5 - 1, 0 < unaff_r5) {
              if ((temp_v11 >= 0) && (in_stack_00000038 > temp_v11)) {
                pcVar12 = (romwright_code *)unaff_r4[1];
                temp_v1 = *(unsigned char *)((int)&in_stack_0000000c + temp_v11);
                temp_v9 = unaff_r4[2];
              }
              else {
                pcVar12 = (romwright_code *)unaff_r4[1];
                temp_v9 = unaff_r4[2];
                temp_v1 = 0x30;
              }
              (*pcVar12)(temp_v1,temp_v9);
              temp_v11 = temp_v11 + 1;
              unaff_r4[8] = unaff_r4[8] + 1;
              in_stack_00000000 = (unsigned short *)((int)in_stack_00000000 - 1);
              unaff_r5 = temp_v3;
              if (in_stack_00000000 == (unsigned short *)0x0) {
                temp_v3 = FUN_002c6a04();
                (*(romwright_code *)unaff_r4[1])
                          (*(unsigned char *)((int)*(int **)(temp_v3 + 0xc) + **(int **)(temp_v3 + 0xc)),
                           unaff_r4[2]);
                unaff_r4[8] = unaff_r4[8] + 1;
              }
            }
            while (temp_v11 = in_stack_0000002c, in_stack_0000002c = in_stack_0000002c - 1, 0 < temp_v11
                  ) {
              temp_v0 = *pcVar16;
              pcVar16 = pcVar16 + 1;
              (*(romwright_code *)unaff_r4[1])(temp_v0,unaff_r4[2]);
              unaff_r4[8] = unaff_r4[8] + 1;
            }
            FUN_002c6808(unaff_r4);
            return (unsigned int *)0x2;
          }
        }
      }
    }
    temp_v12 = puVar9 <= (unsigned int *)((unsigned int)puVar5 >> 7);
    if (temp_v12) {
      puVar5 = puVar5 + (int)puVar9 * -0x20;
    }
    temp_v13 = puVar9 <= (unsigned int *)((unsigned int)puVar5 >> 6);
    if (temp_v13) {
      puVar5 = puVar5 + (int)puVar9 * -0x10;
    }
    temp_v14 = puVar9 <= (unsigned int *)((unsigned int)puVar5 >> 5);
    if (temp_v14) {
      puVar5 = puVar5 + (int)puVar9 * -8;
    }
    temp_v15 = puVar9 <= (unsigned int *)((unsigned int)puVar5 >> 4);
    if (temp_v15) {
      puVar5 = puVar5 + (int)puVar9 * -4;
    }
    temp_v10 = (((temp_v10 * 2 + (unsigned int)temp_v12) * 2 + (unsigned int)temp_v13) * 2 + (unsigned int)temp_v14) * 2 +
             (unsigned int)temp_v15;
  }
  temp_v12 = puVar9 <= (unsigned int *)((unsigned int)puVar5 >> 3);
  if (temp_v12) {
    puVar5 = puVar5 + (int)puVar9 * -2;
  }
  in_stack_00000028 = (unsigned int)puVar5 & ((int)(puVar9 + 8) * 0x400000);
  if ((int)(temp_v10 * 2 + (unsigned int)temp_v12) < 0) {
    in_stack_00000028 = (in_stack_00000028 * 5 >> 1) & ((int)(puVar9 + 8) * 0x400000);
  }
  in_stack_00000028 = in_stack_00000028 >> 0x16;
  if (in_stack_00000028 >= 2) {
    in_stack_00000028 = 0xffffffff;
  }
  if (unaff_r7 == 0 && in_stack_00000020 == 0) {
    if (in_stack_00000060 != 1) {
      for (temp_v11 = 0; temp_v11 < (int)unaff_r6; temp_v11 = temp_v11 + 1) {
        *(char *)((int)unaff_r4 + temp_v11) = '0';
      }
      temp_v10 = 0;
      puVar14 = unaff_r6;
    }
    else {
      puVar14 = (unsigned int *)0x0;
      temp_v10 = ~(unsigned int)unaff_r6;
    }
    *(char *)((int)unaff_r4 + (int)puVar14) = '\0';
    in_stack_0000003c[2] = in_stack_00000060;
    *in_stack_0000003c = temp_v10;
    in_stack_0000003c[1] = (unsigned int)puVar14;
    return puVar14;
  }
  temp_v10 = (unaff_r5 - 0x3ff) * 0x4d10 >> 0x10;
  do {
    if (in_stack_00000060 != 0) {
      temp_v11 = -(int)unaff_r6;
    }
    else {
      temp_v11 = (temp_v10 - (int)unaff_r6) + 1;
    }
    temp_v2 = in_stack_00000028;
    if (0 < temp_v11) {
      temp_v2 = -in_stack_00000028;
    }
    temp_v3 = temp_v11;
    if (temp_v11 < 0) {
      temp_v3 = -temp_v11;
    }
    FUN_00100a70(&in_stack_0000002c,temp_v3,temp_v2);
    in_stack_0000000c = in_stack_0000002c;
    in_stack_00000010 = in_stack_00000030;
    in_stack_00000014 = in_stack_00000034;
    temp_v8 = in_stack_00000034;
    temp_v16 = func_0x0015284c(in_stack_00000024,in_stack_00000020,in_stack_00000034,
                             &in_stack_00000018);
    in_stack_00000004 = (unsigned int)((unsigned long long)temp_v16 >> 0x20);
    in_stack_00000000 = (unsigned short *)((int)temp_v16 - 0x201f);
    puVar7 = (unsigned short *)register0x00000054;
    temp_v2 = in_stack_00000028;
    in_stack_00000008 = temp_v8;
    if (temp_v11 >= 1) {
      in_stack_0000000c = in_stack_0000000c + 0x201f;
      FUN_00155afc(&in_stack_00000000,&in_stack_0000000c);
      in_stack_00000004 = temp_v6;
    }
    else {
      in_stack_0000000c = in_stack_0000000c - 0x201f;
      FUN_002c6614(&in_stack_00000000,&in_stack_0000000c);
      in_stack_00000004 = temp_v7;
    }
    temp_v4 = temp_v2;
    temp_v8 = in_stack_00000004;
    if (((unsigned int)puVar7 & 0xffff) != 0) {
      temp_v4 = 0xffffffff;
      temp_v8 = 0x7fffffff;
    }
    temp_v17 = romwright_piece_4_4(temp_v8,temp_v4);
    in_stack_00000008 = temp_v2;
    if (in_stack_00000060 != 0) {
      in_stack_00000000 = (unsigned short *)0x0;
      for (puVar14 = (unsigned int *)0x0;
          (temp_v2 = (unsigned int)temp_v17 | (unsigned int)((unsigned long long)temp_v17 >> 0x20), temp_v2 != 0 &&
          ((int)puVar14 < 0x11)); puVar14 = (unsigned int *)((int)puVar14 + 1)) {
        temp_v17 = FUN_001527b4();
        *(char *)((int)unaff_r4 + (int)puVar14) = (char)temp_v2 + '0';
      }
      if (temp_v17 != 0) {
        if (in_stack_00000000 != (unsigned short *)0x0) goto code_r0x002c637e;
        unaff_r6 = (unsigned int *)0x11;
        in_stack_00000060 = 0;
        continue;
      }
      puVar5 = puVar14;
      for (temp_v11 = 0; puVar5 = (unsigned int *)((int)puVar5 - 1), temp_v11 < (int)puVar5; temp_v11 = temp_v11 + 1
          ) {
        temp_v0 = *(char *)((int)unaff_r4 + temp_v11);
        *(char *)((int)unaff_r4 + temp_v11) = *(char *)((int)unaff_r4 + (int)puVar5);
        *(char *)((int)unaff_r4 + (int)puVar5) = temp_v0;
      }
      in_stack_00000018 = (int)puVar14 + (-1 - (int)unaff_r6);
      in_stack_0000001c = puVar14;
code_r0x002c637e:
      *(char *)((int)unaff_r4 + (int)in_stack_0000001c) = '\0';
      in_stack_0000003c[1] = (unsigned int)in_stack_0000001c;
      *in_stack_0000003c = in_stack_00000018;
      in_stack_0000003c[2] = in_stack_00000060;
      return in_stack_0000003c;
    }
    temp_v11 = 0;
    in_stack_00000000 = puVar7;
    puVar14 = unaff_r6;
    while (puVar14 = (unsigned int *)((int)puVar14 - 1), -1 < (int)puVar14) {
      temp_v17 = FUN_001527b4();
      temp_v11 = temp_v11 + 0x30;
      *(char *)((int)unaff_r4 + (int)puVar14) = (char)temp_v11;
    }
    temp_v12 = 1;
    if (temp_v17 != 0) {
      temp_v12 = 0;
      temp_v10 = temp_v10 + 1;
    }
    else if ((char)*unaff_r4 == '0') {
      temp_v12 = 0;
      temp_v10 = temp_v10 - 1;
    }
    in_stack_00000018 = temp_v10;
    in_stack_0000001c = unaff_r6;
    if (temp_v12) goto code_r0x002c637e;
  } while( 1 );
}
