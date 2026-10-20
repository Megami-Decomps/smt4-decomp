#include "romwright_types.h"

extern "C" {

int FUN_002e9300(unsigned int, unsigned char [256]);
int FUN_002e97b4(unsigned int, unsigned char [256], int);

/* Supplied declaration required: FUN_002e9300. */
/* Supplied declaration required: FUN_002e97b4. */


void FUN_002fd768(unsigned int param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned char temp_v0 [256];
  
  FUN_002e97b4(param_2,temp_v0,0x80);
  FUN_002e9300(param_1,temp_v0);
  return;
}

} /* extern "C" */
