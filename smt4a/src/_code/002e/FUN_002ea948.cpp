#include "romwright_types.h"

extern "C" {

int FUN_002e9538(int, unsigned int);

/* Supplied declaration required: FUN_002e9538. */
extern int FUN_002e995c(void);


int FUN_002ea948(unsigned int param_1,unsigned int param_2,unsigned char param_3)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002e995c();
  FUN_002e9538(temp_v0,param_2);
  *(unsigned char *)(temp_v0 + 0x20) = param_3;
  return temp_v0;
}

} /* extern "C" */
