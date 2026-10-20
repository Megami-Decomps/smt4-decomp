#include "romwright_types.h"

extern "C" {

int FUN_00259b50(unsigned int);

/* Supplied declaration required: FUN_00259b50. */
extern int FUN_002c08f0(unsigned int);


void FUN_0025c2ec(unsigned int param_1,unsigned char param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002c08f0(param_1);
  FUN_00259b50(param_1);
  *(unsigned char *)(temp_v0 + 0x3d) = param_2;
  *(unsigned int *)(temp_v0 + 0x40) = 2;
  return;
}

} /* extern "C" */
