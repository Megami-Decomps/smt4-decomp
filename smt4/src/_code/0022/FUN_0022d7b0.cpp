/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0022d7b0` (_code @ 0x22d7b0, 0x50 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002332e8(unsigned int, unsigned int, unsigned int);

typedef int romwright_code(...);
/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

/* Supplied declaration required: FUN_002332e8. */
extern unsigned int FUN_00240d5c(int);
extern unsigned int FUN_0029e924(int);


void FUN_0022d7b0(int param_1,unsigned int param_2)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_00240d5c(param_1 + 0x20);
  temp_v1 = FUN_0029e924(param_1 + 0x20);
  FUN_002332e8(*(unsigned int *)(param_1 + 0x590),temp_v1,temp_v0);
                    /* WARNING: Could not recover jumptable at 0x0022d7fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(romwright_code **)(**(int **)(param_1 + 0x590) + 0x10))(*(int **)(param_1 + 0x590),param_2);
  return;
}

} /* extern "C" */
