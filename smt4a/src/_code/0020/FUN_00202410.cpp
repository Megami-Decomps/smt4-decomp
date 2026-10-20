#include "romwright_types.h"

extern "C" {

int FUN_00184c00(int, int, int);

/* Supplied declaration required: FUN_00184c00. */


void FUN_00202410(int param_1)

{
/* irregular: 1 native warning(s); review required */
  char temp_v0;
  
  temp_v0 = *(char *)(param_1 + 0x1b20);
  if (temp_v0 != '\x02' && temp_v0 != '\x01') {
    FUN_00184c00(param_1 + 0x1a08,0x17,0);
    *(char *)(param_1 + 0x1b20) = '\x01';
  }
  return;
}

} /* extern "C" */
