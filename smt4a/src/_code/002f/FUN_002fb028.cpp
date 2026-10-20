/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fb028` (_code @ 0x2fb028, 0x56 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdOperatorDeleteArray(void);
int FUN_002e6e34(int *, int);
int _ZN9Obj55b28cD1Ev(int *);
int FUN_002e9f00(unsigned int *, int);
int FUN_002ea00c(unsigned int *);
int sharedRefHolderReplace(unsigned int *, int);

extern unsigned char DAT_0055970c; /* 0x55970c */

/* Supplied declaration required: asdOperatorDeleteArray. */
extern int FUN_002e6e26(void);
/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: _ZN9Obj55b28cD1Ev. */
/* Supplied declaration required: FUN_002e9f00. */
/* Supplied declaration required: FUN_002ea00c. */
/* Supplied declaration required: sharedRefHolderReplace. */


void FUN_002fb028(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  int uStack_18;
  unsigned int uStack_14;
  unsigned int uStack_10;
  
  *param_1 = (unsigned int)&DAT_0055970c;
  uStack_18 = param_2;
  uStack_14 = param_3;
  uStack_10 = param_4;
  if (*(char *)(param_1 + 4) == '\x01') {
    temp_v0 = FUN_002e6e26();
    FUN_002e6e34(&uStack_18,temp_v0 + 0x58);
    if (*(char *)(param_1 + 4) == '\x01') {
      FUN_002e9f00(param_1,4);
    }
    _ZN9Obj55b28cD1Ev(&uStack_18);
  }
  sharedRefHolderReplace(param_1,0);
  for (temp_v0 = param_1[0x18]; temp_v0 != param_1[0x19]; temp_v0 = temp_v0 + 4) {
  }
  asdOperatorDeleteArray();
  FUN_002ea00c(param_1);
  return;
}

} /* extern "C" */
