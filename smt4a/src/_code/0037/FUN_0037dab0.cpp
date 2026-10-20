/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037dab0` (_code @ 0x37dab0, 0xe8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int jobStop(unsigned int, int);
int asdMemFree(...);
int scrScriptProcessDestroy(void);
int FUN_002e3328(...);
int FUN_00333f6c(void);
int FUN_004dc6fc(void);

extern unsigned int *DAT_0057f268; /* 0x57f268 */

/* Supplied declaration required: jobStop. */
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: scrScriptProcessDestroy. */
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
    scrScriptProcessDestroy();
  }
  if (puVar1[4] != 0) {
    asdMemFree();
  }
  if (puVar1[3] != 0) {
    asdMemFree();
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
  jobStop(*puVar1,0);
  asdMemFree(puVar1);
  DAT_0057f268 = (unsigned int *)0x0;
  return;
}

} /* extern "C" */
