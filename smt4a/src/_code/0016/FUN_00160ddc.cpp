/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00160ddc` (_code @ 0x160ddc, 0x1a4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00178b38(int);
int FUN_0017e75c(unsigned int, int);
int sysMemClear(...);

typedef int romwright_code(...);
extern romwright_code *DAT_0058918c; /* 0x58918c */
extern romwright_code *DAT_00589190; /* 0x589190 */
extern int *DAT_005b4428; /* 0x5b4428 */
extern unsigned int DAT_005b442c; /* 0x5b442c */

/* Supplied declaration required: FUN_00178b38. */
extern int FUN_0017e5fc(unsigned int);
extern int FUN_0017e6c4(unsigned int);
/* Supplied declaration required: FUN_0017e75c. */
/* Supplied declaration required: sysMemClear. */


unsigned int FUN_00160ddc(int *param_1)

{
/* irregular: 3 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  unsigned int *puVar3;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  
  temp_v3 = 0xffffffff;
  DAT_005b4428 = param_1;
  sysMemClear(param_1,0x8ac);
  temp_v0 = FUN_0017e6c4(0);
  *DAT_005b4428 = temp_v0;
  temp_v0 = FUN_0017e5fc(0);
  DAT_005b4428[1] = temp_v0;
  if (DAT_0058918c == (romwright_code *)0x0) {
    puVar3 = (unsigned int *)0x0;
  }
  else {
    puVar3 = (unsigned int *)(*DAT_0058918c)(0x10000,0x100,0,0x9c);
    if (puVar3 != (unsigned int *)0x0) {
      sysMemClear(puVar3,0x9c);
      *puVar3 = 0;
    }
  }
  piVar1 = DAT_005b4428;
  DAT_005b4428[2] = (int)puVar3;
  temp_v0 = *piVar1;
  if (temp_v0 != 0) {
    if (piVar1[1] != 0 && puVar3 != (unsigned int *)0x0) {
      temp_v3 = 0;
      DAT_005b442c = 1;
      sysMemClear(DAT_005b4428[2],0x9c);
      return temp_v3;
    }
    FUN_00178b38(temp_v0 + 0x34);
    FUN_0017e75c(*(unsigned int *)(temp_v0 + 0x2c),temp_v0 + 0x34);
    if (DAT_00589190 != (romwright_code *)0x0) {
      (*DAT_00589190)(0x10000,0x100,0,temp_v0);
    }
  }
  temp_v0 = DAT_005b4428[1];
  if (temp_v0 != 0) {
    temp_v1 = 0;
    do {
      temp_v2 = temp_v0 + temp_v1 * 0x44;
      FUN_00178b38(temp_v2 + 0x34);
      FUN_0017e75c(*(unsigned int *)(temp_v0 + 0x2c),temp_v2 + 0x34);
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < 6);
    if (DAT_00589190 != (romwright_code *)0x0) {
      (*DAT_00589190)(0x10000,0x100,0,temp_v0);
    }
  }
  if (DAT_005b4428[2] != 0) {
    if (DAT_00589190 == (romwright_code *)0x0) {
      DAT_005b442c = 1;
      sysMemClear(DAT_005b4428[2],0x9c);
      return temp_v3;
    }
    (*DAT_00589190)(0x10000,0x100,0);
  }
  if (DAT_00589190 != (romwright_code *)0x0) {
    (*DAT_00589190)(0x10000,0x100,0,DAT_005b4428);
  }
  DAT_005b442c = 1;
  sysMemClear(DAT_005b4428[2],0x9c);
  return temp_v3;
}

} /* extern "C" */
