/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00168e00` (_code @ 0x168e00, 0x1b8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
extern int DAT_0059dbb4; /* 0x59dbb4 */

extern int FUN_001546e8(unsigned int);
extern int FUN_00169d8c(void);
extern int FUN_00169db4(unsigned int);
extern int FUN_001869c4(unsigned int);


unsigned int FUN_00168e00(int param_1,int param_2,int param_3,int param_4)

{
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int *piVar7;
  unsigned int temp_v6;
  
  temp_v0 = *(unsigned int *)(DAT_0059dbb4 + 0x52c);
  temp_v1 = FUN_00169d8c();
  temp_v1 = temp_v1 - 1;
  temp_v2 = FUN_00169db4(temp_v0);
  temp_v5 = temp_v2 - 1;
  temp_v2 = FUN_001869c4(temp_v0);
  if ((temp_v2 != 0x500) && (temp_v2 == 0x501)) {
    temp_v2 = FUN_001546e8(temp_v0);
    if (temp_v2 != 0) {
      param_2 = param_2 << 1;
      param_4 = param_4 << 1;
    }
    else {
      temp_v5 = (int)temp_v5 / 2;
    }
  }
  temp_v2 = DAT_0059dbb4;
  temp_v3 = (temp_v1 - (param_1 + param_3)) + 1;
  param_1 = temp_v1 - param_1;
  if (temp_v3 < 0) {
    temp_v3 = 0;
  }
  if (param_1 < 0) {
    param_1 = 0;
  }
  if (temp_v1 < temp_v3) {
    temp_v3 = temp_v1;
  }
  temp_v6 = temp_v5 - param_2;
  temp_v4 = (temp_v5 - (param_2 + param_4)) + 1;
  if (temp_v1 < param_1) {
    param_1 = temp_v1;
  }
  if ((int)temp_v4 < 0) {
    temp_v4 = 0;
  }
  if ((int)temp_v6 < 0) {
    temp_v6 = 0;
  }
  if ((int)temp_v5 < (int)temp_v4) {
    temp_v4 = temp_v5;
  }
  piVar7 = (int *)(DAT_0059dbb4 + 0x1338);
  temp_v4 = temp_v4 | (temp_v3 << 0x10);
  temp_v1 = *piVar7;
  if ((int)temp_v5 < (int)temp_v6) {
    temp_v6 = temp_v5;
  }
  temp_v5 = piVar7[temp_v1 + 2];
  *piVar7 = temp_v1 + 1;
  piVar7[temp_v1 + 3] = temp_v4;
  if (*(char *)(temp_v2 + 0x1350) != '\0' || temp_v5 != temp_v4) {
    (**(romwright_code **)(temp_v2 + 0x1354))();
    *(unsigned char *)(temp_v2 + 0x1350) = 0;
  }
  temp_v1 = DAT_0059dbb4;
  temp_v6 = temp_v6 | (param_1 << 0x10);
  piVar7 = (int *)(DAT_0059dbb4 + 0x1358);
  temp_v2 = *piVar7;
  temp_v5 = piVar7[temp_v2 + 2];
  *piVar7 = temp_v2 + 1;
  piVar7[temp_v2 + 3] = temp_v6;
  if (*(char *)(temp_v1 + 0x1370) != '\0' || temp_v5 != temp_v6) {
    (**(romwright_code **)(temp_v1 + 0x1374))();
    *(unsigned char *)(temp_v1 + 0x1370) = 0;
  }
  temp_v1 = DAT_0059dbb4;
  piVar7 = (int *)(DAT_0059dbb4 + 0x1318);
  temp_v2 = *piVar7;
  temp_v3 = piVar7[temp_v2 + 2];
  *piVar7 = temp_v2 + 1;
  piVar7[temp_v2 + 3] = 3;
  if (*(char *)(temp_v1 + 0x1330) != '\0' || temp_v3 != 3) {
    (**(romwright_code **)(temp_v1 + 0x1334))();
    *(unsigned char *)(temp_v1 + 0x1330) = 0;
  }
  return 1;
}

} /* extern "C" */
