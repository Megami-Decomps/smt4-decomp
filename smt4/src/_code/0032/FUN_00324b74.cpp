#include "romwright_types.h"

extern "C" {

int FUN_002c415c(...);
int FUN_002c56dc(int);
int FUN_002c5728(int);
int FUN_002c5758(int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern int FUN_002c08f0(unsigned int);
/* Supplied declaration required: FUN_002c415c. */
/* Supplied declaration required: FUN_002c56dc. */
/* Supplied declaration required: FUN_002c5728. */
/* Supplied declaration required: FUN_002c5758. */


void FUN_00324b74(unsigned int param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  
  FUN_002c5758(1);
  FUN_002c5728(1);
  FUN_002c56dc(1);
  temp_v0 = FUN_002c08f0(param_1);
  if (*(int *)(temp_v0 + 8) != 0) {
    FUN_002c415c();
  }
  FUN_002c415c(temp_v0);
  return;
}

} /* extern "C" */
