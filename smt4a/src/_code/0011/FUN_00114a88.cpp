#include "romwright_types.h"

extern "C" {

int FUN_002e6dac(void);

typedef int romwright_code(...);
extern unsigned char DAT_00594958; /* 0x594958 */

/* Supplied declaration required: FUN_002e6dac. */


void FUN_00114a88(int param_1)
{
  if ((*(romwright_code * *)((unsigned char *)&DAT_00594958 + 0x68)) != (romwright_code *)0x0) {
    (*(*(romwright_code * *)((unsigned char *)&DAT_00594958 + 0x68)))(param_1);
    return;
  }
  FUN_002e6dac();
}
} /* extern "C" */
