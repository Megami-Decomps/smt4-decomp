/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0028ba60` (_code @ 0x28ba60, 0x644 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} param_1_stack;

extern int FUN_001c3ed4(); /* 0x1c3ed4 */
extern unsigned char LAB_00212438; /* 0x212438 */
extern int FUN_0021243c(); /* 0x21243c */
extern unsigned char LAB_0028be4c; /* 0x28be4c */
extern unsigned char LAB_0028be5c; /* 0x28be5c */
extern unsigned char LAB_0028be68; /* 0x28be68 */
extern unsigned char LAB_0028be7c; /* 0x28be7c */
extern unsigned char DAT_00402aa0; /* 0x402aa0 */
extern unsigned char DAT_00402b0c; /* 0x402b0c */
extern unsigned char DAT_00402b48; /* 0x402b48 */
extern unsigned char DAT_00402b60; /* 0x402b60 */
extern unsigned int *DAT_0043dcf0; /* 0x43dcf0 */

/* Supplied declaration required: FUN_00269ee0. */
/* Supplied declaration required: FUN_0026bc28. */
/* Supplied declaration required: FUN_0026bed8. */
/* Supplied declaration required: FUN_0028c2a8. */
/* Supplied declaration required: FUN_00297704. */
/* Supplied declaration required: FUN_0029ea28. */
/* Supplied declaration required: FUN_0029eb14. */
/* Supplied declaration required: FUN_0029fae8. */
extern int FUN_002a0fac(void);
/* Supplied declaration required: FUN_002a8a08. */
/* Supplied declaration required: FUN_002bdac0. */
/* Supplied declaration required: FUN_002bdb2c. */
/* Supplied declaration required: FUN_002bf030. */
/* Supplied declaration required: FUN_002c23f8. */
/* Supplied declaration required: FUN_002c32f8. */
/* Supplied declaration required: FUN_002c3344. */
/* Supplied declaration required: FUN_002c4b30. */
extern unsigned int *FUN_002c4b84(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c4c00. */
/* Supplied declaration required: FUN_002c5978. */
/* Supplied declaration required: FUN_003c9ebc. */


void FUN_0028ba60(int param_1)

{
/* irregular: 21 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int *puVar2;
  int temp_v1;
  unsigned char *puVar4;
  unsigned char *puVar5;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int *puVar8;
  unsigned int temp_v4;
  unsigned char temp_v5;
  
  if (DAT_0043dcf0 == (unsigned int *)0x0) {
    DAT_0043dcf0 = (unsigned int *)FUN_002c4b84(0x100,0x100,0,0x17f8,1);
  }
  puVar2 = DAT_0043dcf0;
  FUN_002c4b30(DAT_0043dcf0,0x17f8);
  temp_v1 = FUN_002a0fac();
  *(unsigned char *)((int)puVar2 + 0x42) = *(unsigned char *)(temp_v1 + 0x40);
  puVar4 = &LAB_0028be4c;
  FUN_002c5978(&LAB_0028be4c,1,0,0,FUN_001c3ed4,&LAB_00212438,0);
  *puVar2 = (unsigned int)puVar4;
  puVar5 = &LAB_0028be5c;
  FUN_002c4c00(&LAB_0028be5c,0xe6,0,0,FUN_0021243c,0,0,puVar4);
  puVar2[2] = (unsigned int)puVar5;
  FUN_00297704(&LAB_0028be68,puVar2 + 3,1);
  FUN_00297704(&LAB_0028be7c,puVar2 + 4,1);
  FUN_0028c2a8();
  if (param_1 != 0) {
    FUN_0029eb14(1);
    FUN_0029ea28();
  }
  else {
    FUN_0029eb14(0);
  }
  temp_v1 = 0x180;
  FUN_002c23f8();
  if (temp_v1 != 0) {
    FUN_003c9ebc();
  }
  puVar2[0x457] = temp_v1;
  *(unsigned char *)(temp_v1 + 0x142) = 1;
  FUN_002a8a08();
  temp_v1 = 0x54;
  FUN_002c23f8();
  puVar2[0x1b2] = temp_v1;
  *(unsigned char *)(temp_v1 + 0x20) = 0;
  *(unsigned int *)(puVar2[0x1b2] + 0x34) = 0xffffffff;
  FUN_00269ee0(puVar2[0x1b2],0);
  temp_v1 = 0;
  do {
    temp_v2 = 0x54;
    FUN_002c23f8();
    puVar2[temp_v1 + 0x1b3] = temp_v2;
    *(unsigned char *)(temp_v2 + 0x21) = 1;
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 3);
  temp_v1 = 0;
  do {
    temp_v3 = 0x54;
    FUN_002c23f8();
    temp_v2 = temp_v1 + 1;
    puVar2[temp_v1 + 0x1b6] = temp_v3;
    temp_v1 = temp_v2;
  } while (temp_v2 < 0x18);
  FUN_0026bed8();
  puVar2 = DAT_0043dcf0;
  puVar8 = DAT_0043dcf0 + 0x12;
  *(unsigned short *)((int)DAT_0043dcf0 + 0x36) = 0;
  *(unsigned short *)(puVar2 + 0xe) = 0xffff;
  FUN_002c3344(puVar8);
  FUN_002c32f8(puVar2 + 0x12,&DAT_00402aa0,0x6c,&DAT_00402b0c,0x3c,&DAT_00402b48,0x18,0,0,
               &DAT_00402b60,0x1f8);
  FUN_002bdb2c(puVar2 + 0x1a,0x19,0x24,puVar2 + 0x12,0x6a);
  FUN_002bf030(puVar2 + 0x1a,0);
  FUN_002bdb2c(puVar2 + 0x3d,0x19,0x25,puVar2 + 0x12,0x6a);
  FUN_002bf030(puVar2 + 0x3d,1);
  FUN_002bdb2c(puVar2 + 0x60,0x19,0,puVar2 + 0x12,0x6a);
  FUN_002bdac0(puVar2 + 0x60,4,0);
  FUN_002bdb2c(puVar2 + 0x83,0x19,0,puVar2 + 0x12,0x6a);
  FUN_002bf030(puVar2 + 0x83,2);
  temp_v1 = 0;
  do {
    FUN_002bdb2c(puVar2 + temp_v1 * 0x23 + 0xa6,0x19,0,puVar2 + 0x12,0x6a);
    FUN_002bdac0(puVar2 + temp_v1 * 0x23 + 0xa6,4,0);
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 4);
  puVar8 = puVar2 + 0x132;
  FUN_002bdb2c(puVar8,0x19,0,puVar2 + 0x12,0x6a);
  if (*(char *)((int)puVar2 + 0x42) != '\0') {
    FUN_002bdac0(puVar8,6,0);
  }
  else {
    FUN_002bdac0(puVar8,4,0);
  }
  FUN_002bdb2c(puVar2 + 0x155,0x19,1000,puVar2 + 0x12,0xc9);
  FUN_002bf030(puVar2 + 0x155,3);
  FUN_002bdb2c(puVar2 + 0x178,0x19,1000,puVar2 + 0x12,0xc9);
  FUN_002bf030(puVar2 + 0x178,4);
  FUN_0029fae8(puVar2 + 0x237,4,1,4,1,1);
  temp_v1 = FUN_002a8a08();
  temp_v0 = *(unsigned char *)(temp_v1 + 0x910b);
  temp_v4 = (unsigned int)temp_v0;
  temp_v5 = temp_v0 >> 2;
  if ((temp_v0 & 3) != 0) {
    temp_v5 = temp_v5 + 1;
  }
  if (temp_v4 < 0xc) {
    FUN_0029fae8(puVar2 + 0x250,temp_v4,temp_v5,4,1,1);
    FUN_0029fae8(puVar2 + 0x282,*(unsigned char *)(temp_v1 + 0x910b) + 4,temp_v5 + 1,4,1,1);
  }
  else if (puVar2[0xb] != 0) {
    FUN_0029fae8(puVar2 + 0x250,temp_v4 - 0xc,3,4,1,1);
    FUN_0029fae8(puVar2 + 0x282,*(unsigned char *)(temp_v1 + 0x910b) - 8,4,4,1,1);
  }
  else {
    FUN_0029fae8(puVar2 + 0x250,0xc,3,4,1,1);
    FUN_0029fae8(puVar2 + 0x282,0x10,4,4,1,1);
  }
  FUN_0029fae8(puVar2 + 0x269,*(unsigned char *)(temp_v1 + 0x910b),temp_v5,4,1,1);
  FUN_0029fae8(puVar2 + 0x29b,*(unsigned char *)(temp_v1 + 0x910b) + 4,temp_v5 + 1,4,1,1);
  FUN_0029fae8(puVar2 + 0x2b4,6,6,1,1,1);
  puVar2[0x19c] = 0xffffffff;
  puVar2[0x19d] = 0xffffffff;
  FUN_0026bc28();
  *(unsigned short *)(puVar2 + 0x1af) = 0;
  *(unsigned char *)(puVar2 + 0x11) = 0;
  return;
}
