/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0047c5f0` (_code @ 0x47c5f0, 0x64 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00137ea0(int);
int FUN_001386e8(int);
int FUN_00169548(int);
int FUN_002e56ec(int, unsigned char *);
int FUN_003a76a8(int);
int FUN_00473710(int);
int FUN_0047393c(int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern unsigned char LAB_0047d8e8; /* 0x47d8e8 */
extern int DAT_00570260; /* 0x570260 */

/* Supplied declaration required: FUN_00137ea0. */
/* Supplied declaration required: FUN_001386e8. */
/* Supplied declaration required: FUN_00169548. */
/* Supplied declaration required: FUN_002e56ec. */
/* Supplied declaration required: FUN_003a76a8. */
/* Supplied declaration required: FUN_00473710. */
/* Supplied declaration required: FUN_0047393c. */


void FUN_0047c5f0(void)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  
  FUN_00169548(0);
  FUN_003a76a8(1);
  FUN_001386e8(4);
  FUN_00137ea0(4);
  temp_v0 = DAT_00570260;
  puVar2 = (unsigned int *)(DAT_00570260 + 0x678);
  if (*(int *)(DAT_00570260 + 0x678) != 0) {
    FUN_002e56ec(*(int *)(DAT_00570260 + 0x678),&LAB_0047d8e8);
    *puVar2 = 0;
  }
  FUN_00473710(temp_v0);
  FUN_0047393c(temp_v0);
  return;
}

} /* extern "C" */
