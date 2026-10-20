/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001102d0` (_code @ 0x1102d0, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002fb084(unsigned int, unsigned int, int, unsigned int, unsigned int, int);
int __aeabi_uidivmod(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);

/* stack frame of param_6: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_6_stack;

/* Supplied declaration required: FUN_002fb084. */
/* Supplied declaration required: __aeabi_uidivmod. */


void FUN_001102d0(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                 unsigned int param_5,unsigned int param_6)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  __aeabi_uidivmod(param_3,*(unsigned int *)(param_1 + 8),param_3,param_4,param_2,param_3,param_4);
  FUN_002fb084(param_2,param_4,temp_v0 + *(int *)(param_1 + 4),param_5,param_6,2);
  return;
}

} /* extern "C" */
