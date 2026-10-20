#include "romwright_types.h"

extern "C" {

int FUN_00133094(int);
int FUN_00133568(int);
int FUN_00137080(void);
int FUN_00142a50(int);

extern int DAT_0044e32c; /* 0x44e32c */

/* Supplied declaration required: FUN_00133094. */
/* Supplied declaration required: FUN_00133568. */
/* Supplied declaration required: FUN_00137080. */
/* Supplied declaration required: FUN_00142a50. */


unsigned int vldtr_initializeStateValidator(int param_1)

{
/* irregular: 4 native warning(s); review required */
  DAT_0044e32c = param_1;
  FUN_00137080();
  FUN_00133094(DAT_0044e32c + 4);
  FUN_00142a50(DAT_0044e32c + 8);
  FUN_00133568(DAT_0044e32c + 0xc);
  return 0;
}

} /* extern "C" */
