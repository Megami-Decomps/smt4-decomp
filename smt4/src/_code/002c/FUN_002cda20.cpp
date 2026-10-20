/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002cda20` (_code @ 0x2cda20, 0x7c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int g_keyedRecordCount; /* 0x433278 */
extern unsigned char g_keyedRecords; /* 0x478000 */


unsigned char * FUN_002cda20(int param_1,int param_2)

{
  int temp_v0;
  int temp_v1;
  
  if (-1 < (g_keyedRecordCount - param_1) - 1) {
    temp_v1 = 0;
    do {
      temp_v0 = temp_v1 * 0x18 + param_1 * 0x148;
      if (*(int *)(&g_keyedRecords + temp_v0 + 0x30) == param_2) {
        return &g_keyedRecords + temp_v1 * 0x18 + param_1 * 0x148 + 0x2c;
      }
      if (*(int *)(&g_keyedRecords + temp_v0 + 0x48) == param_2) {
        return &g_keyedRecords + temp_v1 * 0x18 + param_1 * 0x148 + 0x44;
      }
      temp_v1 = temp_v1 + 2;
    } while (temp_v1 < 6);
  }
  return (unsigned char *)0x0;
}

} /* extern "C" */
