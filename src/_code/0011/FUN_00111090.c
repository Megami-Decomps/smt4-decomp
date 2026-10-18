/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00111090` (_code @ 0x111090, 0x200 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern unsigned char LAB_00111294; /* 0x111294 */
extern unsigned char LAB_001112a4; /* 0x1112a4 */
extern int FUN_00121d7c(); /* 0x121d7c */

extern int FUN_0011b838(int);
extern int FUN_0011b850(int);
/* Supplied declaration required: FUN_00121e08. */
extern int FUN_00121ec4(int);
extern int FUN_00121ed8(int);
/* Supplied declaration required: FUN_00126edc. */
/* Supplied declaration required: FUN_0012701c. */
/* Supplied declaration required: FUN_002baacc. */
/* Supplied declaration required: FUN_002bab5c. */
extern int FUN_002bac24(int);
extern int FUN_002bac28(int);
extern unsigned int *FUN_002bad80(romwright_code **, unsigned int);
extern unsigned int *FUN_002bb09c(int);
/* Supplied declaration required: FUN_002c4b30. */
/* Supplied declaration required: FUN_002c541c. */
/* Supplied declaration required: FUN_002c5978. */


unsigned int * FUN_00111090(int param_1)

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
  
  temp_v0 = FUN_0011b850(param_1 + 0x20);
  temp_v0 = FUN_0011b838(temp_v0 + 8);
  temp_v0 = FUN_002bac24(temp_v0 + 0x54);
  temp_v0 = FUN_002bac28(temp_v0 + 4);
  temp_v0 = FUN_002bac24(temp_v0 + 4);
  temp_v0 = FUN_00121ec4(temp_v0 + 4);
  *(unsigned int *)(temp_v0 + 0x10) = 0;
  *(unsigned int *)(temp_v0 + 0x14) = 0;
  FUN_002c541c((unsigned int *)(temp_v0 + 0x10),0);
  *(unsigned int *)(temp_v0 + 0x18) = 0;
  *(unsigned int *)(temp_v0 + 0x1c) = 0;
  FUN_002c541c(temp_v0 + 0x18,0);
  temp_v0 = FUN_00121ed8(temp_v0 + 0x20);
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
  puVar2 = (unsigned int *)FUN_002bb09c(temp_v0 + 0x6b4);
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar3 = (unsigned int *)FUN_002bad80(&temp_v3,0);
  temp_v1 = puVar3[1];
  *puVar2 = *puVar3;
  puVar2[1] = temp_v1;
  puVar2[4] = 0;
  *(unsigned char *)(puVar2 + 0x17d) = 1;
  puVar2[0x181] = 0;
  puVar2[-2] = 0;
  FUN_00126edc(puVar2 + -0x1b7);
  puVar2[-0x1d2] = (temp_v2 & 0xffff0000) | 2;
  puVar3 = puVar2 + -0x1b7;
  puVar2[-0x1d3] = 0xe5c;
  FUN_00126edc();
  puVar2[-0x1d1] = 0xe5c;
  puVar2[-0x1d0] = (unsigned int)puVar3 & 0xffff0000;
  FUN_00126edc(puVar2 + -0x1b7);
  FUN_002c4b30(puVar2 + -0x1d6,0xb);
  FUN_002bab5c(puVar2 + -0x1d6,&LAB_00111294,0xb);
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
  FUN_002c4b30(puVar2 + -0x22,0x80);
  FUN_00121e08(puVar2 + -0x1b5,0x8000);
  FUN_0012701c(puVar2 + -0x1b1);
  FUN_002baacc(puVar2 + 4);
  temp_v3 = FUN_00121d7c;
  uStack_1c = 0;
  puVar4 = &LAB_001112a4;
  temp_v4 = puVar2 + -0x1d7;
  FUN_002c5978(&LAB_001112a4,2,0);
  puVar2[0x182] = (unsigned int)puVar4;
  return puVar2 + -0x1d7;
}
