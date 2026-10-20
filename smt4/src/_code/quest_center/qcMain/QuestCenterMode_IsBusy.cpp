/* NON_MATCHING: romwright 0.5.0 decompilation of `QuestCenterMode_IsBusy` (_code @ 0x2b86bc, 0x80 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002a6fb8(void);
int FUN_002b2368(unsigned int);
int FUN_002c415c(unsigned int *);

extern unsigned char DAT_0044db88; /* 0x44db88 */

/* Supplied declaration required: FUN_002a6fb8. */
/* Supplied declaration required: FUN_002b2368. */
extern int FUN_002b2378(unsigned int);
/* Supplied declaration required: FUN_002c415c. */


unsigned int QuestCenterMode_IsBusy(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int *puVar2;
  int temp_v0;
  
  puVar1 = (*(unsigned int * *)((unsigned char *)&DAT_0044db88 + 0x4));
  if ((*(unsigned int * *)((unsigned char *)&DAT_0044db88 + 0x4)) != (unsigned int *)0x0) {
    temp_v0 = FUN_002b2378(*(*(unsigned int * *)((unsigned char *)&DAT_0044db88 + 0x4)));
    puVar2 = (*(unsigned int * *)((unsigned char *)&DAT_0044db88 + 0x4));
    if ((temp_v0 != 0) || (*(char *)(puVar1 + 6) == '\0')) {
      return 1;
    }
    if ((*(unsigned int * *)((unsigned char *)&DAT_0044db88 + 0x4)) != (unsigned int *)0x0) {
      *(unsigned char *)((*(unsigned int * *)((unsigned char *)&DAT_0044db88 + 0x4)) + 6) = 1;
      if (puVar2[7] != 0) {
        FUN_002a6fb8();
        FUN_002b2368(puVar2[7]);
        puVar2[7] = 0;
      }
      FUN_002c415c((*(unsigned int * *)((unsigned char *)&DAT_0044db88 + 0x4)));
      (*(unsigned int * *)((unsigned char *)&DAT_0044db88 + 0x4)) = (unsigned int *)0x0;
    }
  }
  return 0;
}

} /* extern "C" */
