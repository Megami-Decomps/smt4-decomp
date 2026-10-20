/* NON_MATCHING: romwright 0.5.0 decompilation of `strAssign` (_code @ 0x2e74c4, 0x52 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int bufReallocate(int, unsigned int);
int rt_memcpy(unsigned int, unsigned int, int);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

/* Supplied declaration required: bufReallocate. */
extern unsigned int FUN_00310160(unsigned int, int);
/* Supplied declaration required: rt_memcpy. */


unsigned int strAssign(int param_1,unsigned int param_2,int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  if (param_3 != 0) {
    temp_v1 = *(unsigned int *)(param_1 + 0x10);
    temp_v2 = temp_v1;
    if (param_4 != 0xffffffff) {
      temp_v2 = param_4;
    }
    if (temp_v1 < temp_v2) {
      temp_v1 = temp_v2 + param_3;
    }
    else if (temp_v1 < temp_v2 + param_3) {
      temp_v1 = temp_v2 + param_3;
    }
    temp_v0 = FUN_00310160(*(unsigned int *)(param_1 + 0x14),*(int *)(param_1 + 0x18) + temp_v1);
    bufReallocate(param_1,temp_v0);
    *(unsigned int *)(param_1 + 0x10) = temp_v1;
    rt_memcpy(*(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x18) + temp_v2,param_2,param_3);
  }
  return 1;
}

} /* extern "C" */
