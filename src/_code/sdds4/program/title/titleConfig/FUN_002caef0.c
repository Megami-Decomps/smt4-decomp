/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002caef0` (_code @ 0x2caef0, 0xdc bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int *DAT_0044e2d0; /* 0x44e2d0 */

/* Supplied declaration required: FUN_002a755c. */
/* Supplied declaration required: FUN_002b9008. */
extern int FUN_002bf41c(unsigned int);
/* Supplied declaration required: FUN_002c4360. */
/* Supplied declaration required: FUN_002c45b8. */


void FUN_002caef0(void)

{
/* irregular: 4 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  
  puVar1 = DAT_0044e2d0;
  temp_v0 = 0;
  *(unsigned char *)(DAT_0044e2d0 + 1) = 1;
  if (0 < *(short *)((int)puVar1 + 0x1a)) {
    do {
      FUN_002b9008();
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < *(short *)((int)puVar1 + 0x1a));
  }
  temp_v0 = 0;
  if (temp_v0 < *(short *)(puVar1 + 9)) {
    do {
      FUN_002b9008();
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < *(short *)(puVar1 + 9));
  }
  if (puVar1[0x55] != 0) {
    FUN_002a755c();
    puVar1[0x55] = 0;
  }
  if (puVar1[0x53] != 0) {
    FUN_002c4360();
    puVar1[0x53] = 0;
  }
  if (puVar1[0x54] != 0) {
    FUN_002c4360();
    puVar1[0x54] = 0;
  }
  temp_v0 = FUN_002bf41c(*puVar1);
  if (temp_v0 != 0) {
    FUN_002c45b8(*puVar1,0);
  }
  if (DAT_0044e2d0 != (unsigned int *)0x0) {
    FUN_002c4360();
    DAT_0044e2d0 = (unsigned int *)0x0;
  }
  return;
}
