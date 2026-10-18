/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00234b30` (_code @ 0x234b30, 0x168 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
} param_3_stack;

/* Supplied declaration required: FUN_0023a308. */
/* Supplied declaration required: FUN_002bad80. */
/* Supplied declaration required: FUN_003522ec. */
/* Supplied declaration required: FUN_00352b30. */
/* Supplied declaration required: FUN_00354f64. */


void FUN_00234b30(unsigned int param_1,int *param_2,unsigned int *param_3)

{
/* irregular: 5 native warning(s); review required */
  unsigned char temp_v0;
  int *piVar2;
  unsigned int temp_v1;
  int *piVar4;
  unsigned char temp_v2 [24];
  int iStack_20;
  
  if (*param_2 != 0 || param_2[1] != 0) {
    FUN_0023a308();
    *param_2 = 0;
    param_2[1] = 0;
  }
  if ((char)param_3[1] != '\0') {
    FUN_002bad80(param_1,0xe0e13883);
    return;
  }
  temp_v1 = *param_3;
  temp_v0 = *(unsigned char *)((int)param_3 + 5);
  piVar2 = &iStack_20;
  FUN_003522ec(piVar2,temp_v2,1);
  piVar4 = (int *)0xd881388a;
  if (piVar2 != (int *)0xd8a083fa) {
    if ((int)piVar2 < 0) {
      FUN_002bad80(param_1,piVar2);
      return;
    }
    piVar2 = param_2;
    FUN_00354f64(param_2,1,(unsigned int)temp_v0 | ((temp_v1 & 0xff0fffff) << 8),0x4008c,0,1,1,param_2 + 2,0x40,
                 0);
    if (((((unsigned int)piVar2 & 0x3fc00) != 0x4400) || (((unsigned int)piVar2 & 0x3ff) < 100)) ||
       (((unsigned int)piVar2 & 0x3ff) >= 0xb4)) {
      if ((int)piVar2 < 0) {
        FUN_002bad80(param_1,piVar2);
        return;
      }
      piVar4 = param_2;
      FUN_00352b30(param_2,piVar2);
      if (-1 < (int)piVar4) {
        FUN_002bad80(param_1,0);
        return;
      }
      FUN_0023a308(*param_2,param_2[1]);
    }
    *param_2 = 0;
    param_2[1] = 0;
  }
  FUN_002bad80(param_1,piVar4);
  return;
}
