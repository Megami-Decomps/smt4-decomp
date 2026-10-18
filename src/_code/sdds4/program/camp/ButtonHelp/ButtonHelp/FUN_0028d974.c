/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0028d974` (_code @ 0x28d974, 0x258 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} void_stack;

extern int FUN_001c0b38(); /* 0x1c0b38 */
extern unsigned char LAB_002108cc; /* 0x2108cc */
extern int FUN_002108d0(); /* 0x2108d0 */
extern unsigned char LAB_0028dc18; /* 0x28dc18 */
extern unsigned char LAB_0028dc2c; /* 0x28dc2c */
extern unsigned char DAT_00402588; /* 0x402588 */
extern unsigned char DAT_00402594; /* 0x402594 */
extern unsigned char DAT_004025a0; /* 0x4025a0 */
extern signed char DAT_0043da28; /* 0x43da28 */
extern unsigned int *DAT_0043da2c; /* 0x43da2c */
extern unsigned int DAT_0043da30; /* 0x43da30 */
extern unsigned int DAT_0043da34; /* 0x43da34 */

/* Supplied declaration required: FUN_00262448. */
/* Supplied declaration required: FUN_00296154. */
/* Supplied declaration required: FUN_002972f8. */
/* Supplied declaration required: FUN_002bda00. */
/* Supplied declaration required: FUN_002bda10. */
extern unsigned int FUN_002bda1c(unsigned int);
/* Supplied declaration required: FUN_002bdb2c. */
/* Supplied declaration required: FUN_002c32f8. */
/* Supplied declaration required: FUN_002c3344. */
/* Supplied declaration required: FUN_002c4b30. */
extern unsigned int *FUN_002c4b84(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c4c00. */
/* Supplied declaration required: FUN_002c5978. */


void FUN_0028d974(void)

{
/* irregular: 13 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned char *puVar4;
  unsigned char *puVar5;
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  
  if (DAT_0043da28 < '\x01') {
    if (DAT_0043da2c == (unsigned int *)0x0) {
      DAT_0043da2c = (unsigned int *)FUN_002c4b84(0x100,0x100,0,0x564,1);
    }
    puVar1 = DAT_0043da2c;
    FUN_002c4b30(DAT_0043da2c,0x564);
    puVar4 = &LAB_0028dc18;
    FUN_002c5978(&LAB_0028dc18,1,0,0,FUN_001c0b38,&LAB_002108cc,0);
    *puVar1 = (unsigned int)puVar4;
    puVar5 = &LAB_0028dc2c;
    FUN_002c4c00(&LAB_0028dc2c,0xe6,0,0,FUN_002108d0,0,0,puVar4);
    puVar1[2] = (unsigned int)puVar5;
    puVar2 = DAT_0043da2c;
    FUN_002c3344(DAT_0043da2c + 5);
    FUN_002c32f8(puVar2 + 5,0x402556,0x30,&DAT_00402588,0xc,&DAT_00402594,0xc,0,0,&DAT_004025a0,0xa8
                );
    temp_v1 = 0;
    do {
      FUN_002bdb2c(puVar2 + temp_v1 * 0x23 + 0xd,0x12,3,puVar2 + 5,0x10);
      FUN_00262448(puVar2 + temp_v1 * 0x23 + 0xd,0x12,temp_v1 + 0x11,3);
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < 6);
    FUN_002bdb2c(puVar2 + 0xdf,0x12,0,puVar2 + 5,0x10);
    FUN_002bdb2c(puVar2 + 0x102,0x12,1,puVar2 + 5,0x10);
    puVar3 = DAT_0043da2c;
    *(unsigned char *)(DAT_0043da2c + 0x132) = 0;
    temp_v1 = 0;
    do {
      *(unsigned short *)((int)puVar3 + temp_v1 * 0x8c + 0x3b6) = 2;
      FUN_00296154(puVar3 + temp_v1 * 0x23 + 0xdf,0x12,0);
      *(unsigned char *)(puVar3 + temp_v1 * 0x23 + 0xee) = 1;
      puVar3[temp_v1 * 0x23 + 0xe2] = 0;
      temp_v2 = temp_v1 + 1;
      puVar3[temp_v1 * 0x23 + 0xe3] = 0;
      puVar3[temp_v1 * 0x23 + 0xe4] = 0;
      temp_v1 = temp_v2;
    } while (temp_v2 < 2);
    *(unsigned char *)((int)puVar2 + 0x4c5) = 0;
    *(unsigned char *)((int)puVar2 + 0x4c6) = 1;
    *(unsigned char *)(puVar2 + 0x131) = 1;
    *(unsigned char *)((int)puVar2 + 0x4c7) = 0;
    temp_v0 = FUN_002bda1c(0);
    puVar1[0x156] = temp_v0;
    FUN_002bda10(temp_v0,0x323232ff);
    FUN_002bda00(puVar1[0x156],0,0x646464ff);
    temp_v0 = DAT_0043da34;
    FUN_002972f8(DAT_0043da34,DAT_0043da30);
    puVar1[0x158] = temp_v0;
  }
  DAT_0043da28 = DAT_0043da28 + '\x01';
  return;
}
