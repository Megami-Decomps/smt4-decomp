#include "romwright_types.h"

extern "C" {

int FUN_0010ca78(int, unsigned int, unsigned int);

/* Supplied declaration required: FUN_0010ca78. */
extern int FUN_002e760a(unsigned int);


void FUN_00106ce4(unsigned int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002e760a(0x9c);
  if (temp_v0 != 0) {
    FUN_0010ca78(temp_v0,param_1,param_2);
  }
  return;
}

} /* extern "C" */
