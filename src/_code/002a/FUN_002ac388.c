/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ac388` (_code @ 0x2ac388, 0xbc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int *FUN_0014d128(unsigned int);
extern unsigned int FUN_0014d134(unsigned int, unsigned int);
extern unsigned int *FUN_0014d168(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0014d1a4. */
/* Supplied declaration required: FUN_0014d1e0. */
/* Supplied declaration required: FUN_0014d208. */
/* Supplied declaration required: FUN_0014d234. */
/* Supplied declaration required: FUN_0014d25c. */
/* Supplied declaration required: FUN_002a7c80. */


/* WARNING: Control flow encountered bad instruction data */

unsigned int FUN_002ac388(int param_1,unsigned int *param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: irregular input(s): in_s0; 9 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned int temp_v1;
  unsigned short unaff_r7;
  unsigned int in_s0;
  
  temp_v0 = FUN_0014d134(*(unsigned int *)(param_1 + 4),param_3);
  puVar2 = (unsigned int *)FUN_0014d168(temp_v0,param_4);
  puVar3 = (unsigned int *)FUN_0014d128(*(unsigned int *)(param_1 + 4));
  temp_v1 = *puVar2;
  if (temp_v1 < *puVar3) {
    if (puVar3 + temp_v1 * 2 + 1 != (unsigned int *)0x0) {
      *param_2 = puVar3[temp_v1 * 2 + 1];
      param_2[1] = puVar3[temp_v1 * 2 + 2];
      FUN_0014d25c(puVar2);
      param_2[5] = in_s0;
      puVar3 = puVar2;
      FUN_0014d1a4(puVar2);
      FUN_002a7c80(param_2 + 2,puVar3);
      puVar3 = puVar2;
      FUN_0014d1e0();
      *(char *)((int)param_2 + 0xd) = (char)puVar3;
      puVar3 = puVar2;
      FUN_0014d234();
      *(char *)((int)param_2 + 0xe) = (char)puVar3;
      FUN_0014d208();
      *(char *)((int)param_2 + 0xf) = (char)puVar2;
      *(unsigned short *)(param_2 + 7) = unaff_r7;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  return 0;
}
