#include "romwright_types.h"

extern "C" {

int FUN_0028dcb0(int);

/* Supplied declaration required: FUN_0028dcb0. */
extern int FUN_002b63ac(void);


unsigned int FUN_002dc084(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002b63ac();
  FUN_0028dcb0(*(unsigned char *)(temp_v0 + 0x76));
  return 1;
}

} /* extern "C" */
