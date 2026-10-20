#include "romwright_types.h"

extern "C" {

int dataTableGetEntries(void);
int dataTableGet(int, int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

/* Supplied declaration required: dataTableGetEntries. */
/* Supplied declaration required: dataTableGet. */


void FUN_00229f18(void)

{
/* irregular: 2 native warning(s); review required */
  dataTableGet(5,0);
  dataTableGetEntries();
  return;
}

} /* extern "C" */
