#include "romwright_types.h"

extern "C" {

int sysMemClear(unsigned int *, int);

/* Supplied declaration required: sysMemClear. */


void FUN_001c5b68(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  *param_1 = 0;
  param_1[1] = 1;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(unsigned char *)(param_1 + 8) = 0;
  param_1[10] = 0x80;
  param_1[9] = 0;
  sysMemClear(param_1 + 0xb,0x100);
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  return;
}

} /* extern "C" */
