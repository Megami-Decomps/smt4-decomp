/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003cda7c` (_code @ 0x3cda7c, 0x64 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int scrSetResult(int);

extern int gameGetSlotRecord(int);
/* Supplied declaration required: scrSetResult. */
extern int FUN_003a7b74(void);


unsigned int FUN_003cda7c(unsigned int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v1 = *(int *)(param_2 + 4);
  if (temp_v1 != 0) {
    temp_v1 = gameGetSlotRecord((int)*(char *)(temp_v1 + *(int *)(temp_v1 + 0x74c0) * 0x150 + 0x442c));
    temp_v2 = FUN_003a7b74();
    temp_v0 = *(unsigned short *)(temp_v1 + temp_v2 * 2 + 0x34);
  }
  else {
    if (*(int *)(param_2 + 8) == 0) {
      return 1;
    }
    temp_v0 = *(unsigned short *)(*(int *)(param_2 + 8) + 0x3a);
  }
  scrSetResult(temp_v0);
  return 1;
}

} /* extern "C" */
