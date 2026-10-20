/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0032fcc0` (_code @ 0x32fcc0, 0x34 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002be624(int, unsigned char *);
int FUN_002bf810(int);

extern unsigned char LAB_0032fcf8; /* 0x32fcf8 */
extern int DAT_0043e158; /* 0x43e158 */

/* Supplied declaration required: FUN_002be624. */
/* Supplied declaration required: FUN_002bf810. */


unsigned int FUN_0032fcc0(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = DAT_0043e158;
  FUN_002be624(DAT_0043e158 + 0xc4,&LAB_0032fcf8);
  *(unsigned char *)(temp_v0 + 0x14) = 1;
  *(unsigned int *)(temp_v0 + 8) = 1;
  FUN_002bf810(0x10001fd);
  return 1;
}

} /* extern "C" */
