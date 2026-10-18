/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_internal_Util_BitFlag_GetValue` (_code @ 0x2a6a50, 0x7c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
} param_3_stack;


unsigned int nw_snd_internal_Util_BitFlag_GetValue(unsigned int *param_1,unsigned int *param_2,unsigned int param_3)

{
  unsigned char temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  
  temp_v0 = 0;
  temp_v1 = 0;
  if (param_3 != 0xffffffff) {
    temp_v3 = 0;
    temp_v2 = param_3 + 1;
    do {
      if (((*param_1 & (1 << (temp_v3 & 0xff))) != 0) && (temp_v1 = temp_v1 + 1, temp_v3 == param_3)) {
        temp_v0 = 1;
      }
      temp_v2 = temp_v2 - 1;
      temp_v3 = temp_v3 + 1;
    } while (temp_v2 != 0);
    if (!temp_v0) {
      return 0;
    }
  }
  if (temp_v1 == 0) {
    return 0;
  }
  *param_2 = param_1[temp_v1];
  return 1;
}
