/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00313768` (_code @ 0x313768, 0x4c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern unsigned char LAB_003137bc; /* 0x3137bc */
extern unsigned int *DAT_0044eac8; /* 0x44eac8 */
extern unsigned char DAT_004d8bd0; /* 0x4d8bd0 */

/* Supplied declaration required: FUN_00250368. */
/* Supplied declaration required: FUN_0025036c. */
/* Supplied declaration required: FUN_002bf86c. */
extern unsigned int FUN_002c3290(unsigned char *);


void FUN_00313768(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int *puVar2;
  
  if (DAT_0044eac8 != (unsigned int *)0x0) {
    FUN_00250368();
    DAT_0044eac8 = (unsigned int *)0x0;
  }
  puVar2 = (unsigned int *)&LAB_003137bc;
  FUN_0025036c();
  DAT_0044eac8 = puVar2;
  *puVar2 = 0xb6;
  puVar2[1] = 100;
  puVar2 = DAT_0044eac8;
  FUN_002bf86c((unsigned char *)((int)DAT_0044eac8 + 0x21));
  temp_v0 = FUN_002c3290(&DAT_004d8bd0);
  puVar2[4] = temp_v0;
  return;
}
