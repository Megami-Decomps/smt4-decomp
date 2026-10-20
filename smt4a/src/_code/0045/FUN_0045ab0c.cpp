/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0045ab0c` (_code @ 0x45ab0c, 0x84 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;


int FUN_0045ab0c(int *param_1)

{
  int temp_v0;
  
  temp_v0 = 0;
  if ((char)param_1[3] != '\0') {
    temp_v0 = (unsigned int)*(unsigned short *)((int)param_1 + 6) * 0x448 + ((*param_1 + 0xfU) & 0xfffffff0) * 4 + 100
    ;
  }
  temp_v0 = (*(unsigned short *)(param_1 + 1) + 1) * 0x6c + (unsigned int)*(unsigned short *)((int)param_1 + 6) * 0x278 +
          (unsigned int)*(unsigned short *)(param_1 + 2) * 0x218 + temp_v0;
  if (*(char *)((int)param_1 + 10) != '\0') {
    temp_v0 = temp_v0 + 0x1d0;
  }
  return temp_v0;
}

} /* extern "C" */
