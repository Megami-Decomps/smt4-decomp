/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037b450` (_code @ 0x37b450, 0xe4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int jobStop(unsigned int, int);
int FUN_001846d0(unsigned int *, int);
int asdMemFree(unsigned int *);
int scrScriptProcessDestroy(unsigned int);
int FUN_0019d36c(void);
int FUN_00237210(unsigned int);

extern signed char DAT_0057f0c4; /* 0x57f0c4 */
extern unsigned int *DAT_0057f0c8; /* 0x57f0c8 */

/* Supplied declaration required: jobStop. */
/* Supplied declaration required: FUN_001846d0. */
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: scrScriptProcessDestroy. */
/* Supplied declaration required: FUN_0019d36c. */
/* Supplied declaration required: FUN_00237210. */


void FUN_0037b450(void)

{
/* irregular: 6 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  
  puVar1 = DAT_0057f0c8;
  DAT_0057f0c4 = DAT_0057f0c4 - '\x01';
  if (DAT_0057f0c4 < '\x01') {
    FUN_00237210(DAT_0057f0c8[0x19e]);
    puVar1[0x19e] = 0;
    if (puVar1[4] != 3) {
      temp_v0 = 0;
      do {
        FUN_001846d0(puVar1 + temp_v0 * 0x23 + 0xd,1);
        if (*(char *)(puVar1 + temp_v0 + 0x16b) != '\0') {
          FUN_0019d36c();
          puVar1[0x174] = puVar1[0x174] - 1;
        }
        temp_v0 = temp_v0 + 1;
      } while (temp_v0 < 6);
      if (0 < (int)puVar1[0x174]) {
        temp_v0 = 0;
        do {
          FUN_0019d36c();
          temp_v0 = temp_v0 + 1;
        } while (temp_v0 < (int)puVar1[0x174]);
        puVar1[0x174] = 0;
      }
    }
    scrScriptProcessDestroy(puVar1[0x1a0]);
    jobStop(*puVar1,0);
    asdMemFree(puVar1);
    DAT_0057f0c8 = (unsigned int *)0x0;
    DAT_0057f0c4 = '\0';
  }
  return;
}

} /* extern "C" */
