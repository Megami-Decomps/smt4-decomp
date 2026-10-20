#include "romwright_types.h"

extern "C" {

int FUN_002ec890(unsigned char [24]);

/* Supplied declaration required: FUN_002ec890. */
extern unsigned int FUN_002ec934(unsigned char *);
extern unsigned int FUN_002f7ac4(unsigned int, unsigned int);


unsigned int FUN_002f6c32(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned char temp_v1 [24];
  
  temp_v0 = FUN_002ec934(temp_v1);
  temp_v0 = FUN_002f7ac4(param_1,temp_v0);
  FUN_002ec890(temp_v1);
  return temp_v0;
}

} /* extern "C" */
