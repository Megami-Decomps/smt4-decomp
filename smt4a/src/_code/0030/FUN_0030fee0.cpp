/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030fee0` (_code @ 0x30fee0, 0x26 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002ed882(int, int *);
int FUN_002fbb70(int, int);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_4_stack;

/* Supplied declaration required: FUN_002ed882. */
/* Supplied declaration required: FUN_002fbb70. */


void FUN_0030fee0(int param_1,unsigned int param_2,unsigned int param_3,int param_4)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = *(int *)(*(int *)(param_1 + 8) + 0x10);
  temp_v1 = param_4;
  FUN_002fbb70(param_1,0);
  temp_v1 = temp_v0 - 4;
  FUN_002ed882(param_1,&temp_v1);
  FUN_002fbb70(param_1,temp_v0);
  return;
}

} /* extern "C" */
