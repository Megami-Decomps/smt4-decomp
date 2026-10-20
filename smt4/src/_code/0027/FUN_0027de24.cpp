/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0027de24` (_code @ 0x27de24, 0x74 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdMdlManagerMarkDestroy(void);
int asdMdlManagerDestroy(unsigned int);

typedef int romwright_code(...);
/* Supplied declaration required: asdMdlManagerMarkDestroy. */
/* Supplied declaration required: asdMdlManagerDestroy. */


void FUN_0027de24(int param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v0 = 0;
  do {
    temp_v1 = param_1 + temp_v0 * 0x10;
    if (*(int **)(temp_v1 + 0x968) != (int *)0x0) {
      (**(romwright_code **)(**(int **)(temp_v1 + 0x968) + 4))();
      *(unsigned int *)(temp_v1 + 0x968) = 0;
    }
    if (*(int *)(temp_v1 + 0x960) != 0) {
      if (-1 < *(int *)(*(int *)(*(int *)(temp_v1 + 0x960) + 8) + 0xc)) {
        asdMdlManagerMarkDestroy();
      }
      asdMdlManagerDestroy(*(unsigned int *)(temp_v1 + 0x960));
      *(unsigned int *)(temp_v1 + 0x960) = 0;
    }
    temp_v0 = temp_v0 + 1;
    *(unsigned int *)(temp_v1 + 0x96c) = 0;
  } while (temp_v0 < 0x6d);
  return;
}

} /* extern "C" */
