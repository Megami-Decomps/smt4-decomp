/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00121104` (_code @ 0x121104, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0031023c(unsigned int *, int *, unsigned int, unsigned int);
int listInitEmpty2(unsigned int *, int);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

/* Supplied declaration required: FUN_0031023c. */
/* Supplied declaration required: listInitEmpty2. */


unsigned int * FUN_00121104(unsigned int *param_1,int param_2,unsigned int param_3,unsigned int param_4)

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
  listInitEmpty2(param_1,0);
  temp_v0 = *(unsigned int *)param_1[4];
  FUN_0031023c(param_1,&temp_v0,**(unsigned int **)(param_2 + 0x10),*(unsigned int *)(param_2 + 0x10));
  return param_1;
}

} /* extern "C" */
