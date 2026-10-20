#include "romwright_types.h"

extern "C" {

int FUN_002e6dac(int);

typedef int romwright_code(...);
extern unsigned char DAT_00594958; /* 0x594958 */

/* Supplied declaration required: FUN_002e6dac. */


void FUN_001149f0(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if ((*(romwright_code * *)((unsigned char *)&DAT_00594958 + 0x6c)) != (romwright_code *)0x0) {
    (*(*(romwright_code * *)((unsigned char *)&DAT_00594958 + 0x6c)))(param_1);
    return;
  }
  FUN_002e6dac(param_1);
  return;
}

} /* extern "C" */
