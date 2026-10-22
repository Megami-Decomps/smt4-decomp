/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00128ee6` (_code @ 0x128ee6, 0x76 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0013400a(int, int, int *);
int FUN_001341d4(int, unsigned int);
int _ZN9Obj55aff4D1Ev(int *);
int _ZN9Obj55aff4C1Ev(int *);
int FUN_002fbc1a(int, int *);
int clearStringVector(...);
int FUN_0030d3ba(int, int);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

/* Supplied declaration required: FUN_0013400a. */
/* Supplied declaration required: FUN_001341d4. */
/* Supplied declaration required: _ZN9Obj55aff4D1Ev. */
/* Supplied declaration required: _ZN9Obj55aff4C1Ev. */
extern int streamReadU32(int, unsigned int *);
/* Supplied declaration required: FUN_002fbc1a. */
/* Supplied declaration required: clearStringVector. */
/* Supplied declaration required: FUN_0030d3ba. */


void FUN_00128ee6(int param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int iStack_20;
  unsigned int uStack_1c;
  unsigned int temp_v2;
  
  iStack_20 = param_2;
  uStack_1c = param_3;
  temp_v2 = param_4;
  clearStringVector(param_2);
  temp_v0 = streamReadU32(param_1,&temp_v2);
  if (temp_v0 != 0) {
    FUN_001341d4(param_2,temp_v2);
    for (temp_v1 = 0; temp_v1 < temp_v2; temp_v1 = temp_v1 + 1) {
      if (*(char *)(param_1 + 4) != '\0') {
        return;
      }
      _ZN9Obj55aff4C1Ev(&iStack_20);
      FUN_002fbc1a(param_1,&iStack_20);
      if (*(char *)(param_1 + 4) != '\0') {
        clearStringVector();
        _ZN9Obj55aff4D1Ev(&iStack_20);
        return;
      }
      temp_v0 = *(int *)(param_2 + 4);
      if (temp_v0 != *(int *)(param_2 + 8)) {
        *(int *)(param_2 + 4) = temp_v0 + 8;
        FUN_0030d3ba(param_2,temp_v0);
      }
      else {
        FUN_0013400a(param_2,temp_v0,&iStack_20);
      }
      _ZN9Obj55aff4D1Ev(&iStack_20);
    }
  }
  return;
}

} /* extern "C" */
