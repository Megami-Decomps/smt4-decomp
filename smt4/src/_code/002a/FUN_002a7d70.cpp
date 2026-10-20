#include "romwright_types.h"

extern "C" {

int FUN_002c424c(unsigned int, unsigned int, unsigned int);

extern unsigned char DAT_004765e4; /* 0x4765e4 */

/* Supplied declaration required: FUN_002c424c. */


void FUN_002a7d70(int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  if ((*(unsigned int *)(param_1 + 0x24) & 2) != 0) {
    FUN_002c424c(param_2,param_3,(*(unsigned int *)((unsigned char *)&DAT_004765e4 + 0x8)));
    return;
  }
  return;
}

} /* extern "C" */
