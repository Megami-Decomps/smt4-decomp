/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004288e0` (_code @ 0x4288e0, 0x60 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001b57a8(unsigned int *, int);
int FUN_004283f0(unsigned int, int, unsigned int);
int FUN_00429048(int *, unsigned int, int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

/* Supplied declaration required: FUN_001b57a8. */
extern int FUN_004283cc(unsigned int);
/* Supplied declaration required: FUN_004283f0. */
/* Supplied declaration required: FUN_00429048. */


void FUN_004288e0(unsigned int *param_1,unsigned int param_2)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int uStack_14;
  
  temp_v0 = FUN_004283cc(param_2);
  if (temp_v0 < 0) {
    FUN_001b57a8(param_1,temp_v0);
    return;
  }
  FUN_00429048(&temp_v1,param_2,0);
  FUN_004283f0(param_2,temp_v1,uStack_14);
  *param_1 = temp_v1;
  param_1[1] = uStack_14;
  return;
}

} /* extern "C" */
