/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030facc` (_code @ 0x30facc, 0x36 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int _ZN9Obj55b28cC1EPv(int *, unsigned char *);
int _ZN9Obj55b28cD1Ev(int *);
int sharedRefRelease(int);

extern unsigned char g_flagBlock; /* 0x594958 */
extern unsigned char DAT_0062e558; /* 0x62e558 */

/* Supplied declaration required: _ZN9Obj55b28cC1EPv. */
/* Supplied declaration required: _ZN9Obj55b28cD1Ev. */
/* Supplied declaration required: sharedRefRelease. */


void FUN_0030facc(int param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  unsigned char *puVar1;
  int iStack_18;
  unsigned int uStack_14;
  unsigned int uStack_10;
  
  iStack_18 = param_2;
  uStack_14 = param_3;
  uStack_10 = param_4;
  if ((*(signed char *)((unsigned char *)&g_flagBlock + 0x14)) != '\0') {
    puVar1 = &DAT_0062e558;
    if (*(char *)(param_2 + 0x38) != '\0') {
      puVar1 = (unsigned char *)(param_1 + 0x88);
    }
    _ZN9Obj55b28cC1EPv(&iStack_18,puVar1);
    sharedRefRelease(param_2);
    _ZN9Obj55b28cD1Ev(&iStack_18);
    return;
  }
  sharedRefRelease(param_2);
  return;
}

} /* extern "C" */
