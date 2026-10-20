#include "romwright_types.h"

extern "C" {

int nnnstdMemCpy(int, unsigned char *, int);

extern int DAT_004652a0; /* 0x4652a0 */
extern unsigned char DAT_00471c58; /* 0x471c58 */

/* Supplied declaration required: nnnstdMemCpy. */


void FUN_00154690(void)

{
/* irregular: 1 native warning(s); review required */
  nnnstdMemCpy(DAT_004652a0,&DAT_00471c58,0x170);
  DAT_004652a0 = DAT_004652a0 + 0x170;
  return;
}

} /* extern "C" */
