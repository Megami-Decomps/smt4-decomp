#include "romwright_types.h"

extern "C" {

int dataTableGetCount(void);
int dataTableGet(int, int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

/* Supplied declaration required: dataTableGetCount. */
/* Supplied declaration required: dataTableGet. */


void FUN_002308fc(void)

{
/* irregular: 2 native warning(s); review required */
  dataTableGet(0x17,1);
  dataTableGetCount();
  return;
}

} /* extern "C" */
