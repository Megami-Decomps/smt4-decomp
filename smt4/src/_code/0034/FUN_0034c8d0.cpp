/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0034c8d0` (_code @ 0x34c8d0, 0x60 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
extern unsigned char LAB_00155650; /* 0x155650 */


/* WARNING: Removing unreachable block (ram,0x0023abac) */
/* WARNING: Removing unreachable block (ram,0x0023ac00) */

void FUN_0034c8d0(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  *(unsigned int *)(param_1 + 0x2c) = 3;
  if (*(int *)(param_1 + 8) != 0) {
    *(unsigned char *)(**(int **)(*(int *)(*(int *)(param_1 + 8) + 8) + 0x24) + 0x1f6) = 1;
    *(unsigned char *)(*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 8) + 8) + 0x24) + 4) + 0x1f6) = 0;
    *(unsigned char *)(*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 8) + 8) + 0x24) + 8) + 0x1f6) = 0;
  }
  temp_v0 = *(int *)(param_1 + 0xc);
  temp_v2 = 0x3f800000;
  if (temp_v0 != 0) {
    temp_v1 = *(unsigned int *)(temp_v0 + 0x44);
    (**(romwright_code **)(temp_v0 + 0x4c))(*(unsigned int *)(temp_v0 + 0x50));
    *(unsigned int *)(temp_v0 + 0x3c) = *(unsigned int *)(temp_v0 + 0x38);
    *(unsigned int *)(temp_v0 + 0x38) = temp_v1;
    *(unsigned char *)(temp_v0 + 0x58) = 1;
    *(unsigned int *)(*(int *)(param_1 + 0xc) + 0x40) = temp_v2;
    temp_v0 = *(int *)(param_1 + 0xc);
    *(unsigned char **)(temp_v0 + 0x4c) = &LAB_00155650;
    *(unsigned char *)(temp_v0 + 0x58) = 1;
  }
  temp_v0 = *(int *)(param_1 + 0x18);
  if (temp_v0 != 0) {
    temp_v1 = *(unsigned int *)(temp_v0 + 0x44);
    (**(romwright_code **)(temp_v0 + 0x4c))(*(unsigned int *)(temp_v0 + 0x50));
    *(unsigned int *)(temp_v0 + 0x3c) = *(unsigned int *)(temp_v0 + 0x38);
    *(unsigned int *)(temp_v0 + 0x38) = temp_v1;
    *(unsigned char *)(temp_v0 + 0x58) = 1;
    *(unsigned int *)(*(int *)(param_1 + 0x18) + 0x40) = temp_v2;
    temp_v0 = *(int *)(param_1 + 0x18);
    *(unsigned char **)(temp_v0 + 0x4c) = &LAB_00155650;
    *(unsigned char *)(temp_v0 + 0x58) = 1;
  }
  return;
}

} /* extern "C" */
