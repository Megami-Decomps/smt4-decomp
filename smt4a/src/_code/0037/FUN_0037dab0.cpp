/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037dab0` (_code @ 0x37dab0, 0xe8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001631d0(unsigned int, int);
int FUN_0019a5a0(...);
int FUN_0019c364(void);
int FUN_002e3328(...);
int FUN_00333f6c(void);
int FUN_004dc6fc(void);

extern unsigned int *DAT_0057f268; /* 0x57f268 */

/* Supplied declaration required: FUN_001631d0. */
/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_0019c364. */
extern int FUN_0026140c(void);
/* Supplied declaration required: FUN_002e3328. */
/* Supplied declaration required: FUN_00333f6c. */
/* Supplied declaration required: FUN_004dc6fc. */


void FUN_0037dab0(void)

{
/* irregular: 6 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  
  puVar1 = DAT_0057f268;
  temp_v0 = FUN_0026140c();
  *(unsigned char *)(temp_v0 + 0x44) = *(unsigned char *)((int)puVar1 + 0x42);
  if (puVar1[5] != 0) {
    FUN_0019c364();
  }
  if (puVar1[4] != 0) {
    FUN_0019a5a0();
  }
  if (puVar1[3] != 0) {
    FUN_0019a5a0();
  }
  temp_v0 = 0;
  do {
    if (puVar1[temp_v0 + 0x284] != 0) {
      FUN_002e3328(puVar1[temp_v0 + 0x284]);
    }
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 4);
  temp_v0 = 0;
  do {
    if (puVar1[temp_v0 + 0x288] != 0) {
      FUN_002e3328(puVar1[temp_v0 + 0x288]);
    }
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 0x18);
  if (puVar1[0x41f] != 0) {
    FUN_004dc6fc();
    FUN_002e3328();
  }
  puVar1[0x41f] = 0;
  FUN_00333f6c();
  FUN_001631d0(*puVar1,0);
  FUN_0019a5a0(puVar1);
  DAT_0057f268 = (unsigned int *)0x0;
  return;
}

} /* extern "C" */
