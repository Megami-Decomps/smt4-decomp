/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010b348` (_code @ 0x10b348, 0x26 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0013119e(int, int *);
int FUN_002e7232(int);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_4_stack;

/* Supplied declaration required: FUN_0013119e. */
/* Supplied declaration required: FUN_002e7232. */


void FUN_0010b348(int param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = param_4;
  FUN_002e7232(param_2);
  if (*(int *)(param_2 + 4) == 1) {
    temp_v0 = *(unsigned int *)(param_2 + 0x30);
    FUN_0013119e(param_1 + 4,&temp_v0);
    FUN_002e7232(param_2);
  }
  return;
}

} /* extern "C" */
