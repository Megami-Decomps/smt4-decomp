/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0043a08c` (_code @ 0x43a08c, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_3_stack;

extern unsigned int FUN_0016f988(unsigned int *, unsigned int, unsigned int, unsigned int);


unsigned int FUN_0043a08c(unsigned int *param_1,unsigned int param_2,unsigned int param_3)

{
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v1 = 0;
  temp_v0 = FUN_0016f988((unsigned int *)&temp_v1,param_2,param_3,0);
  if ((temp_v0 & 0x80000000) == 0) {
    *param_1 = temp_v1;
  }
  return temp_v0;
}

} /* extern "C" */
