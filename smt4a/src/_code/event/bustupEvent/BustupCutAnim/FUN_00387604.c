/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00387604` (_code @ 0x387604, 0x288 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
} void_stack;

extern unsigned char LAB_002f4540; /* 0x2f4540 */
extern int FUN_00334848(); /* 0x334848 */
extern int FUN_0037e53c(); /* 0x37e53c */
extern unsigned char LAB_003878bc; /* 0x3878bc */
extern unsigned char LAB_003878d0; /* 0x3878d0 */
extern unsigned char LAB_003878e4; /* 0x3878e4 */
extern unsigned char LAB_00387900; /* 0x387900 */
extern unsigned int *DAT_0057f4c4; /* 0x57f4c4 */

/* Supplied declaration required: FUN_00100388. */
/* Supplied declaration required: FUN_0013c884. */
/* Supplied declaration required: FUN_001418fc. */
/* Supplied declaration required: FUN_0014e38c. */
/* Supplied declaration required: FUN_0014f0dc. */
/* Supplied declaration required: FUN_0015155c. */
/* Supplied declaration required: FUN_001523b8. */
/* Supplied declaration required: FUN_00163060. */
/* Supplied declaration required: FUN_00186e2c. */
extern unsigned int FUN_001f4a48(unsigned char *, unsigned int);
/* Supplied declaration required: FUN_002e6354. */
/* Supplied declaration required: FUN_0036b824. */
extern unsigned int FUN_00387350(unsigned char *);
/* Supplied declaration required: FUN_00449814. */


unsigned int FUN_00387604(void)

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
  unsigned char temp_v5 [76];
  
  if (DAT_0057f4c4 == (unsigned int *)0x0) {
    puVar1 = (unsigned int *)0x100;
    FUN_00163060(0x100,0x100,0,0x748,1);
    DAT_0057f4c4 = puVar1;
    FUN_002e6354();
    FUN_0013c884(puVar1 + 1,1);
    puVar1[0x144] = 0;
    puVar1[0x145] = 0;
    puVar1[0x146] = 0;
    puVar1[0x147] = 0;
    puVar1[0x148] = 0;
    puVar1[0x149] = 0xc0a00000;
    puVar1[0x151] = 0;
    puVar1[0x14f] = 0x461c4000;
    puVar1[0x14d] = 0x41f00000;
    puVar1[0x14e] = 0x3f800000;
    puVar7 = puVar1 + 1;
    puVar1[0x14a] = 0;
    puVar1[0x14b] = 0x3f800000;
    puVar1[0x14c] = 0;
    puVar1[0x150] = 0x3fd55555;
    FUN_001418fc(puVar7);
    FUN_0014f0dc(puVar7,puVar1 + 0x144,puVar1 + 0x147,puVar1 + 0x14a);
    FUN_001523b8(puVar7,1);
    FUN_0036b824(puVar7);
    *(unsigned char *)(puVar1 + 0x17d) = 0;
    *(unsigned char *)((int)puVar1 + 0x5f6) = 1;
    puVar2 = &LAB_003878bc;
    FUN_0014e38c(&LAB_003878bc,4,0,0,&LAB_002f4540,FUN_0037e53c,puVar1);
    *puVar1 = (unsigned int)puVar2;
    FUN_0015155c(&LAB_003878d0,0x71,0,0,FUN_00334848,0,puVar1,puVar2);
    puVar1[0x17c] = 0;
    temp_v2 = 0;
    do {
      FUN_00100388(temp_v5,&LAB_003878e4,*(unsigned int *)(temp_v2 * 4 + 0x57f4c8));
      temp_v0 = FUN_00387350(temp_v5);
      puVar1[temp_v2 + 0x1b3] = temp_v0;
      FUN_00100388(temp_v5,&LAB_00387900,*(unsigned int *)(temp_v2 * 4 + 0x57f4c8));
      temp_v0 = FUN_001f4a48(temp_v5,7);
      temp_v3 = temp_v2 + 1;
      puVar1[temp_v2 + 0x197] = temp_v0;
      temp_v2 = temp_v3;
    } while (temp_v3 < 0x1c);
    puVar1[0x17b] = puVar1[0x1b3];
    *(unsigned char *)((int)puVar1 + 0x5f5) = 0;
    temp_v4 = *(int *)(puVar1[0x1b3] + 4);
    if (temp_v4 != 0) {
      temp_v1 = *(int *)(*(int *)(*(int *)(temp_v4 + 8) + 8) + 0x10);
      while (temp_v1 = temp_v1 - 1, -1 < temp_v1) {
        FUN_00449814(temp_v4,temp_v1);
      }
    }
    FUN_00186e2c(puVar1 + 0x144,puVar1[0x17b]);
    puVar7 = puVar1 + 1;
    FUN_001418fc(puVar7);
    FUN_0014f0dc(puVar7,puVar1 + 0x144,puVar1 + 0x147,puVar1 + 0x14a);
    FUN_001523b8(puVar7,1);
    FUN_0036b824(puVar7);
  }
  return *DAT_0057f4c4;
}
