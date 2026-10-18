/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00148184` (_code @ 0x148184, 0x148 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;


void FUN_00148184(int *param_1)

{
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v0 = 0;
  switch(param_1[7]) {
  case 0:
    temp_v0 = 4;
    break;
  case 1:
    temp_v0 = 3;
    break;
  case 2:
  case 3:
  case 4:
    temp_v0 = 2;
  }
  if (temp_v0 >= 4) {
    temp_v0 = 3;
  }
  param_1[6] = 0;
  param_1[5] = 0;
  temp_v2 = temp_v0 * 0x14000;
  temp_v0 = 0;
  switch(param_1[4]) {
  case 0:
    temp_v0 = 4;
    break;
  case 1:
    temp_v0 = 3;
    break;
  case 2:
  case 3:
  case 4:
    temp_v0 = 2;
  }
  temp_v1 = temp_v0;
  if (temp_v0 >= 4) {
    temp_v1 = 3;
  }
  param_1[3] = temp_v2;
  param_1[2] = temp_v2;
  temp_v2 = temp_v2 + temp_v1 * 0x19000;
  if ((char)param_1[1] != '\0') {
    temp_v0 = 0;
    switch(param_1[4]) {
    case 0:
      temp_v0 = 4;
      break;
    case 1:
      temp_v0 = 3;
      break;
    case 2:
    case 3:
    case 4:
      temp_v0 = 2;
    }
    temp_v1 = temp_v0;
    if (temp_v0 >= 4) {
      temp_v1 = 3;
    }
    param_1[3] = temp_v2;
    temp_v2 = temp_v2 + temp_v1 * 0x19000;
  }
  if (temp_v0 >= 4) {
    temp_v0 = 3;
  }
  *param_1 = temp_v2 + temp_v0 * 0x7000;
  return;
}
