/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_ut_internal_LinkListImpl_erase_2AC900` (_code @ 0x1a374c, 0x4c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_3_stack;


void nw_ut_internal_LinkListImpl_erase_2AC900(int *param_1,unsigned int *param_2,unsigned int *param_3)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  
  while (param_2 != param_3) {
    puVar1 = (unsigned int *)*param_2;
    puVar2 = (unsigned int *)param_2[1];
    puVar1[1] = (unsigned int)puVar2;
    *puVar2 = (unsigned int)puVar1;
    *param_1 = *param_1 - 1;
    *param_2 = 0;
    param_2[1] = 0;
    param_2 = puVar1;
  }
  return;
}
