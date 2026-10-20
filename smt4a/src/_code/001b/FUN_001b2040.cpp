#include "romwright_types.h"

extern "C" {

int FUN_001b6668(int, int);
int FUN_001b9f70(int);
int FUN_001b9f8c(int, int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

/* Supplied declaration required: FUN_001b6668. */
/* Supplied declaration required: FUN_001b9f70. */
/* Supplied declaration required: FUN_001b9f8c. */


void FUN_001b2040(int param_1,int param_2)

{
/* irregular: 3 native warning(s); review required */
  int a = param_1 + 4;
  int b = param_2 + 0x1b0;
  FUN_001b6668(a,b);
  if (param_2 != 0) {
    FUN_001b9f70(param_2);
    FUN_001b9f8c(param_1,param_2);
    return;
  }
  return;
}

} /* extern "C" */
