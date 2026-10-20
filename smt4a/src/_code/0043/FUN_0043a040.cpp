/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0043a040` (_code @ 0x43a040, 0x4c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

extern unsigned int FUN_0016f988(unsigned int *, unsigned int, unsigned int, unsigned int);
extern unsigned int wstrlen(unsigned int);


unsigned int FUN_0043a040(unsigned int *param_1,unsigned int param_2)

{
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v2 = 0;
  temp_v0 = wstrlen(param_2);
  temp_v1 = FUN_0016f988((unsigned int *)&temp_v2,param_2,temp_v0,0);
  if ((temp_v1 & 0x80000000) == 0) {
    *param_1 = temp_v2;
  }
  return temp_v1;
}

} /* extern "C" */
