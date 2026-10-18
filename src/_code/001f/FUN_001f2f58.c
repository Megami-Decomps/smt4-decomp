/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001f2f58` (_code @ 0x1f2f58, 0x618 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 12 slot(s), 48 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
} void_stack;

extern unsigned char LAB_0017fe9c; /* 0x17fe9c */
extern int FUN_001adc98(); /* 0x1adc98 */
extern int FUN_001de238(); /* 0x1de238 */
extern unsigned char LAB_001f336c; /* 0x1f336c */
extern unsigned char LAB_001f337c; /* 0x1f337c */
extern unsigned char LAB_001f3570; /* 0x1f3570 */
extern unsigned char LAB_001f3580; /* 0x1f3580 */
extern unsigned char LAB_001f35ac; /* 0x1f35ac */
extern unsigned char LAB_001f35c8; /* 0x1f35c8 */
extern unsigned char LAB_001f35e0; /* 0x1f35e0 */
extern unsigned char LAB_003f70d0; /* 0x3f70d0 */
extern unsigned char LAB_003f7194; /* 0x3f7194 */
extern unsigned char LAB_003f7218; /* 0x3f7218 */
extern unsigned char DAT_00403140; /* 0x403140 */
extern unsigned char DAT_00403194; /* 0x403194 */
extern unsigned char DAT_004031d0; /* 0x4031d0 */
extern int *DAT_0043dd68; /* 0x43dd68 */

extern int FUN_00263e48(unsigned char *);
extern int FUN_00290a4c(void);
/* Supplied declaration required: FUN_00294ad8. */
/* Supplied declaration required: FUN_002950bc. */
/* Supplied declaration required: FUN_002972f8. */
/* Supplied declaration required: FUN_002976ac. */
extern int FUN_0029a2d0(unsigned char *, unsigned int);
extern int FUN_0029b18c(void);
extern int FUN_0029ee4c(int, unsigned int);
/* Supplied declaration required: FUN_002a043c. */
extern int FUN_002a0dd4(void);
extern int FUN_002a0fac(void);
extern int FUN_002a89e4(void);
extern int FUN_002b8adc(void);
/* Supplied declaration required: FUN_002bce50. */
/* Supplied declaration required: FUN_002bcf34. */
/* Supplied declaration required: FUN_002bdac0. */
/* Supplied declaration required: FUN_002bdb2c. */
/* Supplied declaration required: FUN_002bf030. */
extern int FUN_002c0ba8(unsigned int);
/* Supplied declaration required: FUN_002c23f8. */
/* Supplied declaration required: FUN_002c32f8. */
/* Supplied declaration required: FUN_002c3344. */
extern int FUN_002c34a4(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c4450. */
/* Supplied declaration required: FUN_002c4b30. */
extern int *FUN_002c4b84(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c4c00. */
/* Supplied declaration required: FUN_002c5468. */
/* Supplied declaration required: FUN_002c5978. */
extern int FUN_002c5e2c(unsigned char *);
/* Supplied declaration required: FUN_0030f5ec. */
/* Supplied declaration required: FUN_003c9ebc. */


void FUN_001f2f58(void)

{
/* irregular: 22 native warning(s); review required */
  int *piVar1;
  unsigned char *puVar2;
  int temp_v0;
  unsigned int *puVar4;
  int *piVar5;
  int temp_v1;
  int temp_v2;
  int *temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned char *temp_v6;
  unsigned char *temp_v7;
  unsigned char *temp_v8;
  
  if (DAT_0043dd68 == (int *)0x0) {
    DAT_0043dd68 = (int *)FUN_002c4b84(0x100,0x100,0,0x95f8,1);
  }
  piVar1 = DAT_0043dd68;
  FUN_002c4b30(DAT_0043dd68,0x95f8);
  piVar1[0x2518] = -1;
  FUN_0030f5ec(0);
  puVar2 = &LAB_001f336c;
  FUN_002c5978(&LAB_001f336c,2,0,0,&LAB_0017fe9c,0,0);
  piVar1[0xfe] = (int)puVar2;
  FUN_002c4c00(&LAB_001f337c,0xe6,0,0,FUN_001adc98,0,0,puVar2);
  temp_v0 = 0x180;
  FUN_002c23f8();
  if (temp_v0 != 0) {
    FUN_003c9ebc();
  }
  *piVar1 = temp_v0;
  temp_v0 = FUN_0029b18c();
  piVar1[0x2519] = temp_v0;
  *(unsigned char *)(piVar1 + 0x2578) = 0;
  temp_v0 = FUN_002c34a4(0x100,0x100,0,0x1000,0x1000,1);
  piVar1[0x257c] = temp_v0;
  puVar4 = (unsigned int *)0x18;
  FUN_002c23f8();
  if (puVar4 != (unsigned int *)0x0) {
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    *(unsigned char *)(puVar4 + 4) = 0;
  }
  piVar1[0x2579] = (int)puVar4;
  FUN_002bcf34();
  temp_v0 = piVar1[0x2579];
  temp_v5 = 4;
  temp_v6 = &LAB_003f70d0;
  piVar5 = piVar1 + 0x257a;
  temp_v7 = &LAB_003f7218;
  temp_v8 = &LAB_003f7194;
  temp_v3 = piVar1;
  FUN_002bce50(piVar5,&temp_v5,FUN_001de238,&temp_v3,*(int *)(temp_v0 + 0xc) + *(int *)(temp_v0 + 8),
               0x11,0xfffffffe,0);
  if (((unsigned int)piVar5 & 0x7e00000) != 0x600000 && (int)piVar5 < 0) {
    FUN_002c5468();
  }
  temp_v0 = FUN_002c0ba8(0x418);
  if (temp_v0 == 0) {
    temp_v0 = FUN_002a0fac();
    *(unsigned short *)(temp_v0 + 0x1c) = 0xffff;
    *(unsigned short *)(temp_v0 + 0x1e) = 0xffff;
    *(unsigned short *)(temp_v0 + 0x20) = 0;
    *(unsigned short *)(temp_v0 + 0x22) = 0;
    *(unsigned short *)(temp_v0 + 0x24) = 0;
    *(unsigned short *)(temp_v0 + 0x26) = 0;
    *(unsigned short *)(temp_v0 + 0x28) = 0;
    *(unsigned short *)(temp_v0 + 0x2a) = 0xffff;
    *(unsigned char *)(temp_v0 + 0x2f) = 0;
    *(unsigned char *)(temp_v0 + 0x30) = 0;
    *(unsigned char *)(temp_v0 + 0x31) = 0xff;
    *(unsigned char *)(temp_v0 + 0x32) = 0;
    *(unsigned char *)(temp_v0 + 0x33) = 0;
    FUN_002a043c();
  }
  temp_v0 = FUN_002a0fac();
  if (-1 < *(short *)(temp_v0 + 0x1c)) {
    if (*(short *)(temp_v0 + 0x20) == 0) {
      *(unsigned short *)(temp_v0 + 0x1c) = 0xffff;
    }
    else {
      temp_v1 = FUN_002a89e4();
      if (((*(short *)(temp_v1 + 0x46) != *(short *)(temp_v0 + 0x20)) ||
          (temp_v2 = FUN_0029ee4c(temp_v1,10), temp_v2 != 0)) ||
         (temp_v1 = FUN_0029ee4c(temp_v1,2), temp_v1 != 0)) {
        *(unsigned short *)(temp_v0 + 0x1c) = 0xffff;
        *(unsigned short *)(temp_v0 + 0x20) = 0;
      }
    }
  }
  if (-1 < *(short *)(temp_v0 + 0x1e)) {
    if (*(short *)(temp_v0 + 0x22) == 0) {
      *(unsigned short *)(temp_v0 + 0x1e) = 0xffff;
    }
    else {
      temp_v1 = FUN_002a89e4();
      if (*(short *)(temp_v1 + 0x46) != *(short *)(temp_v0 + 0x22)) {
        *(unsigned short *)(temp_v0 + 0x1e) = 0xffff;
        *(unsigned short *)(temp_v0 + 0x22) = 0;
      }
    }
  }
  FUN_002c4450(piVar1 + 0x10e,0x80,0xffffffff);
  FUN_002a043c();
  FUN_002c3344(piVar1 + 1);
  temp_v3 = (int *)0x16c;
  FUN_002c32f8(piVar1 + 1,&DAT_00403140,0x54,&DAT_00403194,0x3c,0,0,0,0,&DAT_004031d0);
  FUN_002bdb2c(piVar1 + 9,0x24,0,piVar1 + 1,1);
  FUN_002bf030(piVar1 + 9,0);
  FUN_002bdb2c(piVar1 + 0x2c,0x24,0,piVar1 + 1,1);
  FUN_002bdac0(piVar1 + 0x2c,0);
  FUN_002bdb2c(piVar1 + 0x4f,0x24,0,piVar1 + 1,1);
  FUN_002bf030(piVar1 + 0x4f,1);
  FUN_002bdb2c(piVar1 + 0x72,0x24,0,piVar1 + 1,1);
  FUN_002bdac0(piVar1 + 0x72,1,0);
  FUN_002bdb2c(piVar1 + 0x95,0x24,0,piVar1 + 1,1);
  FUN_002bdac0(piVar1 + 0x95,5,0);
  FUN_002bdb2c(piVar1 + 0xb8,0x24,0,piVar1 + 1,1);
  FUN_002bf030(piVar1 + 0xb8,2);
  FUN_002bdb2c(piVar1 + 0xdb,0x24,0,piVar1 + 1,1);
  FUN_002bf030(piVar1 + 0xdb,3);
  FUN_002976ac(0x24);
  FUN_002976ac(0x22);
  piVar1[0x10d] = -1;
  piVar1[0x11e] = -1;
  temp_v0 = FUN_002c5e2c(&LAB_001f3570);
  piVar1[0x109] = temp_v0;
  temp_v0 = FUN_002c5e2c(&LAB_001f3580);
  piVar1[0x10a] = temp_v0;
  FUN_002972f8(temp_v0,piVar1[0x109]);
  piVar1[0x10b] = temp_v0;
  temp_v0 = FUN_002a0dd4();
  if ((temp_v0 != 0) || (temp_v0 = FUN_002b8adc(), temp_v0 != 0)) {
    temp_v3 = (int *)0x0;
    temp_v4 = 0;
    FUN_00294ad8(0,0,0,0,0,0,0xff,0,0,0xff);
  }
  temp_v0 = FUN_00263e48(&LAB_001f35ac);
  piVar1[0x2574] = temp_v0;
  FUN_002950bc(1);
  temp_v0 = FUN_0029a2d0(&LAB_001f35c8,7);
  piVar1[0x2572] = temp_v0;
  temp_v0 = FUN_0029a2d0(&LAB_001f35e0,7);
  piVar1[0x2573] = temp_v0;
  piVar1[0x2576] = 0;
  piVar1[0x2577] = 0;
  temp_v0 = FUN_00290a4c();
  piVar1[0x107] = temp_v0;
  return;
}
