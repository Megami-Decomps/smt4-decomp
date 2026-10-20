/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00101208` (_code @ 0x101208, 0x2a bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
/* stack frame of param_5: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
} param_5_stack;


int FUN_00101208(int param_1,int param_2,int param_3,int param_4,romwright_code *param_5)

{
  int temp_v0;
  unsigned char temp_v1;
  
  temp_v0 = param_1;
  if (param_5 != (romwright_code *)0x0) {
    while (temp_v1 = param_4 != 0, param_4 = param_4 - 1, temp_v1) {
      (*param_5)(temp_v0,param_2);
      param_2 = param_2 + param_3;
      temp_v0 = temp_v0 + param_3;
    }
  }
  return param_1;
}

} /* extern "C" */
