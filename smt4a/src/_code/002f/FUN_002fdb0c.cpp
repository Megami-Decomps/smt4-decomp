#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00594a58; /* 0x594a58 */


unsigned char FUN_002fdb0c(int param_1)

{
  if ((*(int *)((unsigned char *)&DAT_00594a58 + 0x50)) != 0) {
    return 3;
  }
  return *(unsigned char *)(param_1 + 0x1a);
}

} /* extern "C" */
