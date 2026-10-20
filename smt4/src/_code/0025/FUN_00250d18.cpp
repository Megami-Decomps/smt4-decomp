#include "romwright_types.h"

extern "C" {

int dataTableGetCount(unsigned int);

/* Supplied declaration required: dataTableGetCount. */
extern int dataTableGetEntries(unsigned int);
extern unsigned int dataTableGet(unsigned int, unsigned int);


unsigned short FUN_00250d18(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  
  temp_v0 = dataTableGet(9,3);
  temp_v3 = (param_1 - param_2) + 10;
  if ((int)temp_v3 < 0) {
    temp_v3 = 0;
  }
  temp_v1 = dataTableGetCount(temp_v0);
  if (temp_v1 <= temp_v3) {
    temp_v2 = dataTableGetCount(temp_v0);
    temp_v3 = temp_v2 - 1;
  }
  temp_v2 = dataTableGetEntries(temp_v0);
  return *(unsigned short *)(temp_v2 + temp_v3 * 2);
}

} /* extern "C" */
