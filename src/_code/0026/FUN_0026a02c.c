/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0026a02c` (_code @ 0x26a02c, 0x584 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} void_stack;

extern int FUN_001955bc(); /* 0x1955bc */
extern int FUN_001ad8ec(); /* 0x1ad8ec */
extern unsigned char LAB_001ddb74; /* 0x1ddb74 */
extern unsigned char LAB_0026a468; /* 0x26a468 */
extern unsigned char LAB_0026a47c; /* 0x26a47c */
extern unsigned char LAB_0026a490; /* 0x26a490 */
extern unsigned char LAB_0026a4a8; /* 0x26a4a8 */
extern unsigned char LAB_0026a4b8; /* 0x26a4b8 */
extern unsigned char LAB_0026a4d4; /* 0x26a4d4 */
extern unsigned char DAT_00402e54; /* 0x402e54 */
extern unsigned char DAT_00402e90; /* 0x402e90 */
extern unsigned char DAT_00402ef0; /* 0x402ef0 */
extern unsigned char DAT_00402f2c; /* 0x402f2c */
extern unsigned int *DAT_0043dd50; /* 0x43dd50 */

/* Supplied declaration required: FUN_00189b24. */
/* Supplied declaration required: FUN_001ad8d4. */
/* Supplied declaration required: FUN_002543d8. */
/* Supplied declaration required: FUN_00262448. */
extern int FUN_00288918(unsigned short);
extern int FUN_00288930(unsigned short);
/* Supplied declaration required: FUN_00296154. */
/* Supplied declaration required: FUN_002972f8. */
/* Supplied declaration required: FUN_002976ac. */
extern int FUN_00299224(unsigned short);
extern int FUN_0029923c(unsigned short, unsigned int);
/* Supplied declaration required: FUN_002b2808. */
/* Supplied declaration required: FUN_002bdac0. */
/* Supplied declaration required: FUN_002bdb2c. */
/* Supplied declaration required: FUN_002bf030. */
/* Supplied declaration required: FUN_002bf0a8. */
/* Supplied declaration required: FUN_002c32f8. */
/* Supplied declaration required: FUN_002c3344. */
/* Supplied declaration required: FUN_002c4b30. */
extern unsigned int *FUN_002c4b84(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c4c00. */
/* Supplied declaration required: FUN_002c4e28. */
/* Supplied declaration required: FUN_002c5978. */
/* Supplied declaration required: FUN_002c5ab8. */
extern unsigned int FUN_002c5e2c(unsigned char *);


void FUN_0026a02c(void)

{
/* irregular: 21 native warning(s); review required */
  unsigned int *puVar1;
  unsigned short temp_v0;
  unsigned char *puVar3;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int *puVar6;
  
  if (DAT_0043dd50 == (unsigned int *)0x0) {
    DAT_0043dd50 = (unsigned int *)FUN_002c4b84(0x100,0x100,0,0x9fc,1);
  }
  puVar1 = DAT_0043dd50;
  FUN_002c4b30(DAT_0043dd50,0x9fc);
  puVar3 = &LAB_0026a468;
  FUN_002c5978(&LAB_0026a468,2,0,0,FUN_001955bc,0,0);
  *puVar1 = (unsigned int)puVar3;
  FUN_002c4c00(&LAB_0026a47c,0x7d,0,0,FUN_001ad8ec,0,0,puVar3);
  FUN_002c4c00(&LAB_0026a490,0xdb,0,0,FUN_001ad8ec,0,0,*puVar1);
  FUN_002c4c00(&LAB_0026a4a8,0xe6,0,0,&LAB_001ddb74,0,0,*puVar1);
  puVar1 = DAT_0043dd50;
  FUN_001ad8d4(0);
  temp_v1 = FUN_002c5e2c(&LAB_0026a4b8);
  puVar1[0x16b] = temp_v1;
  temp_v1 = FUN_002c5e2c(&LAB_0026a4d4);
  puVar1[0x16c] = temp_v1;
  FUN_002972f8(temp_v1,puVar1[0x16b]);
  puVar1[0x16d] = temp_v1;
  *(unsigned short *)((int)puVar1 + 0x982) = 0;
  *(unsigned short *)(puVar1 + 0x261) = 0;
  FUN_002c4e28(0x29);
  FUN_002c5ab8(0x29,0);
  FUN_002976ac(0x34);
  FUN_00189b24();
  temp_v0 = 0;
  do {
    temp_v2 = FUN_0029923c(temp_v0,2);
    if (((temp_v2 != 0) && (temp_v2 = FUN_00299224(temp_v0), temp_v2 != 0)) &&
       ((temp_v2 = FUN_00288930(temp_v0), temp_v2 != 0 || (temp_v2 = FUN_00288918(temp_v0), temp_v2 != 0)))) {
      FUN_002543d8(temp_v0);
    }
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 400);
  temp_v0 = 0;
  do {
    temp_v2 = FUN_0029923c(temp_v0,2);
    if (((temp_v2 != 0) && (temp_v2 = FUN_00299224(temp_v0), temp_v2 == 0)) &&
       ((temp_v2 = FUN_00288930(temp_v0), temp_v2 != 0 || (temp_v2 = FUN_00288918(temp_v0), temp_v2 != 0)))) {
      FUN_002543d8(temp_v0);
    }
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 400);
  FUN_002c3344(puVar1 + 5);
  FUN_002c32f8(puVar1 + 5,&DAT_00402e54,0x3c,&DAT_00402e90,0x60,&DAT_00402ef0,0x3c,0,0,&DAT_00402f2c
               ,0x214);
  FUN_002bdb2c(puVar1 + 0xd,0x29,0,puVar1 + 5,0xc9);
  FUN_002bdac0(puVar1 + 0xd,0);
  FUN_002bdb2c(puVar1 + 0x30,0x29,0,puVar1 + 5,0xc9);
  FUN_002bf030(puVar1 + 0x30,0);
  FUN_002bdb2c(puVar1 + 0x53,0x29,0,puVar1 + 5,0xc9);
  FUN_002bdac0(puVar1 + 0x53,4,0);
  FUN_002bdb2c(puVar1 + 0x76,0x29,0,puVar1 + 5,0xc9);
  FUN_002bdb2c(puVar1 + 0x99,0x29,0x61,puVar1 + 5,0x68);
  FUN_002bf030(puVar1 + 0x99,2);
  FUN_00296154(puVar1 + 0x99,0x29,0x2a);
  FUN_002bdb2c(puVar1 + 0xbc,0x29,0x5d,puVar1 + 5,0xa1);
  FUN_002bf030(puVar1 + 0xbc,2);
  FUN_00296154(puVar1 + 0xbc,0x29,0x53);
  FUN_002bf0a8(puVar1 + 0xdf,0x29,0xffffffff,0x12,puVar1 + 5,0xc9);
  FUN_002bf030(puVar1 + 0xdf,3);
  *(unsigned short *)((int)puVar1 + 0x3b6) = 2;
  FUN_002b2808(puVar1 + 0xdf,0,0x78);
  puVar6 = puVar1 + 0x102;
  FUN_002bdb2c(puVar6,0x29,0x5c,puVar1 + 5,0xa1);
  FUN_002bdac0(puVar6,0);
  FUN_00262448(puVar6,0x29,0x5a,0x5c);
  FUN_002bdb2c(puVar1 + 0x125,0x29,0,puVar1 + 5,0xc9);
  FUN_002bdac0(puVar1 + 0x125,2,0);
  FUN_002bdb2c(puVar1 + 0x148,0x29,0,puVar1 + 5,0xc9);
  FUN_002bf030(puVar1 + 0x148,5);
  puVar1 = DAT_0043dd50;
  temp_v1 = DAT_0043dd50[1];
  DAT_0043dd50[1] = 0;
  puVar1[2] = temp_v1;
  puVar1[4] = 0;
  return;
}
