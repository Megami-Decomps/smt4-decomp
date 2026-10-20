/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0028cf30` (_code @ 0x28cf30, 0x8c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00297b94(int, unsigned int, unsigned int);
int FUN_00298140(...);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_3_stack;

extern int FUN_0023dcb8(void);
/* Supplied declaration required: FUN_00297b94. */
extern unsigned int FUN_00297ca4(int, unsigned int);
/* Supplied declaration required: FUN_00298140. */


void FUN_0028cf30(int param_1,int param_2,int param_3)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  *(int *)(param_1 + 0x305c) = param_2;
  if (param_3 == 0) {
    FUN_00298140(param_1,0x29,1);
    return;
  }
  if ((param_2 == 0) && (temp_v0 = FUN_0023dcb8(), temp_v0 != 0)) {
    FUN_00298140(param_1,1);
    temp_v1 = FUN_00297ca4(param_1,1);
    FUN_00297b94(param_1,temp_v1,*(unsigned int *)(param_1 + 0x305c));
    return;
  }
  FUN_00298140(param_1,9,1);
  return;
}

} /* extern "C" */
