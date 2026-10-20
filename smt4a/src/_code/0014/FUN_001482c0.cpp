/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001482c0` (_code @ 0x1482c0, 0x220 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdProcessCreateSimple(...);
int FUN_0015f258(...);
int FUN_0015f378(...);
int FUN_0016ccb4(...);
int FUN_0016ce28(...);
int FUN_0019a46c(...);
int FUN_001a089c(...);
int FUN_001b57a8(...);
int sysMemClear(...);

typedef int romwright_code(...);
/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern unsigned char LAB_001484e4; /* 0x1484e4 */
extern unsigned char LAB_001484f4; /* 0x1484f4 */
extern int FUN_0015f2ec(...); /* 0x15f2ec */

/* Supplied declaration required: asdProcessCreateSimple. */
extern int FUN_001585bc(int);
extern int FUN_001585d4(int);
/* Supplied declaration required: FUN_0015f258. */
/* Supplied declaration required: FUN_0015f378. */
extern int FUN_0015f434(int);
extern int FUN_0015f448(int);
/* Supplied declaration required: FUN_0016ccb4. */
extern int FUN_0016cd08(int);
extern int FUN_0016cd0c(int);
/* Supplied declaration required: FUN_0016ce28. */
/* Supplied declaration required: FUN_0019a46c. */
/* Supplied declaration required: FUN_001a089c. */
/* Supplied declaration required: FUN_001b57a8. */
extern unsigned int *FUN_001b5acc(int);
/* Supplied declaration required: sysMemClear. */


unsigned int * FUN_001482c0(int param_1)

{
/* irregular: 11 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  romwright_code **ppcVar3;
  unsigned int *puVar4;
  unsigned char *puVar5;
  unsigned int temp_v1;
  unsigned int temp_v2;
  romwright_code *temp_v3;
  unsigned int uStack_1c;
  unsigned int *temp_v4;
  
  ppcVar3 = &temp_v3;
  temp_v0 = FUN_001585d4(param_1 + 0x20);
  temp_v0 = FUN_001585bc(temp_v0 + 8);
  temp_v0 = FUN_0016cd08(temp_v0 + 0x54);
  temp_v0 = FUN_0016cd0c(temp_v0 + 4);
  temp_v0 = FUN_0016cd08(temp_v0 + 4);
  temp_v0 = FUN_0015f434(temp_v0 + 4);
  *(unsigned int *)(temp_v0 + 0x10) = 0;
  *(unsigned int *)(temp_v0 + 0x14) = 0;
  FUN_001a089c((unsigned int *)(temp_v0 + 0x10),0);
  *(unsigned int *)(temp_v0 + 0x18) = 0;
  *(unsigned int *)(temp_v0 + 0x1c) = 0;
  FUN_001a089c(temp_v0 + 0x18,0);
  temp_v0 = FUN_0015f448(temp_v0 + 0x20);
  *(unsigned int *)(temp_v0 + 700) = 0;
  *(unsigned int *)(temp_v0 + 0x500) = 0;
  *(unsigned int *)(temp_v0 + 0x504) = 0;
  *(unsigned int *)(temp_v0 + 0x508) = 0;
  *(unsigned int *)(temp_v0 + 0x50c) = 0;
  *(unsigned int *)(temp_v0 + 0x5d0) = 0;
  *(unsigned int *)(temp_v0 + 0x5dc) = 0;
  *(unsigned int *)(temp_v0 + 0x5e0) = 0;
  *(unsigned int *)(temp_v0 + 0x6ac) = 0;
  *(unsigned char *)(temp_v0 + 0x6b0) = 1;
  puVar2 = (unsigned int *)FUN_001b5acc(temp_v0 + 0x6b4);
  puVar2[2] = 0;
  puVar2[3] = 0;
  FUN_001b57a8(&temp_v3,0);
  temp_v1 = (unsigned int)ppcVar3[1];
  *puVar2 = (unsigned int)*ppcVar3;
  puVar2[1] = temp_v1;
  puVar2[4] = 0;
  *(unsigned char *)(puVar2 + 0x17d) = 1;
  puVar2[0x181] = 0;
  puVar2[-2] = 0;
  FUN_0016ccb4(puVar2 + -0x1b7);
  puVar2[-0x1d2] = (temp_v2 & 0xff000000) | 2;
  puVar4 = puVar2 + -0x1b7;
  puVar2[-0x1d3] = 0x19a2;
  FUN_0016ccb4();
  puVar2[-0x1d1] = 0x19a2;
  puVar2[-0x1d0] = (unsigned int)puVar4 & 0xff000000;
  FUN_0016ccb4(puVar2 + -0x1b7);
  sysMemClear(puVar2 + -0x1d6,0xb);
  FUN_0019a46c(puVar2 + -0x1d6,&LAB_001484e4,0xb);
  puVar2[-0x32] = 0;
  puVar2[-0x31] = 0;
  puVar2[-0x30] = 0;
  puVar2[-0x2f] = 0;
  puVar2[-0x2e] = 0;
  puVar2[-0x2d] = 0;
  puVar2[-0x2c] = 0;
  puVar2[-0x2b] = 0;
  puVar2[-0x2a] = 0;
  puVar2[-0x29] = 0;
  puVar2[-0x28] = 0;
  puVar2[-0x27] = 0;
  puVar2[-0x26] = 0;
  puVar2[-0x25] = 0;
  puVar2[-0x24] = 0;
  puVar2[-0x23] = 0;
  sysMemClear(puVar2 + -0x22,0x80);
  FUN_0015f378(puVar2 + -0x1b5,0x8000);
  FUN_0016ce28(puVar2 + -0x1b1);
  FUN_0015f258(puVar2 + 4);
  temp_v3 = FUN_0015f2ec;
  uStack_1c = 0;
  puVar5 = &LAB_001484f4;
  temp_v4 = puVar2 + -0x1d7;
  asdProcessCreateSimple(&LAB_001484f4,4,0);
  puVar2[0x182] = (unsigned int)puVar5;
  return puVar2 + -0x1d7;
}

} /* extern "C" */
