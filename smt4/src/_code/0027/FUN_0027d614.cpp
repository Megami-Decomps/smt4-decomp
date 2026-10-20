/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0027d614` (_code @ 0x27d614, 0x130 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int dataTableGetCount(...);
int dataTableGet(int, int);

extern int g_aocSystem; /* 0x433158 */

extern int FUN_002c09d0(void);
/* Supplied declaration required: dataTableGetCount. */
extern int dataTableGetEntries(void);
/* Supplied declaration required: dataTableGet. */


char * FUN_0027d614(int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  char *pcVar5;
  
  temp_v3 = 0;
  dataTableGet(0x23,8);
  temp_v0 = dataTableGetCount();
  if (0 < temp_v0 + *(int *)(g_aocSystem + 0x424)) {
    do {
      temp_v1 = dataTableGet(0x23,8);
      temp_v0 = dataTableGetEntries();
      temp_v2 = dataTableGetCount(temp_v1);
      if (temp_v3 < temp_v2) {
        pcVar5 = (char *)(temp_v0 + temp_v3 * 0x18);
      }
      else {
        pcVar5 = (char *)0x0;
        if (temp_v3 < temp_v2 + *(int *)(g_aocSystem + 0x424)) {
          pcVar5 = (char *)(*(int *)(g_aocSystem + 0x428) + (temp_v3 - temp_v2) * 0x18);
        }
      }
      if (*pcVar5 == -1) {
        return (char *)0x0;
      }
      if ((((*pcVar5 == param_1) && (pcVar5[1] == param_2)) &&
          ((*(short *)(pcVar5 + 2) == 0 || (temp_v0 = FUN_002c09d0(), temp_v0 != 0)))) &&
         ((*(short *)(pcVar5 + 4) == 0 || (temp_v0 = FUN_002c09d0(), temp_v0 == 0)))) {
        return pcVar5;
      }
      temp_v3 = temp_v3 + 1;
      dataTableGet(0x23,8);
      temp_v0 = dataTableGetCount();
    } while ((int)temp_v3 < temp_v0 + *(int *)(g_aocSystem + 0x424));
  }
  return (char *)0x0;
}

} /* extern "C" */
