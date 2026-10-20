/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00122f04` (_code @ 0x122f04, 0x1a4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002ba520(unsigned int, int);
int FUN_002ba608(int);
int memClear(...);

typedef int romwright_code(...);
extern romwright_code *DAT_0044e330; /* 0x44e330 */
extern romwright_code *DAT_0044e334; /* 0x44e334 */
extern int *DAT_004655e8; /* 0x4655e8 */
extern unsigned int DAT_004655ec; /* 0x4655ec */

extern int FUN_00137ab4(unsigned int);
extern int FUN_00137b7c(unsigned int);
/* Supplied declaration required: FUN_002ba520. */
/* Supplied declaration required: FUN_002ba608. */
/* Supplied declaration required: memClear. */


unsigned int FUN_00122f04(int *param_1)

{
/* irregular: 3 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  unsigned int *puVar3;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  
  temp_v3 = 0xffffffff;
  DAT_004655e8 = param_1;
  memClear(param_1,0x8ac);
  temp_v0 = FUN_00137b7c(0);
  *DAT_004655e8 = temp_v0;
  temp_v0 = FUN_00137ab4(0);
  DAT_004655e8[1] = temp_v0;
  if (DAT_0044e330 == (romwright_code *)0x0) {
    puVar3 = (unsigned int *)0x0;
  }
  else {
    puVar3 = (unsigned int *)(*DAT_0044e330)(0x10000,0x100,0,0x9c);
    if (puVar3 != (unsigned int *)0x0) {
      memClear(puVar3,0x9c);
      *puVar3 = 0;
    }
  }
  piVar1 = DAT_004655e8;
  DAT_004655e8[2] = (int)puVar3;
  temp_v0 = *piVar1;
  if (temp_v0 != 0) {
    if (piVar1[1] != 0 && puVar3 != (unsigned int *)0x0) {
      temp_v3 = 0;
      DAT_004655ec = 1;
      memClear(DAT_004655e8[2],0x9c);
      return temp_v3;
    }
    FUN_002ba608(temp_v0 + 0x34);
    FUN_002ba520(*(unsigned int *)(temp_v0 + 0x2c),temp_v0 + 0x34);
    if (DAT_0044e334 != (romwright_code *)0x0) {
      (*DAT_0044e334)(0x10000,0x100,0,temp_v0);
    }
  }
  temp_v0 = DAT_004655e8[1];
  if (temp_v0 != 0) {
    temp_v1 = 0;
    do {
      temp_v2 = temp_v0 + temp_v1 * 0x44;
      FUN_002ba608(temp_v2 + 0x34);
      FUN_002ba520(*(unsigned int *)(temp_v0 + 0x2c),temp_v2 + 0x34);
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < 6);
    if (DAT_0044e334 != (romwright_code *)0x0) {
      (*DAT_0044e334)(0x10000,0x100,0,temp_v0);
    }
  }
  if (DAT_004655e8[2] != 0) {
    if (DAT_0044e334 == (romwright_code *)0x0) {
      DAT_004655ec = 1;
      memClear(DAT_004655e8[2],0x9c);
      return temp_v3;
    }
    (*DAT_0044e334)(0x10000,0x100,0);
  }
  if (DAT_0044e334 != (romwright_code *)0x0) {
    (*DAT_0044e334)(0x10000,0x100,0,DAT_004655e8);
  }
  DAT_004655ec = 1;
  memClear(DAT_004655e8[2],0x9c);
  return temp_v3;
}

} /* extern "C" */
