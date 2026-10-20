/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004e8300` (_code @ 0x4e8300, 0xa8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int DAT_00571148; /* 0x571148 */
extern unsigned int DAT_0057114c; /* 0x57114c */

extern int FUN_004e83ac(int *, int, int);
extern int FUN_004ee568(void);


int FUN_004e8300(int *param_1)

{
  int temp_v0;
  unsigned int *puVar2;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  
  temp_v0 = FUN_004ee568();
  temp_v4 = 0;
  temp_v2 = 0;
  do {
    temp_v3 = temp_v0 + temp_v2 * 8;
    if ((-1 < *(int *)(temp_v3 + 0x5b8)) || (*(int *)(temp_v3 + 0x5bc) != 0)) {
      puVar2 = (unsigned int *)(*(int *)(*param_1 + 0x1ffc) + *(int *)(temp_v3 + 0x5b8) * 0x408);
      if (((*puVar2 & DAT_00571148) != 0 || (DAT_0057114c & puVar2[1]) != 0) &&
         ((temp_v1 = FUN_004e83ac(param_1,temp_v0,(int)(short)puVar2[2]), temp_v1 == 0 &&
          (temp_v4 < *(int *)(temp_v3 + 0x5bc))))) {
        temp_v4 = *(int *)(temp_v3 + 0x5bc);
      }
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 0x85);
  return temp_v4;
}

} /* extern "C" */
