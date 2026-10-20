#include "romwright_types.h"

extern "C" {

int FUN_00100c50(unsigned int, int, int, int);

/* Supplied declaration required: FUN_00100c50. */
extern unsigned long long FUN_002e354a(unsigned int, unsigned int);


void FUN_00100c94(unsigned int param_1,unsigned int param_2,unsigned int *param_3)

{
/* irregular: 1 native warning(s); review required */
  unsigned long long temp_v0;
  
  temp_v0 = FUN_002e354a(*param_3,param_1);
  FUN_00100c50(param_1,(int)((unsigned long long)temp_v0 >> 0x20),(int)temp_v0,0);
  return;
}

} /* extern "C" */
