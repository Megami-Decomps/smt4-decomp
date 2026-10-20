#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_005b4000; /* 0x5b4000 */


void FUN_001407cc(int param_1)

{
  if (param_1 != 0) {
    (*(unsigned int *)((unsigned char *)&DAT_005b4000 + 0x8)) = (*(unsigned int *)((unsigned char *)&DAT_005b4000 + 0x8)) | 1;
  }
  else {
    (*(unsigned int *)((unsigned char *)&DAT_005b4000 + 0x8)) = (*(unsigned int *)((unsigned char *)&DAT_005b4000 + 0x8)) & 0xfffffffe;
  }
  return;
}

} /* extern "C" */
