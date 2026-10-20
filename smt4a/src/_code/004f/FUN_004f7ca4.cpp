#include "romwright_types.h"

extern "C" {

int FUN_004f6ad4(unsigned int);
int FUN_004f716c(void);
int FUN_004f828c(unsigned int);
int FUN_004f9764(unsigned int);

/* Supplied declaration required: FUN_004f6ad4. */
/* Supplied declaration required: FUN_004f716c. */
/* Supplied declaration required: FUN_004f828c. */
/* Supplied declaration required: FUN_004f9764. */


unsigned int FUN_004f7ca4(unsigned int param_1)

{
/* irregular: 4 native warning(s); review required */
  FUN_004f716c();
  FUN_004f6ad4(param_1);
  FUN_004f828c(param_1);
  FUN_004f9764(param_1);
  return 1;
}

} /* extern "C" */
