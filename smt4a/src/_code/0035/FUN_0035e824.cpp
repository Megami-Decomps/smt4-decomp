/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035e824` (_code @ 0x35e824, 0x170 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0022e774(void);
int scrWorkSetValue(...);
int FUN_002c7e6c(void);
int FUN_002c8538(int);
int FUN_002fb404(int);
int FUN_00333f6c(void);
int flagBitmapSetBit(unsigned int, int);
int FUN_0038e4c4(int);
int statusDownGetValue(void);
int statusDownEnterState1(unsigned int, int);
int flagValueAdd(unsigned int, int);
int flagValueSub(unsigned int, int);

extern int g_btlUiBlock; /* 0x57a9c8 */

/* Supplied declaration required: FUN_0022e774. */
extern unsigned int scrGetArg(unsigned int);
extern int FUN_0026c3a0(void);
extern int scrWorkGetValue(unsigned int);
/* Supplied declaration required: scrWorkSetValue. */
/* Supplied declaration required: FUN_002c7e6c. */
/* Supplied declaration required: FUN_002c8538. */
extern int scrGetCommandFrame(void);
/* Supplied declaration required: FUN_002fb404. */
/* Supplied declaration required: FUN_00333f6c. */
/* Supplied declaration required: flagBitmapSetBit. */
/* Supplied declaration required: FUN_0038e4c4. */
/* Supplied declaration required: statusDownGetValue. */
extern int stateHolderIsMissingOrState0(void);
/* Supplied declaration required: statusDownEnterState1. */
/* Supplied declaration required: flagValueAdd. */
/* Supplied declaration required: flagValueSub. */


unsigned int FUN_0035e824(void)

{
/* irregular: 12 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v0 = scrGetArg(0);
  temp_v1 = scrGetCommandFrame();
  if (temp_v1 == 0) {
    scrWorkSetValue(0);
    scrWorkSetValue(1,0);
  }
  temp_v1 = scrWorkGetValue(0);
  if (temp_v1 != 0) {
    if (temp_v1 != 1) {
      if (temp_v1 != 2) {
        if ((temp_v1 == 3) && (temp_v1 = FUN_0026c3a0(), temp_v1 != 0)) {
          FUN_00333f6c();
          FUN_0038e4c4(g_btlUiBlock + 0x28c4);
          scrWorkSetValue(0,4);
          return 1;
        }
      }
      else {
        temp_v1 = stateHolderIsMissingOrState0();
        if (temp_v1 != 0) {
          statusDownGetValue();
          FUN_0022e774();
          scrWorkSetValue(0,3);
        }
      }
    }
    else {
      scrWorkSetValue(0,2);
      FUN_002c7e6c();
      FUN_002c8538(0);
      statusDownEnterState1(temp_v0 & 0xffff,0);
      FUN_002fb404(g_btlUiBlock + 0x28c4);
    }
  }
  else {
    flagBitmapSetBit(temp_v0,1);
    flagValueAdd(temp_v0,1);
    flagValueSub(temp_v0,1);
    scrWorkSetValue(0,1);
  }
  return 0;
}

} /* extern "C" */
