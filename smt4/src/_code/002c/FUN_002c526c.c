/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c526c` (_code @ 0x2c526c, 0x68 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern unsigned char LAB_002c5b84; /* 0x2c5b84 */
extern signed char DAT_0044e7a8; /* 0x44e7a8 */
extern unsigned char bRam1ff80014; /* 0x1ff80014 */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Unsupported intrinsic, declaration required: hasExclusiveAccess (CALLOTHER). */
#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_00100a70. */
/* Supplied declaration required: FUN_00155afc. */
/* Supplied declaration required: FUN_002be624. */
extern int FUN_002c3124(unsigned int *, unsigned char *, unsigned char);
/* Supplied declaration required: FUN_002c6614. */
extern unsigned long long func_0x0015284c(unsigned int, int, unsigned int, unsigned int *);
/* Supplied declaration required: func_0x006c5b7c. */
/* Supplied declaration required: func_0x006c5b80. */
extern long long ll_udiv10(void);
/* Supplied declaration required: nn_os_SimpleLock_Initialize. */


/* WARNING: Control flow encountered bad instruction data */

unsigned int * FUN_002c526c(unsigned int param_1)

{
/* irregular: 2 goto(s); irregular input(s): in_lr, in_stack_00000000, in_stack_00000004, in_stack_00000008, in_stack_0000000c, in_stack_00000010, in_stack_00000014, in_stack_00000018, in_stack_0000001c, in_stack_00000020, in_stack_00000024, in_stack_00000028, in_stack_0000002c, in_stack_00000030, in_stack_00000034, in_stack_0000003c, in_stack_00000060; 22 native warning(s); review required */
  char temp_v0;
  unsigned char *puVar2;
  unsigned int temp_v1;
  unsigned int *puVar4;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  unsigned short *puVar9;
  unsigned int *puVar10;
  unsigned int temp_v8;
  char *unaff_r4;
  unsigned int unaff_r5;
  unsigned int *puVar12;
  unsigned int *unaff_r6;
  unsigned int *unaff_r7;
  int in_lr;
  unsigned char temp_v9;
  unsigned char temp_v10;
  unsigned char temp_v11;
  unsigned char temp_v12;
  unsigned long long temp_v13;
  long long temp_v14;
  unsigned char *in_stack_00000000;
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
  unsigned int *in_stack_0000003c;
  unsigned int in_stack_00000060;
  unsigned char temp_v15 [4];
  
  temp_v3 = param_1 >> 0x1b;
  if ((param_1 & 0x80000000) != 0) {
    temp_v3 = temp_v3 - 0x20;
  }
  puVar9 = (unsigned short *)((bRam1ff80014 & 1) | (int)DAT_0044e7a8);
  if (puVar9 == (unsigned short *)0x0) {
    FUN_002be624(&in_stack_00000000,&LAB_002c5b84);
    temp_v9 = (unaff_r5 & 1) != 0;
    if ((unaff_r5 & 2) != 0) {
      temp_v9 = temp_v9 | 2;
    }
    temp_v7 = FUN_002c3124((unsigned int *)&in_stack_00000000,temp_v15,temp_v9);
    if (temp_v7 != 0) {
      puVar10 = *(unsigned int **)(temp_v7 + 0x24);
      *(int *)(*(int *)(temp_v7 + 0x1c) * 2) = temp_v7;
      func_0x006c5b7c(*puVar10,puVar10[1],puVar10[2],puVar10[3]);
      func_0x006c5b80();
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *unaff_r7 = 0;
    software_interrupt(99);
    return (unsigned int *)0x0;
  }
  if (temp_v3 == 0xfffffff9 || temp_v3 == 1) {
    *puVar9 = (short)param_1;
    nn_os_SimpleLock_Initialize((int)unaff_r7 - 3);
    if (unaff_r5 == 0) {
      temp_v2 = 0xffffffff;
    }
    else {
      temp_v2 = 0xfffffffe;
    }
    do {
      puVar12 = *(unsigned int **)unaff_r4;
      temp_v10 = (unsigned char)hasExclusiveAccess(unaff_r4);
    } while (!temp_v10);
    *(unsigned int *)unaff_r4 = temp_v2;
    return puVar12;
  }
  param_1 = (int)param_1 >> 0x20;
  temp_v10 = temp_v3 <= param_1 >> 5;
  if (temp_v10) {
    param_1 = param_1 + temp_v3 * -0x20;
  }
  temp_v11 = temp_v3 <= param_1 >> 4;
  if (temp_v11) {
    param_1 = param_1 + temp_v3 * -0x10;
  }
  temp_v12 = temp_v3 <= param_1 >> 3;
  if (temp_v12) {
    param_1 = param_1 + temp_v3 * -8;
  }
  temp_v3 = (temp_v3 + 0x20) * 0x400000;
  param_1 = param_1 & temp_v3;
  if ((int)((((in_lr * 2 + (unsigned int)(0xffffffdf < (unsigned int)(int)DAT_0044e7a8)) * 2 + (unsigned int)temp_v10) * 2 +
            (unsigned int)temp_v11) * 2 + (unsigned int)temp_v12) < 0) {
    param_1 = (param_1 * 5 >> 1) & temp_v3;
  }
  in_stack_00000028 = param_1 >> 0x16;
  if (in_stack_00000028 >= 2) {
    in_stack_00000028 = 0xffffffff;
  }
  if (unaff_r7 == (unsigned int *)0x0 && in_stack_00000020 == 0) {
    if (in_stack_00000060 != 1) {
      for (temp_v7 = 0; temp_v7 < (int)unaff_r6; temp_v7 = temp_v7 + 1) {
        unaff_r4[temp_v7] = '0';
      }
      temp_v3 = 0;
      puVar12 = unaff_r6;
    }
    else {
      puVar12 = (unsigned int *)0x0;
      temp_v3 = ~(unsigned int)unaff_r6;
    }
    unaff_r4[(int)puVar12] = '\0';
    in_stack_0000003c[2] = in_stack_00000060;
    *in_stack_0000003c = temp_v3;
    in_stack_0000003c[1] = (unsigned int)puVar12;
    return puVar12;
  }
  temp_v3 = (int)((unaff_r5 - 0x3ff) * 0x4d10) >> 0x10;
  do {
    if (in_stack_00000060 != 0) {
      temp_v7 = -(int)unaff_r6;
    }
    else {
      temp_v7 = (temp_v3 - (int)unaff_r6) + 1;
    }
    temp_v8 = in_stack_00000028;
    if (0 < temp_v7) {
      temp_v8 = -in_stack_00000028;
    }
    temp_v4 = temp_v7;
    if (temp_v7 < 0) {
      temp_v4 = -temp_v7;
    }
    FUN_00100a70(&in_stack_0000002c,temp_v4,temp_v8);
    in_stack_0000000c = in_stack_0000002c;
    in_stack_00000010 = in_stack_00000030;
    in_stack_00000014 = in_stack_00000034;
    temp_v2 = in_stack_00000034;
    temp_v13 = func_0x0015284c(in_stack_00000024,in_stack_00000020,in_stack_00000034,
                             &in_stack_00000018);
    in_stack_00000004 = (unsigned int)((unsigned long long)temp_v13 >> 0x20);
    in_stack_00000000 = (unsigned char *)((int)temp_v13 - 0x201f);
    puVar2 = (unsigned char *)register0x00000054;
    temp_v8 = in_stack_00000028;
    in_stack_00000008 = temp_v2;
    if (temp_v7 >= 1) {
      in_stack_0000000c = in_stack_0000000c + 0x201f;
      FUN_00155afc(&in_stack_00000000,&in_stack_0000000c);
      in_stack_00000004 = temp_v5;
    }
    else {
      in_stack_0000000c = in_stack_0000000c - 0x201f;
      FUN_002c6614(&in_stack_00000000,&in_stack_0000000c);
      in_stack_00000004 = temp_v6;
    }
    temp_v1 = temp_v8;
    temp_v2 = in_stack_00000004;
    if (((unsigned int)puVar2 & 0xffff) != 0) {
      temp_v1 = 0xffffffff;
      temp_v2 = 0x7fffffff;
    }
    temp_v14 = romwright_piece_4_4(temp_v2,temp_v1);
    in_stack_00000008 = temp_v8;
    if (in_stack_00000060 != 0) {
      in_stack_00000000 = (unsigned char *)0x0;
      for (puVar12 = (unsigned int *)0x0;
          (temp_v8 = (unsigned int)temp_v14 | (unsigned int)((unsigned long long)temp_v14 >> 0x20), temp_v8 != 0 &&
          ((int)puVar12 < 0x11)); puVar12 = (unsigned int *)((int)puVar12 + 1)) {
        temp_v14 = ll_udiv10();
        unaff_r4[(int)puVar12] = (char)temp_v8 + '0';
      }
      if (temp_v14 != 0) {
        if (in_stack_00000000 != (unsigned char *)0x0) goto code_r0x002c637e;
        unaff_r6 = (unsigned int *)0x11;
        in_stack_00000060 = 0;
        continue;
      }
      puVar4 = puVar12;
      for (temp_v7 = 0; puVar4 = (unsigned int *)((int)puVar4 - 1), temp_v7 < (int)puVar4; temp_v7 = temp_v7 + 1) {
        temp_v0 = unaff_r4[temp_v7];
        unaff_r4[temp_v7] = unaff_r4[(int)puVar4];
        unaff_r4[(int)puVar4] = temp_v0;
      }
      in_stack_00000018 = (int)puVar12 + (-1 - (int)unaff_r6);
      in_stack_0000001c = puVar12;
code_r0x002c637e:
      unaff_r4[(int)in_stack_0000001c] = '\0';
      in_stack_0000003c[1] = (unsigned int)in_stack_0000001c;
      *in_stack_0000003c = in_stack_00000018;
      in_stack_0000003c[2] = in_stack_00000060;
      return in_stack_0000003c;
    }
    temp_v7 = 0;
    in_stack_00000000 = puVar2;
    puVar12 = unaff_r6;
    while (puVar12 = (unsigned int *)((int)puVar12 - 1), -1 < (int)puVar12) {
      temp_v14 = ll_udiv10();
      temp_v7 = temp_v7 + 0x30;
      unaff_r4[(int)puVar12] = (char)temp_v7;
    }
    temp_v10 = 1;
    if (temp_v14 != 0) {
      temp_v10 = 0;
      temp_v3 = temp_v3 + 1;
    }
    else if (*unaff_r4 == '0') {
      temp_v10 = 0;
      temp_v3 = temp_v3 - 1;
    }
    in_stack_00000018 = temp_v3;
    in_stack_0000001c = unaff_r6;
    if (temp_v10) goto code_r0x002c637e;
  } while( 1 );
}
