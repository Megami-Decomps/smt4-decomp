/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00240678` (_code @ 0x240678, 0x198 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int g_btlActionReflect; /* 0x434290 */
extern int g_btlMain; /* 0x4342c8 */
extern unsigned int DAT_00435d18; /* 0x435d18 */
extern unsigned int g_btlUiBlock; /* 0x439ca8 */

extern int recordAreAllCountsNonpositive(unsigned int);
extern int FUN_00256940(int, int, unsigned int);
extern int nodeListCountActiveById(unsigned int, unsigned int *);
extern int stateBlockCall(unsigned int);


unsigned int FUN_00240678(unsigned int *param_1,int param_2)

{
  short temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int *puVar5;
  unsigned int temp_v4;
  
  if ((((*(char *)(param_2 + 0x44b7) == '\0') ||
       (temp_v1 = nodeListCountActiveById(g_btlActionReflect,param_1), temp_v1 < 1)) &&
      (temp_v1 = recordAreAllCountsNonpositive(DAT_00435d18), temp_v1 != 0)) &&
     (((*(unsigned int *)(param_2 + 0x44a0) & 8) == 0 || (temp_v1 = stateBlockCall(g_btlUiBlock), temp_v1 != 0))))
  {
    if ((*(unsigned int *)(param_2 + 0xe0) & 0x4000000) != 0) {
      temp_v3 = 4;
      temp_v1 = 4;
      do {
        puVar5 = (unsigned int *)(*(int *)(param_2 + 0x1fc0) + temp_v1 * 0x288);
        temp_v4 = *puVar5;
        if ((((temp_v4 & 1) != 0) && ((temp_v4 & 0x40) == 0)) && ((temp_v4 & 0x10) != 0)) {
          *puVar5 = *puVar5 | 0x800000;
        }
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < 0x36);
      do {
        temp_v1 = *(int *)(param_2 + 0x1e98) + temp_v3 * 0x114;
        temp_v4 = *(unsigned int *)(temp_v1 + 0x50);
        if ((((temp_v4 & 1) != 0) && ((temp_v4 & 0x80) == 0)) && ((temp_v4 & 0x400) != 0)) {
          *(unsigned int *)(temp_v1 + 0x50) = temp_v4 | 0x40000;
        }
        temp_v3 = temp_v3 + 1;
      } while (temp_v3 < 0x36);
    }
    param_1[3] = param_1[3] | 4;
    temp_v1 = FUN_00256940(g_btlMain,param_2,1);
    if (temp_v1 != 0) {
      temp_v0 = *(short *)(param_2 + 0x1fc8);
      temp_v2 = 0xffffffff;
      if (temp_v0 == 0) {
        temp_v2 = 1;
      }
      else if (temp_v0 == 1) {
        temp_v2 = 2;
      }
      else if (temp_v0 == 2) {
        temp_v2 = 3;
      }
      else if (temp_v0 == 3) {
        temp_v2 = 4;
      }
      *(unsigned int *)(g_btlMain + 0x760) = temp_v2;
    }
    *param_1 = 0x10;
    param_1[4] = 1;
  }
  return 0;
}

} /* extern "C" */
