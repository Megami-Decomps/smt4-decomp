#include "romwright_types.h"

extern "C" {

int dataTableGet(int, int);

/* Supplied declaration required: dataTableGet. */
extern int dataTableGetEntries(void);


int FUN_0032ece8(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  dataTableGet(0x4a,0);
  temp_v0 = dataTableGetEntries();
  return temp_v0 + param_1 * 0x2c;
}

} /* extern "C" */
