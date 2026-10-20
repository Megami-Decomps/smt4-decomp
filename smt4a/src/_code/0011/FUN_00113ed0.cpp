/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00113ed0` (_code @ 0x113ed0, 0x2e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002feaa8(int);
int FUN_002feac0(int, unsigned int **);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

extern unsigned int *FUN_002fea6a(void);
/* Supplied declaration required: FUN_002feaa8. */
/* Supplied declaration required: FUN_002feac0. */


unsigned int * FUN_00113ed0(int param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *temp_v0;
  
  temp_v0 = (unsigned int *)0x0;
  temp_v0 = (unsigned int *)FUN_002fea6a();
  temp_v0 = (unsigned int *)*temp_v0;
  FUN_002feaa8(param_1 + 0x24);
  *temp_v0 = param_2;
  FUN_002feac0(param_1 + 4,&temp_v0);
  return temp_v0;
}

} /* extern "C" */
