/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00104048` (_code @ 0x104048, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_4_stack;

extern int FUN_00441ef4(unsigned int, unsigned int, unsigned int *);


unsigned int FUN_00104048(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
  int temp_v0;
  unsigned int temp_v1 [2];
  
  temp_v1[0] = param_4;
  temp_v0 = FUN_00441ef4(2,param_1,temp_v1);
  if (0 < temp_v0) {
    return temp_v1[0];
  }
  return 0;
}

} /* extern "C" */
