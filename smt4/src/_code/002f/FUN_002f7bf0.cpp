#include "romwright_types.h"

extern "C" {

int FUN_0028dcb0(int);

/* Supplied declaration required: FUN_0028dcb0. */
extern int FUN_002b63ac(void);


unsigned int FUN_002f7bf0(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002b63ac();
  FUN_0028dcb0((int)*(short *)(temp_v0 + 0x1e));
  return 1;
}

} /* extern "C" */
