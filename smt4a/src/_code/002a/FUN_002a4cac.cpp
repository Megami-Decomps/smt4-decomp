#include "romwright_types.h"

extern "C" {

int asdTMTexTableLoadTmx(int, int);
int FUN_001acf98(int, int);

extern signed char DAT_0057f250; /* 0x57f250 */

/* Supplied declaration required: asdTMTexTableLoadTmx. */
/* Supplied declaration required: FUN_001acf98. */


void FUN_002a4cac(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  if (DAT_0057f250 <= 0) {
    asdTMTexTableLoadTmx(7,0);
    temp_v0 = 0;
    do {
      FUN_001acf98(7,temp_v0);
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 6);
  }
  DAT_0057f250 = DAT_0057f250 + '\x01';
  return;
}

} /* extern "C" */
