/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003d1bc4` (_code @ 0x3d1bc4, 0x184 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int qsort(...);
int arraySortQsort(...);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern int FUN_00221a08(...); /* 0x221a08 */
extern int FUN_00231f50(...); /* 0x231f50 */
extern int gauntletAppCompareBySortKeys(...); /* 0x2320b0 */
extern int FUN_002418f8(...); /* 0x2418f8 */
extern int FUN_002b2c44(...); /* 0x2b2c44 */
extern int FUN_002ce57c(...); /* 0x2ce57c */
extern int gauntletAppCompareBySortKeysDescending(...); /* 0x2ce6dc */
extern int entryRefCompareByKindLevelOrder(...); /* 0x2fdfc0 */
extern int g_gauntletAppMenu; /* 0x57f238 */

/* Supplied declaration required: qsort. */
extern int FUN_0026140c(void);
extern unsigned int objectApplyIfUnblocked(int);
/* Supplied declaration required: arraySortQsort. */


void FUN_003d1bc4(void)

{
/* irregular: 10 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3;
  unsigned char *pbVar5;
  
  temp_v0 = g_gauntletAppMenu;
  temp_v1 = FUN_0026140c();
  pbVar5 = (unsigned char *)(temp_v1 + 0xd);
  temp_v3 = ~(*(unsigned char *)(temp_v1 + 0xd) >> 7) & 1;
  if ((*(unsigned char *)(temp_v1 + 0xd) & 0x7f) == 0x21) {
    if (temp_v3 != 0) {
      temp_v2 = objectApplyIfUnblocked(temp_v0 + 0x10);
      qsort(temp_v0 + 0x74,temp_v2,4,FUN_00231f50);
    }
    else {
      temp_v2 = objectApplyIfUnblocked(temp_v0 + 0x10);
      qsort(temp_v0 + 0x74,temp_v2,4,FUN_002ce57c);
    }
  }
  if ((*pbVar5 & 0x7f) == 0x15) {
    if (temp_v3 != 0) {
      temp_v2 = objectApplyIfUnblocked(temp_v0 + 0x10);
      qsort(temp_v0 + 0x74,temp_v2,4,FUN_002418f8);
    }
    else {
      temp_v2 = objectApplyIfUnblocked(temp_v0 + 0x10);
      qsort(temp_v0 + 0x74,temp_v2,4,entryRefCompareByKindLevelOrder);
    }
  }
  if ((*pbVar5 & 0x7f) == 0x16) {
    if (temp_v3 != 0) {
      temp_v2 = objectApplyIfUnblocked(temp_v0 + 0x10);
      qsort(temp_v0 + 0x74,temp_v2,4,FUN_00221a08);
    }
    else {
      temp_v2 = objectApplyIfUnblocked(temp_v0 + 0x10);
      qsort(temp_v0 + 0x74,temp_v2,4,FUN_002b2c44);
    }
  }
  if ((*pbVar5 & 0x7f) == 3) {
    if (temp_v3 != 0) {
      temp_v2 = objectApplyIfUnblocked(temp_v0 + 0x10);
      arraySortQsort(temp_v0 + 0x74,temp_v2,4,gauntletAppCompareBySortKeys);
      return;
    }
    temp_v2 = objectApplyIfUnblocked(temp_v0 + 0x10);
    arraySortQsort(temp_v0 + 0x74,temp_v2,4,gauntletAppCompareBySortKeysDescending);
    return;
  }
  return;
}

} /* extern "C" */
