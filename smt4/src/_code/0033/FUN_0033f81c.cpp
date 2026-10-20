#include "romwright_types.h"

extern "C" {

int FUN_002adc88(void);
int FUN_002c3944(unsigned int, int);

/* Supplied declaration required: FUN_002adc88. */
/* Supplied declaration required: FUN_002c3944. */


void FUN_0033f81c(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned char *pbVar3;
  unsigned short temp_v2;
  
  temp_v0 = FUN_002adc88();
  FUN_002c3944(temp_v0,0x888);
  temp_v2 = 0x15e;
  do {
    temp_v1 = FUN_002adc88();
    pbVar3 = (unsigned char *)(temp_v1 + temp_v2 * 4 + 0x200);
    if (pbVar3 != (unsigned char *)0x0) {
      *pbVar3 = *pbVar3 | 0x20;
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 400);
  return;
}

} /* extern "C" */
