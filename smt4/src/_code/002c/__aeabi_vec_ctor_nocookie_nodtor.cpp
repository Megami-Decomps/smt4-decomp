/* NON_MATCHING: romwright 0.5.0 decompilation of `__aeabi_vec_ctor_nocookie_nodtor` (_code @ 0x2c5d5c, 0x22 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
} param_4_stack;


int __aeabi_vec_ctor_nocookie_nodtor(int param_1,romwright_code *param_2,int param_3,int param_4)

{
  int temp_v0;
  unsigned char temp_v1;
  
  temp_v0 = param_1;
  if (param_2 != (romwright_code *)0x0) {
    while (temp_v1 = param_4 != 0, param_4 = param_4 - 1, temp_v1) {
      (*param_2)(temp_v0);
      temp_v0 = temp_v0 + param_3;
    }
  }
  return param_1;
}

} /* extern "C" */
