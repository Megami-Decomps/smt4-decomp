/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0027e9c0` (_code @ 0x27e9c0, 0x54 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002af5c0(unsigned int *, int, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: FUN_002af5c0. */


void FUN_0027e9c0(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = *param_1;
  if ((temp_v0 & 0x10) != 0 && (temp_v0 & 0x20) != 0) {
    param_1[2] = 3;
    *param_1 = temp_v0 & 0xffffffdf;
    FUN_002af5c0(param_1 + 0x110,2,0);
    FUN_002af5c0(param_1 + 0x156,2,0);
    return;
  }
  return;
}

} /* extern "C" */
