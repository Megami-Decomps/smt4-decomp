/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004f9b94` (_code @ 0x4f9b94, 0x98 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 2 slot(s), 5 byte(s) */
typedef struct {
    unsigned char sp10; /* 0x10: local_10 */
    unsigned int sp94; /* 0x94: local_94 */
} param_2_stack;

/* Supplied declaration required: rt_memcpy_w. */


unsigned int FUN_004f9b94(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1 [4];
  int temp_v2;
  unsigned char temp_v3;
  
  if (param_2 != 0) {
    temp_v0 = 0;
    do {
      rt_memcpy_w(temp_v1,param_1 + temp_v0 * 0x8c + 0x30e0,0x8c);
      if (((temp_v3 & 1) != 0) && (temp_v2 == 0)) {
        return 0;
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 3);
  }
  else {
    rt_memcpy_w(temp_v1,param_1 + 0x31f8,0x8c);
    if (((temp_v3 & 1) != 0) && (temp_v2 == 0)) {
      return 0;
    }
  }
  return 1;
}
