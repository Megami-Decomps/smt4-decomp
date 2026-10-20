#include "romwright_types.h"

extern "C" {

extern unsigned int dataTableGet(unsigned int, unsigned int);
extern int FUN_0018719c(void);
extern unsigned int dataTableGetCount(unsigned int);
extern unsigned short *dataTableGetEntries(void);


unsigned int FUN_00284dc4(unsigned int param_1)

{
  unsigned int temp_v0;
  unsigned short *puVar2;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  
  temp_v0 = dataTableGet(0x35,1);
  puVar2 = (unsigned short *)dataTableGetEntries();
  temp_v1 = dataTableGetCount(temp_v0);
  for (temp_v3 = 0; temp_v3 < temp_v1; temp_v3++) {
    if ((((*puVar2 == param_1) && ((puVar2[7] == 0 || (temp_v2 = FUN_0018719c(), temp_v2 != 0)))) &&
        ((puVar2[8] == 0 || (temp_v2 = FUN_0018719c(), temp_v2 != 0)))) &&
       (((puVar2[9] == 0 || (temp_v2 = FUN_0018719c(), temp_v2 == 0)) &&
        ((puVar2[10] == 0 || (temp_v2 = FUN_0018719c(), temp_v2 == 0)))))) {
      return 1;
    }
    puVar2 = puVar2 + 0x2a;
  }
  return 0;
}

} /* extern "C" */
