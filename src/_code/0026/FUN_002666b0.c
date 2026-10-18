/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002666b0` (_code @ 0x2666b0, 0x31c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 13 slot(s), 52 byte(s) */
typedef struct {
    unsigned int sp504; /* 0x504: local_504 */
    unsigned int sp508; /* 0x508: local_508 */
    unsigned int sp510; /* 0x510: local_510 */
    unsigned int sp514; /* 0x514: local_514 */
    unsigned int sp51C; /* 0x51c: local_51c */
    unsigned int sp520; /* 0x520: local_520 */
    unsigned int sp524; /* 0x524: local_524 */
    unsigned int sp528; /* 0x528: local_528 */
    unsigned int sp52C; /* 0x52c: local_52c */
    unsigned int sp530; /* 0x530: local_530 */
    unsigned int sp538; /* 0x538: local_538 */
    unsigned int sp54C; /* 0x54c: local_54c */
    unsigned int sp558; /* 0x558: local_558 */
} void_stack;

extern int DAT_00447060; /* 0x447060 */
extern unsigned char DAT_00447088; /* 0x447088 */
extern char s_________00447128[17]; /* 0x447128 */
extern char s______004472b8[11]; /* 0x4472b8 */
extern unsigned int DAT_00476630; /* 0x476630 */
extern int DAT_0049f91c; /* 0x49f91c */
extern int DAT_0049f920; /* 0x49f920 */
extern unsigned int DAT_004efd48; /* 0x4efd48 */
extern unsigned int DAT_004efd4c; /* 0x4efd4c */
extern unsigned int DAT_004efd50; /* 0x4efd50 */
extern unsigned int DAT_004efd54; /* 0x4efd54 */
extern unsigned int DAT_004efd58; /* 0x4efd58 */
extern unsigned int DAT_004efd5c; /* 0x4efd5c */
extern unsigned int DAT_004efd60; /* 0x4efd60 */
extern unsigned int DAT_004efd64; /* 0x4efd64 */
extern unsigned int DAT_004efd68; /* 0x4efd68 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_0020ffa0. */
/* Supplied declaration required: FUN_00265b78. */
/* Supplied declaration required: FUN_00286180. */
extern int FUN_002bfefc(unsigned int *);
extern unsigned int FUN_00316f70(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0032820c. */


void FUN_002666b0(void)

{
/* irregular: 1 goto(s); irregular input(s): in_fpscr; 5 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  char *pcVar3;
  int temp_v2;
  int *piVar5;
  int temp_v3;
  int temp_v4;
  unsigned int in_fpscr;
  float temp_v5;
  float temp_v6;
  float temp_v7;
  float temp_v8;
  unsigned long long temp_v9;
  float temp_v10;
  unsigned long long temp_v11;
  unsigned long long temp_v12;
  unsigned long long temp_v13;
  float temp_v14;
  int temp_v15;
  unsigned int uStack_554;
  unsigned int uStack_550;
  unsigned int temp_v16;
  unsigned int uStack_548;
  unsigned int uStack_544;
  unsigned int uStack_540;
  unsigned int uStack_53c;
  unsigned int temp_v17;
  float temp_v18 [4];
  float temp_v19;
  unsigned int temp_v20;
  unsigned int uStack_518;
  float temp_v21;
  unsigned int temp_v22;
  unsigned int uStack_50c;
  float temp_v23;
  unsigned int temp_v24;
  
  temp_v0 = DAT_00447060;
  if (DAT_00447060 == 0) {
    return;
  }
  temp_v1 = FUN_00316f70(*(unsigned int *)(DAT_00447060 + 0xa98),0x2a);
  *(unsigned int *)(temp_v0 + 0xa9c) = temp_v1;
  *(unsigned int *)(temp_v0 + 0xa94) = 0;
  *(unsigned int *)(temp_v0 + 0xa98) = 0;
  temp_v4 = DAT_00447060;
  if (DAT_0049f91c == 0x65) {
    if (DAT_0049f920 != 1) {
      if (DAT_0049f920 == 2) {
        pcVar3 = (char *)0x4470d8;
      }
      else if (DAT_0049f920 == 3) {
        pcVar3 = s_________00447128;
      }
      else if (DAT_0049f920 == 4) {
        pcVar3 = (char *)0x447178;
      }
      else if (DAT_0049f920 == 5) {
        pcVar3 = (char *)0x4471c8;
      }
      else if (DAT_0049f920 == 6) {
        pcVar3 = (char *)0x447218;
      }
      else if (DAT_0049f920 == 7) {
        pcVar3 = (char *)0x447268;
      }
      else if (DAT_0049f920 == 8) {
        pcVar3 = s______004472b8;
      }
      else {
        if (DAT_0049f920 != 9) goto LAB_00266768;
        pcVar3 = (char *)0x447308;
      }
      FUN_0032820c(pcVar3);
    }
    else {
      FUN_0032820c(&DAT_00447088);
    }
  }
  else {
LAB_00266768:
    temp_v3 = 0;
    if (0 < *(int *)(*(int *)(DAT_00447060 + 0xa9c) + 4)) {
      do {
        FUN_0020ffa0(*(unsigned int *)(temp_v4 + 0xa9c),temp_v3);
        if ((DAT_00447060 != 0) &&
           (temp_v2 = DAT_00447060 + temp_v3 * 0x88, *(char *)(temp_v2 + 0xb30) == '\0')) {
          *(unsigned char *)(temp_v2 + 0xb30) = 1;
        }
        FUN_00265b78(temp_v3,1);
        temp_v3 = temp_v3 + 1;
      } while (temp_v3 < *(int *)(*(int *)(temp_v4 + 0xa9c) + 4));
    }
  }
  temp_v4 = 0;
  if (0 < *(int *)(*(int *)(temp_v0 + 0xa9c) + 4)) {
    temp_v1 = 0x3f800000;
    temp_v14 = 3775.0f;
    temp_v9 = 0x455f700000000000;
    temp_v11 = 0xc682b400c6bfe000;
    temp_v12 = 0xc671e000c67d2000;
    temp_v13 = 0xc65ac000c63e0000;
    do {
      if (((DAT_00476630 & 1) == 0) && (temp_v3 = FUN_002bfefc(&DAT_00476630), temp_v3 != 0)) {
        DAT_004efd4c = (unsigned int)temp_v9;
        DAT_004efd48 = temp_v1;
        DAT_004efd50 = DAT_004efd4c;
        DAT_004efd54 = DAT_004efd4c;
        DAT_004efd58 = temp_v1;
        DAT_004efd5c = DAT_004efd4c;
        DAT_004efd60 = DAT_004efd4c;
        DAT_004efd64 = DAT_004efd4c;
        DAT_004efd68 = temp_v1;
      }
      FUN_00286180(&temp_v15,&DAT_004efd48);
      temp_v10 = (float)((unsigned long long)temp_v9 >> 0x20);
      temp_v5 = temp_v14;
      if (DAT_0049f920 != 99) {
        temp_v5 = temp_v10;
      }
      piVar5 = (int *)(*(int *)(*(int *)(**(int **)(temp_v0 + 0xa9c) + temp_v4 * 4) + 8) + 0xc);
      temp_v3 = *piVar5;
      if (temp_v3 != 0) {
        temp_v3 = temp_v3 + (int)piVar5;
      }
      temp_v6 = (float)VectorSignedToFloat(*(char *)(temp_v3 + 5) - 0x31,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v18[0] = (float)temp_v9;
      temp_v18[1] = temp_v18[0];
      temp_v2 = *(int *)(temp_v0 + 0x40) - 100;
      temp_v7 = (float)VectorSignedToFloat(((*(char *)(temp_v3 + 7) - 0x30) * 10 +
                                          (int)*(char *)(temp_v3 + 8)) - 0x31,
                                          (unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v18[2] = temp_v18[0];
      temp_v18[3] = (float)(int)temp_v11;
      temp_v19 = temp_v18[0];
      temp_v21 = temp_v18[0];
      temp_v23 = temp_v18[0];
      temp_v24 = (int)((unsigned long long)temp_v13 >> 0x20);
      temp_v20 = (int)((unsigned long long)temp_v11 >> 0x20);
      uStack_518 = (int)temp_v12;
      temp_v22 = (int)((unsigned long long)temp_v12 >> 0x20);
      uStack_50c = (int)temp_v13;
      temp_v8 = temp_v18[temp_v2 * 3 + 2];
      temp_v3 = temp_v0 + temp_v4 * 0x88;
      temp_v4 = temp_v4 + 1;
      *(float *)(temp_v3 + 0xaac) = temp_v18[temp_v2 * 3] + temp_v6 * temp_v10 + 1787.5f;
      *(unsigned int *)(temp_v3 + 0xab0) = 0x41200000;
      *(float *)(temp_v3 + 0xab4) = temp_v8 + temp_v7 * temp_v10 + 1787.5f;
      *(unsigned int *)(temp_v3 + 0xab8) = temp_v15;
      *(unsigned int *)(temp_v3 + 0xabc) = uStack_554;
      *(unsigned int *)(temp_v3 + 0xac0) = uStack_550;
      *(unsigned int *)(temp_v3 + 0xac4) = temp_v16;
      *(unsigned int *)(temp_v3 + 0xac8) = uStack_548;
      *(unsigned int *)(temp_v3 + 0xacc) = uStack_544;
      *(unsigned int *)(temp_v3 + 0xad0) = uStack_540;
      *(unsigned int *)(temp_v3 + 0xad4) = uStack_53c;
      *(unsigned int *)(temp_v3 + 0xad8) = temp_v17;
      *(float *)(temp_v3 + 0xadc) = temp_v5;
      *(float *)(temp_v3 + 0xae0) = temp_v5;
      *(float *)(temp_v3 + 0xae4) = temp_v5;
    } while (temp_v4 < *(int *)(*(int *)(temp_v0 + 0xa9c) + 4));
  }
  return;
}
