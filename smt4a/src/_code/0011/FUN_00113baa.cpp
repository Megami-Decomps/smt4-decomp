#include "romwright_types.h"

extern "C" {

int FUN_002e9f00(int, int);

/* Supplied declaration required: FUN_002e9f00. */


unsigned int FUN_00113baa(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*(char *)(param_1 + 0x90) == '\x01') {
    FUN_002e9f00(param_1 + 0x80,4);
  }
  return 1;
}

} /* extern "C" */
