/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00193adc` (_code @ 0x193adc, 0x48 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern int DAT_0043e2ac; /* 0x43e2ac */

/* Supplied declaration required: FUN_001a1000. */
/* Supplied declaration required: FUN_002912f4. */
/* Supplied declaration required: FUN_002c4b30. */


void FUN_00193adc(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned char *puVar2;
  
  temp_v0 = DAT_0043e2ac;
  puVar2 = (unsigned char *)(DAT_0043e2ac + 0x80);
  FUN_002912f4(puVar2);
  *puVar2 = 2;
  *(unsigned char *)(temp_v0 + 0x81) = 2;
  *(unsigned char *)(temp_v0 + 0x82) = 2;
  *(unsigned char *)(temp_v0 + 0x83) = 1;
  *(unsigned char *)(temp_v0 + 0x84) = 1;
  FUN_001a1000();
  FUN_002c4b30(DAT_0043e2ac,0x80);
  return;
}
