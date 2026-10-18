/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e2454` (_code @ 0x2e2454, 0x278 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} void_stack;

extern unsigned char LAB_002e26e0; /* 0x2e26e0 */
extern unsigned char LAB_002e26f8; /* 0x2e26f8 */
extern unsigned char LAB_002e2724; /* 0x2e2724 */
extern unsigned char LAB_002e273c; /* 0x2e273c */
extern unsigned char LAB_00329410; /* 0x329410 */
extern int FUN_0032b070(); /* 0x32b070 */
extern int FUN_00330024(); /* 0x330024 */
extern unsigned char DAT_00402940; /* 0x402940 */
extern unsigned char DAT_00402964; /* 0x402964 */
extern unsigned char DAT_00402994; /* 0x402994 */
extern unsigned int *DAT_0043dc88; /* 0x43dc88 */

/* Supplied declaration required: FUN_002488a8. */
/* Supplied declaration required: FUN_002972f8. */
/* Supplied declaration required: FUN_002976ac. */
/* Supplied declaration required: FUN_002bdac0. */
/* Supplied declaration required: FUN_002bdb2c. */
/* Supplied declaration required: FUN_002bf030. */
extern int FUN_002c0ba8(unsigned int);
extern unsigned int FUN_002c0e4c(unsigned int);
extern unsigned int FUN_002c0e9c(void);
extern unsigned int FUN_002c0ec4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c32f8. */
/* Supplied declaration required: FUN_002c3344. */
/* Supplied declaration required: FUN_002c4b30. */
extern unsigned int *FUN_002c4b84(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c4c00. */
/* Supplied declaration required: FUN_002c5978. */
extern unsigned int FUN_002c5e2c(unsigned char *);


unsigned int FUN_002e2454(void)

{
/* irregular: 13 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  unsigned char *puVar3;
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  if (DAT_0043dc88 == (unsigned int *)0x0) {
    DAT_0043dc88 = (unsigned int *)FUN_002c4b84(0x100,0x100,0,0x534,1);
  }
  puVar1 = DAT_0043dc88;
  FUN_002c4b30(DAT_0043dc88,0x534);
  puVar2 = &LAB_002e26e0;
  FUN_002c5978(&LAB_002e26e0,1,0,0,&LAB_00329410,FUN_00330024,0);
  *puVar1 = (unsigned int)puVar2;
  puVar3 = &LAB_002e26f8;
  FUN_002c4c00(&LAB_002e26f8,0xe6,0,0,FUN_0032b070,0,0,puVar2);
  puVar1[1] = (unsigned int)puVar3;
  temp_v0 = FUN_002c0ba8(0x520);
  if (temp_v0 != 0) {
    *(unsigned char *)(puVar1 + 0xad) = 1;
  }
  temp_v0 = FUN_002c0ba8(0x521);
  if (temp_v0 != 0) {
    *(unsigned char *)((int)puVar1 + 0x2b5) = 1;
  }
  temp_v0 = FUN_002c0ba8(0x526);
  if (temp_v0 != 0) {
    *(unsigned char *)((int)puVar1 + 0x2b6) = 1;
  }
  temp_v0 = FUN_002c0ba8(0x527);
  if (temp_v0 != 0) {
    *(unsigned char *)((int)puVar1 + 0x2b7) = 1;
  }
  FUN_002488a8(puVar1,0);
  FUN_002976ac(0xd);
  temp_v1 = FUN_002c0ec4(0xd,0);
  temp_v2 = FUN_002c0e9c();
  puVar1[0xab] = temp_v2;
  temp_v1 = FUN_002c0e4c(temp_v1);
  puVar1[0xac] = temp_v1;
  FUN_002c3344(puVar1 + 0xae);
  FUN_002c32f8(puVar1 + 0xae,&DAT_00402940,0x24,&DAT_00402964,0x30,0,0,0,0,&DAT_00402994,0xc4);
  FUN_002bdb2c(puVar1 + 0xb6,0x1d,0,puVar1 + 0xae,0xc9);
  FUN_002bdac0(puVar1 + 0xb6,0);
  FUN_002bdb2c(puVar1 + 0xd9,0x1d,0,puVar1 + 0xae,0xc9);
  FUN_002bf030(puVar1 + 0xd9,0);
  FUN_002bdb2c(puVar1 + 0xfc,0x1d,0,puVar1 + 0xae,0xc9);
  FUN_002bdac0(puVar1 + 0xfc,2,0);
  FUN_002bdb2c(puVar1 + 0x11f,0x1d,0x59f,puVar1 + 0xae,0xb5);
  *(unsigned short *)((int)puVar1 + 0x4b6) = 2;
  FUN_002bf030(puVar1 + 0x11f,1);
  temp_v1 = FUN_002c5e2c(&LAB_002e2724);
  puVar1[0x14a] = temp_v1;
  temp_v1 = FUN_002c5e2c(&LAB_002e273c);
  puVar1[0x14b] = temp_v1;
  FUN_002972f8(temp_v1,puVar1[0x14a]);
  puVar1[0x14c] = temp_v1;
  return *puVar1;
}
