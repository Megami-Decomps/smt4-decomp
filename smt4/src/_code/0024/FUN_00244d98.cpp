#include "romwright_types.h"

extern "C" {

int FUN_002c2968(unsigned int, unsigned int);

extern unsigned int DAT_00464b7c; /* 0x464b7c */
extern unsigned int DAT_00464b84; /* 0x464b84 */

/* Supplied declaration required: FUN_002c2968. */


void FUN_00244d98(int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_002c2968((&DAT_00464b7c)[param_1],(&DAT_00464b84)[param_1]);
  return;
}

} /* extern "C" */
