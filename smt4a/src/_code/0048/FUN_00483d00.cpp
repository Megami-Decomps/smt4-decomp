#include "romwright_types.h"

extern "C" {

int sysPlaySe(int);
int FUN_004853fc(int, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: sysPlaySe. */
extern int FUN_00224880(unsigned int);
/* Supplied declaration required: FUN_004853fc. */


void FUN_00483d00(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_00224880(*(unsigned int *)(param_1 + 0x26c));
  if (temp_v0 == 2) {
    FUN_004853fc(param_1,2);
    sysPlaySe(0x97);
    return;
  }
  return;
}

} /* extern "C" */
