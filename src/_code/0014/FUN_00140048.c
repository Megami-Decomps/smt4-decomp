/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00140048` (_code @ 0x140048, 0xd0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_00421820; /* 0x421820 */

extern unsigned int FUN_002a7bc0(void);
extern unsigned int FUN_002ac94c(void);
extern unsigned int *FUN_002b52b4(void);
/* Supplied declaration required: FUN_002bfe28. */
/* Supplied declaration required: FUN_002bfedc. */


unsigned int * FUN_00140048(void)

{
/* irregular: irregular input(s): in_s0, in_stack_00000000, in_stack_00000004, in_stack_00000008; 5 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  unsigned int in_s0;
  unsigned int *in_stack_00000000;
  unsigned int *in_stack_00000004;
  unsigned char in_stack_00000008;
  
  puVar1 = (unsigned int *)FUN_002b52b4();
  *puVar1 = (unsigned int)&DAT_00421820;
  temp_v0 = FUN_002ac94c();
  FUN_002bfedc(puVar1 + 0x52,temp_v0);
  temp_v0 = FUN_002ac94c();
  FUN_002bfedc(puVar1 + 0x5e,temp_v0);
  temp_v0 = FUN_002a7bc0();
  FUN_002bfe28(puVar1 + 0x6a,temp_v0);
  temp_v0 = FUN_002a7bc0();
  FUN_002bfe28(puVar1 + 0x7a,temp_v0);
  temp_v0 = FUN_002ac94c();
  FUN_002bfedc(puVar1 + 0x8a,temp_v0);
  puVar1[0x96] = *in_stack_00000000;
  *(unsigned char *)(puVar1 + 0x97) = *(unsigned char *)(in_stack_00000000 + 1);
  *in_stack_00000000 = 0;
  puVar1[0x98] = *in_stack_00000004;
  *(unsigned char *)(puVar1 + 0x99) = *(unsigned char *)(in_stack_00000004 + 1);
  *in_stack_00000004 = 0;
  puVar1[0x9a] = 0;
  puVar1[0x9b] = 0;
  puVar1[0xa5] = in_s0;
  *(unsigned char *)(puVar1 + 0xa6) = in_stack_00000008;
  return puVar1;
}
