#include "romwright_types.h"

extern "C" {

int FUN_00296ee0(int, int);
int FUN_002b8838(int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern int FUN_0019e0c0(unsigned int);
/* Supplied declaration required: FUN_00296ee0. */
/* Supplied declaration required: FUN_002b8838. */


void FUN_00397514(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_0019e0c0(*(unsigned int *)(param_1 + 0x654));
  if (temp_v0 != 2) {
    return;
  }
  FUN_00296ee0(param_1,2);
  if (*(char *)(param_1 + 0x29) != '\0') {
    FUN_002b8838(0x97);
    return;
  }
  if ((*(signed char *)(param_1 + 0x20) != '\x02') && (*(signed char *)(param_1 + 0x20) != '\x06')) {
    FUN_002b8838(0x95);
    return;
  }
  FUN_002b8838(0x96);
  return;
}

} /* extern "C" */
