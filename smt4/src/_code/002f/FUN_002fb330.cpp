/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fb330` (_code @ 0x2fb330, 0xc0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int dataTableGetCount(...);
int dataTableGet(int, int);

extern int g_aocSystem; /* 0x433158 */

/* Supplied declaration required: dataTableGetCount. */
extern int dataTableGetEntries(void);
/* Supplied declaration required: dataTableGet. */


unsigned int FUN_002fb330(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int *piVar5;
  unsigned int temp_v4;
  
  dataTableGet(0x23,3);
  temp_v0 = dataTableGetCount();
  temp_v4 = 0;
  temp_v0 = *(int *)(g_aocSystem + 0x3fc) + temp_v0;
  if (0 < temp_v0) {
    do {
      temp_v1 = dataTableGet(0x23,3);
      temp_v2 = dataTableGetEntries();
      temp_v3 = dataTableGetCount(temp_v1);
      if (temp_v4 < temp_v3) {
        piVar5 = (int *)(temp_v2 + temp_v4 * 0x14);
      }
      else {
        piVar5 = (int *)0x0;
        if (temp_v4 < temp_v3 + *(int *)(g_aocSystem + 0x3fc)) {
          piVar5 = (int *)(*(int *)(g_aocSystem + 0x400) + (temp_v4 - temp_v3) * 0x14);
        }
      }
      if (*piVar5 == -1) {
        return 0xffffffff;
      }
      if (*piVar5 == param_1) {
        return temp_v4;
      }
      temp_v4 = temp_v4 + 1;
    } while ((int)temp_v4 < temp_v0);
  }
  return 0xffffffff;
}

} /* extern "C" */
