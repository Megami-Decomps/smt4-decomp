/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013f9b8` (_code @ 0x13f9b8, 0xd0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_00421468; /* 0x421468 */

extern unsigned int FUN_002a7f04(void);
extern unsigned int FUN_002acbd8(void);
extern unsigned int *FUN_002b5498(void);
/* Supplied declaration required: FUN_002c0000. */
/* Supplied declaration required: FUN_002c00b4. */


unsigned int * FUN_0013f9b8(void)

{
/* irregular: irregular input(s): in_s0, in_stack_00000000, in_stack_00000004, in_stack_00000008; 5 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  unsigned int in_s0;
  unsigned int *in_stack_00000000;
  unsigned int *in_stack_00000004;
  unsigned char in_stack_00000008;
  
  puVar1 = (unsigned int *)FUN_002b5498();
  *puVar1 = (unsigned int)&DAT_00421468;
  temp_v0 = FUN_002acbd8();
  FUN_002c00b4(puVar1 + 0x52,temp_v0);
  temp_v0 = FUN_002acbd8();
  FUN_002c00b4(puVar1 + 0x5e,temp_v0);
  temp_v0 = FUN_002a7f04();
  FUN_002c0000(puVar1 + 0x6a,temp_v0);
  temp_v0 = FUN_002a7f04();
  FUN_002c0000(puVar1 + 0x7a,temp_v0);
  temp_v0 = FUN_002acbd8();
  FUN_002c00b4(puVar1 + 0x8a,temp_v0);
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
