/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001ee99c` (_code @ 0x1ee99c, 0x3ec bytes) from smt4.cxi.
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

extern unsigned char LAB_001eed8c; /* 0x1eed8c */
extern unsigned char LAB_001eeda8; /* 0x1eeda8 */
extern unsigned char LAB_001eedc4; /* 0x1eedc4 */
extern unsigned char LAB_001eeddc; /* 0x1eeddc */
extern unsigned char LAB_001eedf8; /* 0x1eedf8 */
extern unsigned char LAB_001eee04; /* 0x1eee04 */
extern unsigned char LAB_001eee1c; /* 0x1eee1c */
extern unsigned char LAB_001eee38; /* 0x1eee38 */
extern unsigned char LAB_001eee50; /* 0x1eee50 */
extern unsigned char LAB_001eee6c; /* 0x1eee6c */
extern unsigned char LAB_001eee80; /* 0x1eee80 */
extern unsigned char DAT_00403434; /* 0x403434 */
extern unsigned char DAT_00403458; /* 0x403458 */
extern unsigned char DAT_00403488; /* 0x403488 */
extern unsigned char DAT_00403494; /* 0x403494 */
extern int DAT_0043dd90; /* 0x43dd90 */

/* Supplied declaration required: FUN_002583a4. */
/* Supplied declaration required: FUN_0025863c. */
/* Supplied declaration required: FUN_0025884c. */
extern unsigned int FUN_00263e48(unsigned char *);
/* Supplied declaration required: FUN_00288948. */
extern unsigned int FUN_00294334(unsigned short, unsigned int);
/* Supplied declaration required: FUN_00294568. */
/* Supplied declaration required: FUN_002950bc. */
/* Supplied declaration required: FUN_00296154. */
/* Supplied declaration required: FUN_002972f8. */
/* Supplied declaration required: FUN_0029bddc. */
/* Supplied declaration required: FUN_002aa268. */
/* Supplied declaration required: FUN_002b8b78. */
/* Supplied declaration required: FUN_002b9364. */
/* Supplied declaration required: FUN_002bdac0. */
/* Supplied declaration required: FUN_002bdb2c. */
/* Supplied declaration required: FUN_002be7fc. */
/* Supplied declaration required: FUN_002bf030. */
/* Supplied declaration required: FUN_002bf0a8. */
/* Supplied declaration required: FUN_002c32f8. */
/* Supplied declaration required: FUN_002c3344. */
extern unsigned int FUN_002c5e2c(unsigned char *);
extern int FUN_002cde1c(int);
extern unsigned int FUN_002d568c(void);
/* Supplied declaration required: FUN_0033df20. */
/* Supplied declaration required: FUN_00344094. */


void FUN_001ee99c(void)

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
  FUN_00288948();
  FUN_002950bc(2);
  temp_v4 = 0;
  if (*(short *)(temp_v0 + 0x1e) != 0) {
    do {
      temp_v1 = (unsigned int)*(unsigned short *)(temp_v0 + temp_v4 * 2 + 0xe);
      FUN_002b9364();
      temp_v2 = FUN_00294334(*(unsigned short *)(temp_v1 + 0x90),0);
      *(unsigned int *)(temp_v0 + temp_v4 * 4 + 0x28) = temp_v2;
      FUN_0033df20(temp_v2,7,1);
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < (int)(unsigned int)*(unsigned short *)(temp_v0 + 0x1e));
  }
  *(unsigned int *)(temp_v0 + 0x3c) = *(unsigned int *)(temp_v0 + 0x28);
  temp_v1 = FUN_002d568c();
  if (temp_v1 < 0x20000) {
    FUN_00344094(temp_v0 + 0x38,0x20000,0x20000,0x100,0x100);
  }
  else {
    FUN_00344094(temp_v0 + 0x38,0x30000,0x30000,0x100,0x100);
  }
  FUN_0025884c(temp_v0 + 0x38);
  temp_v1 = (unsigned int)*(unsigned short *)(temp_v0 + 0xc);
  FUN_002b9364();
  temp_v2 = FUN_00294334(*(unsigned short *)(temp_v1 + 0x90),0);
  *(unsigned int *)(temp_v0 + 0x80) = temp_v2;
  FUN_0033df20(temp_v2,7,1);
  if (*(short *)(temp_v0 + 0x1e) == 2) {
    if (*(char *)(temp_v0 + 0x20) != '\0') {
      puVar4 = &LAB_001eed8c;
      FUN_0029bddc(&LAB_001eed8c,7);
      *(unsigned char **)(temp_v0 + 0x84) = puVar4;
      temp_v2 = FUN_00263e48(&LAB_001eeda8);
      *(unsigned int *)(temp_v0 + 0x8c) = temp_v2;
    }
    else {
      puVar4 = &LAB_001eedc4;
      FUN_0029bddc(&LAB_001eedc4,7);
      *(unsigned char **)(temp_v0 + 0x84) = puVar4;
      temp_v2 = FUN_00263e48(&LAB_001eeddc);
      *(unsigned int *)(temp_v0 + 0x8c) = temp_v2;
    }
    FUN_0025863c(&LAB_001eedf8);
    FUN_002583a4(temp_v0 + 0x38);
  }
  if (*(short *)(temp_v0 + 0x1e) == 3) {
    puVar4 = &LAB_001eee04;
    FUN_0029bddc(&LAB_001eee04,7);
    *(unsigned char **)(temp_v0 + 0x84) = puVar4;
    temp_v2 = FUN_00263e48(&LAB_001eee1c);
    *(unsigned int *)(temp_v0 + 0x8c) = temp_v2;
    FUN_0025863c(&LAB_001eedf8);
    FUN_002583a4(temp_v0 + 0x38);
  }
  if (*(short *)(temp_v0 + 0x1e) == 4) {
    puVar4 = &LAB_001eee38;
    FUN_0029bddc(&LAB_001eee38,7);
    *(unsigned char **)(temp_v0 + 0x84) = puVar4;
    temp_v2 = FUN_00263e48(&LAB_001eee50);
    *(unsigned int *)(temp_v0 + 0x8c) = temp_v2;
    FUN_0025863c(&LAB_001eedf8);
    FUN_002583a4(temp_v0 + 0x38);
  }
  temp_v4 = 0;
  if (*(short *)(temp_v0 + 0x1e) != 0) {
    do {
      FUN_00294568((int)*(short *)(temp_v0 + temp_v4 * 2 + 0xe),1);
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < (int)(unsigned int)*(unsigned short *)(temp_v0 + 0x1e));
  }
  temp_v2 = FUN_002c5e2c(&LAB_001eee6c);
  *(unsigned int *)(temp_v0 + 0x29c) = temp_v2;
  temp_v1 = (unsigned int)*(unsigned short *)(temp_v0 + 0xc);
  FUN_002b9364();
  temp_v4 = FUN_002cde1c((int)*(char *)(temp_v1 + 0x30));
  FUN_002be7fc(temp_v6,&LAB_001eee80,temp_v4 + 1);
  temp_v2 = FUN_002c5e2c(temp_v6);
  *(unsigned int *)(temp_v0 + 0x2a4) = temp_v2;
  temp_v3 = *(unsigned int *)(temp_v0 + 0x29c);
  FUN_002972f8(temp_v3,temp_v2);
  *(unsigned int *)(temp_v0 + 0x2a0) = temp_v3;
  FUN_002c3344(temp_v0 + 0x2a8);
  FUN_002c32f8(temp_v0 + 0x2a8,&DAT_00403434,0x24,&DAT_00403458,0x30,&DAT_00403488,0xc,0,0,
               &DAT_00403494,0xe0);
  temp_v4 = 0;
  do {
    temp_v5 = temp_v0 + temp_v4 * 0x8c;
    FUN_002bdb2c(temp_v5 + 0x2c8,0x24,0,temp_v0 + 0x2a8,1);
    FUN_002bdac0(temp_v5 + 0x2c8,0);
    temp_v4 = temp_v4 + 1;
  } while (temp_v4 < 6);
  temp_v4 = 6;
  do {
    temp_v5 = temp_v0 + temp_v4 * 0x8c;
    FUN_002bdb2c(temp_v5 + 0x2c8,0x24,0,temp_v0 + 0x2a8,1);
    FUN_002bf030(temp_v5 + 0x2c8,0);
    temp_v4 = temp_v4 + 1;
  } while (temp_v4 < 10);
  FUN_002bf0a8(temp_v0 + 0x840,0x24,0xffffffff,0x18,temp_v0 + 0x2a8,0x65);
  FUN_002aa268(temp_v0 + 0x840,0);
  *(unsigned short *)(temp_v0 + 0x87a) = 2;
  FUN_00296154(temp_v0 + 0x840,0x24,0x21c);
  *(unsigned char *)(temp_v0 + 0x87c) = 1;
  FUN_002bdb2c(temp_v0 + 0x8cc,0x24,0,temp_v0 + 0x2a8,1);
  FUN_002bf030(temp_v0 + 0x8cc,2);
  FUN_002b8b78(0x61);
  temp_v0 = DAT_0043dd90;
  *(unsigned int *)(DAT_0043dd90 + 4) = 1;
  *(unsigned int *)(temp_v0 + 8) = 0;
  return;
}
