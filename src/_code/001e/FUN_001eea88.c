/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001eea88` (_code @ 0x1eea88, 0x3ec bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
} void_stack;

extern unsigned char LAB_001eee78; /* 0x1eee78 */
extern unsigned char LAB_001eee94; /* 0x1eee94 */
extern unsigned char LAB_001eeeb0; /* 0x1eeeb0 */
extern unsigned char LAB_001eeec8; /* 0x1eeec8 */
extern unsigned char LAB_001eeee4; /* 0x1eeee4 */
extern unsigned char LAB_001eeef0; /* 0x1eeef0 */
extern unsigned char LAB_001eef08; /* 0x1eef08 */
extern unsigned char LAB_001eef24; /* 0x1eef24 */
extern unsigned char LAB_001eef3c; /* 0x1eef3c */
extern unsigned char LAB_001eef58; /* 0x1eef58 */
extern unsigned char LAB_001eef6c; /* 0x1eef6c */
extern unsigned char DAT_004033e0; /* 0x4033e0 */
extern unsigned char DAT_00403404; /* 0x403404 */
extern unsigned char DAT_00403434; /* 0x403434 */
extern unsigned char DAT_00403440; /* 0x403440 */
extern int DAT_0043dd90; /* 0x43dd90 */

/* Supplied declaration required: FUN_00258170. */
/* Supplied declaration required: FUN_00258408. */
/* Supplied declaration required: FUN_00258618. */
extern unsigned int FUN_00263c1c(unsigned char *);
/* Supplied declaration required: FUN_002886e0. */
extern unsigned int FUN_00294090(unsigned short, unsigned int);
/* Supplied declaration required: FUN_002942c4. */
/* Supplied declaration required: FUN_00294e18. */
/* Supplied declaration required: FUN_00295eb0. */
/* Supplied declaration required: FUN_00297060. */
/* Supplied declaration required: FUN_0029bb3c. */
/* Supplied declaration required: FUN_002a9fdc. */
/* Supplied declaration required: FUN_002b8838. */
/* Supplied declaration required: FUN_002b9024. */
/* Supplied declaration required: FUN_002bd8e8. */
/* Supplied declaration required: FUN_002bd954. */
/* Supplied declaration required: FUN_002be624. */
/* Supplied declaration required: FUN_002bee58. */
/* Supplied declaration required: FUN_002beed0. */
/* Supplied declaration required: FUN_002c312c. */
/* Supplied declaration required: FUN_002c3178. */
extern unsigned int FUN_002c5c04(unsigned char *);
extern int FUN_002cdecc(int);
extern unsigned int FUN_002d5738(void);
/* Supplied declaration required: FUN_0033dcec. */
/* Supplied declaration required: FUN_00343e5c. */


void FUN_001eea88(void)

{
/* irregular: 21 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned char *puVar4;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned char temp_v6 [76];
  
  temp_v0 = DAT_0043dd90;
  FUN_002886e0();
  FUN_00294e18(2);
  temp_v4 = 0;
  if (*(short *)(temp_v0 + 0x1e) != 0) {
    do {
      temp_v1 = (unsigned int)*(unsigned short *)(temp_v0 + temp_v4 * 2 + 0xe);
      FUN_002b9024();
      temp_v2 = FUN_00294090(*(unsigned short *)(temp_v1 + 0x90),0);
      *(unsigned int *)(temp_v0 + temp_v4 * 4 + 0x28) = temp_v2;
      FUN_0033dcec(temp_v2,7,1);
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < (int)(unsigned int)*(unsigned short *)(temp_v0 + 0x1e));
  }
  *(unsigned int *)(temp_v0 + 0x3c) = *(unsigned int *)(temp_v0 + 0x28);
  temp_v1 = FUN_002d5738();
  if (temp_v1 < 0x20000) {
    FUN_00343e5c(temp_v0 + 0x38,0x20000,0x20000,0x100,0x100);
  }
  else {
    FUN_00343e5c(temp_v0 + 0x38,0x30000,0x30000,0x100,0x100);
  }
  FUN_00258618(temp_v0 + 0x38);
  temp_v1 = (unsigned int)*(unsigned short *)(temp_v0 + 0xc);
  FUN_002b9024();
  temp_v2 = FUN_00294090(*(unsigned short *)(temp_v1 + 0x90),0);
  *(unsigned int *)(temp_v0 + 0x80) = temp_v2;
  FUN_0033dcec(temp_v2,7,1);
  if (*(short *)(temp_v0 + 0x1e) == 2) {
    if (*(char *)(temp_v0 + 0x20) != '\0') {
      puVar4 = &LAB_001eee78;
      FUN_0029bb3c(&LAB_001eee78,7);
      *(unsigned char **)(temp_v0 + 0x84) = puVar4;
      temp_v2 = FUN_00263c1c(&LAB_001eee94);
      *(unsigned int *)(temp_v0 + 0x8c) = temp_v2;
    }
    else {
      puVar4 = &LAB_001eeeb0;
      FUN_0029bb3c(&LAB_001eeeb0,7);
      *(unsigned char **)(temp_v0 + 0x84) = puVar4;
      temp_v2 = FUN_00263c1c(&LAB_001eeec8);
      *(unsigned int *)(temp_v0 + 0x8c) = temp_v2;
    }
    FUN_00258408(&LAB_001eeee4);
    FUN_00258170(temp_v0 + 0x38);
  }
  if (*(short *)(temp_v0 + 0x1e) == 3) {
    puVar4 = &LAB_001eeef0;
    FUN_0029bb3c(&LAB_001eeef0,7);
    *(unsigned char **)(temp_v0 + 0x84) = puVar4;
    temp_v2 = FUN_00263c1c(&LAB_001eef08);
    *(unsigned int *)(temp_v0 + 0x8c) = temp_v2;
    FUN_00258408(&LAB_001eeee4);
    FUN_00258170(temp_v0 + 0x38);
  }
  if (*(short *)(temp_v0 + 0x1e) == 4) {
    puVar4 = &LAB_001eef24;
    FUN_0029bb3c(&LAB_001eef24,7);
    *(unsigned char **)(temp_v0 + 0x84) = puVar4;
    temp_v2 = FUN_00263c1c(&LAB_001eef3c);
    *(unsigned int *)(temp_v0 + 0x8c) = temp_v2;
    FUN_00258408(&LAB_001eeee4);
    FUN_00258170(temp_v0 + 0x38);
  }
  temp_v4 = 0;
  if (*(short *)(temp_v0 + 0x1e) != 0) {
    do {
      FUN_002942c4((int)*(short *)(temp_v0 + temp_v4 * 2 + 0xe),1);
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < (int)(unsigned int)*(unsigned short *)(temp_v0 + 0x1e));
  }
  temp_v2 = FUN_002c5c04(&LAB_001eef58);
  *(unsigned int *)(temp_v0 + 0x29c) = temp_v2;
  temp_v1 = (unsigned int)*(unsigned short *)(temp_v0 + 0xc);
  FUN_002b9024();
  temp_v4 = FUN_002cdecc((int)*(char *)(temp_v1 + 0x30));
  FUN_002be624(temp_v6,&LAB_001eef6c,temp_v4 + 1);
  temp_v2 = FUN_002c5c04(temp_v6);
  *(unsigned int *)(temp_v0 + 0x2a4) = temp_v2;
  temp_v3 = *(unsigned int *)(temp_v0 + 0x29c);
  FUN_00297060(temp_v3,temp_v2);
  *(unsigned int *)(temp_v0 + 0x2a0) = temp_v3;
  FUN_002c3178(temp_v0 + 0x2a8);
  FUN_002c312c(temp_v0 + 0x2a8,&DAT_004033e0,0x24,&DAT_00403404,0x30,&DAT_00403434,0xc,0,0,
               &DAT_00403440,0xe0);
  temp_v4 = 0;
  do {
    temp_v5 = temp_v0 + temp_v4 * 0x8c;
    FUN_002bd954(temp_v5 + 0x2c8,0x24,0,temp_v0 + 0x2a8,1);
    FUN_002bd8e8(temp_v5 + 0x2c8,0);
    temp_v4 = temp_v4 + 1;
  } while (temp_v4 < 6);
  temp_v4 = 6;
  do {
    temp_v5 = temp_v0 + temp_v4 * 0x8c;
    FUN_002bd954(temp_v5 + 0x2c8,0x24,0,temp_v0 + 0x2a8,1);
    FUN_002bee58(temp_v5 + 0x2c8,0);
    temp_v4 = temp_v4 + 1;
  } while (temp_v4 < 10);
  FUN_002beed0(temp_v0 + 0x840,0x24,0xffffffff,0x18,temp_v0 + 0x2a8,0x65);
  FUN_002a9fdc(temp_v0 + 0x840,0);
  *(unsigned short *)(temp_v0 + 0x87a) = 2;
  FUN_00295eb0(temp_v0 + 0x840,0x24,0x21c);
  *(unsigned char *)(temp_v0 + 0x87c) = 1;
  FUN_002bd954(temp_v0 + 0x8cc,0x24,0,temp_v0 + 0x2a8,1);
  FUN_002bee58(temp_v0 + 0x8cc,2);
  FUN_002b8838(0x61);
  temp_v0 = DAT_0043dd90;
  *(unsigned int *)(DAT_0043dd90 + 4) = 1;
  *(unsigned int *)(temp_v0 + 8) = 0;
  return;
}
