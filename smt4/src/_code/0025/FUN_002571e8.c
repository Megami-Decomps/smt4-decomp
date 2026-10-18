/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002571e8` (_code @ 0x2571e8, 0x134 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern int DAT_0044ea00; /* 0x44ea00 */

extern int FUN_002c5da8(unsigned int, unsigned int, unsigned int);


void FUN_002571e8(unsigned int param_1)

{
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int *piVar4;
  
  temp_v0 = DAT_0044ea00;
  switch(param_1) {
  case 0:
  case 1:
    temp_v1 = FUN_002c5da8(6,7,0);
    piVar4 = (int *)(temp_v0 + 0x12ac);
    temp_v2 = piVar4[*piVar4 + 2];
    piVar4[*piVar4 + 2] = temp_v1;
    if (*(char *)(temp_v0 + 0x12c4) == '\0' && temp_v2 == temp_v1) {
      return;
    }
    break;
  case 2:
    temp_v1 = FUN_002c5da8(6,1,0);
    piVar4 = (int *)(temp_v0 + 0x12ac);
    temp_v2 = piVar4[*piVar4 + 2];
    piVar4[*piVar4 + 2] = temp_v1;
    if (*(char *)(temp_v0 + 0x12c4) == '\0' && temp_v2 == temp_v1) {
      return;
    }
    break;
  case 3:
  case 4:
    temp_v1 = FUN_002c5da8(6,1,2);
    piVar4 = (int *)(temp_v0 + 0x12ac);
    temp_v2 = piVar4[*piVar4 + 2];
    piVar4[*piVar4 + 2] = temp_v1;
    if (*(char *)(temp_v0 + 0x12c4) == '\0' && temp_v2 == temp_v1) {
      return;
    }
    break;
  case 5:
  case 6:
    temp_v1 = FUN_002c5da8(5,0,1);
    piVar4 = (int *)(temp_v0 + 0x12ac);
    temp_v2 = piVar4[*piVar4 + 2];
    piVar4[*piVar4 + 2] = temp_v1;
    if (*(char *)(temp_v0 + 0x12c4) == '\0' && temp_v2 == temp_v1) {
      return;
    }
    break;
  default:
    return;
  }
  (**(romwright_code **)(temp_v0 + 0x12c8))();
  *(unsigned char *)(temp_v0 + 0x12c4) = 0;
  return;
}
