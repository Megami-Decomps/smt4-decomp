/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004a77c0` (_code @ 0x4a77c0, 0x54 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_004d0a8c(unsigned int, unsigned int, unsigned int);

typedef int romwright_code(...);
/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

extern unsigned int FUN_002a482c(int);
extern unsigned int FUN_0031d174(int);
/* Supplied declaration required: FUN_004d0a8c. */


void FUN_004a77c0(int param_1,unsigned int param_2)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_0031d174(param_1 + 0x20);
  temp_v1 = FUN_002a482c(param_1 + 0x20);
  FUN_004d0a8c(*(unsigned int *)(param_1 + 0x84c),temp_v1,temp_v0);
                    /* WARNING: Could not recover jumptable at 0x004a7810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(romwright_code **)(**(int **)(param_1 + 0x84c) + 0x10))(*(int **)(param_1 + 0x84c),param_2);
  return;
}

} /* extern "C" */
