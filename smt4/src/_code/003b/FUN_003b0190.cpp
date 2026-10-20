/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b0190` (_code @ 0x3b0190, 0xe8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_4_stack;


unsigned int FUN_003b0190(unsigned char *param_1,unsigned int *param_2,int *param_3,int param_4)

{
  unsigned char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  if (*param_3 == param_4) {
    return 0;
  }
  temp_v0 = *param_1;
  temp_v1 = *param_3 + 1;
  *param_3 = temp_v1;
  if ((temp_v0 & 0x80) == 0) {
    *param_2 = (unsigned int)temp_v0;
  }
  else {
    if (temp_v1 == param_4) {
      return 0;
    }
    *param_2 = (temp_v0 & 0x7f) << 7;
    temp_v1 = *param_3;
    temp_v0 = param_1[1];
    temp_v2 = (unsigned int)temp_v0;
    *param_3 = temp_v1 + 1;
    if ((temp_v0 & 0x80) != 0) {
      if (temp_v1 + 1 == param_4) {
        return 0;
      }
      *param_2 = ((temp_v2 & 0x7f) | *param_2) << 7;
      temp_v1 = *param_3;
      temp_v0 = param_1[2];
      temp_v2 = (unsigned int)temp_v0;
      *param_3 = temp_v1 + 1;
      if ((temp_v0 & 0x80) != 0) {
        if (temp_v1 + 1 == param_4) {
          return 0;
        }
        temp_v2 = (*param_2 | (temp_v2 & 0x7f)) << 7;
        *param_2 = temp_v2;
        *param_2 = param_1[3] | temp_v2;
        *param_3 = *param_3 + 1;
        return 1;
      }
    }
    *param_2 = *param_2 | temp_v2;
  }
  return 1;
}

} /* extern "C" */
