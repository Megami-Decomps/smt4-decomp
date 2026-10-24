/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00103a74` (_code @ 0x103a74, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int _ZN12OnlineResultC1ERKj(unsigned int, unsigned int *);
int rt_memcpy(int, unsigned int, int);

/* stack frame of param_5: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_5_stack;

/* Supplied declaration required: _ZN12OnlineResultC1ERKj. */
/* Supplied declaration required: rt_memcpy. */


void FUN_00103a74(unsigned int param_1,int param_2,unsigned int param_3,unsigned int param_4,int param_5)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  puVar1 = &temp_v1;
  temp_v0 = param_3;
  if (param_2 != 0) {
    if (param_3 < param_5 + 1U) {
      temp_v1 = 0x8001000f;
    }
    else {
      temp_v1 = param_4;
      rt_memcpy(param_2,param_4,param_5 * 2);
      *(unsigned short *)(param_2 + param_5 * 2) = 0;
      temp_v0 = 0x10001;
      puVar1 = &temp_v0;
    }
  }
  else {
    temp_v1 = 0x8001000a;
  }
  _ZN12OnlineResultC1ERKj(param_1,puVar1);
  return;
}

} /* extern "C" */
