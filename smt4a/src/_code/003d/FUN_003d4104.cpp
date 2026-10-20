/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003d4104` (_code @ 0x3d4104, 0x16c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int qsort(...);
int arraySortQsort(...);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern int FUN_00270cb4(...); /* 0x270cb4 */
extern int entryCompareByDataValue(...); /* 0x2b2ad4 */
extern int FUN_002ce0d8(...); /* 0x2ce0d8 */
extern int FUN_002ce15c(...); /* 0x2ce15c */
extern int FUN_00321c18(...); /* 0x321c18 */
extern int flagRecCompare(...); /* 0x34f40c */
extern int FUN_0035fdb0(...); /* 0x35fdb0 */
extern int FUN_0035fe34(...); /* 0x35fe34 */
extern int g_statusDown; /* 0x588fe8 */

/* Supplied declaration required: qsort. */
extern int FUN_0026140c(void);
/* Supplied declaration required: arraySortQsort. */


void FUN_003d4104(void)

{
/* irregular: 10 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned char *pbVar3;
  
  temp_v0 = g_statusDown;
  temp_v1 = FUN_0026140c();
  pbVar3 = (unsigned char *)(temp_v1 + 0x16);
  if ((*(unsigned char *)(temp_v1 + 0x16) & 0x7f) == 1) {
    if ((char)*(unsigned char *)(temp_v1 + 0x16) < '\0') {
      qsort(temp_v0 + 0xf48,(int)*(short *)(temp_v0 + 0x2348),4,FUN_0035fe34);
    }
    else {
      qsort(temp_v0 + 0xf48,(int)*(short *)(temp_v0 + 0x2348),4,FUN_002ce15c);
    }
  }
  if ((*pbVar3 & 0x7f) == 8) {
    if ((char)*pbVar3 < '\0') {
      qsort(temp_v0 + 0xf48,(int)*(short *)(temp_v0 + 0x2348),4,FUN_0035fdb0);
    }
    else {
      qsort(temp_v0 + 0xf48,(int)*(short *)(temp_v0 + 0x2348),4,FUN_002ce0d8);
    }
  }
  if ((*pbVar3 & 0x7f) == 2) {
    if ((char)*pbVar3 < '\0') {
      qsort(temp_v0 + 0xf48,(int)*(short *)(temp_v0 + 0x2348),4,FUN_00321c18);
    }
    else {
      qsort(temp_v0 + 0xf48,(int)*(short *)(temp_v0 + 0x2348),4,FUN_00270cb4);
    }
  }
  if ((*pbVar3 & 0x7f) != 3) {
    return;
  }
  if (-1 < (char)*pbVar3) {
    arraySortQsort(temp_v0 + 0xf48,(int)*(short *)(temp_v0 + 0x2348),4,entryCompareByDataValue);
    return;
  }
  arraySortQsort(temp_v0 + 0xf48,(int)*(short *)(temp_v0 + 0x2348),4,flagRecCompare);
  return;
}

} /* extern "C" */
