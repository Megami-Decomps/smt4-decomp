#include "romwright_types.h"

extern "C" {

int FUN_002117a0(void);
int FUN_00252334(void);
int FUN_0028a22c(void);
int FUN_002917b8(void);
int FUN_00291944(void);
int FUN_002c415c(unsigned int *);
int FUN_002c43b4(unsigned int, int);

extern unsigned int *DAT_0043da90; /* 0x43da90 */

/* Supplied declaration required: FUN_002117a0. */
/* Supplied declaration required: FUN_00252334. */
/* Supplied declaration required: FUN_0028a22c. */
/* Supplied declaration required: FUN_002917b8. */
/* Supplied declaration required: FUN_00291944. */
/* Supplied declaration required: FUN_002c415c. */
/* Supplied declaration required: FUN_002c43b4. */


void FUN_002117c0(void)

{
/* irregular: 7 native warning(s); review required */
  unsigned int *puVar1;
  
  puVar1 = DAT_0043da90;
  FUN_00252334();
  FUN_0028a22c();
  FUN_00291944();
  FUN_002917b8();
  FUN_002117a0();
  FUN_002c43b4(*puVar1,0);
  FUN_002c415c(puVar1);
  DAT_0043da90 = (unsigned int *)0x0;
  return;
}

} /* extern "C" */
