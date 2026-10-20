/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00114aa0` (_code @ 0x114aa0, 0x86 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00114a30(int, int);
int asdOperatorDeleteArray(void);
int FUN_002e6e34(int *, unsigned char *);
int FUN_002e6e5c(int *);
int FUN_003002c8(void);

typedef int romwright_code(...);
extern unsigned int DAT_005949c0; /* 0x5949c0 */
extern unsigned int DAT_005949c4; /* 0x5949c4 */
extern int DAT_005949c8; /* 0x5949c8 */
extern int DAT_005949d0; /* 0x5949d0 */
extern int DAT_00594b28; /* 0x594b28 */
extern int DAT_00594b2c; /* 0x594b2c */
extern unsigned char DAT_0062e6a0; /* 0x62e6a0 */

extern int FUN_00114a08(void);
/* Supplied declaration required: FUN_00114a30. */
/* Supplied declaration required: asdOperatorDeleteArray. */
/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: FUN_002e6e5c. */
extern int *FUN_002ea704(void);
/* Supplied declaration required: FUN_003002c8. */


void FUN_00114aa0(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  int uStack_20;
  unsigned int uStack_1c;
  unsigned int uStack_18;
  
  uStack_20 = param_2;
  uStack_1c = param_3;
  uStack_18 = param_4;
  FUN_002e6e34(&uStack_20,&DAT_0062e6a0);
  DAT_005949d0 = DAT_005949d0 - 1;
  if ((DAT_005949d0 != 0) || (temp_v0 = FUN_00114a08(), temp_v0 == 0)) {
    FUN_002e6e5c(&uStack_20);
    return;
  }
  piVar2 = (int *)FUN_002ea704();
  if (piVar2 != (int *)0x0) {
    (**(romwright_code **)(*piVar2 + 0x3c))();
  }
  FUN_00114a30(0x801000,0x80);
  if (DAT_00594b2c != 0) {
    if (*(char *)(DAT_00594b2c + 0xc) != '\0') {
      FUN_003002c8();
      if (DAT_00594b2c != 0) {
        asdOperatorDeleteArray();
        DAT_00594b2c = 0;
      }
    }
    else {
      asdOperatorDeleteArray();
      DAT_00594b2c = 0;
    }
  }
  if (DAT_00594b28 != 0) {
    if (*(char *)(DAT_00594b28 + 0xc) != '\0') {
      FUN_003002c8();
      if (DAT_00594b28 != 0) {
        asdOperatorDeleteArray();
        DAT_00594b28 = 0;
      }
    }
    else {
      asdOperatorDeleteArray();
      DAT_00594b28 = 0;
    }
  }
  if (DAT_005949c8 != 0) {
    asdOperatorDeleteArray();
  }
  DAT_005949c8 = 0;
  DAT_005949c0 = 0;
  DAT_005949c4 = 0;
  FUN_002e6e5c(&uStack_20);
  return;
}

} /* extern "C" */
