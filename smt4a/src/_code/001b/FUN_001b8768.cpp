#include "romwright_types.h"

extern "C" {

int nnnstdMemCpy(int, unsigned char *, int);

extern int DAT_005b40e0; /* 0x5b40e0 */
extern unsigned char DAT_005c0b50; /* 0x5c0b50 */

/* Supplied declaration required: nnnstdMemCpy. */


void FUN_001b8768(void)

{
/* irregular: 1 native warning(s); review required */
  nnnstdMemCpy(DAT_005b40e0,&DAT_005c0b50,0x170);
  DAT_005b40e0 = DAT_005b40e0 + 0x170;
  return;
}

} /* extern "C" */
