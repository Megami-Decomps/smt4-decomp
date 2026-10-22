/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00426fe4` (_code @ 0x426fe4, 0x19c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int sysFatalBreak(void);
int _ZN18WindowStatusResultC1Ej(...);
int FUN_00426800(int *, unsigned char [24], int);
int FUN_00427360(int *, int *);
int FUN_00429d58(...);
int handleRequestSubmit(int *, int, unsigned int, int, int, int, int, int *, int, int);

/* stack frame of param_3: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
} param_3_stack;

/* Supplied declaration required: sysFatalBreak. */
/* Supplied declaration required: _ZN18WindowStatusResultC1Ej. */
/* Supplied declaration required: FUN_00426800. */
/* Supplied declaration required: FUN_00427360. */
/* Supplied declaration required: FUN_00429d58. */
/* Supplied declaration required: handleRequestSubmit. */


void FUN_00426fe4(unsigned int param_1,int *param_2,unsigned int *param_3)

{
/* irregular: 6 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int *piVar4;
  int *piVar5;
  unsigned char temp_v3 [24];
  int iStack_20;
  
  if (*param_2 != 0 || param_2[1] != 0) {
    FUN_00429d58();
    *param_2 = 0;
    param_2[1] = 0;
  }
  if ((char)param_3[1] != '\0') {
    _ZN18WindowStatusResultC1Ej(param_1,0xe0e13883);
    return;
  }
  temp_v1 = *param_3;
  temp_v0 = *(unsigned char *)((int)param_3 + 5);
  temp_v2 = 0;
  if (*(char *)((int)param_3 + 6) != '\0') {
    if (*(char *)((int)param_3 + 6) == '\x01') {
      temp_v2 = 2;
    }
    else {
      sysFatalBreak();
      temp_v2 = 0;
    }
  }
  piVar4 = &iStack_20;
  FUN_00426800(piVar4,temp_v3,1);
  piVar5 = (int *)0xd881388a;
  if (piVar4 != (int *)0xd8a083fa) {
    if ((int)piVar4 < 0) {
      _ZN18WindowStatusResultC1Ej(param_1,piVar4);
      return;
    }
    piVar4 = param_2;
    handleRequestSubmit(param_2,1,(unsigned int)temp_v0 | ((temp_v1 & 0xfffff) << 8) | (temp_v2 << 0x1c),0x4008c,0,1,1,
                 param_2 + 2,0x40,0);
    if (((((unsigned int)piVar4 & 0x3fc00) != 0x4400) || (((unsigned int)piVar4 & 0x3ff) < 100)) ||
       (((unsigned int)piVar4 & 0x3ff) >= 0xb4)) {
      if ((int)piVar4 < 0) {
        _ZN18WindowStatusResultC1Ej(param_1,piVar4);
        return;
      }
      piVar5 = param_2;
      FUN_00427360(param_2,piVar4);
      if (-1 < (int)piVar5) {
        _ZN18WindowStatusResultC1Ej(param_1,0);
        return;
      }
      FUN_00429d58(*param_2,param_2[1]);
    }
    *param_2 = 0;
    param_2[1] = 0;
  }
  _ZN18WindowStatusResultC1Ej(param_1,piVar5);
  return;
}

} /* extern "C" */
