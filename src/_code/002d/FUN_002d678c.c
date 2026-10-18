/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002d678c` (_code @ 0x2d678c, 0x54c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

extern unsigned char LAB_001c0d9c; /* 0x1c0d9c */
extern unsigned char LAB_001c0dfc; /* 0x1c0dfc */
extern unsigned char LAB_001ebccc; /* 0x1ebccc */
extern int FUN_00210d3c(); /* 0x210d3c */
extern unsigned char LAB_00220c3c; /* 0x220c3c */
extern int FUN_00220c5c(); /* 0x220c5c */
extern unsigned char LAB_002d6ba0; /* 0x2d6ba0 */
extern unsigned char LAB_002d6bb8; /* 0x2d6bb8 */
extern unsigned char LAB_002d6bd4; /* 0x2d6bd4 */
extern unsigned char LAB_002d6bf4; /* 0x2d6bf4 */
extern unsigned char LAB_002d6c0c; /* 0x2d6c0c */
extern unsigned char LAB_002d6c28; /* 0x2d6c28 */
extern unsigned char LAB_002d6c64; /* 0x2d6c64 */
extern unsigned char LAB_002d6c78; /* 0x2d6c78 */
extern unsigned char LAB_002d6c90; /* 0x2d6c90 */
extern int FUN_002d6cd8(); /* 0x2d6cd8 */
extern int FUN_002e16d0(); /* 0x2e16d0 */
extern int FUN_002ec4bc(); /* 0x2ec4bc */
extern int FUN_002fc728(); /* 0x2fc728 */
extern int FUN_002fc864(); /* 0x2fc864 */
extern int FUN_00317428(); /* 0x317428 */
extern int FUN_00321ce0(); /* 0x321ce0 */
extern unsigned int *DAT_0043dad0; /* 0x43dad0 */

/* Supplied declaration required: FUN_0024abfc. */
extern unsigned int FUN_0025487c(void);
/* Supplied declaration required: FUN_0026f018. */
/* Supplied declaration required: FUN_0026f084. */
extern unsigned int FUN_0026f174(void);
/* Supplied declaration required: FUN_0026f474. */
/* Supplied declaration required: FUN_00297704. */
extern int FUN_0029ee4c(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002a89e4. */
extern int FUN_002a8a08(void);
extern unsigned int FUN_002b66ec(void);
/* Supplied declaration required: FUN_002b8b78. */
/* Supplied declaration required: FUN_002bda00. */
/* Supplied declaration required: FUN_002bda10. */
extern unsigned int FUN_002bda1c(unsigned int);
/* Supplied declaration required: FUN_002c3b44. */
/* Supplied declaration required: FUN_002c4b30. */
extern unsigned int *FUN_002c4b84(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c4c00. */
/* Supplied declaration required: FUN_002c5978. */
/* Supplied declaration required: FUN_00309db8. */
/* Supplied declaration required: FUN_0031b9ac. */


void FUN_002d678c(unsigned char param_1)

{
/* irregular: 24 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  
  if (DAT_0043dad0 == (unsigned int *)0x0) {
    DAT_0043dad0 = (unsigned int *)FUN_002c4b84(0x100,0x100,0,0x160,1);
  }
  puVar1 = DAT_0043dad0;
  FUN_002c4b30(DAT_0043dad0,0x160);
  puVar2 = &LAB_002d6ba0;
  FUN_002c5978(&LAB_002d6ba0,1,0,0,&LAB_001c0dfc,0,0);
  *puVar1 = (unsigned int)puVar2;
  FUN_002c4c00(&LAB_002d6bb8,0x65,0,0,&LAB_001ebccc,0,0,puVar2);
  FUN_002c4c00(&LAB_002d6bd4,0xcc,0,0,&LAB_001ebccc,0,0,*puVar1);
  FUN_002c4c00(&LAB_002d6bf4,0x7d,0,0,&LAB_001c0d9c,0,0,*puVar1);
  FUN_002c4c00(&LAB_002d6c0c,0xdb,0,0,&LAB_001c0d9c,0,0,*puVar1);
  FUN_002c4c00(&LAB_002d6c28,0xe6,0,0,FUN_00210d3c,0,0,*puVar1);
  puVar1[0x44] = 0xffffffff;
  puVar1[0x42] = 0xffffffff;
  puVar1[0x43] = 0;
  puVar1[0x45] = 0xffffffff;
  puVar1[0x40] = 0xffffffff;
  puVar1[0x41] = 0;
  *(unsigned char *)(puVar1 + 0x4a) = 1;
  puVar1[0x46] = 0;
  *(unsigned char *)((int)puVar1 + 0x129) = param_1;
  *(unsigned char *)((int)puVar1 + 0x12a) = 0;
  puVar1[0x4b] = 0;
  puVar1[0x4d] = 0;
  puVar1[0x4e] = 0x10;
  puVar1[0x4f] = 0;
  *(unsigned char *)((int)puVar1 + 0x141) = 0;
  puVar1[0x51] = 0xffffffc8;
  puVar1[0x52] = 0;
  puVar1[0x54] = 0;
  puVar1[0x55] = 0;
  puVar1[0x57] = 0xffffffff;
  puVar1[0x2d] = (unsigned int)FUN_002e16d0;
  puVar1[0x2f] = (unsigned int)FUN_002d6cd8;
  puVar1[0x2e] = (unsigned int)FUN_00220c5c;
  puVar1[0x30] = (unsigned int)FUN_002fc864;
  puVar1[0x31] = (unsigned int)FUN_002fc728;
  puVar1[0x32] = (unsigned int)FUN_002ec4bc;
  puVar1[0x35] = (unsigned int)&LAB_00220c3c;
  puVar1[0x33] = (unsigned int)FUN_00317428;
  puVar1[0x34] = (unsigned int)FUN_00321ce0;
  puVar1[0x56] = 0;
  puVar1[0x37] = 1;
  puVar1[0x38] = 2;
  puVar1[0x3f] = 3;
  puVar1[0x36] = 0;
  puVar1[0x3c] = 6;
  puVar1[0x3d] = 7;
  puVar1[0x3e] = 8;
  puVar1[0x39] = 9;
  puVar1[0x3a] = 4;
  puVar1[0x3b] = 5;
  temp_v0 = FUN_0024abfc();
  puVar1[1] = temp_v0;
  temp_v0 = FUN_0025487c();
  puVar1[2] = temp_v0;
  FUN_00309db8();
  puVar1[3] = temp_v0;
  temp_v0 = FUN_0026f174();
  FUN_0031b9ac();
  puVar1[4] = temp_v0;
  FUN_0026f474();
  FUN_00297704(&LAB_002d6c64,puVar1 + 0x29,0);
  FUN_00297704(&LAB_002d6c78,puVar1 + 0x2a,0);
  FUN_00297704(&LAB_002d6c90,puVar1 + 0x2b,0);
  temp_v0 = FUN_002bda1c(0);
  puVar1[0x2c] = temp_v0;
  FUN_002bda10(temp_v0,0xff);
  FUN_002bda00(puVar1[0x2c],0,0x646464ff);
  FUN_002b8b78(0xb1);
  temp_v4 = 0;
  do {
    FUN_002c3b44(puVar1 + temp_v4 * 5 + 0xf,0x14);
    temp_v3 = temp_v4 + 1;
    puVar1[temp_v4 * 5 + 0x10] = 0x14a;
    temp_v4 = temp_v3;
  } while (temp_v3 < 3);
  temp_v4 = 0;
  do {
    FUN_002c3b44(puVar1 + temp_v4 * 5 + 5,0x14);
    temp_v4 = temp_v4 + 1;
  } while (temp_v4 < 2);
  FUN_002c3b44(puVar1 + 0x23,0x14);
  puVar1[0x24] = 0x14a;
  temp_v0 = FUN_002b66ec();
  temp_v1 = FUN_0024abfc();
  FUN_0026f084(temp_v1,temp_v0);
  FUN_0024abfc();
  FUN_0026f018();
  temp_v4 = FUN_002a8a08();
  temp_v3 = 0;
  puVar1[0x47] = 0;
  do {
    if (-1 < *(char *)(temp_v4 + temp_v3 + 0x90f0)) {
      temp_v0 = FUN_002a89e4();
      temp_v2 = FUN_0029ee4c(temp_v0,10);
      if (temp_v2 == 0) {
        temp_v0 = FUN_002a89e4((int)*(char *)(temp_v4 + temp_v3 + 0x90f0));
        temp_v2 = FUN_0029ee4c(temp_v0,1);
        if (temp_v2 == 0) {
          puVar1[0x47] = puVar1[0x47] + 1;
        }
      }
    }
    temp_v3 = temp_v3 + 1;
  } while (temp_v3 < 0x18);
  return;
}
