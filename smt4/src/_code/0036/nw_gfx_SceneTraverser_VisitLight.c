/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_gfx_SceneTraverser_VisitLight` (_code @ 0x366628, 0x60 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

/* Supplied declaration required: FUN_00236578. */
/* Supplied declaration required: FUN_0023669c. */


void nw_gfx_SceneTraverser_VisitLight(int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = param_2;
  FUN_0023669c(*(int *)(param_1 + 8) + 8,&temp_v0);
  temp_v2 = param_2;
  FUN_00236578(*(int *)(param_1 + 8) + 0x68,&temp_v2);
  if (*(int *)(param_2 + 0x28) != 0) {
    temp_v1 = param_2;
    FUN_0023669c(*(int *)(param_1 + 8) + 0xe8,&temp_v1);
  }
  return;
}
