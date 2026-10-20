/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f5288` (_code @ 0x2f5288, 0x78 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0011a258(unsigned int, unsigned int, unsigned int, unsigned int);
int FUN_002bc644(int, int, int, int);
int FUN_002f51bc(int, int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

/* Supplied declaration required: FUN_0011a258. */
/* Supplied declaration required: FUN_002bc644. */
/* Supplied declaration required: FUN_002f51bc. */


void FUN_002f5288(unsigned int *param_1,int param_2)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  FUN_0011a258(*param_1,param_1[1],*(unsigned int *)(param_1[3] + 0x14),
               *(unsigned int *)(param_1[3] + 0x18));
  temp_v0 = *(int *)(param_1[3] + 0x14);
  temp_v1 = *(int *)(param_1[3] + 0x18);
  if (temp_v0 >= 0x400) {
    temp_v0 = 0x3ff;
  }
  if (temp_v1 >= 0x3f9) {
    temp_v1 = 0x3f8;
  }
  FUN_002bc644(0,0,temp_v0,temp_v1);
  if (param_2 != 0) {
    FUN_002f51bc(0,7);
    return;
  }
  FUN_002f51bc(0,7);
  return;
}

} /* extern "C" */
