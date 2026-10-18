/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00111184` (_code @ 0x111184, 0x200 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern unsigned char LAB_00111388; /* 0x111388 */
extern unsigned char LAB_00111398; /* 0x111398 */
extern int FUN_00121e5c(); /* 0x121e5c */

extern int FUN_0011b918(int);
extern int FUN_0011b930(int);
/* Supplied declaration required: FUN_00121ee8. */
extern int FUN_00121fa0(int);
extern int FUN_00121fb4(int);
/* Supplied declaration required: FUN_00126fb8. */
/* Supplied declaration required: FUN_001270f8. */
/* Supplied declaration required: FUN_002ba78c. */
/* Supplied declaration required: FUN_002ba81c. */
extern int FUN_002ba8e4(int);
extern int FUN_002ba8e8(int);
extern unsigned int *FUN_002baa40(romwright_code **, unsigned int);
extern unsigned int *FUN_002bad5c(int);
/* Supplied declaration required: FUN_002c4938. */
/* Supplied declaration required: FUN_002c5220. */
/* Supplied declaration required: FUN_002c5788. */


unsigned int * FUN_00111184(int param_1)

{
/* irregular: 10 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned char *puVar4;
  unsigned int temp_v1;
  unsigned int temp_v2;
  romwright_code *temp_v3;
  unsigned int uStack_1c;
  unsigned int *temp_v4;
  
  temp_v0 = FUN_0011b930(param_1 + 0x20);
  temp_v0 = FUN_0011b918(temp_v0 + 8);
  temp_v0 = FUN_002ba8e4(temp_v0 + 0x54);
  temp_v0 = FUN_002ba8e8(temp_v0 + 4);
  temp_v0 = FUN_002ba8e4(temp_v0 + 4);
  temp_v0 = FUN_00121fa0(temp_v0 + 4);
  *(unsigned int *)(temp_v0 + 0x10) = 0;
  *(unsigned int *)(temp_v0 + 0x14) = 0;
  FUN_002c5220((unsigned int *)(temp_v0 + 0x10),0);
  *(unsigned int *)(temp_v0 + 0x18) = 0;
  *(unsigned int *)(temp_v0 + 0x1c) = 0;
  FUN_002c5220(temp_v0 + 0x18,0);
  temp_v0 = FUN_00121fb4(temp_v0 + 0x20);
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
  puVar2 = (unsigned int *)FUN_002bad5c(temp_v0 + 0x6b4);
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar3 = (unsigned int *)FUN_002baa40(&temp_v3,0);
  temp_v1 = puVar3[1];
  *puVar2 = *puVar3;
  puVar2[1] = temp_v1;
  puVar2[4] = 0;
  *(unsigned char *)(puVar2 + 0x17d) = 1;
  puVar2[0x181] = 0;
  puVar2[-2] = 0;
  FUN_00126fb8(puVar2 + -0x1b7);
  puVar2[-0x1d2] = (temp_v2 & 0xffff0000) | 2;
  puVar3 = puVar2 + -0x1b7;
  puVar2[-0x1d3] = 0xe5c;
  FUN_00126fb8();
  puVar2[-0x1d1] = 0xe5c;
  puVar2[-0x1d0] = (unsigned int)puVar3 & 0xffff0000;
  FUN_00126fb8(puVar2 + -0x1b7);
  FUN_002c4938(puVar2 + -0x1d6,0xb);
  FUN_002ba81c(puVar2 + -0x1d6,&LAB_00111388,0xb);
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
  FUN_002c4938(puVar2 + -0x22,0x80);
  FUN_00121ee8(puVar2 + -0x1b5,0x8000);
  FUN_001270f8(puVar2 + -0x1b1);
  FUN_002ba78c(puVar2 + 4);
  temp_v3 = FUN_00121e5c;
  uStack_1c = 0;
  puVar4 = &LAB_00111398;
  temp_v4 = puVar2 + -0x1d7;
  FUN_002c5788(&LAB_00111398,2,0);
  puVar2[0x182] = (unsigned int)puVar4;
  return puVar2 + -0x1d7;
}
