/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00311024` (_code @ 0x311024, 0x3a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6e14(unsigned int);
int FUN_002feaa8(int);

/* Supplied declaration required: FUN_002e6e14. */
extern int FUN_002f5966(int);
extern unsigned int *FUN_002fea6a(int);
/* Supplied declaration required: FUN_002feaa8. */
extern int FUN_002fecc2(int);


int FUN_00311024(int param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  
  while (*(int *)(param_1 + 0x3c) != 0) {
    puVar1 = (unsigned int *)FUN_002fea6a(param_1 + 0x24);
    FUN_002e6e14(*puVar1);
    FUN_002feaa8(param_1 + 0x24);
  }
  temp_v0 = FUN_002f5966(param_1 + 0x4c);
  temp_v0 = FUN_002fecc2(temp_v0 - 0x28);
  temp_v0 = FUN_002fecc2(temp_v0 - 0x20);
  return temp_v0 - 4;
}

} /* extern "C" */
