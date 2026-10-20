/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002920e4` (_code @ 0x2920e4, 0xe4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int ptrListRemoveClearOwner(unsigned int);

extern unsigned int g_handleRegistry; /* 0x56fcc0 */
extern unsigned int DAT_005f0c84; /* 0x5f0c84 */
extern int DAT_005f0c88; /* 0x5f0c88 */
extern int DAT_005f0c8c; /* 0x5f0c8c */
extern int DAT_005f0c90; /* 0x5f0c90 */
extern int DAT_005f0d44; /* 0x5f0d44 */
extern int DAT_005f0d48; /* 0x5f0d48 */
extern int DAT_005f0d4c; /* 0x5f0d4c */

extern unsigned long long gameFlagIsSet(unsigned int);
/* Supplied declaration required: ptrListRemoveClearOwner. */


void FUN_002920e4(int *param_1)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned long long temp_v6;
  
  temp_v0 = *param_1;
  if (temp_v0 == 0x20) {
    param_1 = (int *)param_1[1];
  }
  if (!(temp_v0 == 0x20 && param_1 == (int *)0x2)) {
    temp_v6 = gameFlagIsSet(0x4d0);
    temp_v0 = (int)((unsigned long long)temp_v6 >> 0x20);
    if ((int)temp_v6 == 0) {
      return;
    }
  }
  else {
    temp_v6 = gameFlagIsSet(0x4c9);
    temp_v0 = (int)((unsigned long long)temp_v6 >> 0x20);
    if ((int)temp_v6 != 0) {
      return;
    }
  }
  if (DAT_005f0c88 != 0) {
    temp_v0 = *(int *)(DAT_005f0c88 + 4);
  }
  if (DAT_005f0c88 != 0 && temp_v0 != 0) {
    ptrListRemoveClearOwner(g_handleRegistry);
    temp_v0 = temp_v1;
  }
  if (DAT_005f0c8c != 0) {
    temp_v0 = *(int *)(DAT_005f0c8c + 4);
  }
  if (DAT_005f0c8c != 0 && temp_v0 != 0) {
    ptrListRemoveClearOwner(g_handleRegistry);
    temp_v0 = temp_v2;
  }
  if (DAT_005f0c90 != 0) {
    temp_v0 = *(int *)(DAT_005f0c90 + 4);
  }
  if (DAT_005f0c90 != 0 && temp_v0 != 0) {
    ptrListRemoveClearOwner(g_handleRegistry);
    temp_v0 = temp_v3;
  }
  if (DAT_005f0d44 != 0) {
    temp_v0 = *(int *)(DAT_005f0d44 + 4);
  }
  if (DAT_005f0d44 != 0 && temp_v0 != 0) {
    ptrListRemoveClearOwner(g_handleRegistry);
    temp_v0 = temp_v4;
  }
  if (DAT_005f0d48 != 0) {
    temp_v0 = *(int *)(DAT_005f0d48 + 4);
  }
  if (DAT_005f0d48 != 0 && temp_v0 != 0) {
    ptrListRemoveClearOwner(g_handleRegistry);
    temp_v0 = temp_v5;
  }
  if (DAT_005f0d4c != 0) {
    temp_v0 = *(int *)(DAT_005f0d4c + 4);
  }
  if (DAT_005f0d4c != 0 && temp_v0 != 0) {
    ptrListRemoveClearOwner(g_handleRegistry);
  }
  DAT_005f0c84 = 2;
  return;
}

} /* extern "C" */
