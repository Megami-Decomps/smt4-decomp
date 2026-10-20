#include "romwright_types.h"

extern "C" {

int FUN_002a5ed0(int, int);
int asdTMTexTableLoadSprites(int);

/* Supplied declaration required: FUN_002a5ed0. */
/* Supplied declaration required: asdTMTexTableLoadSprites. */


void FUN_003af160(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  asdTMTexTableLoadSprites(8);
  asdTMTexTableLoadSprites(0x14);
  asdTMTexTableLoadSprites(0x15);
  FUN_002a5ed0(8,10);
  temp_v0 = 0;
  do {
    FUN_002a5ed0(0x14,temp_v0);
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 5);
  temp_v0 = 0;
  do {
    FUN_002a5ed0(0x15,temp_v0);
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 4);
  return;
}

} /* extern "C" */
