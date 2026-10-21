/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00187d90` (_code @ 0x187d90, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdModelCommitCommandRange(unsigned int *, unsigned int *);
int FUN_0019a2ac(unsigned int *, unsigned int, int);
int FUN_0019eafc(void);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

/* Supplied declaration required: asdModelCommitCommandRange. */
/* Supplied declaration required: FUN_0019a2ac. */
/* Supplied declaration required: FUN_0019eafc. */


void FUN_00187d90(unsigned int *param_1,unsigned int param_2)

{
/* irregular: 3 native warning(s); review required */
  unsigned int *puVar1;
  
  puVar1 = param_1;
  FUN_0019eafc();
  *puVar1 = *(unsigned char *)((int)param_1 + 0x12a3a) | 0x80000000;
  puVar1[1] = 0xf02c0;
  FUN_0019a2ac(puVar1 + 2,param_2,0xff02c1);
  asdModelCommitCommandRange(puVar1,puVar1 + 0x14);
  return;
}

} /* extern "C" */
