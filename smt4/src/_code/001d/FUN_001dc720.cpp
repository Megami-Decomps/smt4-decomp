#include "romwright_types.h"

extern "C" {

int FUN_002c58c8(int, int);
int asdTMTexTableLoadTmx(int, int);

/* Supplied declaration required: FUN_002c58c8. */
/* Supplied declaration required: asdTMTexTableLoadTmx. */


void FUN_001dc720(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  asdTMTexTableLoadTmx(0x25,0);
  temp_v0 = 0;
  do {
    FUN_002c58c8(0x25,temp_v0);
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 4);
  return;
}

} /* extern "C" */
