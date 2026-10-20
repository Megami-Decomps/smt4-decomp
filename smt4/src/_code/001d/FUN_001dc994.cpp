#include "romwright_types.h"

extern "C" {

int asdTMTexTableLoadSprites(int);
int FUN_002c58c8(int, int);

extern unsigned char DAT_0043dc20; /* 0x43dc20 */

/* Supplied declaration required: asdTMTexTableLoadSprites. */
/* Supplied declaration required: FUN_002c58c8. */


void FUN_001dc994(void)

{
/* irregular: 2 native warning(s); review required */
  if ((*(signed char *)((unsigned char *)&DAT_0043dc20 + 0x1)) <= '\0') {
    asdTMTexTableLoadSprites(0x11);
    FUN_002c58c8(0x11,0);
  }
  (*(signed char *)((unsigned char *)&DAT_0043dc20 + 0x1)) = (*(signed char *)((unsigned char *)&DAT_0043dc20 + 0x1)) + '\x01';
  return;
}

} /* extern "C" */
