#include "romwright_types.h"

extern "C" {

unsigned int FUN_00256fec(unsigned int);
int FUN_00257108(void);
int FUN_0025715c(void);

extern unsigned int FUN_00256fdc(unsigned int);
/* Supplied declaration required: FUN_00256fec. */
/* Supplied declaration required: FUN_00257108. */
/* Supplied declaration required: FUN_0025715c. */


void FUN_002f9f20(int param_1,int param_2)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  
  if (*(int *)(param_2 + 0xd0) != 0) {
    if (*(int *)(param_1 + 0xd0) != 0) {
      FUN_0025715c();
    }
    temp_v0 = FUN_00256fec(*(unsigned int *)(param_2 + 0xd0));
    *(unsigned int *)(param_1 + 0xd0) = temp_v0;
  }
  else if (*(int *)(param_2 + 0xcc) != 0) {
    if (*(int *)(param_1 + 0xcc) != 0) {
      FUN_00257108();
    }
    temp_v0 = FUN_00256fdc(*(unsigned int *)(param_2 + 0xcc));
    *(unsigned int *)(param_1 + 0xcc) = temp_v0;
    return;
  }
  return;
}

} /* extern "C" */
