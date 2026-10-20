/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ecd94` (_code @ 0x3ecd94, 0xb8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00573920; /* 0x573920 */

extern int FUN_004bd340(int, unsigned int);


unsigned int FUN_003ecd94(int param_1)

{
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  
  if ((*(int *)(param_1 + 300) != 0) && ((*(unsigned int *)((unsigned char *)&DAT_00573920 + 0xc)) != 0)) {
    if (((*(int *)((unsigned char *)&DAT_00573920 + 0x14)) != 0) && (temp_v0 = FUN_004bd340((*(int *)((unsigned char *)&DAT_00573920 + 0x14)),1), temp_v0 == 0)) {
      return 1;
    }
    for (temp_v0 = 0; temp_v0 < (int)(unsigned int)*(unsigned char *)((*(unsigned int *)((unsigned char *)&DAT_00573920 + 0xc)) + 0x1ca3); temp_v0++) {
      temp_v1 = (*(unsigned int *)((unsigned char *)&DAT_00573920 + 0xc)) + temp_v0 * 300;
      temp_v2 = temp_v1 + 0x68;
      temp_v3 = (*(unsigned int *)((unsigned char *)&DAT_00573920 + 0xc));
      if (temp_v2 != 0) {
        temp_v3 = (unsigned int)*(unsigned short *)(temp_v2 + 0x62);
      }
      if ((temp_v2 != 0 && temp_v3 != 0) && (temp_v1 = FUN_004bd340(temp_v2,1), temp_v1 == 0)) {
        return 1;
      }
    }
  }
  return 0;
}

} /* extern "C" */
