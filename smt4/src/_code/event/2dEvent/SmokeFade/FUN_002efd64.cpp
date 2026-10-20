/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002efd64` (_code @ 0x2efd64, 0xc4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdTMTexTableFreeEntry(unsigned int);
int asdTMTexTableReleaseNode(unsigned int, unsigned int);
int asdMemFree(...);
int jobStop(unsigned int, int);

extern unsigned int *DAT_0043df28; /* 0x43df28 */
extern unsigned int DAT_0043df40; /* 0x43df40 */
extern unsigned int DAT_0043df44; /* 0x43df44 */

extern int FUN_0024bb10(unsigned int);
extern int asdTMTexTableNodeIsLoaded(unsigned int, unsigned int);
/* Supplied declaration required: asdTMTexTableFreeEntry. */
/* Supplied declaration required: asdTMTexTableReleaseNode. */
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: jobStop. */


void FUN_002efd64(void)

{
/* irregular: 4 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  int temp_v1;
  
  puVar1 = DAT_0043df28;
  asdMemFree(DAT_0043df28[2]);
  temp_v1 = 0;
  do {
    if (*(char *)(temp_v1 * 0xc + 0x43df48) != '\0') {
      temp_v0 = asdTMTexTableNodeIsLoaded((&DAT_0043df40)[temp_v1 * 3],(&DAT_0043df44)[temp_v1 * 3]);
      if (temp_v0 != 0) {
        asdTMTexTableReleaseNode((&DAT_0043df40)[temp_v1 * 3],(&DAT_0043df44)[temp_v1 * 3]);
      }
      *(unsigned char *)(temp_v1 * 0xc + 0x43df48) = 0;
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 2);
  temp_v1 = 0;
  do {
    if (*(char *)(temp_v1 * 0xc + 0x43df49) != '\0') {
      temp_v0 = FUN_0024bb10((&DAT_0043df40)[temp_v1 * 3]);
      if (temp_v0 != 0) {
        asdTMTexTableFreeEntry((&DAT_0043df40)[temp_v1 * 3]);
      }
      *(unsigned char *)(temp_v1 * 0xc + 0x43df49) = 0;
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 2);
  jobStop(*puVar1,0);
  asdMemFree(puVar1);
  DAT_0043df28 = (unsigned int *)0x0;
  return;
}

} /* extern "C" */
