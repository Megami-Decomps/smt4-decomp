/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003d0590` (_code @ 0x3d0590, 0x94 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_00229aa8(int *, int, int);
extern int FUN_0027eb98(void);


int FUN_003d0590(int *param_1)

{
  int temp_v0;
  unsigned int *puVar2;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  
  temp_v0 = FUN_0027eb98();
  temp_v4 = 0;
  temp_v2 = 0;
  do {
    temp_v3 = temp_v0 + temp_v2 * 8;
    if ((((-1 < *(int *)(temp_v3 + 0x5a8)) || (*(int *)(temp_v3 + 0x5ac) != 0)) &&
        (puVar2 = (unsigned int *)(*(int *)(*param_1 + 0x1fc0) + *(int *)(temp_v3 + 0x5a8) * 0x288),
        (*puVar2 & 1) != 0)) &&
       ((temp_v1 = FUN_00229aa8(param_1,temp_v0,(int)(short)puVar2[2]), temp_v1 == 0 &&
        (temp_v4 < *(int *)(temp_v3 + 0x5ac))))) {
      temp_v4 = *(int *)(temp_v3 + 0x5ac);
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 0x85);
  return temp_v4;
}
