/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037f770` (_code @ 0x37f770, 0x70 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* Supplied declaration required: FUN_00235938. */
/* Supplied declaration required: FUN_002b7770. */
extern unsigned int FUN_002bd630(void);


void FUN_0037f770(int param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  
  if (*(char *)(param_1 + 0xd) != '\0') {
    temp_v0 = FUN_002bd630();
    FUN_002b7770(temp_v0,param_1 + 0x50);
    *(unsigned char *)(param_1 + 0xd) = 0;
  }
  temp_v1 = 0;
  do {
    if (temp_v1 < 0x10) {
      temp_v2 = param_1 + temp_v1 * 4;
      if (*(int *)(temp_v2 + 0x8c) != 0) {
        FUN_00235938();
        (**(romwright_code **)(**(int **)(param_1 + 0x80) + 0xc))
                  (*(int **)(param_1 + 0x80),*(unsigned int *)(temp_v2 + 0x8c));
        *(unsigned int *)(temp_v2 + 0x8c) = 0;
      }
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 0x10);
  return;
}
