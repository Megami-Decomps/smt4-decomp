#include "romwright_types.h"

extern "C" {

int dataTableGet(int, int);

/* Supplied declaration required: dataTableGet. */
extern int dataTableGetEntries(void);


int FUN_003a62c0(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  dataTableGet(0x15,0);
  temp_v0 = dataTableGetEntries();
  return temp_v0 + param_1 * 100;
}

} /* extern "C" */
