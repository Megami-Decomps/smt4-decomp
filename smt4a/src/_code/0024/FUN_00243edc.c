/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00243edc` (_code @ 0x243edc, 0x124 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern int *DAT_005f0c88; /* 0x5f0c88 */
extern int *DAT_005f0c8c; /* 0x5f0c8c */
extern int *DAT_005f0c90; /* 0x5f0c90 */
extern int *DAT_005f0d44; /* 0x5f0d44 */
extern int *DAT_005f0d48; /* 0x5f0d48 */
extern int *DAT_005f0d4c; /* 0x5f0d4c */
extern int DAT_005f1c98; /* 0x5f1c98 */
extern unsigned int *DAT_005f1c9c; /* 0x5f1c9c */

extern int FUN_00162e8c(void);
extern int FUN_0018719c(unsigned int);
/* Supplied declaration required: FUN_003fd63c. */


void FUN_00243edc(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00162e8c();
  puVar1 = (unsigned int *)&DAT_005f1c98;
  if (DAT_005f1c98 == 0x20) {
    puVar1 = DAT_005f1c9c;
  }
  if (!(DAT_005f1c98 == 0x20 && puVar1 == (unsigned int *)0x2)) {
    temp_v1 = FUN_0018719c(0x4d0);
    if (temp_v1 == 0) {
      return;
    }
  }
  else {
    temp_v1 = FUN_0018719c(0x4c9);
    if (temp_v1 != 0) {
      return;
    }
  }
  if (*(int *)(temp_v0 + 0x16a0) != 0) {
    FUN_003fd63c(0x4d0,0,1);
  }
  if (DAT_005f0c88 != (int *)0x0) {
    (**(romwright_code **)(*DAT_005f0c88 + 4))();
    DAT_005f0c88 = (int *)0x0;
  }
  if (DAT_005f0c8c != (int *)0x0) {
    (**(romwright_code **)(*DAT_005f0c8c + 4))();
    DAT_005f0c8c = (int *)0x0;
  }
  if (DAT_005f0c90 != (int *)0x0) {
    (**(romwright_code **)(*DAT_005f0c90 + 4))();
    DAT_005f0c90 = (int *)0x0;
  }
  if (DAT_005f0d44 != (int *)0x0) {
    (**(romwright_code **)(*DAT_005f0d44 + 4))();
    DAT_005f0d44 = (int *)0x0;
  }
  if (DAT_005f0d48 != (int *)0x0) {
    (**(romwright_code **)(*DAT_005f0d48 + 4))();
    DAT_005f0d48 = (int *)0x0;
  }
  if (DAT_005f0d4c != (int *)0x0) {
    (**(romwright_code **)(*DAT_005f0d4c + 4))();
    DAT_005f0d4c = (int *)0x0;
  }
  return;
}
