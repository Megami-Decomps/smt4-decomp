#include "romwright_types.h"

extern "C" {

int FUN_0012284c(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, int, unsigned int, unsigned int);

/* stack frame of param_9: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp30; /* 0x30: local_30 */
} param_9_stack;

/* Supplied declaration required: FUN_0012284c. */


void FUN_0012282c(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                 unsigned int param_5,unsigned int param_6,unsigned int param_7,unsigned int param_8,
                 unsigned int param_9)

{
/* irregular: 1 native warning(s); review required */
  FUN_0012284c(param_1,param_2,param_3,param_4,param_5,param_6,param_7,0,param_8,param_9);
  return;
}

} /* extern "C" */
