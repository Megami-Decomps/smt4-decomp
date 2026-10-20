#include "romwright_types.h"

extern "C" {

int jobStop(unsigned int, int);
int asdMemFree(...);
int scrScriptProcessDestroy(unsigned int);
int FUN_00237210(unsigned int);
int FUN_003b5fc8(unsigned int);
int rt_memcpy_w(unsigned int, unsigned int *, int);

extern unsigned int *DAT_0057f118; /* 0x57f118 */

/* Supplied declaration required: jobStop. */
extern unsigned int FUN_001801a4(void);
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: scrScriptProcessDestroy. */
/* Supplied declaration required: FUN_00237210. */
/* Supplied declaration required: FUN_003b5fc8. */
/* Supplied declaration required: rt_memcpy_w. */


void FUN_0037b708(void)

{
/* irregular: 6 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  
  puVar1 = DAT_0057f118;
  temp_v0 = FUN_001801a4();
  rt_memcpy_w(temp_v0,puVar1 + 0x5b,0xe);
  asdMemFree(puVar1[0x14]);
  asdMemFree(puVar1[0x15]);
  asdMemFree(puVar1[0x16]);
  FUN_00237210(puVar1[0x17]);
  scrScriptProcessDestroy(puVar1[0x13]);
  FUN_003b5fc8(puVar1[3]);
  jobStop(*puVar1,0);
  asdMemFree(puVar1);
  DAT_0057f118 = (unsigned int *)0x0;
  return;
}

} /* extern "C" */
