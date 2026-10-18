/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f4ce8` (_code @ 0x2f4ce8, 0x1a0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} void_stack;

extern unsigned char LAB_001eaa18; /* 0x1eaa18 */
extern int FUN_002caf74(); /* 0x2caf74 */
extern int FUN_002cb054(); /* 0x2cb054 */
extern unsigned char LAB_002f4ecc; /* 0x2f4ecc */
extern unsigned char LAB_002f4ee4; /* 0x2f4ee4 */
extern unsigned char LAB_002f4efc; /* 0x2f4efc */
extern unsigned char LAB_002f4f0c; /* 0x2f4f0c */
extern unsigned char DAT_00407dd6; /* 0x407dd6 */
extern unsigned char DAT_0044e0f8; /* 0x44e0f8 */
extern unsigned char DAT_0044e0f9; /* 0x44e0f9 */
extern unsigned char DAT_0044e0fa; /* 0x44e0fa */
extern unsigned int *DAT_0044e2d0; /* 0x44e2d0 */

extern unsigned int FUN_0021f498(unsigned char);
/* Supplied declaration required: FUN_0027eb88. */
/* Supplied declaration required: FUN_00297468. */
/* Supplied declaration required: FUN_0029ee6c. */
/* Supplied declaration required: FUN_0029f848. */
/* Supplied declaration required: FUN_002ad8b4. */
/* Supplied declaration required: FUN_002b8838. */
/* Supplied declaration required: FUN_002bd8e8. */
/* Supplied declaration required: FUN_002bd954. */
/* Supplied declaration required: FUN_002c312c. */
/* Supplied declaration required: FUN_002c3178. */
/* Supplied declaration required: FUN_002c498c. */
/* Supplied declaration required: FUN_002c4a08. */
/* Supplied declaration required: FUN_002c5788. */
extern unsigned int FUN_002cabf8(unsigned char);
extern unsigned int FUN_002e0b68(unsigned char);


void FUN_002f4ce8(void)

{
/* irregular: 15 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  unsigned int temp_v0;
  
  puVar1 = (unsigned int *)0x100;
  FUN_002c498c(0x100,0x100,0,0x158,1);
  puVar2 = &LAB_002f4ecc;
  DAT_0044e2d0 = puVar1;
  FUN_002c5788(&LAB_002f4ecc,2,0,0,&LAB_001eaa18,FUN_002caf74,puVar1);
  *puVar1 = (unsigned int)puVar2;
  FUN_002c4a08(&LAB_002f4ee4,0xe6,0,0,FUN_002cb054,0,0,puVar2);
  FUN_002c3178(puVar1 + 0xf);
  FUN_002c312c(puVar1 + 0xf,&DAT_00407dd6,0x18,0,0,0,0,0,0,0,0);
  FUN_002bd954(puVar1 + 0x17,0x2f,0,puVar1 + 0xf,0xc9);
  FUN_002bd8e8(puVar1 + 0x17,0);
  FUN_0029f848(puVar1 + 0x3a,3,3,1,0,1);
  puVar1[2] = 0;
  *(unsigned short *)((int)puVar1 + 0x1a) = 0;
  FUN_0027eb88(puVar1 + 7,0xffffffff);
  *(unsigned short *)(puVar1 + 9) = 0;
  FUN_00297468(&LAB_002f4efc,puVar1 + 0x53,0);
  FUN_00297468(&LAB_002f4f0c,puVar1 + 0x54,0);
  FUN_002b8838(0x99);
  FUN_0029ee6c(0,0x323232ff);
  temp_v0 = FUN_002cabf8(DAT_0044e0f8);
  puVar1[10] = temp_v0;
  temp_v0 = FUN_0021f498(DAT_0044e0f9);
  puVar1[0xb] = temp_v0;
  temp_v0 = FUN_002e0b68(DAT_0044e0fa);
  puVar1[0xc] = temp_v0;
  FUN_002ad8b4(puVar1 + 0xd,&DAT_0044e0f8);
  return;
}
