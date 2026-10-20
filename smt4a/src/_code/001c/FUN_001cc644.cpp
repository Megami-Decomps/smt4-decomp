/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001cc644` (_code @ 0x1cc644, 0x7c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001d0b28(unsigned int, int);
int FUN_001d0b34(void);

typedef int romwright_code(...);
extern unsigned int FUN_001b1f04(void);
/* Supplied declaration required: FUN_001d0b28. */
/* Supplied declaration required: FUN_001d0b34. */


void FUN_001cc644(int param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  
  if (*(char *)(param_1 + 0x166) != '\0') {
    temp_v0 = FUN_001b1f04();
    FUN_001d0b28(temp_v0,param_1 + 0x50);
    *(unsigned char *)(param_1 + 0x166) = 0;
  }
  temp_v1 = 0;
  if (*(char *)(param_1 + 0xd) != '\0') {
    *(unsigned char *)(param_1 + 0xd) = 0;
  }
  do {
    if (temp_v1 < 0x10) {
      temp_v2 = param_1 + temp_v1 * 4;
      if (*(int *)(temp_v2 + 0x90) != 0) {
        FUN_001d0b34();
        (**(romwright_code **)(**(int **)(param_1 + 0x84) + 0xc))
                  (*(int **)(param_1 + 0x84),*(unsigned int *)(temp_v2 + 0x90));
        *(unsigned int *)(temp_v2 + 0x90) = 0;
      }
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 0x10);
  return;
}

} /* extern "C" */
