#include "romwright_types.h"

extern "C" {

unsigned short *FUN_002b63c0(unsigned short);

/* Supplied declaration required: FUN_002b63c0. */


unsigned short FUN_00383674(int param_1)

{
/* irregular: 1 native warning(s); review required */
  return *FUN_002b63c0((unsigned short)*(unsigned int *)(param_1 + 0xd0c));
}

} /* extern "C" */
