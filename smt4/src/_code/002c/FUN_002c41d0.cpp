#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_004650a0; /* 0x4650a0 */


void FUN_002c41d0(int param_1)

{
  if (param_1 != 0) {
    (*(unsigned int *)((unsigned char *)&DAT_004650a0 + 0x8)) = (*(unsigned int *)((unsigned char *)&DAT_004650a0 + 0x8)) | 1;
  }
  else {
    (*(unsigned int *)((unsigned char *)&DAT_004650a0 + 0x8)) = (*(unsigned int *)((unsigned char *)&DAT_004650a0 + 0x8)) & 0xfffffffe;
  }
  return;
}

} /* extern "C" */
