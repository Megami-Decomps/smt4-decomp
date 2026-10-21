/* NON_MATCHING: romwright 0.5.0 decompilation of `scriptHolderUpdateSimple` (_code @ 0x47e4e4, 0xf8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00275bc8(void);
int scrScriptProcessStartEntry(int, int);
int asdLoadFileAsyncSimple(unsigned char *, int *, int);
int FUN_003a36b4(void);
int FUN_00418070(unsigned int, int);
int FUN_004731d8(void);
int optionsClearFlag1(void);

extern unsigned char LAB_0047e5dc; /* 0x47e5dc */
extern unsigned char LAB_0047e5f4; /* 0x47e5f4 */

extern int scrRunOpcodesStub(int);
/* Supplied declaration required: FUN_00275bc8. */
/* Supplied declaration required: scrScriptProcessStartEntry. */
/* Supplied declaration required: asdLoadFileAsyncSimple. */
/* Supplied declaration required: FUN_003a36b4. */
/* Supplied declaration required: FUN_00418070. */
extern unsigned int FUN_004186e0(void);
/* Supplied declaration required: FUN_004731d8. */
/* Supplied declaration required: optionsClearFlag1. */


unsigned int scriptHolderUpdateSimple(int *param_1)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = *param_1;
  if (temp_v0 != 0) {
    if (temp_v0 != 1) {
      if (temp_v0 == 2) {
        temp_v0 = scrRunOpcodesStub(param_1[5]);
        if (temp_v0 != 2) {
          return 0;
        }
        temp_v1 = FUN_004186e0();
        FUN_00418070(temp_v1,0);
        optionsClearFlag1();
        FUN_003a36b4();
        FUN_004731d8();
        *param_1 = 4;
        return 0;
      }
      if (temp_v0 != 4) {
        return 0;
      }
      return 1;
    }
    temp_v0 = param_1[3];
    if (temp_v0 == 0) {
      return 0;
    }
    if (param_1[4] == 0) {
      return 0;
    }
    FUN_00275bc8();
    param_1[5] = temp_v0;
    *(unsigned int *)(temp_v0 + 0x108) = 2;
    scrScriptProcessStartEntry(param_1[5],param_1[1]);
    temp_v0 = 2;
  }
  else {
    asdLoadFileAsyncSimple(&LAB_0047e5dc,param_1 + 3,0);
    asdLoadFileAsyncSimple(&LAB_0047e5f4,param_1 + 4,0);
    temp_v0 = 1;
  }
  *param_1 = temp_v0;
  return 0;
}

} /* extern "C" */
