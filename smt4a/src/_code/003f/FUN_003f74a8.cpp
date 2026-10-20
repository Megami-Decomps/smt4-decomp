/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f74a8` (_code @ 0x3f74a8, 0xcc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00180114(void);
int FUN_0019e52c(unsigned int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_2_stack;

/* Supplied declaration required: FUN_00180114. */
/* Supplied declaration required: FUN_0019e52c. */


void FUN_003f74a8(unsigned int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned short temp_v0;
  unsigned int temp_v1;
  
  if (*(unsigned short *)(param_2 + 2) >> 8 == 10) {
    return;
  }
  temp_v0 = *(unsigned short *)(param_2 + 2) >> 8;
  switch(temp_v0) {
  case 0:
    temp_v1 = 0xae;
    break;
  case 1:
    temp_v1 = 0xb2;
    break;
  case 2:
    temp_v1 = 0xb0;
    break;
  case 3:
    temp_v1 = 0xb1;
    break;
  case 4:
    temp_v1 = 0xb3;
    break;
  case 5:
    temp_v1 = 5;
    break;
  case 6:
    temp_v1 = 0xba;
    break;
  case 7:
    temp_v1 = 0xb9;
    break;
  case 8:
    temp_v1 = 0xaf;
    break;
  case 9:
    temp_v1 = 0xbb;
    break;
  default:
    temp_v1 = 0xffffffff;
  }
  if ((-1 < (int)temp_v1) && (temp_v0 != 9)) {
    FUN_0019e52c(temp_v1 & 0xffff);
  }
  FUN_00180114();
  return;
}

} /* extern "C" */
