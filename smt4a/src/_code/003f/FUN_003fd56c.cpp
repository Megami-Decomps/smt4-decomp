#include "romwright_types.h"

extern "C" {

int FUN_001ab940(void);
int FUN_002e6dd4(unsigned int, int);

/* Supplied declaration required: FUN_001ab940. */
/* Supplied declaration required: FUN_002e6dd4. */


void FUN_003fd56c(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned char *pbVar3;
  unsigned short temp_v2;
  
  temp_v0 = FUN_001ab940();
  FUN_002e6dd4(temp_v0,0xa04);
  temp_v2 = 0x15e;
  do {
    temp_v1 = FUN_001ab940();
    pbVar3 = (unsigned char *)(temp_v1 + temp_v2 * 4 + 0x2a0);
    if (pbVar3 != (unsigned char *)0x0) {
      *pbVar3 = *pbVar3 | 0x20;
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 400);
  return;
}

} /* extern "C" */
