/* NON_MATCHING: romwright 0.5.0 decompilation of `libc_bsearch` (_code @ 0x100854, 0x4e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
/* stack frame of param_5: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp24; /* 0x24: local_24 */
} param_5_stack;


int libc_bsearch(unsigned int param_1,int param_2,unsigned int param_3,int param_4,romwright_code *param_5)

{
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  while( 1 ) {
    temp_v1 = param_3;
    if (temp_v1 == 0) {
      return 0;
    }
    if (temp_v1 == 1) break;
    param_3 = temp_v1 >> 1;
    temp_v2 = param_3 * param_4 + param_2;
    temp_v0 = (*param_5)(param_1,temp_v2);
    if (temp_v0 == 0) {
      return temp_v2;
    }
    if (-1 < temp_v0) {
      param_2 = temp_v2 + param_4;
      param_3 = (temp_v1 - param_3) - 1;
    }
  }
  temp_v0 = (*param_5)(param_1,param_2);
  if (temp_v0 != 0) {
    return 0;
  }
  return param_2;
}

} /* extern "C" */
