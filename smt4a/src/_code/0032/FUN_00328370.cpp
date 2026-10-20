#include "romwright_types.h"

extern "C" {

int FUN_00236038(...);

extern int FUN_00203d74(void);
/* Supplied declaration required: FUN_00236038. */
extern int FUN_002deb84(void);


unsigned int FUN_00328370(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00236038();
  if (0 < temp_v0) {
    temp_v0 = FUN_002deb84();
    temp_v1 = FUN_00236038(0);
    if ((temp_v0 < temp_v1) && (temp_v0 = FUN_00203d74(), temp_v0 == 0)) {
      return 0;
    }
  }
  return 1;
}

} /* extern "C" */
