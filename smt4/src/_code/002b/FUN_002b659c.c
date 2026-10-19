/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b659c` (_code @ 0x2b659c, 0x1b8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern int DAT_0044ea00; /* 0x44ea00 */

extern int FUN_00138c44(unsigned int);
extern int FUN_002ae1e8(unsigned int);
extern int FUN_002ae210(void);
extern int FUN_002bff10(unsigned int);


unsigned int FUN_002b659c(int param_1,int param_2,int param_3,int param_4)

{
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int *piVar7;
  unsigned int temp_v6;
  
  temp_v0 = *(unsigned int *)(DAT_0044ea00 + 0x528);
  temp_v1 = FUN_002ae210();
  temp_v1 = temp_v1 - 1;
  temp_v2 = FUN_002ae1e8(temp_v0);
  temp_v5 = temp_v2 - 1;
  temp_v2 = FUN_00138c44(temp_v0);
  if ((temp_v2 != 0x500) && (temp_v2 == 0x501)) {
    temp_v2 = FUN_002bff10(temp_v0);
    if (temp_v2 != 0) {
      param_2 = param_2 << 1;
      param_4 = param_4 << 1;
    }
    else {
      temp_v5 = (int)temp_v5 / 2;
    }
  }
  temp_v2 = DAT_0044ea00;
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
  piVar7 = (int *)(DAT_0044ea00 + 0x132c);
  temp_v4 = temp_v4 | (temp_v3 << 0x10);
  temp_v1 = *piVar7;
  if ((int)temp_v5 < (int)temp_v6) {
    temp_v6 = temp_v5;
  }
  temp_v5 = piVar7[temp_v1 + 2];
  *piVar7 = temp_v1 + 1;
  piVar7[temp_v1 + 3] = temp_v4;
  if (*(char *)(temp_v2 + 0x1344) != '\0' || temp_v5 != temp_v4) {
    (**(romwright_code **)(temp_v2 + 0x1348))();
    *(unsigned char *)(temp_v2 + 0x1344) = 0;
  }
  temp_v1 = DAT_0044ea00;
  temp_v6 = temp_v6 | (param_1 << 0x10);
  piVar7 = (int *)(DAT_0044ea00 + 0x134c);
  temp_v2 = *piVar7;
  temp_v5 = piVar7[temp_v2 + 2];
  *piVar7 = temp_v2 + 1;
  piVar7[temp_v2 + 3] = temp_v6;
  if (*(char *)(temp_v1 + 0x1364) != '\0' || temp_v5 != temp_v6) {
    (**(romwright_code **)(temp_v1 + 0x1368))();
    *(unsigned char *)(temp_v1 + 0x1364) = 0;
  }
  temp_v1 = DAT_0044ea00;
  piVar7 = (int *)(DAT_0044ea00 + 0x130c);
  temp_v2 = *piVar7;
  temp_v3 = piVar7[temp_v2 + 2];
  *piVar7 = temp_v2 + 1;
  piVar7[temp_v2 + 3] = 3;
  if (*(char *)(temp_v1 + 0x1324) != '\0' || temp_v3 != 3) {
    (**(romwright_code **)(temp_v1 + 0x1328))();
    *(unsigned char *)(temp_v1 + 0x1324) = 0;
  }
  return 1;
}
