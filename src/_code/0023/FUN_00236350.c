/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00236350` (_code @ 0x236350, 0xd0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_2_stack;

/* Supplied declaration required: FUN_00236454. */
/* Supplied declaration required: FUN_002364b0. */


void FUN_00236350(int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = *(unsigned int *)(param_2 + 0x3c);
  temp_v1 = temp_v0 & 0xbfffffff;
  *(unsigned int *)(param_2 + 0x3c) = temp_v1;
  if (*(char *)(param_1 + 0x5b) != '\0') {
    temp_v1 = temp_v1 | 8;
  }
  else {
    temp_v1 = temp_v0 & 0xbffffff7;
  }
  *(unsigned int *)(param_2 + 0x3c) = temp_v1;
  if (*(char *)(param_1 + 0x5c) != '\0') {
    temp_v0 = *(unsigned int *)(param_2 + 0x3c) | 0x10;
  }
  else {
    temp_v0 = *(unsigned int *)(param_2 + 0x3c) & 0xffffffef;
  }
  *(unsigned int *)(param_2 + 0x3c) = temp_v0;
  if (*(char *)(param_1 + 0x5d) != '\0') {
    temp_v0 = temp_v0 | 4;
  }
  else {
    temp_v0 = temp_v0 & 0xfffffffb;
  }
  *(unsigned int *)(param_2 + 0x3c) = temp_v0;
  if ((~*(unsigned int *)(param_2 + 0x3c) & 8) != 0) {
    temp_v0 = *(unsigned int *)(param_2 + 0x3c) & 0xfffff9ff;
    *(unsigned int *)(param_2 + 0x3c) = temp_v0;
    if (((*(float *)(param_2 + 0x30) == *(float *)(param_2 + 0x34)) &&
        (*(float *)(param_2 + 0x30) == *(float *)(param_2 + 0x38))) &&
       (*(unsigned int *)(param_2 + 0x3c) = temp_v0 | 0x400, *(int *)(param_2 + 0x30) == 0x3f800000)) {
      *(unsigned int *)(param_2 + 0x3c) = temp_v0 | 0x600;
    }
  }
  FUN_002364b0(param_2);
  FUN_00236454(param_2);
  temp_v0 = *(unsigned int *)(param_2 + 0x3c) & 0xffffff9f;
  *(unsigned int *)(param_2 + 0x3c) = temp_v0;
  if (((~temp_v0 & 0x180) == 0) &&
     (*(unsigned int *)(param_2 + 0x3c) = temp_v0 | 0x40, (~(temp_v0 | 0x40) & 0x200) == 0)) {
    *(unsigned int *)(param_2 + 0x3c) = temp_v0 | 0x60;
  }
  return;
}
