/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_gfx_res_ResLight_Cleanup` (_code @ 0x452b44, 0x88 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int handlerTableDispatch1(int *);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: handlerTableDispatch1. */


void nw_gfx_res_ResLight_Cleanup(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int *puVar4;
  int temp_v3;
  int temp_v4;
  
  puVar4 = (unsigned int *)*param_1;
  if ((puVar4 != (unsigned int *)0x0) && ((~*puVar4 & 0x400000a2) != 0)) {
    puVar4 = (unsigned int *)0x0;
  }
  if (puVar4 != (unsigned int *)0x0) {
    temp_v3 = 0;
    if (puVar4[0x46] != 0) {
      temp_v4 = (int)puVar4 + puVar4[0x46] + 0x118;
    }
    else {
      temp_v4 = 0;
    }
    if (temp_v4 != 0) {
      handlerTableDispatch1(&temp_v4);
    }
    temp_v0 = puVar4[0x47];
    if (temp_v0 != 0) {
      temp_v1 = temp_v0 + (int)(puVar4 + 0x47);
    }
    else {
      temp_v1 = 0;
    }
    if (temp_v1 != 0) {
      temp_v2 = *(int *)(temp_v1 + 8);
      if (temp_v2 != 0) {
        temp_v3 = temp_v2 + temp_v1 + 8;
      }
      if (temp_v3 != 0) {
        temp_v4 = temp_v3;
        handlerTableDispatch1(&temp_v4);
      }
    }
  }
  return;
}

} /* extern "C" */
