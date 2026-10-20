/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002caf74` (_code @ 0x2caf74, 0xdc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002a7218(void);
int FUN_002b8cc8(void);
int FUN_002c415c(void);
int FUN_002c43b4(unsigned int, int);

extern unsigned int *DAT_0044e2d0; /* 0x44e2d0 */

/* Supplied declaration required: FUN_002a7218. */
/* Supplied declaration required: FUN_002b8cc8. */
extern int FUN_002bf244(unsigned int);
/* Supplied declaration required: FUN_002c415c. */
/* Supplied declaration required: FUN_002c43b4. */


void FUN_002caf74(void)

{
/* irregular: 4 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  
  puVar1 = DAT_0044e2d0;
  temp_v0 = 0;
  *(unsigned char *)(DAT_0044e2d0 + 1) = 1;
  if (0 < *(short *)((int)puVar1 + 0x1a)) {
    do {
      FUN_002b8cc8();
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < *(short *)((int)puVar1 + 0x1a));
  }
  temp_v0 = 0;
  if (temp_v0 < *(short *)(puVar1 + 9)) {
    do {
      FUN_002b8cc8();
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < *(short *)(puVar1 + 9));
  }
  if (puVar1[0x55] != 0) {
    FUN_002a7218();
    puVar1[0x55] = 0;
  }
  if (puVar1[0x53] != 0) {
    FUN_002c415c();
    puVar1[0x53] = 0;
  }
  if (puVar1[0x54] != 0) {
    FUN_002c415c();
    puVar1[0x54] = 0;
  }
  temp_v0 = FUN_002bf244(*puVar1);
  if (temp_v0 != 0) {
    FUN_002c43b4(*puVar1,0);
  }
  if (DAT_0044e2d0 != (unsigned int *)0x0) {
    FUN_002c415c();
    DAT_0044e2d0 = (unsigned int *)0x0;
  }
  return;
}

} /* extern "C" */
