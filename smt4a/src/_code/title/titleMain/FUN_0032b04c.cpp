/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0032b04c` (_code @ 0x32b04c, 0x84 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdMemFree(int);
int asdTMTexTableReleaseNode(int, int);
int dataTableFree(int);
int FUN_002c2160(int);
int asdTMTexTableFreeEntry(int);
int campButtonHelpRelease(void);
int freeTexTable24(void);

extern unsigned char g_titleMain; /* 0x58916c */

/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: asdTMTexTableReleaseNode. */
/* Supplied declaration required: dataTableFree. */
/* Supplied declaration required: FUN_002c2160. */
/* Supplied declaration required: asdTMTexTableFreeEntry. */
/* Supplied declaration required: campButtonHelpRelease. */
extern int campButtonHelpIsActive(void);
/* Supplied declaration required: freeTexTable24. */


void FUN_0032b04c(void)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  
  *(unsigned char *)((*(int *)((unsigned char *)&g_titleMain + 0x4)) + 4) = 1;
  dataTableFree(0x3a);
  freeTexTable24();
  temp_v0 = 0;
  do {
    asdTMTexTableReleaseNode(0x2a,temp_v0);
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 9);
  asdTMTexTableFreeEntry(0x2a);
  FUN_002c2160(0);
  temp_v0 = campButtonHelpIsActive();
  if (temp_v0 != 0) {
    campButtonHelpRelease();
  }
  if ((*(int *)((unsigned char *)&g_titleMain + 0x4)) != 0) {
    asdMemFree((*(int *)((unsigned char *)&g_titleMain + 0x4)));
    (*(int *)((unsigned char *)&g_titleMain + 0x4)) = 0;
  }
  return;
}

} /* extern "C" */
