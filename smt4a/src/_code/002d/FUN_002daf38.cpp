/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002daf38` (_code @ 0x2daf38, 0x12c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int ptrListRemoveClearOwner(unsigned int);
int lmapClearExtraFlag(void);
int FUN_003d2158(void);
int FUN_003e55f4(unsigned int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern unsigned int g_handleRegistry; /* 0x56fcc0 */
extern int g_lmapScene; /* 0x581288 */

/* Supplied declaration required: ptrListRemoveClearOwner. */
/* Supplied declaration required: lmapClearExtraFlag. */
/* Supplied declaration required: FUN_003d2158. */
/* Supplied declaration required: FUN_003e55f4. */


void FUN_002daf38(void)

{
/* irregular: 14 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  int temp_v9;
  int temp_v10;
  int temp_v11;
  
  FUN_003e55f4(*(unsigned int *)(g_lmapScene + 0x1a8));
  temp_v4 = temp_v1;
  if ((*(int *)(g_lmapScene + 0x288) == 3) &&
     (lmapClearExtraFlag(), temp_v4 = temp_v2, *(int *)(g_lmapScene + 0x28c) != 0)) {
    FUN_003d2158();
    temp_v4 = temp_v3;
  }
  temp_v0 = *(int *)(g_lmapScene + 0x174);
  if (temp_v0 != 0) {
    temp_v4 = *(int *)(temp_v0 + 4);
  }
  if (temp_v0 != 0 && temp_v4 != 0) {
    ptrListRemoveClearOwner(g_handleRegistry);
    temp_v4 = temp_v5;
  }
  temp_v0 = *(int *)(g_lmapScene + 0x178);
  if (temp_v0 != 0) {
    temp_v4 = *(int *)(temp_v0 + 4);
  }
  if (temp_v0 != 0 && temp_v4 != 0) {
    ptrListRemoveClearOwner(g_handleRegistry);
    temp_v4 = temp_v6;
  }
  temp_v0 = *(int *)(g_lmapScene + 0x188);
  if (temp_v0 != 0) {
    temp_v4 = *(int *)(temp_v0 + 4);
  }
  if (temp_v0 != 0 && temp_v4 != 0) {
    ptrListRemoveClearOwner(g_handleRegistry);
    temp_v4 = temp_v7;
  }
  temp_v0 = *(int *)(g_lmapScene + 0x17c);
  if (temp_v0 != 0) {
    temp_v4 = *(int *)(temp_v0 + 4);
  }
  if (temp_v0 != 0 && temp_v4 != 0) {
    ptrListRemoveClearOwner(g_handleRegistry);
    temp_v4 = temp_v8;
  }
  temp_v0 = *(int *)(g_lmapScene + 0x170);
  if (temp_v0 != 0) {
    temp_v4 = *(int *)(temp_v0 + 4);
  }
  if (temp_v0 != 0 && temp_v4 != 0) {
    ptrListRemoveClearOwner(g_handleRegistry);
    temp_v4 = temp_v9;
  }
  temp_v0 = *(int *)(g_lmapScene + 0x180);
  if (temp_v0 != 0) {
    temp_v4 = *(int *)(temp_v0 + 4);
  }
  if (temp_v0 != 0 && temp_v4 != 0) {
    ptrListRemoveClearOwner(g_handleRegistry);
    temp_v4 = temp_v10;
  }
  temp_v0 = *(int *)(g_lmapScene + 0x184);
  if (temp_v0 != 0) {
    temp_v4 = *(int *)(temp_v0 + 4);
  }
  if (temp_v0 != 0 && temp_v4 != 0) {
    ptrListRemoveClearOwner(g_handleRegistry);
    temp_v4 = temp_v11;
  }
  temp_v0 = *(int *)(g_lmapScene + 0x18c);
  if (temp_v0 != 0) {
    temp_v4 = *(int *)(temp_v0 + 4);
  }
  if (temp_v0 == 0 || temp_v4 == 0) {
    return;
  }
  ptrListRemoveClearOwner(g_handleRegistry);
  return;
}

} /* extern "C" */
