/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00353b9c` (_code @ 0x353b9c, 0x5c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

/* Supplied declaration required: FUN_0023a358. */
extern int FUN_0023a390(unsigned int);
/* Supplied declaration required: FUN_002bad80. */
/* Supplied declaration required: FUN_003541e8. */


void FUN_00353b9c(unsigned int *param_1,unsigned int param_2)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int uStack_14;
  
  temp_v0 = FUN_0023a390(param_2);
  if (temp_v0 < 0) {
    FUN_002bad80(param_1,temp_v0);
    return;
  }
  FUN_003541e8(&temp_v1,param_2);
  FUN_0023a358(param_2,temp_v1,uStack_14);
  *param_1 = temp_v1;
  param_1[1] = uStack_14;
  return;
}
