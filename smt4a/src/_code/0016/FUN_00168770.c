/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00168770` (_code @ 0x168770, 0xe0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern int DAT_0059dbb4; /* 0x59dbb4 */


unsigned int FUN_00168770(void)

{
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int *piVar4;
  
  temp_v0 = DAT_0059dbb4;
  piVar4 = (int *)(DAT_0059dbb4 + 0x1318);
  temp_v1 = *piVar4;
  temp_v2 = piVar4[temp_v1 + 2];
  *piVar4 = temp_v1 - 1;
  if (*(char *)(temp_v0 + 0x1330) != '\0' || temp_v2 != piVar4[temp_v1 + 1]) {
    (**(romwright_code **)(temp_v0 + 0x1334))();
    *(unsigned char *)(temp_v0 + 0x1330) = 0;
  }
  temp_v0 = DAT_0059dbb4;
  piVar4 = (int *)(DAT_0059dbb4 + 0x1358);
  temp_v1 = *piVar4;
  temp_v2 = piVar4[temp_v1 + 2];
  *piVar4 = temp_v1 - 1;
  if (*(char *)(temp_v0 + 0x1370) != '\0' || temp_v2 != piVar4[temp_v1 + 1]) {
    (**(romwright_code **)(temp_v0 + 0x1374))();
    *(unsigned char *)(temp_v0 + 0x1370) = 0;
  }
  temp_v0 = DAT_0059dbb4;
  piVar4 = (int *)(DAT_0059dbb4 + 0x1338);
  temp_v1 = *piVar4;
  temp_v2 = piVar4[temp_v1 + 2];
  *piVar4 = temp_v1 - 1;
  if (*(char *)(temp_v0 + 0x1350) != '\0' || temp_v2 != piVar4[temp_v1 + 1]) {
    (**(romwright_code **)(temp_v0 + 0x1354))();
    *(unsigned char *)(temp_v0 + 0x1350) = 0;
  }
  return 1;
}
