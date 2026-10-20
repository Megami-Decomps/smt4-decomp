#include "romwright_types.h"

extern "C" {

int FUN_0013ac54(unsigned char *);

extern unsigned char DAT_004ead10; /* 0x4ead10 */

/* Supplied declaration required: FUN_0013ac54. */


void FUN_00146e40(int param_1,unsigned char param_2)

{
/* irregular: 1 native warning(s); review required */
  *(unsigned char *)(param_1 + 0x26) = param_2;
  FUN_0013ac54(&DAT_004ead10);
  return;
}

} /* extern "C" */
