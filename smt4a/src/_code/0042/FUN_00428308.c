/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00428308` (_code @ 0x428308, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
} param_2_stack;

extern int FUN_004288bc(unsigned int *);


int FUN_00428308(unsigned int *param_1,unsigned int param_2)

{
  int temp_v0;
  int temp_v1;
  
  temp_v1 = param_2;
  temp_v0 = FUN_004288bc((unsigned int *)&temp_v1);
  if (-1 < temp_v0) {
    *param_1 = temp_v1;
    temp_v0 = 0;
  }
  return temp_v0;
}
