/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a46c0` (_code @ 0x1a46c0, 0xd0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int mtx44Copy(unsigned int *, unsigned int);
int nn_math_ARMv6_MTX34CopyAsm(unsigned int *, unsigned int);

extern unsigned char DAT_0055bc3c; /* 0x55bc3c */

extern unsigned int _ZN2nw4math5MTX448IdentityEv(void);
/* Supplied declaration required: mtx44Copy. */
extern unsigned int FUN_001a1e28(void);
extern unsigned int *FUN_001b7420(void);
/* Supplied declaration required: nn_math_ARMv6_MTX34CopyAsm. */


unsigned int * FUN_001a46c0(void)

{
/* irregular: irregular input(s): in_s0, in_stack_00000000, in_stack_00000004, in_stack_00000008; 5 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  unsigned int in_s0;
  unsigned int *in_stack_00000000;
  unsigned int *in_stack_00000004;
  unsigned char in_stack_00000008;
  
  puVar1 = (unsigned int *)FUN_001b7420();
  *puVar1 = (unsigned int)&DAT_0055bc3c;
  temp_v0 = FUN_001a1e28();
  nn_math_ARMv6_MTX34CopyAsm(puVar1 + 0x52,temp_v0);
  temp_v0 = FUN_001a1e28();
  nn_math_ARMv6_MTX34CopyAsm(puVar1 + 0x5e,temp_v0);
  temp_v0 = _ZN2nw4math5MTX448IdentityEv();
  mtx44Copy(puVar1 + 0x6a,temp_v0);
  temp_v0 = _ZN2nw4math5MTX448IdentityEv();
  mtx44Copy(puVar1 + 0x7a,temp_v0);
  temp_v0 = FUN_001a1e28();
  nn_math_ARMv6_MTX34CopyAsm(puVar1 + 0x8a,temp_v0);
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

} /* extern "C" */
