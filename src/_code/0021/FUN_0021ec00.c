/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0021ec00` (_code @ 0x21ec00, 0xa8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern unsigned int *DAT_00435d48; /* 0x435d48 */

/* Supplied declaration required: FUN_002a755c. */
extern int FUN_002bf41c(unsigned int);
extern int FUN_002c0ac8(void);
/* Supplied declaration required: FUN_002c4360. */
/* Supplied declaration required: FUN_002c45b8. */


void FUN_0021ec00(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_002c0ac8();
  puVar1 = DAT_00435d48;
  if (DAT_00435d48 != (unsigned int *)0x0) {
    if (DAT_00435d48[2] != 0) {
      FUN_002c4360();
      puVar1[2] = 0;
    }
    if (puVar1[3] != 0) {
      FUN_002c4360();
      puVar1[3] = 0;
    }
    if (puVar1[4] != 0) {
      FUN_002c4360();
      puVar1[4] = 0;
    }
    if (puVar1[5] != 0) {
      FUN_002a755c();
      puVar1[5] = 0;
    }
    *puVar1 = 0;
    FUN_002c4360(DAT_00435d48);
    DAT_00435d48 = (unsigned int *)0x0;
  }
  temp_v1 = FUN_002bf41c(*(unsigned int *)(temp_v0 + 0x50));
  if (temp_v1 != 0) {
    FUN_002c45b8(*(unsigned int *)(temp_v0 + 0x50),0);
    return;
  }
  return;
}
