#include "romwright_types.h"

extern "C" {

int FUN_0018a3d0(unsigned char *);

extern unsigned char DAT_00647708; /* 0x647708 */

/* Supplied declaration required: FUN_0018a3d0. */


void FUN_001a167c(int param_1,unsigned char param_2)

{
/* irregular: 1 native warning(s); review required */
  *(unsigned char *)(param_1 + 0x26) = param_2;
  FUN_0018a3d0(&DAT_00647708);
  return;
}

} /* extern "C" */
