/* NON_MATCHING: real font virtual interface for glyph check at slot0x44 is not recovered; cannot replace it with a raw-vtable call or invented padding methods. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
extern int recordTableGet(unsigned int);


void nameFormSetCharacter(int param_1,int param_2,unsigned int param_3)

{
  int temp_v0;
  
  if (param_3 != 0xffffffff) {
    if (param_3 != 0) {
      temp_v0 = recordTableGet(3);
      temp_v0 = (**(romwright_code **)(**(int **)(temp_v0 + 8) + 0x44))(*(int **)(temp_v0 + 8),param_3 & 0xffff);
      if (temp_v0 == 0) {
        param_3 = 0xffff8140;
      }
    }
    param_1 = param_1 + param_2 * 2;
    *(char *)(param_1 + 0xb1) = (char)param_3;
    *(char *)(param_1 + 0xb0) = (char)(param_3 >> 8);
  }
  return;
}

} /* extern "C" */
