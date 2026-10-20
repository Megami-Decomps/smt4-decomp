#include "romwright_types.h"

extern "C" {

int FUN_0010baf8(void);

extern signed char DAT_00446db0; /* 0x446db0 */

/* Supplied declaration required: FUN_0010baf8. */
extern int FUN_002c5210(void);


unsigned int FUN_00102884(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002c5210();
  if (temp_v0 == 1) {
    if (((*(signed char *)((unsigned char *)&DAT_00446db0 + 0x1)) != '\0') && (DAT_00446db0 == '\0')) {
      FUN_0010baf8();
    }
  }
  return 0;
}

} /* extern "C" */
