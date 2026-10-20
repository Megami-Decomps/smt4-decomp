/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ff8e8` (_code @ 0x2ff8e8, 0x134 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
extern int g_renderCtx; /* 0x59dbb4 */

extern int packNibblesAndByte(unsigned int, unsigned int, unsigned int);


void FUN_002ff8e8(unsigned int param_1)

{
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int *piVar4;
  
  temp_v0 = g_renderCtx;
  switch(param_1) {
  case 0:
  case 1:
    temp_v1 = packNibblesAndByte(6,7,0);
    piVar4 = (int *)(temp_v0 + 0x12b8);
    temp_v2 = piVar4[*piVar4 + 2];
    piVar4[*piVar4 + 2] = temp_v1;
    if (*(char *)(temp_v0 + 0x12d0) == '\0' && temp_v2 == temp_v1) {
      return;
    }
    break;
  case 2:
    temp_v1 = packNibblesAndByte(6,1,0);
    piVar4 = (int *)(temp_v0 + 0x12b8);
    temp_v2 = piVar4[*piVar4 + 2];
    piVar4[*piVar4 + 2] = temp_v1;
    if (*(char *)(temp_v0 + 0x12d0) == '\0' && temp_v2 == temp_v1) {
      return;
    }
    break;
  case 3:
  case 4:
    temp_v1 = packNibblesAndByte(6,1,2);
    piVar4 = (int *)(temp_v0 + 0x12b8);
    temp_v2 = piVar4[*piVar4 + 2];
    piVar4[*piVar4 + 2] = temp_v1;
    if (*(char *)(temp_v0 + 0x12d0) == '\0' && temp_v2 == temp_v1) {
      return;
    }
    break;
  case 5:
  case 6:
    temp_v1 = packNibblesAndByte(5,0,1);
    piVar4 = (int *)(temp_v0 + 0x12b8);
    temp_v2 = piVar4[*piVar4 + 2];
    piVar4[*piVar4 + 2] = temp_v1;
    if (*(char *)(temp_v0 + 0x12d0) == '\0' && temp_v2 == temp_v1) {
      return;
    }
    break;
  default:
    return;
  }
  (**(romwright_code **)(temp_v0 + 0x12d4))();
  *(unsigned char *)(temp_v0 + 0x12d0) = 0;
  return;
}

} /* extern "C" */
