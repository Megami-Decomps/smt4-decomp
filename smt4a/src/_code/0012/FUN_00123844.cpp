#include "romwright_types.h"

extern "C" {

int FUN_002e9300(unsigned int, unsigned char [32]);
int FUN_0030f090(unsigned int, unsigned char [32], int);

/* Supplied declaration required: FUN_002e9300. */
/* Supplied declaration required: FUN_0030f090. */


void FUN_00123844(unsigned int param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned char temp_v0 [32];
  
  FUN_0030f090(param_2,temp_v0,0x10);
  FUN_002e9300(param_1,temp_v0);
  return;
}

} /* extern "C" */
