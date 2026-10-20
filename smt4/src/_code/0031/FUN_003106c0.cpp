#include "romwright_types.h"

extern "C" {

int dataTableGet(int, int);

extern int dataTableGetEntries(void);
/* Supplied declaration required: dataTableGet. */


int FUN_003106c0(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  dataTableGet(0x15,0);
  temp_v0 = dataTableGetEntries();
  return temp_v0 + param_1 * 100;
}

} /* extern "C" */
