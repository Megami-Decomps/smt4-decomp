/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0042b17c` (_code @ 0x42b17c, 0x44 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
/* stack frame of param_5: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_5_stack;


int FUN_0042b17c(unsigned int *param_1,unsigned int *param_2,unsigned int param_3,unsigned int param_4,
                unsigned int param_5)

{
  int temp_v0;
  int temp_v1;
  
  if (param_2 == (unsigned int *)0x0) {
    temp_v0 = -0x377fbb9b;
  }
  else {
    temp_v1 = param_4;
    temp_v0 = (**(romwright_code **)*param_2)(param_2,&temp_v1,param_4,param_5);
    if (-1 < temp_v0) {
      *param_1 = temp_v1;
      temp_v0 = 0;
    }
  }
  return temp_v0;
}

} /* extern "C" */
