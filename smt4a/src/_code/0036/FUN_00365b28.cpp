#include "romwright_types.h"

extern "C" {

int FUN_001aea28(unsigned int, unsigned int);

extern unsigned int DAT_0056fcc0; /* 0x56fcc0 */
extern int DAT_0058103c; /* 0x58103c */

/* Supplied declaration required: FUN_001aea28. */


void FUN_00365b28(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = DAT_0058103c;
  FUN_001aea28(DAT_0056fcc0,*(unsigned int *)(*(int *)(DAT_0058103c + 0xcbf8) + 4));
  *(unsigned char *)(temp_v0 + 0xcd08) = 0;
  *(unsigned int *)(temp_v0 + 0xcd0c) = 0;
  return;
}

} /* extern "C" */
