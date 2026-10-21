/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0019f828` (_code @ 0x19f828, 0x58 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdModelCommitCommandRange(unsigned int *, unsigned int *);
int FUN_0019eafc(void);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

/* Supplied declaration required: asdModelCommitCommandRange. */
/* Supplied declaration required: FUN_0019eafc. */


void FUN_0019f828(unsigned int *param_1,unsigned int *param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  
  puVar1 = param_1;
  FUN_0019eafc();
  *puVar1 = *(unsigned char *)((int)param_1 + 0x12a42) | 0x80000000;
  puVar1[1] = 0x804f02c0;
  puVar1[2] = param_2[3];
  puVar1[3] = param_2[2];
  puVar1[4] = param_2[1];
  puVar1[5] = *param_2;
  asdModelCommitCommandRange(puVar1,puVar1 + 6);
  return;
}

} /* extern "C" */
