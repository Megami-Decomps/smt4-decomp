#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern unsigned char DAT_00589508; /* 0x589508 */


void FUN_00512ebc(int *param_1)

{
/* irregular: 2 native warning(s); review required */
  if ((*(romwright_code * *)((unsigned char *)&DAT_00589508 + 0x4)) == (romwright_code *)0x0 || param_1 == (int *)0x0) {
    return;
  }
  if (param_1[3] != 0) {
    (*(*(romwright_code * *)((unsigned char *)&DAT_00589508 + 0x4)))(param_1[3]);
  }
  if (*param_1 != 0) {
    (*(*(romwright_code * *)((unsigned char *)&DAT_00589508 + 0x4)))(*param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00512f00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(*(romwright_code * *)((unsigned char *)&DAT_00589508 + 0x4)))(param_1);
  return;
}

} /* extern "C" */
