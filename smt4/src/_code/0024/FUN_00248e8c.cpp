/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00248e8c` (_code @ 0x248e8c, 0xe0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int dataTableGetCount(...);
int dataTableGet(int, int);

extern int g_aocSystem; /* 0x433158 */

/* Supplied declaration required: dataTableGetCount. */
extern int dataTableGetEntries(void);
/* Supplied declaration required: dataTableGet. */


unsigned int FUN_00248e8c(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int *piVar4;
  unsigned int temp_v3;
  
  temp_v3 = 0;
  dataTableGet(0x23,0);
  temp_v0 = dataTableGetCount();
  if (0 < temp_v0 + *(int *)(g_aocSystem + 0x3e4)) {
    do {
      temp_v1 = dataTableGet(0x23,0);
      temp_v0 = dataTableGetEntries();
      temp_v2 = dataTableGetCount(temp_v1);
      if (temp_v3 < temp_v2) {
        piVar4 = (int *)(temp_v0 + temp_v3 * 0x20);
      }
      else {
        piVar4 = (int *)0x0;
        if (temp_v3 < temp_v2 + *(int *)(g_aocSystem + 0x3e4)) {
          piVar4 = (int *)(*(int *)(g_aocSystem + 1000) + (temp_v3 - temp_v2) * 0x20);
        }
      }
      if ((char)piVar4[2] == -1) {
        return 0xffffffff;
      }
      if (*piVar4 == param_1) {
        return temp_v3;
      }
      temp_v3 = temp_v3 + 1;
      dataTableGet(0x23,0);
      temp_v0 = dataTableGetCount();
    } while ((int)temp_v3 < temp_v0 + *(int *)(g_aocSystem + 0x3e4));
  }
  return 0xffffffff;
}

} /* extern "C" */
