/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00221ab0` (_code @ 0x221ab0, 0x60 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of void: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

extern int FUN_002009c0(); /* 0x2009c0 */
extern romwright_code *DAT_00433a58; /* 0x433a58 */

/* Supplied declaration required: FUN_002861f8. */
/* Supplied declaration required: FUN_002c4b30. */


void FUN_00221ab0(void)

{
/* irregular: 3 native warning(s); review required */
  romwright_code *pcVar1;
  
  pcVar1 = FUN_002009c0;
  FUN_002861f8(FUN_002009c0,0,0,0,0,0x70,3,0,0);
  if (pcVar1 != (romwright_code *)0x0) {
    FUN_002c4b30();
    DAT_00433a58 = pcVar1;
    pcVar1[0x6c] = (romwright_code)0x0;
  }
  return;
}
