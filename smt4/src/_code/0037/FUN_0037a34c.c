/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037a34c` (_code @ 0x37a34c, 0x80 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* Supplied declaration required: FUN_002bbb2c. */
/* Supplied declaration required: nn_fs_CTR_MPCore_detail_UserFileSystem_TrySetPriorityForFile. */


int FUN_0037a34c(int param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  romwright_code *pcVar3;
  int temp_v2;
  int temp_v3;
  unsigned long long temp_v4;
  
  temp_v2 = *(int *)(param_1 + 0x34);
  temp_v0 = *(unsigned int *)(*(int *)(param_1 + 0x34) + 4) & 0xfffffffe;
  if (*(char *)(temp_v2 + 0x1c) != '\0') {
    temp_v4 = nn_fs_CTR_MPCore_detail_UserFileSystem_TrySetPriorityForFile(temp_v0);
    temp_v1 = (unsigned int)((unsigned long long)temp_v4 >> 0x20);
    *(int *)(temp_v2 + 0x18) = (int)temp_v4;
    temp_v3 = ((int)temp_v4 >> 0x1f) + 1;
    if (temp_v3 == 0) {
      pcVar3 = *(romwright_code **)(param_1 + 0x48);
      if (pcVar3 != (romwright_code *)0x0) {
        temp_v1 = *(unsigned int *)(param_1 + 0x4c);
      }
      if (pcVar3 != (romwright_code *)0x0) {
        (*pcVar3)(*(unsigned int *)(*(int *)(param_1 + 0x34) + 0x18),temp_v1);
      }
    }
  }
  else {
    temp_v2 = nn_fs_CTR_MPCore_detail_UserFileSystem_TrySetPriorityForFile(temp_v0);
    temp_v3 = 1;
    if (temp_v2 < 0) {
      FUN_002bbb2c(temp_v2,0x37a398);
    }
  }
  return temp_v3;
}
