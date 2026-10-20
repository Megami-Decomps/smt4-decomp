#include "romwright_types.h"

extern "C" {

int FUN_002ac838(unsigned int, unsigned char [260], int);
int FUN_002bf694(unsigned char [260], unsigned int);
int FUN_002c3940(unsigned char [260], int);
int FUN_0035eabc(unsigned int);

/* Supplied declaration required: FUN_002ac838. */
/* Supplied declaration required: FUN_002bf694. */
/* Supplied declaration required: FUN_002c3940. */
/* Supplied declaration required: FUN_0035eabc. */


void FUN_00309fcc(unsigned int param_1,unsigned int param_2)

{
/* irregular: 4 native warning(s); review required */
  unsigned char temp_v0 [260];
  
  FUN_002c3940(temp_v0,0x100);
  FUN_002bf694(temp_v0,param_1);
  FUN_002ac838(param_2,temp_v0,0x100);
  FUN_0035eabc(param_2);
  return;
}

} /* extern "C" */
