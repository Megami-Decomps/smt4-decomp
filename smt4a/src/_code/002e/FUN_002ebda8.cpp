#include "romwright_types.h"

extern "C" {

int dataTableGetCount(unsigned int);
int dataTableGetEntries(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned int dataTableGet(unsigned int, unsigned int);
/* Supplied declaration required: dataTableGetCount. */
/* Supplied declaration required: dataTableGetEntries. */


void FUN_002ebda8(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = dataTableGet(0x37,0);
  dataTableGetEntries();
  dataTableGetCount(temp_v0);
  return;
}

} /* extern "C" */
