#include "romwright_types.h"

extern "C" {

extern unsigned int dataTableGet(unsigned int, unsigned int);
extern unsigned int dataTableGetCount(unsigned int);
extern int dataTableGetEntries(void);


unsigned int FUN_002f3b14(unsigned int param_1)

{
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = dataTableGet(0x24,0);
  temp_v1 = dataTableGetEntries();
  temp_v2 = dataTableGetCount(temp_v0);
  if (param_1 >= temp_v2) {
    temp_v2 = 0xffffffff;
  }
  else {
    temp_v2 = (unsigned int)*(unsigned char *)(temp_v1 + param_1 * 0x94 + 1);
  }
  return temp_v2;
}

} /* extern "C" */
