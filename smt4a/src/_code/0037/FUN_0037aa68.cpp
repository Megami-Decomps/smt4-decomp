/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037aa68` (_code @ 0x37aa68, 0x78 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00154180(int, int, int, int);
int FUN_00154d68(unsigned int, unsigned int, unsigned int, unsigned int);
int FUN_0037a99c(int, int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

/* Supplied declaration required: FUN_00154180. */
/* Supplied declaration required: FUN_00154d68. */
/* Supplied declaration required: FUN_0037a99c. */


void FUN_0037aa68(unsigned int *param_1,int param_2)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  FUN_00154d68(*param_1,param_1[1],*(unsigned int *)(param_1[3] + 0x14),
               *(unsigned int *)(param_1[3] + 0x18));
  temp_v0 = *(int *)(param_1[3] + 0x14);
  temp_v1 = *(int *)(param_1[3] + 0x18);
  if (temp_v0 >= 0x400) {
    temp_v0 = 0x3ff;
  }
  if (temp_v1 >= 0x3f9) {
    temp_v1 = 0x3f8;
  }
  FUN_00154180(0,0,temp_v0,temp_v1);
  if (param_2 != 0) {
    FUN_0037a99c(0,7);
    return;
  }
  FUN_0037a99c(0,7);
  return;
}

} /* extern "C" */
