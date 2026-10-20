/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003535f0` (_code @ 0x3535f0, 0x2c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
} param_2_stack;

extern int queryResultFailureOnly(unsigned int *);


int FUN_003535f0(unsigned int *param_1,unsigned int param_2)

{
  int temp_v0;
  int temp_v1;
  
  temp_v1 = param_2;
  temp_v0 = queryResultFailureOnly((unsigned int *)&temp_v1);
  if (-1 < temp_v0) {
    *param_1 = temp_v1;
    temp_v0 = 0;
  }
  return temp_v0;
}

} /* extern "C" */
