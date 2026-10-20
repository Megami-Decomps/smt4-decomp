#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);

void nw_gfx_Light_DestroyOriginalValue(int param_1)

{
  (**(romwright_code **)(**(int **)(param_1 + 4) + 0xc))
            (*(int **)(param_1 + 4),*(unsigned int *)(param_1 + 0x148));
  *(unsigned int *)(param_1 + 0x148) = 0;
  return;
}

} /* extern "C" */
