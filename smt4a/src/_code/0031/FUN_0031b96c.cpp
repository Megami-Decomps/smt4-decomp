/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031b96c` (_code @ 0x31b96c, 0x60 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int taskCreate(...);
int sysMemClear(...);

typedef int romwright_code(...);
/* stack frame of void: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

extern int FUN_002c1664(...); /* 0x2c1664 */
extern romwright_code *DAT_00570ab4; /* 0x570ab4 */

/* Supplied declaration required: taskCreate. */
/* Supplied declaration required: sysMemClear. */


void FUN_0031b96c(void)

{
/* irregular: 3 native warning(s); review required */
  romwright_code *pcVar1;
  
  pcVar1 = FUN_002c1664;
  taskCreate(FUN_002c1664,0,0,0,0,0x70,3,0,0);
  if (pcVar1 != (romwright_code *)0x0) {
    sysMemClear();
    DAT_00570ab4 = pcVar1;
    ((unsigned char *)pcVar1)[0x6c] = (unsigned char)0x0;
  }
  return;
}

} /* extern "C" */
