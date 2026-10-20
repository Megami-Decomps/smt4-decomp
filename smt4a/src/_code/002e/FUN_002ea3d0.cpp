/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ea3d0` (_code @ 0x2ea3d0, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002eb588(int *);

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

/* Supplied declaration required: FUN_002eb588. */


void FUN_002ea3d0(int param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v1 = param_3;
  temp_v2 = param_4;
  FUN_002eb588(&temp_v1);
  *(unsigned int *)(param_1 + 0x40) = temp_v1;
  *(unsigned int *)(param_1 + 0x44) = temp_v2;
  temp_v0 = *(unsigned int *)(param_2 + 4);
  *(unsigned int *)(param_1 + 0x54) = *(unsigned int *)(param_2 + 8);
  *(unsigned int *)(param_1 + 0x50) = temp_v0;
  *(unsigned int *)(param_1 + 0x58) = *(unsigned int *)(param_2 + 0xc);
  return;
}

} /* extern "C" */
