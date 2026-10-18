/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fc260` (_code @ 0x2fc260, 0x290 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
} void_stack;

extern unsigned char LAB_002168d0; /* 0x2168d0 */
extern int FUN_002cf8a8(); /* 0x2cf8a8 */
extern int FUN_002f6a3c(); /* 0x2f6a3c */
extern unsigned char LAB_002fc520; /* 0x2fc520 */
extern unsigned char LAB_002fc534; /* 0x2fc534 */
extern unsigned char LAB_002fc548; /* 0x2fc548 */
extern unsigned char LAB_002fc564; /* 0x2fc564 */
extern unsigned int *DAT_0043dfc0; /* 0x43dfc0 */
extern char s__B_B_B_B_B_B_B_B_B_B_0043dfd8[129]; /* 0x43dfd8 */

/* Supplied declaration required: FUN_0024efe8. */
extern unsigned int FUN_00263e48(unsigned char *);
/* Supplied declaration required: FUN_00298fec. */
extern unsigned int FUN_0029a2d0(unsigned char *, unsigned int);
/* Supplied declaration required: FUN_002ae18c. */
/* Supplied declaration required: FUN_002be7fc. */
/* Supplied declaration required: FUN_002c1774. */
/* Supplied declaration required: FUN_002c1ffc. */
/* Supplied declaration required: FUN_002c20a8. */
/* Supplied declaration required: FUN_002c2210. */
/* Supplied declaration required: FUN_002c4b30. */
extern unsigned int *FUN_002c4b84(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c4c00. */
/* Supplied declaration required: FUN_002c5978. */


unsigned int FUN_002fc260(void)

{
/* irregular: 13 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int *puVar7;
  int temp_v4;
  unsigned int *puVar9;
  unsigned char temp_v5 [72];
  
  if (DAT_0043dfc0 == (unsigned int *)0x0) {
    puVar1 = (unsigned int *)FUN_002c4b84(0x100,0x100,0,0x744,1);
    DAT_0043dfc0 = puVar1;
    FUN_002c4b30(puVar1,0x744);
    FUN_002c2210(puVar1 + 1,1);
    puVar9 = puVar1 + 0x143;
    *puVar9 = 0;
    puVar1[0x144] = 0;
    puVar1[0x145] = 0;
    puVar1[0x146] = 0;
    puVar1[0x147] = 0;
    puVar1[0x148] = 0xc0a00000;
    puVar1[0x150] = 0;
    puVar1[0x14e] = 0x461c4000;
    puVar1[0x14c] = 0x41f00000;
    puVar1[0x14d] = 0x3f800000;
    puVar7 = puVar1 + 1;
    puVar1[0x149] = 0;
    puVar1[0x14a] = 0x3f800000;
    puVar1[0x14b] = 0;
    puVar1[0x14f] = 0x3fd55555;
    FUN_002c1774(puVar7);
    FUN_002c20a8(puVar7,puVar9,puVar1 + 0x146,puVar1 + 0x149);
    FUN_002c1ffc(puVar7,1);
    FUN_00298fec(puVar7);
    *(unsigned char *)(puVar1 + 0x17c) = 0;
    *(unsigned char *)((int)puVar1 + 0x5f2) = 1;
    puVar2 = &LAB_002fc520;
    FUN_002c5978(&LAB_002fc520,2,0,0,&LAB_002168d0,FUN_002f6a3c,puVar1);
    *puVar1 = (unsigned int)puVar2;
    FUN_002c4c00(&LAB_002fc534,0x6f,0,0,FUN_002cf8a8,0,puVar1,puVar2);
    puVar1[0x17b] = 0;
    temp_v2 = 0;
    do {
      FUN_002be7fc(temp_v5,&LAB_002fc548,
                   *(unsigned int *)(s__B_B_B_B_B_B_B_B_B_B_0043dfd8 + temp_v2 * 4));
      temp_v0 = FUN_00263e48(temp_v5);
      puVar1[temp_v2 + 0x1b2] = temp_v0;
      FUN_002be7fc(temp_v5,&LAB_002fc564,
                   *(unsigned int *)(s__B_B_B_B_B_B_B_B_B_B_0043dfd8 + temp_v2 * 4));
      temp_v0 = FUN_0029a2d0(temp_v5,7);
      temp_v3 = temp_v2 + 1;
      puVar1[temp_v2 + 0x196] = temp_v0;
      temp_v2 = temp_v3;
    } while (temp_v3 < 0x1c);
    puVar1[0x17a] = puVar1[0x1b2];
    *(unsigned char *)((int)puVar1 + 0x5f1) = 0;
    temp_v4 = *(int *)(puVar1[0x1b2] + 4);
    if (temp_v4 != 0) {
      temp_v1 = *(int *)(*(int *)(*(int *)(temp_v4 + 8) + 8) + 0x10);
      while (temp_v1 = temp_v1 - 1, -1 < temp_v1) {
        FUN_0024efe8(temp_v4,temp_v1);
      }
    }
    FUN_002ae18c(puVar9,puVar1[0x17a]);
    puVar7 = puVar1 + 1;
    FUN_002c1774(puVar7);
    FUN_002c20a8(puVar7,puVar9,puVar1 + 0x146,puVar1 + 0x149);
    FUN_002c1ffc(puVar7,1);
    FUN_00298fec(puVar7);
  }
  return *DAT_0043dfc0;
}
