/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00306ce4` (_code @ 0x306ce4, 0x2a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00300900(int, int);
int FUN_00300934(int, int *);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

/* Supplied declaration required: FUN_00300900. */
/* Supplied declaration required: FUN_00300934. */


void FUN_00306ce4(int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  *(unsigned char *)(param_2 + 4) = 0;
  temp_v0 = 0;
  if ((*(char *)(param_1 + 0x3b) == '\0') &&
     (FUN_00300900(param_1,param_2 + 4), *(char *)(param_1 + 4) == '\0')) {
    FUN_00300934(param_1,&temp_v0);
  }
  return;
}

} /* extern "C" */
