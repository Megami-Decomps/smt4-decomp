#include "romwright_types.h"

extern "C" {

int FUN_00187180(int, int);
int FUN_00192748(void);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_2_stack;

/* Supplied declaration required: FUN_00187180. */
/* Supplied declaration required: FUN_00192748. */


void FUN_004bb158(unsigned int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  FUN_00187180(0x33,param_2 + 1);
  FUN_00192748();
  return;
}

} /* extern "C" */
