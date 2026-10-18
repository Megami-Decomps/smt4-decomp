/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b6030` (_code @ 0x2b6030, 0x9c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* Unsupported intrinsic, declaration required: software_udf (CALLOTHER). */
/* Supplied declaration required: FUN_00138e44. */
/* Supplied declaration required: FUN_002abab0. */


unsigned int FUN_002b6030(int *param_1,unsigned int *param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 4 native warning(s); review required */
  romwright_code *pcVar1;
  unsigned int *puVar2;
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int *piVar7;
  
  FUN_00138e44(param_2,(param_1[1] >> 0x1f) + 1,(char)param_1[0xa6],param_4,param_4);
  if (-1 < param_1[1]) {
                    /* WARNING: Does not return */
    pcVar1 = (romwright_code *)software_udf(0xd7,0x2b5bb0);
    (*pcVar1)();
  }
  *param_2 = 0;
  param_2[1] = 0xf02cb;
  temp_v3 = param_1[0x24];
  if (temp_v3 >= 0x200) {
    temp_v3 = 0x200;
  }
  puVar2 = (unsigned int *)FUN_002abab0(param_1,param_2 + 2,0x2cc,param_1[0x23],temp_v3);
  *puVar2 = 1;
  puVar2[1] = 0xf02bf;
  puVar2[2] = 0;
  puVar2[3] = 0xf02d5;
  FUN_002abab0(param_1,puVar2 + 4,0x2d6,param_1 + 0x25,param_1[0xa5]);
  param_1 = param_1 + *param_1 * 0x24a;
  piVar7 = param_1 + 0x4c3;
  temp_v0 = *piVar7;
  temp_v1 = piVar7[temp_v0 + 2];
  *piVar7 = temp_v0 - 1;
  if ((char)param_1[0x4c9] != '\0' || temp_v1 != piVar7[temp_v0 + 1]) {
    (*(romwright_code *)param_1[0x4ca])();
    *(unsigned char *)(param_1 + 0x4c9) = 1;
  }
  temp_v0 = *param_1;
  piVar7 = (int *)(temp_v0 + 0x134c);
  temp_v1 = *piVar7;
  temp_v2 = piVar7[temp_v1 + 2];
  *piVar7 = temp_v1 - 1;
  if (*(char *)(temp_v0 + 0x1364) != '\0' || temp_v2 != piVar7[temp_v1 + 1]) {
    (**(romwright_code **)(temp_v0 + 0x1368))();
    *(unsigned char *)(temp_v0 + 0x1364) = 1;
  }
  temp_v0 = *param_1;
  piVar7 = (int *)(temp_v0 + 0x132c);
  temp_v1 = *piVar7;
  temp_v2 = piVar7[temp_v1 + 2];
  *piVar7 = temp_v1 - 1;
  if (*(char *)(temp_v0 + 0x1344) != '\0' || temp_v2 != piVar7[temp_v1 + 1]) {
    (**(romwright_code **)(temp_v0 + 0x1348))();
    *(unsigned char *)(temp_v0 + 0x1344) = 1;
  }
  return 1;
}
