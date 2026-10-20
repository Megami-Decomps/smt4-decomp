#include "romwright_types.h"

extern "C" {

int FUN_0023d02c(unsigned int);
int FUN_002b2368(unsigned int *);
int FUN_002c415c(void);

typedef int romwright_code(...);
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern unsigned char DAT_00420798; /* 0x420798 */

/* Supplied declaration required: FUN_0023d02c. */
/* Supplied declaration required: FUN_002b2368. */
/* Supplied declaration required: FUN_002c415c. */


void FUN_00347a5c(unsigned int *param_1)

{
/* irregular: 3 native warning(s); review required */
  *param_1 = (unsigned int)&DAT_00420798;
  if (param_1[2] != 0) {
    FUN_0023d02c(param_1[2]);
    param_1[2] = 0;
  }
  if (param_1[1] != 0) {
    FUN_002c415c();
    param_1[1] = 0;
  }
  if ((int *)param_1[5] != (int *)0x0) {
    (**(romwright_code **)(*(int *)param_1[5] + 4))(param_1[5]);
    param_1[5] = 0;
  }
  FUN_002b2368(param_1);
  return;
}

} /* extern "C" */
