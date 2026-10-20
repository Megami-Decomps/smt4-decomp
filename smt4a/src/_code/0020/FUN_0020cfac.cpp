/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0020cfac` (_code @ 0x20cfac, 0x190 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int qsort(...);
int FUN_00312830(...);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern int FUN_00270d74(...); /* 0x270d74 */
extern int FUN_002b2ca8(...); /* 0x2b2ca8 */
extern int FUN_002ce824(...); /* 0x2ce824 */
extern int FUN_002fe074(...); /* 0x2fe074 */
extern int FUN_00321cc0(...); /* 0x321cc0 */
extern int FUN_0034f6fc(...); /* 0x34f6fc */
extern int FUN_003603a0(...); /* 0x3603a0 */
extern int FUN_00375b80(...); /* 0x375b80 */
extern int DAT_0057f290; /* 0x57f290 */

/* Supplied declaration required: qsort. */
extern int FUN_0026140c(void);
/* Supplied declaration required: FUN_00312830. */


void FUN_0020cfac(void)

{
/* irregular: 10 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned char *pbVar3;
  unsigned char temp_v2;
  
  temp_v0 = DAT_0057f290;
  if (*(char *)(DAT_0057f290 + 0x420) != '\x02') {
    temp_v1 = FUN_0026140c();
    pbVar3 = (unsigned char *)(temp_v1 + 0x11);
  }
  else {
    temp_v1 = FUN_0026140c();
    pbVar3 = (unsigned char *)(temp_v1 + 0x12);
  }
  temp_v2 = ~(*pbVar3 >> 7) & 1;
  if ((*pbVar3 & 0x7f) == 1) {
    if (temp_v2 != 0) {
      qsort(temp_v0 + 0x62a0,*(unsigned int *)(temp_v0 + 0x6698),2,FUN_002ce824);
    }
    else {
      qsort(temp_v0 + 0x62a0,*(unsigned int *)(temp_v0 + 0x6698),2,FUN_003603a0);
    }
  }
  if ((*pbVar3 & 0x7f) == 2) {
    if (temp_v2 != 0) {
      qsort(temp_v0 + 0x62a0,*(unsigned int *)(temp_v0 + 0x6698),2,FUN_00270d74);
    }
    else {
      qsort(temp_v0 + 0x62a0,*(unsigned int *)(temp_v0 + 0x6698),2,FUN_00321cc0);
    }
  }
  if ((*pbVar3 & 0x7f) == 0x31) {
    if (temp_v2 != 0) {
      qsort(temp_v0 + 0x62a0,*(unsigned int *)(temp_v0 + 0x6698),2,FUN_002fe074);
    }
    else {
      qsort(temp_v0 + 0x62a0,*(unsigned int *)(temp_v0 + 0x6698),2,FUN_00375b80);
    }
  }
  if ((*pbVar3 & 0x7f) != 3) {
    return;
  }
  if (temp_v2 == 0) {
    FUN_00312830(temp_v0 + 0x62a0,*(unsigned int *)(temp_v0 + 0x6698),2,FUN_0034f6fc);
    return;
  }
  FUN_00312830(temp_v0 + 0x62a0,*(unsigned int *)(temp_v0 + 0x6698),2,FUN_002b2ca8);
  return;
}

} /* extern "C" */
