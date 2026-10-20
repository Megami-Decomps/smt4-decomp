/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038a538` (_code @ 0x38a538, 0xb4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int jobStop(unsigned int, int);
int asdMemFree(unsigned int *);
int asdTMTexTableReleaseNode(unsigned int, unsigned int);
int asdTMTexTableFreeEntry(int);

extern int DAT_0057f3c4; /* 0x57f3c4 */

/* Supplied declaration required: jobStop. */
extern int asdTMTexTableNodeIsLoaded(unsigned int, unsigned int);
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: asdTMTexTableReleaseNode. */
/* Supplied declaration required: asdTMTexTableFreeEntry. */
extern int FUN_00341940(unsigned int);


void FUN_0038a538(int param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  
  puVar3 = *(unsigned int **)(param_1 * 4 + 0x57f3c8);
  if ((unsigned int)puVar3[9] < 4) {
    temp_v0 = puVar3[9] * 0x10;
    if (*(int *)(temp_v0 + 0x57f444) != 0) {
      *(int *)(temp_v0 + 0x57f444) = *(int *)(temp_v0 + 0x57f444) - 1;
    }
    else {
      temp_v1 = asdTMTexTableNodeIsLoaded(*(unsigned int *)(temp_v0 + 0x57f43c),*(unsigned int *)(temp_v0 + 0x57f440));
      if (temp_v1 != 0) {
        asdTMTexTableReleaseNode(*(unsigned int *)(temp_v0 + 0x57f43c),*(unsigned int *)(temp_v0 + 0x57f440));
      }
    }
    if (DAT_0057f3c4 >= 1) {
      DAT_0057f3c4 = DAT_0057f3c4 - 1;
    }
    else {
      temp_v0 = FUN_00341940(0x35);
      if (temp_v0 != 0) {
        asdTMTexTableFreeEntry(0x35);
        DAT_0057f3c4 = 0;
      }
    }
  }
  jobStop(*puVar3,0);
  asdMemFree(puVar3);
  *(unsigned int *)(param_1 * 4 + 0x57f3c8) = 0;
  return;
}

} /* extern "C" */
