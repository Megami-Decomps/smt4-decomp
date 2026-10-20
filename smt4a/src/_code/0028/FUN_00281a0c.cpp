#include "romwright_types.h"

extern "C" {

int asdTMTexTableLoadTmx(int, int);
int FUN_0014afd0(int, int);

/* Supplied declaration required: asdTMTexTableLoadTmx. */
/* Supplied declaration required: FUN_0014afd0. */


void FUN_00281a0c(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  asdTMTexTableLoadTmx(0x1b,0);
  temp_v0 = 0;
  do {
    FUN_0014afd0(0x1b,temp_v0);
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 0x12);
  return;
}

} /* extern "C" */
