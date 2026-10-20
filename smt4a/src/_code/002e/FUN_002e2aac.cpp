#include "romwright_types.h"

extern "C" {

int jobStop(unsigned int, int);
int asdMemFree(unsigned int *);
int FUN_002309dc(void);
int FUN_002e26a4(void);
int FUN_00330b74(void);
int FUN_0035b304(void);
int FUN_0037b450(void);
int FUN_0037dab0(void);
int FUN_003a76b8(void);
int FUN_003b6dc4(void);

extern unsigned int *DAT_0057f108; /* 0x57f108 */

/* Supplied declaration required: jobStop. */
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: FUN_002309dc. */
/* Supplied declaration required: FUN_002e26a4. */
/* Supplied declaration required: FUN_00330b74. */
/* Supplied declaration required: FUN_0035b304. */
/* Supplied declaration required: FUN_0037b450. */
/* Supplied declaration required: FUN_0037dab0. */
/* Supplied declaration required: FUN_003a76b8. */
/* Supplied declaration required: FUN_003b6dc4. */


void FUN_002e2aac(void)

{
/* irregular: 10 native warning(s); review required */
  unsigned int *puVar1;
  
  puVar1 = DAT_0057f108;
  FUN_003b6dc4();
  FUN_003a76b8();
  FUN_00330b74();
  FUN_002309dc();
  FUN_0037dab0();
  FUN_0035b304();
  FUN_0037b450();
  FUN_002e26a4();
  jobStop(*puVar1,0);
  asdMemFree(puVar1);
  DAT_0057f108 = (unsigned int *)0x0;
  return;
}

} /* extern "C" */
