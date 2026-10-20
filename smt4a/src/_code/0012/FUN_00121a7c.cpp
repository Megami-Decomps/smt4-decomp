/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00121a7c` (_code @ 0x121a7c, 0x50 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
extern unsigned int DAT_00594a0c; /* 0x594a0c */
extern unsigned int DAT_00594a10; /* 0x594a10 */

extern unsigned int FUN_0010f164(int, unsigned int, unsigned int);
extern int FUN_002e760a(unsigned int);
extern int FUN_002eac34(unsigned int);


void FUN_00121a7c(int param_1,int param_2)

{
  int temp_v0;
  unsigned int temp_v1;
  
  if (*(int **)(param_1 + 0x318) != (int *)0x0) {
    (**(romwright_code **)(**(int **)(param_1 + 0x318) + 4))();
    *(unsigned int *)(param_1 + 0x318) = 0;
  }
  if ((param_2 != 0) && (param_2 == 1)) {
    temp_v0 = FUN_002e760a(0x128);
    temp_v1 = 0;
    if (temp_v0 != 0) {
      temp_v1 = FUN_0010f164(temp_v0,DAT_00594a0c,DAT_00594a10);
    }
    *(unsigned int *)(param_1 + 0x318) = temp_v1;
  }
  temp_v0 = FUN_002eac34(3);
  *(unsigned int *)(temp_v0 + 0x10) = *(unsigned int *)(param_1 + 0x318);
  temp_v0 = FUN_002eac34(2);
  *(unsigned int *)(temp_v0 + 0x10) = *(unsigned int *)(param_1 + 0x318);
  return;
}

} /* extern "C" */
