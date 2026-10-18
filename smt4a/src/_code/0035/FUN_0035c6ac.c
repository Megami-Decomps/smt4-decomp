/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035c6ac` (_code @ 0x35c6ac, 0x58 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int DAT_0057f65c; /* 0x57f65c */


void FUN_0035c6ac(void)

{
  int temp_v0;
  unsigned char *puVar2;
  unsigned char *puVar3;
  
  temp_v0 = DAT_0057f65c;
  puVar3 = (unsigned char *)(DAT_0057f65c + 0x1417);
  puVar2 = (unsigned char *)(DAT_0057f65c + 0x1418);
  *(unsigned char *)(DAT_0057f65c + 0x1414) = 1;
  *puVar3 = 0;
  *puVar2 = 0;
  *(unsigned char *)(temp_v0 + 0x1419) = 0;
  *(unsigned char *)(temp_v0 + 0x144d) = 0;
  return;
}
