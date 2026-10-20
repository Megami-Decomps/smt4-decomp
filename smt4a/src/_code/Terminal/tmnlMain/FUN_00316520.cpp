#include "romwright_types.h"

extern "C" {

int FUN_00137ee0(int, unsigned int *, int);

extern unsigned int DAT_0056fd34; /* 0x56fd34 */
extern unsigned char DAT_0056fd30;

/* Supplied declaration required: FUN_00137ee0. */


void FUN_00316520(void)

{
/* irregular: 1 native warning(s); review required */
  FUN_00137ee0(0xd,&DAT_0056fd34,4);
  (*(unsigned int *)((unsigned char *)&DAT_0056fd30 + 0x4)) = 0xffffffff;
  return;
}

} /* extern "C" */
