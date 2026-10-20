#include "romwright_types.h"

extern "C" {

int dataTableGet(int, int);
int dataTableGetEntries(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

/* Supplied declaration required: dataTableGet. */
/* Supplied declaration required: dataTableGetEntries. */


void FUN_0037e21c(void)

{
/* irregular: 2 native warning(s); review required */
  dataTableGet(5,0);
  dataTableGetEntries();
  return;
}

} /* extern "C" */
