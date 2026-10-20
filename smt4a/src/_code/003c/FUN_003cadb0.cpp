/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003cadb0` (_code @ 0x3cadb0, 0xdc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int jobStop(unsigned int, int);
int asdMemFree(void);
int scrScriptProcessDestroy(void);
int FUN_001add24(int);
int FUN_002e3328(void);
int FUN_00333f6c(void);
int FUN_0035b404(void);
int FUN_0037b450(void);
int FUN_003c607c(int);

extern unsigned int *DAT_0058812c; /* 0x58812c */

/* Supplied declaration required: jobStop. */
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: scrScriptProcessDestroy. */
/* Supplied declaration required: FUN_001add24. */
extern int scrGetArg(unsigned int);
extern int FUN_002deb84(void);
/* Supplied declaration required: FUN_002e3328. */
/* Supplied declaration required: FUN_00333f6c. */
/* Supplied declaration required: FUN_0035b404. */
/* Supplied declaration required: FUN_0037b450. */
/* Supplied declaration required: FUN_003c607c. */


void FUN_003cadb0(void)

{
/* irregular: 9 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  
  temp_v0 = FUN_002deb84();
  if (temp_v0 == 0) {
    temp_v0 = scrGetArg(0);
    FUN_0035b404();
  }
  puVar1 = DAT_0058812c;
  if (DAT_0058812c != (unsigned int *)0x0) {
    temp_v0 = DAT_0058812c[1];
  }
  if (((DAT_0058812c == (unsigned int *)0x0 || temp_v0 == 0) || (temp_v0 == 7)) &&
     (DAT_0058812c != (unsigned int *)0x0)) {
    FUN_0037b450();
    FUN_003c607c(0);
    FUN_00333f6c();
    if (puVar1[6] != 0) {
      scrScriptProcessDestroy();
      puVar1[6] = 0;
    }
    if (puVar1[4] != 0) {
      asdMemFree();
      puVar1[4] = 0;
    }
    if (puVar1[5] != 0) {
      asdMemFree();
      puVar1[5] = 0;
    }
    if (*(char *)(puVar1 + 7) != '\0') {
      FUN_001add24(0x4f);
    }
    jobStop(*puVar1,0);
    if (DAT_0058812c != (unsigned int *)0x0) {
      FUN_002e3328();
      DAT_0058812c = (unsigned int *)0x0;
    }
  }
  return;
}

} /* extern "C" */
