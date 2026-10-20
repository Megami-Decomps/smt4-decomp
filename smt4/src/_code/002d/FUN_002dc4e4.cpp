#include "romwright_types.h"

extern "C" {

int FUN_00298140(int, int, int);
int FUN_002bee58(int, int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

/* Supplied declaration required: FUN_00298140. */
/* Supplied declaration required: FUN_002bee58. */


void FUN_002dc4e4(int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  if (param_2 == 0) {
    *(unsigned char *)(param_1 + 0x3081) = 1;
  }
  else {
    *(unsigned char *)(param_1 + 0x3081) = 0;
  }
  *(unsigned char *)(param_1 + 0x307f) = 0;
  *(unsigned int *)(param_1 + 0x305c) = 4;
  FUN_002bee58(param_1 + 0x1344,9);
  if (*(int *)(param_1 + 0x3048) == 0x17) {
    *(unsigned int *)(param_1 + 0x3054) = 0x1f;
    FUN_00298140(param_1,0x18,1);
    return;
  }
  FUN_00298140(param_1,0x1f,1);
  return;
}

} /* extern "C" */
