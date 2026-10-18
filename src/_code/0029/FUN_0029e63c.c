/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0029e63c` (_code @ 0x29e63c, 0x218 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp50; /* 0x50: local_50 */
} param_2_stack;

extern int FUN_001a1e7c(); /* 0x1a1e7c */
extern int FUN_001a25cc(); /* 0x1a25cc */
extern unsigned char LAB_0029e89c; /* 0x29e89c */
extern unsigned char LAB_0029e8ac; /* 0x29e8ac */
extern unsigned char DAT_00402d70; /* 0x402d70 */
extern unsigned char DAT_00402d88; /* 0x402d88 */
extern unsigned char DAT_00402dac; /* 0x402dac */
extern signed char DAT_0043dd20; /* 0x43dd20 */
extern unsigned int *DAT_0043dd24; /* 0x43dd24 */

/* Supplied declaration required: FUN_002af854. */
/* Supplied declaration required: FUN_002bdac0. */
/* Supplied declaration required: FUN_002bdb2c. */
/* Supplied declaration required: FUN_002bf030. */
/* Supplied declaration required: FUN_002c32f8. */
/* Supplied declaration required: FUN_002c3344. */
/* Supplied declaration required: FUN_002c4450. */
/* Supplied declaration required: FUN_002c4b30. */
extern unsigned int *FUN_002c4b84(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c4c00. */
/* Supplied declaration required: FUN_002c5978. */


void FUN_0029e63c(unsigned int param_1,unsigned char param_2)

{
/* irregular: 12 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned char *puVar3;
  unsigned char *puVar4;
  int temp_v0;
  
  if (DAT_0043dd20 < '\x01') {
    if (DAT_0043dd24 == (unsigned int *)0x0) {
      DAT_0043dd24 = (unsigned int *)FUN_002c4b84(0x100,0x100,0,0x878,1);
    }
    puVar1 = DAT_0043dd24;
    FUN_002c4b30(DAT_0043dd24,0x878);
    puVar3 = &LAB_0029e89c;
    FUN_002c5978(&LAB_0029e89c,2,0,0,FUN_001a1e7c,0,0);
    *puVar1 = (unsigned int)puVar3;
    puVar4 = &LAB_0029e8ac;
    FUN_002c4c00(&LAB_0029e8ac,0xe7,0,0,FUN_001a25cc,0,0,puVar3);
    puVar1[1] = (unsigned int)puVar4;
    puVar2 = DAT_0043dd24;
    FUN_002c3344(DAT_0043dd24 + 2);
    FUN_002c32f8(puVar2 + 2,&DAT_00402d70,0x18,&DAT_00402d88,0x24,0,0,0,0,&DAT_00402dac,0xa8);
    temp_v0 = 0;
    do {
      FUN_002bdb2c(puVar2 + temp_v0 * 0x23 + 10,0x1e,0,puVar2 + 2,1);
      FUN_002af854(puVar2 + temp_v0 * 0x23 + 10,0);
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 0xd);
    FUN_002bdb2c(puVar2 + 0x168,0x1e,0,puVar2 + 2,1);
    FUN_002bf030(puVar2 + 0x168,0);
    FUN_002bdb2c(puVar2 + 0x18b,0x1e,0,puVar2 + 2,1);
    FUN_002bdac0(puVar2 + 0x18b,0);
    FUN_002bdb2c(puVar2 + 0x1ae,0x1e,0,puVar2 + 2,1);
    FUN_002bf030(puVar2 + 0x1ae,1);
    FUN_002c4450(puVar2 + 0x1db,0x1a,0xffffffff);
    puVar2[0x1d1] = 0;
    *(unsigned char *)((int)puVar2 + 0x74d) = 1;
    *(unsigned char *)((int)puVar1 + 0x74e) = param_2;
    puVar1[0x1d4] = param_1;
  }
  DAT_0043dd20 = DAT_0043dd20 + '\x01';
  return;
}
