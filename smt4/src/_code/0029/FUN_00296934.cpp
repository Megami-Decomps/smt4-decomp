/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00296934` (_code @ 0x296934, 0xe0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001ad9d8(int);
int FUN_002a46d8(int);
int FUN_002a7218(unsigned int);
int FUN_002ae7e8(int);
int FUN_002ae898(int, int);
int FUN_002b8cc8(void);
int FUN_002c415c(...);
int FUN_002c43b4(unsigned int, int);

extern unsigned int *DAT_0043dd50; /* 0x43dd50 */

/* Supplied declaration required: FUN_001ad9d8. */
/* Supplied declaration required: FUN_002a46d8. */
/* Supplied declaration required: FUN_002a7218. */
/* Supplied declaration required: FUN_002ae7e8. */
/* Supplied declaration required: FUN_002ae898. */
/* Supplied declaration required: FUN_002b8cc8. */
/* Supplied declaration required: FUN_002c415c. */
/* Supplied declaration required: FUN_002c43b4. */


void FUN_00296934(void)

{
/* irregular: 8 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int *puVar4;
  char *pb;
  int temp_v0;
  int cnt;
  
  puVar1 = DAT_0043dd50;
  puVar4 = puVar1;
  if (puVar4 != (unsigned int *)0x0) {
    pb = (char *)puVar4 + 0x900;
    temp_v0 = 0;
    cnt = *(unsigned short *)(pb + 0xf8);
    if (cnt > 0) {
      do {
        FUN_002b8cc8();
        temp_v0 = temp_v0 + 1;
      } while (temp_v0 < (int)(unsigned int)*(unsigned short *)(pb + 0xf8));
    }
    FUN_002a7218(puVar4[0x16d]);
    FUN_002c415c(puVar4[0x16c]);
    FUN_002c415c(puVar4[0x16b]);
    if (puVar4[0x16e] != 0) {
      FUN_002a7218(puVar4[0x170]);
      FUN_002c415c(puVar4[0x16e]);
      FUN_002c415c(puVar4[0x16f]);
    }
    FUN_002ae898(0x29,0);
    FUN_002ae7e8(0x29);
    FUN_002a46d8(0x34);
    FUN_001ad9d8(1);
    FUN_002c43b4(*puVar1,0);
    FUN_002c415c(puVar1);
    DAT_0043dd50 = (unsigned int *)0x0;
  }
  return;
}

} /* extern "C" */
