#include "romwright_types.h"

extern "C" {

unsigned int dataTableGetCount(unsigned int);

/* Supplied declaration required: dataTableGetCount. */
extern int dataTableGetEntries(void);
extern unsigned int dataTableGet(unsigned int, unsigned int);


unsigned short FUN_001a0fb4(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned short temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v5;
  
  temp_v1 = dataTableGet(1,3);
  temp_v2 = dataTableGetEntries();
  
  for (temp_v5 = 0; temp_v5 < dataTableGetCount(temp_v1); temp_v5 = temp_v5 + 1) {
    if (*(unsigned short *)(temp_v2 + temp_v5 * 4) == param_1) {
      temp_v0 = *(unsigned short *)(temp_v2 + temp_v5 * 4 + 2);
      if (temp_v0 == 0) {
        return 0x32;
      }
      return temp_v0;
    }
  }
  return 0x32;
}

} /* extern "C" */
