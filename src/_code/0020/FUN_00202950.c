/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00202950` (_code @ 0x202950, 0x4e8 bytes) from smt4.cxi.
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

extern unsigned char LAB_001c8d28; /* 0x1c8d28 */
extern int FUN_001ed8b4(); /* 0x1ed8b4 */
extern unsigned char LAB_00202d64; /* 0x202d64 */
extern unsigned char LAB_00202d78; /* 0x202d78 */
extern unsigned char LAB_00202d88; /* 0x202d88 */
extern unsigned char LAB_00202d9c; /* 0x202d9c */
extern unsigned char LAB_00202db4; /* 0x202db4 */
extern unsigned char LAB_00202dd0; /* 0x202dd0 */
extern unsigned char LAB_00202dec; /* 0x202dec */
extern unsigned char LAB_00214960; /* 0x214960 */
extern int FUN_00214964(); /* 0x214964 */
extern unsigned char DAT_00405f1c; /* 0x405f1c */
extern unsigned char DAT_00405f58; /* 0x405f58 */
extern unsigned char DAT_0044de28; /* 0x44de28 */
extern unsigned char DAT_0044de29; /* 0x44de29 */
extern unsigned int *DAT_0044de2c; /* 0x44de2c */
extern unsigned int DAT_0044de30; /* 0x44de30 */
extern unsigned int DAT_0044de34; /* 0x44de34 */

extern unsigned int FUN_0026b830(void);
extern unsigned int FUN_0026b844(void);
/* Supplied declaration required: FUN_002976ac. */
/* Supplied declaration required: FUN_00297704. */
extern unsigned int FUN_0029a2d0(unsigned char *, unsigned int);
/* Supplied declaration required: FUN_002a6214. */
/* Supplied declaration required: FUN_002adb40. */
/* Supplied declaration required: FUN_002b8b78. */
/* Supplied declaration required: FUN_002bcf58. */
/* Supplied declaration required: FUN_002bdac0. */
/* Supplied declaration required: FUN_002bdb2c. */
/* Supplied declaration required: FUN_002bf0a8. */
/* Supplied declaration required: FUN_002c0b94. */
/* Supplied declaration required: FUN_002c32f8. */
/* Supplied declaration required: FUN_002c3344. */
/* Supplied declaration required: FUN_002c4b30. */
extern unsigned int *FUN_002c4b84(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c4c00. */
/* Supplied declaration required: FUN_002c4e28. */
/* Supplied declaration required: FUN_002c54f0. */
/* Supplied declaration required: FUN_002c5978. */


void FUN_00202950(void)

{
/* irregular: 19 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  unsigned int temp_v0;
  int temp_v1;
  
  DAT_0044de28 = 0;
  DAT_0044de29 = 0;
  puVar1 = (unsigned int *)FUN_002c4b84(0x10000,0x100,0,0x388,1);
  DAT_0044de2c = puVar1;
  *(unsigned char *)(puVar1 + 1) = 0;
  puVar2 = &LAB_00202d64;
  FUN_002c5978(&LAB_00202d64,2,0,0,&LAB_001c8d28,&LAB_00214960,0);
  *puVar1 = (unsigned int)puVar2;
  FUN_002c4c00(&LAB_00202d78,0x7f,0,0,FUN_001ed8b4,0,0,puVar2);
  FUN_002c4c00(&LAB_00202d88,0xdd,0,0,FUN_001ed8b4,0,0,*puVar1);
  FUN_002c4c00(&LAB_00202d9c,0xe8,0,0,FUN_00214964,0,0,*puVar1);
  puVar1[2] = 0;
  puVar1[3] = 0;
  DAT_0044de34 = DAT_0044de30;
  temp_v0 = 0x100;
  FUN_002c54f0(0x100,0x100,0,0x80,1);
  puVar1[0xdf] = temp_v0;
  temp_v0 = 0x100;
  FUN_002c54f0(0x100,0x100,0,8,1);
  puVar1[0xe0] = temp_v0;
  temp_v0 = 0x100;
  FUN_002c54f0(0x100,0x100,0,0x24d28,1);
  puVar1[0xe1] = temp_v0;
  temp_v0 = FUN_0026b844();
  FUN_002bcf58(puVar1[0xdf],temp_v0,0x80);
  temp_v0 = FUN_0026b830();
  FUN_002adb40(puVar1[0xe0],temp_v0);
  temp_v0 = FUN_002c0b94();
  FUN_002bcf58(puVar1[0xe1],temp_v0,0x24d28);
  temp_v1 = FUN_002c0b94();
  FUN_002bcf58(puVar1 + 0xd9,temp_v1 + 8,0xe);
  puVar1[0x90] = 0;
  puVar1[0x91] = 0;
  puVar1[0x92] = 0;
  FUN_00297704(&LAB_00202db4,puVar1 + 0x90,0);
  FUN_00297704(&LAB_00202dd0,puVar1 + 0x91,0);
  FUN_002c4e28(0x36);
  FUN_002a6214(0x36,0);
  FUN_002976ac(0x3d);
  temp_v0 = FUN_0029a2d0(&LAB_00202dec,7);
  puVar1[0xd8] = temp_v0;
  puVar1[0xdd] = 0x3f000000;
  puVar1[6] = DAT_0044de30;
  *(unsigned char *)(puVar1 + 10) = 0;
  puVar1[7] = 0x3f800000;
  puVar1[9] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  *(unsigned char *)(puVar1 + 0x12) = 0;
  *(unsigned char *)(puVar1 + 0x15) = 0;
  *(unsigned char *)((int)puVar1 + 0x55) = 0;
  *(unsigned char *)((int)puVar1 + 0x73) = 0;
  *(unsigned char *)((int)puVar1 + 0x72) = 0;
  puVar1[0x18] = 4;
  puVar1[0x16] = 0;
  *(unsigned char *)(puVar1 + 0xd5) = 0;
  *(unsigned char *)((int)puVar1 + 0x37a) = 0;
  *(unsigned char *)((int)puVar1 + 0x355) = 0;
  puVar1[0x1b] = 800;
  puVar1[0x1a] = 0x280;
  puVar1[0x19] = 0x140;
  puVar1[0xd7] = 0;
  *(unsigned char *)(puVar1 + 0x17) = 0;
  *(unsigned char *)(puVar1 + 0x1c) = 0;
  *(unsigned char *)((int)puVar1 + 0x71) = 0;
  puVar1[8] = 0x41f00000;
  puVar1[7] = 0;
  puVar1[0xb] = 0x3f000000;
  puVar1[0xc] = 0x3f000000;
  FUN_002c3344(puVar1 + 0x1f);
  FUN_002c32f8(puVar1 + 0x1f,&DAT_00405f1c,0x3c,0,0,0,0,0,0,&DAT_00405f58,0xe0);
  FUN_002bdb2c(puVar1 + 0x27,0x36,1,puVar1 + 0x1f,0xc9);
  FUN_002bf0a8(puVar1 + 0x4a,0x36,0x51,2,puVar1 + 0x1f,2);
  FUN_002bf0a8(puVar1 + 0x6d,0x36,0x52,2,puVar1 + 0x1f,2);
  FUN_002bdac0(puVar1 + 0x27,1,0);
  FUN_002bdac0(puVar1 + 0x4a,3,0);
  FUN_002bdac0(puVar1 + 0x6d,4,0);
  FUN_002b8b78(0xa8);
  FUN_002c4b30(puVar1 + 0x93,0x80);
  FUN_002c4b30(puVar1 + 0xb3,0x80);
  *(unsigned char *)(puVar1 + 0xd3) = 0;
  *(unsigned char *)((int)puVar1 + 0x34d) = 0;
  temp_v0 = 0x100;
  FUN_002c54f0(0x100,0x100,0,0x8c,1);
  puVar1[0xd4] = temp_v0;
  puVar1[6] = DAT_0044de30;
  *(unsigned char *)(puVar1 + 0xde) = 0;
  return;
}
