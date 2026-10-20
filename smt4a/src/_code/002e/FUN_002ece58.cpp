#include "romwright_types.h"

extern "C" {

int FUN_002e7232(void);

/* Supplied declaration required: FUN_002e7232. */


unsigned int FUN_002ece58(int param_1,unsigned int param_2)
{
  int *p = (int *)(param_1 + 0xc0);
  if (p[6] != 0) {
    FUN_002e7232();
  }
  p[6] = param_2;
  return 1;
}
} /* extern "C" */
