/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010d300` (_code @ 0x10d300, 0x4e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0010d3a4(void);
int _ZN9Obj55b28cC1EPv(int *, unsigned char *);
int _ZN9Obj55b28cD1Ev(int *);
int sharedRefAddRef(void);
int emptyStub_002f74e8(int, int);

extern int DAT_005949dc; /* 0x5949dc */
extern unsigned int DAT_00594abc; /* 0x594abc */
extern unsigned char DAT_00630344; /* 0x630344 */

/* Supplied declaration required: FUN_0010d3a4. */
extern unsigned int FUN_00113e60(void);
/* Supplied declaration required: _ZN9Obj55b28cC1EPv. */
/* Supplied declaration required: _ZN9Obj55b28cD1Ev. */
/* Supplied declaration required: sharedRefAddRef. */
extern int _Znwj(unsigned int);
/* Supplied declaration required: emptyStub_002f74e8. */


void FUN_0010d300(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int uStack_18;
  unsigned int uStack_14;
  unsigned int uStack_10;
  
  uStack_18 = param_2;
  uStack_14 = param_3;
  uStack_10 = param_4;
  _ZN9Obj55b28cC1EPv(&uStack_18,&DAT_00630344);
  emptyStub_002f74e8(0,0x400012b);
  if (DAT_005949dc != 0) {
    sharedRefAddRef();
    temp_v0 = DAT_005949dc;
  }
  else {
    temp_v0 = _Znwj(0x48);
    temp_v1 = 0;
    if (temp_v0 != 0) {
      temp_v1 = FUN_00113e60();
    }
    DAT_00594abc = temp_v1;
    temp_v0 = _Znwj(0x1a8);
    if (temp_v0 != 0) {
      FUN_0010d3a4();
    }
  }
  DAT_005949dc = temp_v0;
  _ZN9Obj55b28cD1Ev(&uStack_18);
  return;
}

} /* extern "C" */
