/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c4a34` (_code @ 0x2c4a34, 0x1f8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp38; /* 0x38: local_38 */
} void_stack;

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_00100a70. */
/* Supplied declaration required: FUN_001183bc. */
extern long long FUN_001527b4(void);
/* Supplied declaration required: FUN_00155afc. */
/* Supplied declaration required: FUN_002bc0e0. */
extern unsigned int FUN_002bd81c(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002bd82c. */
extern unsigned int FUN_002bd838(unsigned int);
/* Supplied declaration required: FUN_002c4938. */
/* Supplied declaration required: FUN_002c498c. */
/* Supplied declaration required: FUN_002c6614. */
extern unsigned long long func_0x0015284c(unsigned int, int, unsigned int, int *);


void FUN_002c4a34(void)

{
/* irregular: 2 goto(s); irregular input(s): in_s16, in_s17, in_stack_00000000, in_stack_00000008, in_stack_0000002c; 18 native warning(s); review required */
  char temp_v0;
  char *pcVar2;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int ******ppppppuVar5;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned int unaff_r4;
  unsigned int temp_v8;
  int temp_v9;
  int unaff_r6;
  int temp_v10;
  int unaff_r7;
  unsigned char temp_v11;
  unsigned char temp_v12;
  unsigned char temp_v13;
  int in_s16;
  int in_s17;
  unsigned long long temp_v14;
  long long temp_v15;
  unsigned int in_stack_00000000;
  int *in_stack_00000008;
  int in_stack_0000002c;
  unsigned int *****pppppuStack_34;
  unsigned int uStack_30;
  unsigned int uStack_2c;
  int aiStack_28 [2];
  unsigned int uStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  unsigned char uStack_8;
  
  temp_v8 = 0xa3c;
  temp_v10 = 1;
  pcVar2 = (char *)0x100;
  iStack_18 = in_s16;
  iStack_14 = in_s17;
  FUN_002c498c(0x100,0x100,0,0xa3c,1);
  FUN_002c4938();
  pcVar2[0xa11] = '\x14';
  FUN_002bc0e0();
  temp_v1 = FUN_002bd838(0);
  *(unsigned int *)(pcVar2 + 4) = temp_v1;
  FUN_002bd82c(temp_v1,0x320202ff);
  FUN_001183bc(*(unsigned int *)(pcVar2 + 4),3,0xffffffff);
  temp_v7 = 0x646464ff;
  temp_v2 = FUN_002bd81c(*(unsigned int *)(pcVar2 + 4),0);
  pcVar2[8] = '\0';
  pcVar2[0x34] = '\0';
  pcVar2[0x35] = '\0';
  pcVar2[0xa26] = '\x01';
  pcVar2[0x32] = '\0';
  pcVar2[0x7d] = '\0';
  pcVar2[0x7e] = '\0';
  temp_v3 = (int)temp_v2 >> 0x20;
  temp_v11 = temp_v3 <= temp_v2 >> 5;
  if (temp_v11) {
    temp_v2 = temp_v2 + temp_v3 * -0x20;
  }
  temp_v12 = temp_v3 <= temp_v2 >> 4;
  if (temp_v12) {
    temp_v2 = temp_v2 + temp_v3 * -0x10;
  }
  temp_v13 = temp_v3 <= temp_v2 >> 3;
  if (temp_v13) {
    temp_v2 = temp_v2 + temp_v3 * -8;
  }
  temp_v3 = (temp_v3 + 0x20) * 0x400000;
  temp_v2 = temp_v2 & temp_v3;
  if ((int)((((temp_v7 * 2 + (unsigned int)(0xffffffdf < temp_v8)) * 2 + (unsigned int)temp_v11) * 2 + (unsigned int)temp_v12) * 2 +
           (unsigned int)temp_v13) < 0) {
    temp_v2 = (temp_v2 * 5 >> 1) & temp_v3;
  }
  temp_v2 = temp_v2 >> 0x16;
  if (temp_v2 >= 2) {
    temp_v2 = 0xffffffff;
  }
  if (unaff_r7 == 0 && iStack_14 == 0) {
    if (in_stack_0000002c != 1) {
      for (temp_v7 = 0; temp_v7 < 1; temp_v7 = temp_v7 + 1) {
        pcVar2[temp_v7] = '0';
      }
      temp_v7 = 1;
      temp_v10 = 0;
    }
    else {
      temp_v7 = 0;
      temp_v10 = -2;
    }
    pcVar2[temp_v7] = '\0';
    in_stack_00000008[2] = in_stack_0000002c;
    *in_stack_00000008 = temp_v10;
    in_stack_00000008[1] = temp_v7;
    return;
  }
  temp_v7 = -0x134;
  do {
    if (in_stack_0000002c != 0) {
      temp_v9 = -temp_v10;
    }
    else {
      temp_v9 = (temp_v7 - temp_v10) + 1;
    }
    temp_v3 = temp_v2;
    if (0 < temp_v9) {
      temp_v3 = -temp_v2;
    }
    temp_v6 = temp_v9;
    if (temp_v9 < 0) {
      temp_v6 = -temp_v9;
    }
    FUN_00100a70(&uStack_8,temp_v6,temp_v3);
    uStack_20 = in_stack_00000000;
    temp_v1 = in_stack_00000000;
    aiStack_28[0] = unaff_r6;
    temp_v14 = func_0x0015284c(unaff_r4,iStack_14,in_stack_00000000,&iStack_1c);
    uStack_30 = (unsigned int)((unsigned long long)temp_v14 >> 0x20);
    pppppuStack_34 = (unsigned int *****)((int)temp_v14 - 0x201f);
    ppppppuVar5 = &pppppuStack_34;
    temp_v3 = temp_v2;
    uStack_2c = temp_v1;
    if (temp_v9 >= 1) {
      aiStack_28[0] = aiStack_28[0] + 0x201f;
      FUN_00155afc(&pppppuStack_34,aiStack_28);
      uStack_30 = temp_v4;
    }
    else {
      aiStack_28[0] = aiStack_28[0] - 0x201f;
      FUN_002c6614(&pppppuStack_34,aiStack_28);
      uStack_30 = temp_v5;
    }
    temp_v8 = temp_v3;
    temp_v1 = uStack_30;
    if (((unsigned int)ppppppuVar5 & 0xffff) != 0) {
      temp_v8 = 0xffffffff;
      temp_v1 = 0x7fffffff;
    }
    temp_v15 = romwright_piece_4_4(temp_v1,temp_v8);
    uStack_2c = temp_v3;
    if (in_stack_0000002c != 0) {
      pppppuStack_34 = (unsigned int *****)0x0;
      for (temp_v9 = 0;
          (temp_v3 = (unsigned int)temp_v15 | (unsigned int)((unsigned long long)temp_v15 >> 0x20), temp_v3 != 0 && (temp_v9 < 0x11));
          temp_v9 = temp_v9 + 1) {
        temp_v15 = FUN_001527b4();
        pcVar2[temp_v9] = (char)temp_v3 + '0';
      }
      if (temp_v15 != 0) {
        if ((unsigned int ******)pppppuStack_34 != (unsigned int ******)0x0) goto code_r0x002c637e;
        temp_v10 = 0x11;
        in_stack_0000002c = 0;
        continue;
      }
      temp_v7 = temp_v9;
      for (temp_v6 = 0; temp_v7 = temp_v7 - 1, temp_v6 < temp_v7; temp_v6 = temp_v6 + 1) {
        temp_v0 = pcVar2[temp_v6];
        pcVar2[temp_v6] = pcVar2[temp_v7];
        pcVar2[temp_v7] = temp_v0;
      }
      iStack_1c = (temp_v9 - temp_v10) - 1;
      iStack_18 = temp_v9;
code_r0x002c637e:
      pcVar2[iStack_18] = '\0';
      in_stack_00000008[1] = iStack_18;
      *in_stack_00000008 = iStack_1c;
      in_stack_00000008[2] = in_stack_0000002c;
      return;
    }
    temp_v6 = 0;
    pppppuStack_34 = (unsigned int *****)ppppppuVar5;
    temp_v9 = temp_v10;
    while (temp_v9 = temp_v9 - 1, -1 < temp_v9) {
      temp_v15 = FUN_001527b4();
      temp_v6 = temp_v6 + 0x30;
      pcVar2[temp_v9] = (char)temp_v6;
    }
    temp_v11 = 1;
    if (temp_v15 != 0) {
      temp_v11 = 0;
      temp_v7 = temp_v7 + 1;
    }
    else if (*pcVar2 == '0') {
      temp_v11 = 0;
      temp_v7 = temp_v7 - 1;
    }
    iStack_1c = temp_v7;
    iStack_18 = temp_v10;
    if (temp_v11) goto code_r0x002c637e;
  } while( 1 );
}
