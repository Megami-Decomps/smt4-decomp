#include "romwright_types.h"

extern "C" {

int FUN_00253d60(unsigned short [20], unsigned int);

/* Supplied declaration required: FUN_00253d60. */
extern unsigned int FUN_002b63ac(void);


unsigned short FUN_00257e0c(int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned short temp_v1 [20];
  
  temp_v0 = FUN_002b63ac();
  FUN_00253d60(temp_v1,temp_v0);
  return temp_v1[param_1] & 0x3ff;
}

} /* extern "C" */
