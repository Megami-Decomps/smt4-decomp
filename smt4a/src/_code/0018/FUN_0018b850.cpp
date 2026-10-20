#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_005b4464; /* 0x5b4464 */


void FUN_0018b850(int param_1)

{
  if ((*(int *)((unsigned char *)&DAT_005b4464 + 0x8)) == 0) {
    (*(int *)((unsigned char *)&DAT_005b4464 + 0x8)) = param_1;
  }
  return;
}

} /* extern "C" */
