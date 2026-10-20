#include "romwright_types.h"

extern "C" {

int FUN_0014166c(void);

extern signed char DAT_0057ffd0; /* 0x57ffd0 */

/* Supplied declaration required: FUN_0014166c. */
extern int FUN_001696f4(void);


unsigned int FUN_0013710c(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_001696f4();
  if (temp_v0 == 1) {
    if (((*(signed char *)((unsigned char *)&DAT_0057ffd0 + 0x1)) != '\0') && (DAT_0057ffd0 == '\0')) {
      FUN_0014166c();
    }
  }
  return 0;
}

} /* extern "C" */
