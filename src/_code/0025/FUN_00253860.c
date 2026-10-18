/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00253860` (_code @ 0x253860, 0xec bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_2_stack;

/* Supplied declaration required: FUN_00291e40. */


void FUN_00253860(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = 0;
  switch(*(unsigned int *)(param_1 + 0x174)) {
  case 0:
  case 1:
  case 0xb:
    temp_v0 = 0x1000242;
    temp_v0 = temp_v0 + param_2;
    break;
  case 2:
  case 0xc:
    temp_v0 = -0x1000245;
    temp_v0 = param_2 - temp_v0;
    break;
  case 3:
  case 0xd:
    temp_v0 = param_2 + 0x1000248;
    break;
  case 4:
  case 6:
  case 0xe:
  case 0x10:
    temp_v0 = 0x100024b;
    temp_v0 = temp_v0 + param_2;
    break;
  case 5:
  case 0xf:
    temp_v0 = 0x100024e;
    temp_v0 = temp_v0 + param_2;
    break;
  case 7:
  case 9:
  case 0x11:
  case 0x13:
    temp_v0 = -0x1000251;
    temp_v0 = param_2 - temp_v0;
    break;
  case 8:
  case 0x12:
    temp_v0 = param_2 + 0x1000254;
    break;
  case 10:
  case 0x14:
    temp_v0 = 0x1000257;
    temp_v0 = temp_v0 + param_2;
    break;
  default:
  }
  if (param_2 == 1) {
    temp_v1 = FUN_00291e40(temp_v0);
    *(unsigned int *)(param_1 + 0x168) = temp_v1;
    return;
  }
  FUN_00291e40(temp_v0);
  return;
}
