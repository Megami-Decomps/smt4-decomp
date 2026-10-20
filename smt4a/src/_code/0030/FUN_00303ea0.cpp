/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00303ea0` (_code @ 0x303ea0, 0x94 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int sysMemClear(unsigned char *, int);
int FUN_00356308(void);

extern int DAT_005806d8; /* 0x5806d8 */
extern unsigned int g_gameState; /* 0x5f15fc */
extern unsigned char DAT_005f2c20; /* 0x5f2c20 */

/* Supplied declaration required: sysMemClear. */
/* Supplied declaration required: FUN_00356308. */
extern int FUN_003a3038(void);


void FUN_00303ea0(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  char *pcVar2;
  char *pcVar3;
  int *unaff_r6;
  unsigned char *unaff_r8;
  
  temp_v0 = 0;
  FUN_00356308();
  if (temp_v0 != 0) {
    sysMemClear(&DAT_005f2c20,0x400);
    temp_v0 = FUN_003a3038();
    if (0 < temp_v0) {
      unaff_r6 = (int *)&g_gameState;
      unaff_r8 = &DAT_005f2c20;
    }
    pcVar3 = (char *)0x0;
    DAT_005806d8 = 0;
    if (0 < temp_v0) {
      do {
        pcVar2 = pcVar3;
        FUN_00356308();
        if (((*pcVar2 != -1) && ((int)*pcVar2 == *unaff_r6)) && ((int)pcVar2[1] == unaff_r6[1])) {
          *(char **)(unaff_r8 + DAT_005806d8 * 4) = pcVar3;
          DAT_005806d8 = DAT_005806d8 + 1;
        }
        pcVar3 = pcVar3 + 1;
      } while ((int)pcVar3 < temp_v0);
    }
  }
  return;
}

} /* extern "C" */
