#include "romwright_types.h"

extern "C" {

int FUN_002c0894(unsigned int);
int FUN_002c415c(int);

extern unsigned int DAT_0043e278; /* 0x43e278 */

/* Supplied declaration required: FUN_002c0894. */
extern int FUN_002c08f0(void);
/* Supplied declaration required: FUN_002c415c. */


void FUN_001078ec(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002c08f0();
  FUN_002c0894(*(unsigned int *)(temp_v0 + 4));
  FUN_002c0894(*(unsigned int *)(temp_v0 + 8));
  FUN_002c0894(*(unsigned int *)(temp_v0 + 0xf20));
  FUN_002c0894(*(unsigned int *)(temp_v0 + 0xf24));
  FUN_002c415c(temp_v0);
  DAT_0043e278 = 0;
  return;
}

} /* extern "C" */
