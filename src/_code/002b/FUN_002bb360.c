/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bb360` (_code @ 0x2bb360, 0xb0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_00144294; /* 0x144294 */
extern unsigned int DAT_0047236c; /* 0x47236c */
extern unsigned char DAT_004ea6d0; /* 0x4ea6d0 */

extern unsigned long long FUN_002c00d4(unsigned int *);
/* Supplied declaration required: FUN_002c3344. */
/* Supplied declaration required: FUN_002c5f58. */


/* WARNING: Control flow encountered bad instruction data */

void FUN_002bb360(unsigned int param_1,unsigned int param_2)

{
/* irregular: 5 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  unsigned int temp_v0;
  unsigned long long temp_v1;
  
  temp_v0 = DAT_0047236c;
  if (((DAT_0047236c & 1) == 0) &&
     (temp_v1 = FUN_002c00d4(&DAT_0047236c), param_2 = (unsigned int)((unsigned long long)temp_v1 >> 0x20), temp_v0 = 0,
     (int)temp_v1 != 0)) {
    puVar2 = &DAT_004ea6d0;
    FUN_002c5f58(&DAT_004ea6d0,&LAB_00144294,0xc,3);
    *(unsigned int *)(puVar2 + 0x24) = 0;
    puVar2[0x28] = 0;
    *(unsigned int *)(puVar2 + 0x2c) = 0;
    *(unsigned int *)(puVar2 + 0x30) = 0;
    *(unsigned int *)(puVar2 + 0x34) = 0xffffffff;
    *(unsigned int *)(puVar2 + 0x3c) = 0;
    *(unsigned short *)(puVar2 + 0x40) = 0;
    *(unsigned int *)(puVar2 + 0x44) = 0;
    *(unsigned short *)(puVar2 + 0x48) = 0;
    *(unsigned int *)(puVar2 + 0x4c) = 0;
    *(unsigned int *)(puVar2 + 0x50) = 0;
    *(unsigned int *)(puVar2 + 0x54) = 0xffffffff;
    *(unsigned int *)(puVar2 + 100) = 0;
    *(unsigned int *)(puVar2 + 0x68) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  puVar1 = (unsigned int *)(temp_v0 >> 8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  *(unsigned char *)(puVar1 + 0x105) = 1;
  *(unsigned char *)((int)puVar1 + 0x415) = 1;
  puVar1[0x107] = 0;
  puVar1[0x106] = 0;
  FUN_002c3344(puVar1 + 0x108,param_2 & (unsigned int)puVar1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
