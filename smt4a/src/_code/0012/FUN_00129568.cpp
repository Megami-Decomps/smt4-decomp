/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00129568` (_code @ 0x129568, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001294fc(int);
int FUN_0030cbf0(...);
int FUN_0030e878(unsigned char *, int);
int FUN_004326fc(int, int);

extern unsigned char DAT_005598d8; /* 0x5598d8 */
extern unsigned char DAT_005949d8; /* 0x5949d8 */
extern unsigned char DAT_00594b24; /* 0x594b24 */

/* Supplied declaration required: FUN_001294fc. */
/* Supplied declaration required: FUN_0030cbf0. */
/* Supplied declaration required: FUN_0030e878. */
extern unsigned int *FUN_0030e8dc(void);
/* Supplied declaration required: FUN_004326fc. */


int FUN_00129568(void)

{
/* irregular: 4 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  int temp_v1;
  
  puVar1 = (unsigned int *)FUN_0030e8dc();
  *puVar1 = (unsigned int)&DAT_005598d8;
  temp_v0 = FUN_0030cbf0(puVar1 + 4);
  temp_v0 = FUN_0030cbf0(temp_v0 + 0xd8);
  temp_v1 = temp_v0 - 0xe8;
  FUN_004326fc(temp_v0 - 0xd8,temp_v0);
  *(unsigned int *)(temp_v0 - 0xe0) = 0;
  FUN_0030e878(&DAT_00594b24,temp_v1);
  if ((*(unsigned int *)((unsigned char *)&DAT_005949d8 + 0x28)) >= 2) {
    FUN_001294fc(temp_v1);
  }
  return temp_v1;
}

} /* extern "C" */
