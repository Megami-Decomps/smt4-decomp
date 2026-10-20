#include "romwright_types.h"

extern "C" {

int asdTMTexTableLoadSprites(int);
int FUN_002c58c8(int, int);

extern unsigned char g_gameGlobals; /* 0x44e140 */

/* Supplied declaration required: asdTMTexTableLoadSprites. */
/* Supplied declaration required: FUN_002c58c8. */


void FUN_001ad98c(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  if ((*(signed char *)((unsigned char *)&g_gameGlobals + 0x1)) <= '\0') {
    asdTMTexTableLoadSprites(0x1a);
    temp_v0 = 0;
    do {
      FUN_002c58c8(0x1a,temp_v0);
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 3);
  }
  (*(signed char *)((unsigned char *)&g_gameGlobals + 0x1)) = (*(signed char *)((unsigned char *)&g_gameGlobals + 0x1)) + '\x01';
  return;
}

} /* extern "C" */
