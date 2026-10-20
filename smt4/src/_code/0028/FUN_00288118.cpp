#include "romwright_types.h"

extern "C" {

extern unsigned int dataTableGetCount(unsigned int);
extern unsigned short *dataTableGetEntries(void);
extern unsigned int dataTableGet(unsigned int, unsigned int);


unsigned short FUN_00288118(unsigned int param_1)

{
  unsigned short temp_v0;
  unsigned int temp_v1;
  unsigned short *puVar3;
  unsigned int temp_v2;
  
  temp_v1 = dataTableGet(1,2);
  puVar3 = (unsigned short *)dataTableGetEntries();
  temp_v2 = dataTableGetCount(temp_v1);
  if (temp_v2 > param_1) {
    temp_v0 = puVar3[param_1 * 2];
  }
  else {
    temp_v0 = *puVar3;
  }
  return temp_v0;
}

} /* extern "C" */
