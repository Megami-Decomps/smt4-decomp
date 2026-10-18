/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001dafbc` (_code @ 0x1dafbc, 0x22c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

extern int FUN_001d98c4(); /* 0x1d98c4 */
extern unsigned char LAB_001db234; /* 0x1db234 */
extern unsigned char LAB_001db240; /* 0x1db240 */
extern unsigned char LAB_001db250; /* 0x1db250 */
extern unsigned char LAB_001fe198; /* 0x1fe198 */
extern unsigned char LAB_0021f240; /* 0x21f240 */
extern unsigned char LAB_0021f258; /* 0x21f258 */
extern unsigned char LAB_002e08d4; /* 0x2e08d4 */
extern unsigned int *DAT_00432ce0; /* 0x432ce0 */

/* Supplied declaration required: FUN_00263734. */
extern int FUN_00263778(unsigned int);
/* Supplied declaration required: FUN_00282e6c. */
/* Supplied declaration required: FUN_002899c4. */
/* Supplied declaration required: FUN_0029c0fc. */
/* Supplied declaration required: FUN_002a7540. */
extern int FUN_002c0ba8(unsigned int);
extern unsigned int *FUN_002c4b84(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c4c00. */
/* Supplied declaration required: FUN_002c5978. */


void FUN_001dafbc(unsigned int *param_1)

{
/* irregular: 8 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  unsigned int temp_v1;
  unsigned char *puVar4;
  
  puVar1 = (unsigned int *)FUN_002c4b84(0x100,0x100,0,0x5e8,1);
  DAT_00432ce0 = puVar1;
  temp_v0 = FUN_00263778(10);
  if (temp_v0 == 0) {
    FUN_00263734(10,1);
  }
  temp_v0 = FUN_00263778(0xc);
  if (temp_v0 == 0) {
    FUN_00263734(0xc,1);
  }
  temp_v0 = FUN_00263778(0xb);
  if ((temp_v0 == 0) && (temp_v0 = FUN_002c0ba8(0x277), temp_v0 != 0)) {
    FUN_00263734(0xb,1);
  }
  FUN_002899c4(0x465,0,1);
  *(unsigned char *)((int)puVar1 + 5) = 1;
  puVar1[4] = 0;
  puVar1[5] = 0;
  *(unsigned char *)((int)puVar1 + 9) = 0;
  puVar1[3] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x154] = 0;
  *(unsigned char *)(puVar1 + 0x155) = 0;
  puVar1[0x156] = 0;
  puVar1[0x15a] = 0;
  puVar1[0x159] = 0;
  puVar1[0x15d] = 0;
  puVar1[0x15c] = 0;
  puVar1[0x160] = 0;
  puVar1[0x15f] = 0;
  puVar1[0x163] = 0;
  puVar1[0x162] = 0;
  FUN_002a7540(0);
  *(unsigned char *)(puVar1 + 1) = 0;
  if (param_1 != (unsigned int *)0x0) {
    temp_v1 = *param_1;
    *(char *)((int)puVar1 + 9) = (char)temp_v1;
    *(unsigned char *)((int)puVar1 + 5) = 0;
    FUN_00263734(temp_v1 & 0xff,1);
    FUN_0029c0fc(0x1c,1);
    puVar1[4] = 0;
    puVar1[5] = 0;
  }
  else {
    puVar1[5] = 0;
    puVar1[4] = 1;
    FUN_00282e6c(0,0xff);
  }
  puVar4 = &LAB_001db234;
  FUN_002c5978(&LAB_001db234,2,0,0,FUN_001d98c4,&LAB_0021f240,0);
  *puVar1 = (unsigned int)puVar4;
  FUN_002c4c00(&LAB_001db240,0x75,0,0,&LAB_001fe198,0,0,puVar4);
  FUN_002c4c00(&LAB_001db240,0xd3,0,0,&LAB_002e08d4,0,0,*puVar1);
  FUN_002c4c00(&LAB_001db250,0xe7,0,0,&LAB_0021f258,0,0,*puVar1);
  return;
}
