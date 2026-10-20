/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004f9080` (_code @ 0x4f9080, 0x60 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int rt_memcpy_w(unsigned char [4], int, int);

/* stack frame of param_1: 2 slot(s), 5 byte(s) */
typedef struct {
    unsigned char sp10; /* 0x10: local_10 */
    unsigned int sp94; /* 0x94: local_94 */
} param_1_stack;

/* Supplied declaration required: rt_memcpy_w. */


unsigned int FUN_004f9080(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1 [4];
  int temp_v2;
  unsigned char temp_v3;
  
  temp_v0 = 0;
  while ((rt_memcpy_w(temp_v1,param_1 + temp_v0 * 0x8c + 0x2e20,0x8c), (temp_v3 & 1) == 0 ||
         (temp_v2 != 0))) {
    temp_v0 = temp_v0 + 1;
    if (temp_v0 >= 4) {
      return 1;
    }
  }
  return 0;
}

} /* extern "C" */
