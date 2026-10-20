#include "romwright_types.h"

extern "C" {

int FUN_00349520(int, int, int, unsigned int, unsigned int, unsigned int, unsigned int, int, int);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

/* Supplied declaration required: FUN_00349520. */


void FUN_00349804(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  FUN_00349520(0,0x6752,0x1401,param_1,param_2,param_3,param_4,1,0);
  return;
}

} /* extern "C" */
