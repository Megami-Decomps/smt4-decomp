/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0029a418` (_code @ 0x29a418, 0xe8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern int DAT_0044ea00; /* 0x44ea00 */


void FUN_0029a418(int param_1,int param_2,unsigned int param_3,int param_4,int param_5)

{
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int *piVar5;
  
  temp_v0 = DAT_0044ea00;
  temp_v2 = 0x140;
  if (param_5 == 0) {
    temp_v2 = 400;
  }
  temp_v1 = temp_v2 - (param_1 + param_3);
  param_2 = (0xf0 - param_4) - param_2;
  if ((int)temp_v1 < 0) {
    param_3 = param_3 + temp_v1;
    if ((int)param_3 < 0) {
      param_3 = 0;
    }
    temp_v1 = 0;
  }
  if (param_2 < 0) {
    param_4 = param_4 + param_2;
    if (param_4 < 0) {
      param_4 = 0;
    }
    param_2 = 0;
  }
  temp_v1 = temp_v1 | (param_2 << 0x10);
  piVar5 = (int *)(DAT_0044ea00 + 0x132c);
  temp_v3 = piVar5[*piVar5 + 2];
  piVar5[*piVar5 + 2] = temp_v1;
  if (*(char *)(temp_v0 + 0x1344) != '\0' || temp_v3 != temp_v1) {
    (**(romwright_code **)(temp_v0 + 0x1348))();
    *(unsigned char *)(temp_v0 + 0x1344) = 0;
  }
  temp_v0 = DAT_0044ea00;
  param_3 = param_3 | (param_4 << 0x10);
  piVar5 = (int *)(DAT_0044ea00 + 0x134c);
  temp_v1 = piVar5[*piVar5 + 2];
  piVar5[*piVar5 + 2] = param_3;
  if (*(char *)(temp_v0 + 0x1364) != '\0' || temp_v1 != param_3) {
    (**(romwright_code **)(temp_v0 + 0x1368))();
    *(unsigned char *)(temp_v0 + 0x1364) = 0;
  }
  return;
}
