/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002efd12` (_code @ 0x2efd12, 0x1a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

extern int FUN_002f3e5a(int *, unsigned int *);


unsigned int FUN_002efd12(int param_1,int *param_2)

{
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v2 = *(unsigned int *)(param_1 + 0x14);
  temp_v0 = FUN_002f3e5a(param_2,(unsigned int *)&temp_v2);
  temp_v1 = 0;
  if (temp_v0 != 0) {
    temp_v1 = *(unsigned int *)(*param_2 + 0x18);
  }
  return temp_v1;
}

} /* extern "C" */
