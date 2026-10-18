/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00213b10` (_code @ 0x213b10, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern int DAT_0057f69c; /* 0x57f69c */

/* Supplied declaration required: FUN_0022838c. */
/* Supplied declaration required: FUN_002e6354. */
/* Supplied declaration required: FUN_0050d71c. */


void FUN_00213b10(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned char *puVar2;
  
  temp_v0 = DAT_0057f69c;
  puVar2 = (unsigned char *)(DAT_0057f69c + 0x80);
  FUN_0050d71c(puVar2);
  *puVar2 = 2;
  *(unsigned char *)(temp_v0 + 0x81) = 2;
  *(unsigned char *)(temp_v0 + 0x82) = 2;
  *(unsigned char *)(temp_v0 + 0x83) = 1;
  *(unsigned char *)(temp_v0 + 0x84) = 1;
  FUN_0022838c();
  FUN_002e6354(DAT_0057f69c,0x80);
  return;
}
