/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b67f8` (_code @ 0x2b67f8, 0xe0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern int DAT_0044ea00; /* 0x44ea00 */


unsigned int FUN_002b67f8(void)

{
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int *piVar4;
  
  temp_v0 = DAT_0044ea00;
  piVar4 = (int *)(DAT_0044ea00 + 0x130c);
  temp_v1 = *piVar4;
  temp_v2 = piVar4[temp_v1 + 2];
  *piVar4 = temp_v1 - 1;
  if (*(char *)(temp_v0 + 0x1324) != '\0' || temp_v2 != piVar4[temp_v1 + 1]) {
    (**(romwright_code **)(temp_v0 + 0x1328))();
    *(unsigned char *)(temp_v0 + 0x1324) = 0;
  }
  temp_v0 = DAT_0044ea00;
  piVar4 = (int *)(DAT_0044ea00 + 0x134c);
  temp_v1 = *piVar4;
  temp_v2 = piVar4[temp_v1 + 2];
  *piVar4 = temp_v1 - 1;
  if (*(char *)(temp_v0 + 0x1364) != '\0' || temp_v2 != piVar4[temp_v1 + 1]) {
    (**(romwright_code **)(temp_v0 + 0x1368))();
    *(unsigned char *)(temp_v0 + 0x1364) = 0;
  }
  temp_v0 = DAT_0044ea00;
  piVar4 = (int *)(DAT_0044ea00 + 0x132c);
  temp_v1 = *piVar4;
  temp_v2 = piVar4[temp_v1 + 2];
  *piVar4 = temp_v1 - 1;
  if (*(char *)(temp_v0 + 0x1344) != '\0' || temp_v2 != piVar4[temp_v1 + 1]) {
    (**(romwright_code **)(temp_v0 + 0x1348))();
    *(unsigned char *)(temp_v0 + 0x1344) = 0;
  }
  return 1;
}
