#include "romwright_types.h"

extern "C" {

int scrSetResult(...);
int FUN_0037c678(int);

/* Supplied declaration required: scrSetResult. */
extern int FUN_0032faf4(void);
/* Supplied declaration required: FUN_0037c678. */


unsigned int FUN_003c31ec(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  if (*(int *)(param_1 + 4) != 0) {
    scrSetResult(*(unsigned int *)(*(int *)(param_1 + 4) + 0x75d0));
  }
  else {
    temp_v0 = FUN_0032faf4();
    scrSetResult(temp_v0 == 0 ? FUN_0037c678(temp_v0) : 0);
  }
  return 1;
}

} /* extern "C" */
