/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0014e314` (_code @ 0x14e314, 0x74 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0019e5e0(unsigned int, unsigned int, unsigned int, unsigned int);
int FUN_0019ea00(void);
int FUN_001b4120(unsigned long long *, int);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

/* Supplied declaration required: FUN_0019e5e0. */
/* Supplied declaration required: FUN_0019ea00. */
/* Supplied declaration required: FUN_001b4120. */


void FUN_0014e314(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 4 native warning(s); review required */
  unsigned long long uStack_20;
  
  FUN_0019ea00();
  FUN_0019e5e0(param_1,param_2,param_3,param_4);
  uStack_20 = 0x1024500000001;
  FUN_001b4120(&uStack_20,0x18);
                    /* WARNING: Treating indirect jump as return */
  return;
}

} /* extern "C" */
