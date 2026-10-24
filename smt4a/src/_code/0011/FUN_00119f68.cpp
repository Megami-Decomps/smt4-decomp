/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00119f68` (_code @ 0x119f68, 0x1e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int _ZN12OnlineResultC1ERKj(unsigned int, unsigned int *);

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
    unsigned int spC; /* 0xc: local_c */
} param_4_stack;

/* Supplied declaration required: _ZN12OnlineResultC1ERKj. */


void FUN_00119f68(unsigned int param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  unsigned int temp_v1 [2];
  
  puVar1 = temp_v1;
  if (*(int *)(param_2 + 8) != 0) {
    temp_v0 = 0x8001000e;
    puVar1 = (unsigned int *)&temp_v0;
    temp_v1[0] = param_4;
  }
  else {
    *(unsigned int *)(param_2 + 8) = param_3;
    temp_v1[0] = 0x10001;
    temp_v0 = param_3;
  }
  _ZN12OnlineResultC1ERKj(param_1,puVar1);
  return;
}

} /* extern "C" */
