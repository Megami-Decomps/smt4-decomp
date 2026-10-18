/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0019dde4` (_code @ 0x19dde4, 0xa4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_0019de94; /* 0x19de94 */
extern unsigned int *DAT_0044cda0; /* 0x44cda0 */
extern int DAT_0049faf8; /* 0x49faf8 */

/* Supplied declaration required: FUN_0029bb3c. */
/* Supplied declaration required: FUN_002a0428. */


void FUN_0019dde4(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  unsigned char *puVar3;
  unsigned int *puVar4;
  
  puVar1 = DAT_0044cda0;
  *DAT_0044cda0 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  *(unsigned char *)(puVar1 + 3) = 0;
  *(unsigned char *)(puVar1 + 4) = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(unsigned char *)(puVar1 + 10) = 0;
  puVar1[0xb] = 0;
  temp_v0 = DAT_0049faf8;
  puVar1 = DAT_0044cda0;
  DAT_0044cda0[2] = DAT_0049faf8;
  if (0 < temp_v0) {
    puVar3 = &LAB_0019de94;
    FUN_0029bb3c(&LAB_0019de94,7);
    puVar1[0xb] = (unsigned int)puVar3;
    FUN_002a0428();
    puVar4 = (unsigned int *)puVar1[0xb];
    *puVar4 = *puVar4 | 2;
    *(unsigned char *)(*(int *)(puVar4[2] + 0x2c) + 0x1f6) = 0;
    *DAT_0044cda0 = 1;
  }
  return;
}
