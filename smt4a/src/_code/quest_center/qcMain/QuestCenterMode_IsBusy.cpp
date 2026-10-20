/* NON_MATCHING: romwright 0.5.0 decompilation of `QuestCenterMode_IsBusy` (_code @ 0x1633d8, 0x80 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001919a4(void);
int FUN_0019a5a0(unsigned int *);
int FUN_002e3328(unsigned int);

extern unsigned char DAT_00588c2c; /* 0x588c2c */

extern int FUN_00184e20(unsigned int);
/* Supplied declaration required: FUN_001919a4. */
/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_002e3328. */


unsigned int QuestCenterMode_IsBusy(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int *puVar2;
  int temp_v0;
  
  puVar1 = (*(unsigned int * *)((unsigned char *)&DAT_00588c2c + 0x4));
  if ((*(unsigned int * *)((unsigned char *)&DAT_00588c2c + 0x4)) != (unsigned int *)0x0) {
    temp_v0 = FUN_00184e20(*(*(unsigned int * *)((unsigned char *)&DAT_00588c2c + 0x4)));
    puVar2 = (*(unsigned int * *)((unsigned char *)&DAT_00588c2c + 0x4));
    if ((temp_v0 != 0) || (*(char *)(puVar1 + 6) == '\0')) {
      return 1;
    }
    if ((*(unsigned int * *)((unsigned char *)&DAT_00588c2c + 0x4)) != (unsigned int *)0x0) {
      *(unsigned char *)((*(unsigned int * *)((unsigned char *)&DAT_00588c2c + 0x4)) + 6) = 1;
      if (puVar2[7] != 0) {
        FUN_001919a4();
        FUN_002e3328(puVar2[7]);
        puVar2[7] = 0;
      }
      FUN_0019a5a0((*(unsigned int * *)((unsigned char *)&DAT_00588c2c + 0x4)));
      (*(unsigned int * *)((unsigned char *)&DAT_00588c2c + 0x4)) = (unsigned int *)0x0;
    }
  }
  return 0;
}

} /* extern "C" */
