#include "romwright_types.h"

extern "C" {

int dataTableGet(int);
int dataTableGetEntries(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

/* Supplied declaration required: dataTableGet. */
/* Supplied declaration required: dataTableGetEntries. */


void FUN_004bb170(void)

{
/* irregular: 2 native warning(s); review required */
  dataTableGet(0x33);
  dataTableGetEntries();
  return;
}

} /* extern "C" */
