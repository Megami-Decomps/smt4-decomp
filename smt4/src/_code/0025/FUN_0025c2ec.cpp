#include "romwright_types.h"

extern "C" {

int asdListBoxMarkDirty(unsigned int);

/* Supplied declaration required: asdListBoxMarkDirty. */
extern int jobGetWork(unsigned int);


void FUN_0025c2ec(unsigned int param_1,unsigned char param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = jobGetWork(param_1);
  asdListBoxMarkDirty(param_1);
  *(unsigned char *)(temp_v0 + 0x3d) = param_2;
  *(unsigned int *)(temp_v0 + 0x40) = 2;
  return;
}

} /* extern "C" */
