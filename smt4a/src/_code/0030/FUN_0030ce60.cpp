/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030ce60` (_code @ 0x30ce60, 0x32 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003101dc(unsigned int *, int *, unsigned int);
int listInitEmpty(unsigned int *, int);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_4_stack;

/* Supplied declaration required: FUN_003101dc. */
/* Supplied declaration required: listInitEmpty. */


unsigned int * FUN_0030ce60(unsigned int *param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  temp_v0 = param_4;
  listInitEmpty(param_1,0);
  temp_v0 = *(unsigned int *)param_1[4];
  FUN_003101dc(param_1,&temp_v0,**(unsigned int **)(param_2 + 0x10));
  return param_1;
}

} /* extern "C" */
