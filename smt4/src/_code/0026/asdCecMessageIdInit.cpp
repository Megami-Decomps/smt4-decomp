#include "romwright_types.h"

extern "C" {

int FUN_00291050(void);

/* Supplied declaration required: FUN_00291050. */


unsigned int asdCecMessageIdInit(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_00291050();
  return param_1;
}

} /* extern "C" */
