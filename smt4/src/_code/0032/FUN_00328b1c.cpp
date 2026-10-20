/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00328b1c` (_code @ 0x328b1c, 0x13c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int dataTableGetCount(...);
int dataTableGet(int, int);

extern int g_aocSystem; /* 0x433158 */

extern int FUN_00298dc8(unsigned int);
extern int FUN_002c09d0(void);
/* Supplied declaration required: dataTableGetCount. */
extern int dataTableGetEntries(void);
/* Supplied declaration required: dataTableGet. */


int * FUN_00328b1c(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int *piVar5;
  
  temp_v3 = 0;
  dataTableGet(0x23,6);
  temp_v0 = dataTableGetCount();
  if (0 < temp_v0 + *(int *)(g_aocSystem + 0x414)) {
    do {
      temp_v1 = dataTableGet(0x23,6);
      temp_v0 = dataTableGetEntries();
      temp_v2 = dataTableGetCount(temp_v1);
      if (temp_v3 < temp_v2) {
        piVar5 = (int *)(temp_v0 + temp_v3 * 0xc);
      }
      else {
        piVar5 = (int *)0x0;
        if (temp_v3 < *(int *)(g_aocSystem + 0x414) + temp_v2) {
          piVar5 = (int *)(*(int *)(g_aocSystem + 0x418) + (temp_v3 - temp_v2) * 0xc);
        }
      }
      if ((((*piVar5 == param_1) &&
           (((short)piVar5[1] == 0 || (temp_v0 = FUN_002c09d0(), temp_v0 != 0)))) &&
          ((*(short *)((int)piVar5 + 6) == 0 || (temp_v0 = FUN_002c09d0(), temp_v0 == 0)))) &&
         ((piVar5[2] == 0 || (temp_v0 = FUN_00298dc8(piVar5[2] & 0xffff), temp_v0 != 0)))) {
        return piVar5;
      }
      temp_v3 = temp_v3 + 1;
      dataTableGet(0x23,6);
      temp_v0 = dataTableGetCount();
    } while ((int)temp_v3 < temp_v0 + *(int *)(g_aocSystem + 0x414));
  }
  return (int *)0x0;
}

} /* extern "C" */
