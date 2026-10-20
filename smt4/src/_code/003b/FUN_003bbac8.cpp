#include "romwright_types.h"

extern "C" {

int dataTableGetCount(void);
int dataTableGet(int, int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_2_stack;

/* Supplied declaration required: dataTableGetCount. */
/* Supplied declaration required: dataTableGet. */


void FUN_003bbac8(unsigned int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  dataTableGet(0x33,param_2 + 1);
  dataTableGetCount();
  return;
}

} /* extern "C" */
