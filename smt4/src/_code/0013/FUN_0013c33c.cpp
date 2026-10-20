/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013c33c` (_code @ 0x13c33c, 0xd4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_1_stack;


void FUN_0013c33c(unsigned int *param_1)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned int temp_v0;
  
  puVar2 = param_1 + 2;
  puVar1 = param_1 + 1;
  temp_v0 = *puVar1;
  if ((((~temp_v0 & 0xc) != 0) && (((temp_v0 & 4) == 0 || ((*param_1 & 8) != 0)))) &&
     (((temp_v0 & 8) == 0 || ((*param_1 & 4) != 0)))) {
    temp_v0 = temp_v0 & 0xfffffff7;
  }
  else {
    temp_v0 = temp_v0 | 8;
  }
  *puVar1 = temp_v0;
  temp_v0 = *puVar2;
  if ((((~temp_v0 & 0xc) != 0) && (((temp_v0 & 4) == 0 || ((*param_1 & 8) != 0)))) &&
     (((temp_v0 & 8) == 0 || ((*param_1 & 4) != 0)))) {
    temp_v0 = temp_v0 & 0xfffffff7;
  }
  else {
    temp_v0 = temp_v0 | 8;
  }
  *puVar2 = temp_v0;
  if ((*param_1 & 4) != 0) {
    *param_1 = (*param_1 & 0xfffffffb) | 8;
  }
  *puVar1 = *puVar1 & 0xfffffffb;
  *puVar2 = *puVar2 & 0xfffffffb;
  return;
}

} /* extern "C" */
