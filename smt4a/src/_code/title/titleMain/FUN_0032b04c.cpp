/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0032b04c` (_code @ 0x32b04c, 0x84 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0019a5a0(void);
int FUN_0019a7f4(int, int);
int FUN_001add24(int);
int FUN_002c2160(int);
int FUN_002e132c(int);
int FUN_0037b450(void);
int FUN_003a43ec(void);

extern unsigned char DAT_0058916c; /* 0x58916c */

/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_0019a7f4. */
/* Supplied declaration required: FUN_001add24. */
/* Supplied declaration required: FUN_002c2160. */
/* Supplied declaration required: FUN_002e132c. */
/* Supplied declaration required: FUN_0037b450. */
extern int FUN_00399e04(void);
/* Supplied declaration required: FUN_003a43ec. */


void FUN_0032b04c(void)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  
  *(unsigned char *)((*(int *)((unsigned char *)&DAT_0058916c + 0x4)) + 4) = 1;
  FUN_001add24(0x3a);
  FUN_003a43ec();
  temp_v0 = 0;
  do {
    FUN_0019a7f4(0x2a,temp_v0);
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 9);
  FUN_002e132c(0x2a);
  FUN_002c2160(0);
  temp_v0 = FUN_00399e04();
  if (temp_v0 != 0) {
    FUN_0037b450();
  }
  if ((*(int *)((unsigned char *)&DAT_0058916c + 0x4)) != 0) {
    FUN_0019a5a0();
    (*(int *)((unsigned char *)&DAT_0058916c + 0x4)) = 0;
  }
  return;
}

} /* extern "C" */
