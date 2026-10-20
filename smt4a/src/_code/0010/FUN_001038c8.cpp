#include "romwright_types.h"

extern "C" {

int FUN_002e791c(unsigned int, unsigned int, int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, int, int);

/* stack frame of param_7: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp30; /* 0x30: local_30 */
} param_7_stack;

/* Supplied declaration required: FUN_002e791c. */


void FUN_001038c8(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                 unsigned int param_5,unsigned int param_6,unsigned int param_7)

{
/* irregular: 1 native warning(s); review required */
  FUN_002e791c(param_1,param_2,0,param_3,param_4,param_5,param_6,param_7,0,0);
  return;
}

} /* extern "C" */
