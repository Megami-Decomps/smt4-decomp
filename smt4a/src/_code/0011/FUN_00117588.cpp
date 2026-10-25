/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00117588` (_code @ 0x117588, 0x1a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0030323c(void);
int pooledListErase(int *, int, int *);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_4_stack;

/* Supplied declaration required: FUN_0030323c. */
/* Supplied declaration required: pooledListErase. */


void FUN_00117588(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int uStack_c;
  
  param_1 = param_1 + 4;
  temp_v0 = param_3;
  uStack_c = param_4;
  FUN_0030323c();
  temp_v0 = **(unsigned int **)(param_1 + 0x10);
  pooledListErase(&uStack_c,param_1,&temp_v0);
  return;
}

} /* extern "C" */
