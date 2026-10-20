/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a80b4` (_code @ 0x1a80b4, 0xf4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002ae584(void);

/* Supplied declaration required: FUN_002ae584. */


int FUN_001a80b4(int *param_1,int *param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = *param_1;
  FUN_002ae584();
  temp_v1 = *param_2;
  FUN_002ae584();
  switch(*(unsigned char *)(temp_v0 + 0x23)) {
  case 0:
    temp_v0 = 2;
    break;
  case 1:
    temp_v0 = 3;
    break;
  default:
    temp_v0 = 0;
    break;
  case 3:
    temp_v0 = 5;
    break;
  case 4:
    temp_v0 = 4;
    break;
  case 5:
    temp_v0 = 1;
  }
  switch(*(unsigned char *)(temp_v1 + 0x23)) {
  case 0:
    temp_v1 = 2;
    break;
  case 1:
    temp_v1 = 3;
    break;
  default:
    temp_v1 = 0;
    break;
  case 3:
    temp_v1 = 5;
    break;
  case 4:
    temp_v1 = 4;
    break;
  case 5:
    temp_v1 = 1;
  }
  temp_v0 = temp_v0 - temp_v1;
  if (temp_v0 == 0) {
    temp_v0 = *param_1;
    FUN_002ae584();
    temp_v1 = *param_2;
    FUN_002ae584();
    temp_v0 = (unsigned int)*(unsigned short *)(temp_v0 + 0x24) - (unsigned int)*(unsigned short *)(temp_v1 + 0x24);
  }
  return temp_v0;
}

} /* extern "C" */
