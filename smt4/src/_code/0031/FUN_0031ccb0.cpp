#include "romwright_types.h"

extern "C" {

int FUN_0028dcb0(unsigned int);

/* Supplied declaration required: FUN_0028dcb0. */
extern int FUN_002973ec(void);


unsigned int FUN_0031ccb0(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v1 = 0xffffffff;
  temp_v0 = FUN_002973ec();
  if (temp_v0 == 0) {
    temp_v1 = 0;
  }
  else if (temp_v0 == 1) {
    temp_v1 = 1;
  }
  else if (temp_v0 == 2) {
    temp_v1 = 2;
  }
  FUN_0028dcb0(temp_v1);
  return 1;
}

} /* extern "C" */
