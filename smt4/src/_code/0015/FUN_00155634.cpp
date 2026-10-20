#include "romwright_types.h"

extern "C" {

int FUN_002a215c(unsigned int, int);

/* Supplied declaration required: FUN_002a215c. */
extern unsigned int FUN_002a2174(void);


int FUN_00155634(int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = FUN_002a2174();
  FUN_002a215c(temp_v0,param_1 + 0x80);
  return param_1;
}

} /* extern "C" */
