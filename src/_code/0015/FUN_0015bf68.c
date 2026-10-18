/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0015bf68` (_code @ 0x15bf68, 0x90 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_001556f4(int *);
extern int FUN_002a7dd8(int);


void FUN_0015bf68(int *param_1,int *param_2,int param_3)

{
  int temp_v0;
  int temp_v1;
  
  if ((*param_2 == 0x52415743) && (param_2[2] == 0x1000000)) {
    *param_1 = (int)param_2;
    temp_v0 = FUN_001556f4(param_2);
    param_1[1] = temp_v0 + 8;
    *(unsigned char *)(param_1 + 3) = 1;
    if ((param_3 != 0) &&
       (temp_v1 = *param_1, temp_v0 = FUN_002a7dd8(temp_v1), *(int *)(temp_v1 + temp_v0) == 0x54415743)) {
      temp_v0 = FUN_002a7dd8(*param_1);
      param_1[2] = temp_v0 + 4 + (int)param_2;
    }
  }
  return;
}
