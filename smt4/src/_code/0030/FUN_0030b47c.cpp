#include "romwright_types.h"

extern "C" {

int FUN_0028dcb0(unsigned int);

/* Supplied declaration required: FUN_0028dcb0. */
extern int FUN_002939f4(void);


unsigned int FUN_0030b47c(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002939f4();
  FUN_0028dcb0(*(unsigned int *)(temp_v0 + 0x49c0));
  return 1;
}

} /* extern "C" */
