/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003039f4` (_code @ 0x3039f4, 0x2e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002f4cac(void);
int FUN_002f4cd6(int, unsigned int, unsigned int);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

/* Supplied declaration required: FUN_002f4cac. */
/* Supplied declaration required: FUN_002f4cd6. */
extern unsigned int wordRefCompare(int, unsigned int *);


int FUN_003039f4(int param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  if (param_2 != param_1) {
    temp_v1 = param_4;
    FUN_002f4cac();
    temp_v1 = *(unsigned int *)(param_2 + 0x10);
    temp_v0 = wordRefCompare(param_2 + 0x14,(unsigned int *)&temp_v1);
    FUN_002f4cd6(param_1,*(unsigned int *)(param_2 + 0x10),temp_v0);
  }
  return param_1;
}

} /* extern "C" */
