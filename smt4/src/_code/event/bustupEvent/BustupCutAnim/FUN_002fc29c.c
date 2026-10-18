/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fc29c` (_code @ 0x2fc29c, 0x290 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
} void_stack;

extern unsigned char LAB_002169cc; /* 0x2169cc */
extern int FUN_002cf954(); /* 0x2cf954 */
extern int FUN_002f6a78(); /* 0x2f6a78 */
extern unsigned char LAB_002fc598; /* 0x2fc598 */
extern unsigned char LAB_002fc5ac; /* 0x2fc5ac */
extern unsigned char LAB_002fc5c0; /* 0x2fc5c0 */
extern unsigned char LAB_002fc5dc; /* 0x2fc5dc */
extern unsigned int *DAT_0043dfc0; /* 0x43dfc0 */
extern char s__B_B_B_B_B_B_B_B_B_B_0043dfd8[129]; /* 0x43dfd8 */

/* Supplied declaration required: FUN_0024edd4. */
extern unsigned int FUN_00263c1c(unsigned char *);
/* Supplied declaration required: FUN_00298d50. */
extern unsigned int FUN_0029a034(unsigned char *, unsigned int);
/* Supplied declaration required: FUN_002adf00. */
/* Supplied declaration required: FUN_002be624. */
/* Supplied declaration required: FUN_002c159c. */
/* Supplied declaration required: FUN_002c1e30. */
/* Supplied declaration required: FUN_002c1edc. */
/* Supplied declaration required: FUN_002c2044. */
/* Supplied declaration required: FUN_002c4938. */
/* Supplied declaration required: FUN_002c498c. */
/* Supplied declaration required: FUN_002c4a08. */
/* Supplied declaration required: FUN_002c5788. */


unsigned int FUN_002fc29c(void)

{
/* irregular: 14 native warning(s); review required */
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
    puVar1 = (unsigned int *)0x100;
    FUN_002c498c(0x100,0x100,0,0x744,1);
    DAT_0043dfc0 = puVar1;
    FUN_002c4938();
    FUN_002c2044(puVar1 + 1,1);
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
    FUN_002c159c(puVar7);
    FUN_002c1edc(puVar7,puVar9,puVar1 + 0x146,puVar1 + 0x149);
    FUN_002c1e30(puVar7,1);
    FUN_00298d50(puVar7);
    *(unsigned char *)(puVar1 + 0x17c) = 0;
    *(unsigned char *)((int)puVar1 + 0x5f2) = 1;
    puVar2 = &LAB_002fc598;
    FUN_002c5788(&LAB_002fc598,2,0,0,&LAB_002169cc,FUN_002f6a78,puVar1);
    *puVar1 = (unsigned int)puVar2;
    FUN_002c4a08(&LAB_002fc5ac,0x6f,0,0,FUN_002cf954,0,puVar1,puVar2);
    puVar1[0x17b] = 0;
    temp_v2 = 0;
    do {
      FUN_002be624(temp_v5,&LAB_002fc5c0,
                   *(unsigned int *)(s__B_B_B_B_B_B_B_B_B_B_0043dfd8 + temp_v2 * 4));
      temp_v0 = FUN_00263c1c(temp_v5);
      puVar1[temp_v2 + 0x1b2] = temp_v0;
      FUN_002be624(temp_v5,&LAB_002fc5dc,
                   *(unsigned int *)(s__B_B_B_B_B_B_B_B_B_B_0043dfd8 + temp_v2 * 4));
      temp_v0 = FUN_0029a034(temp_v5,7);
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
        FUN_0024edd4(temp_v4,temp_v1);
      }
    }
    FUN_002adf00(puVar9,puVar1[0x17a]);
    puVar7 = puVar1 + 1;
    FUN_002c159c(puVar7);
    FUN_002c1edc(puVar7,puVar9,puVar1 + 0x146,puVar1 + 0x149);
    FUN_002c1e30(puVar7,1);
    FUN_00298d50(puVar7);
  }
  return *DAT_0043dfc0;
}
