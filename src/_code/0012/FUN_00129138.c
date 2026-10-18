/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00129138` (_code @ 0x129138, 0x15c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp28; /* 0x28: local_28 */
} param_2_stack;

extern unsigned char DAT_004e8568; /* 0x4e8568 */
extern unsigned char DAT_004ead10; /* 0x4ead10 */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_00139bac. */
extern int FUN_00139bd8(int *);
extern int FUN_00139c04(int, unsigned int);
/* Supplied declaration required: FUN_00139fd8. */
/* Supplied declaration required: FUN_0013a1d4. */
/* Supplied declaration required: FUN_0013a480. */
/* Supplied declaration required: FUN_0013a62c. */
/* Supplied declaration required: FUN_002b5a04. */
/* Supplied declaration required: FUN_002b5b38. */
extern int FUN_002bb5b4(void);
/* Supplied declaration required: FUN_002bb7b0. */
/* Supplied declaration required: FUN_002c3b00. */
/* Supplied declaration required: FUN_002c5468. */


int FUN_00129138(int *param_1,int param_2)

{
/* irregular: 11 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  int temp_v1 [2];
  int temp_v2 [3];
  
  piVar2 = temp_v1;
  temp_v0 = FUN_002bb5b4();
  if (temp_v0 == 0) {
    return -0x375f57ff;
  }
  if ((char)param_1[0x4c6] == '\0') {
    temp_v1[0] = 0;
    FUN_002b5a04(temp_v1,1);
    if (-1 < (int)piVar2) {
      piVar2 = (int *)0x0;
      *param_1 = temp_v1[0];
    }
    if ((int)piVar2 < 0) {
      FUN_002c5468();
    }
    temp_v0 = FUN_00139c04(*param_1,2);
    if (temp_v0 < 0) {
      if (*param_1 == 0) {
        return temp_v0;
      }
      software_interrupt(0x23);
      *param_1 = 0;
      return temp_v0;
    }
    temp_v2[0] = 0;
    temp_v0 = FUN_00139bd8(temp_v2);
    if ((temp_v0 < 0) || (temp_v2[0] == 0)) {
      return temp_v0;
    }
    param_1[1] = temp_v2[0];
    FUN_00139bac(0x2000);
    FUN_002c3b00(param_1 + 2);
    FUN_0013a62c(param_1,param_2);
    if (param_2 != 0) {
      FUN_00139fd8(&DAT_004e8568);
      FUN_0013a480(&DAT_004ead10);
      FUN_002bb7b0();
      FUN_002b5b38();
      FUN_0013a1d4();
    }
    else {
      *(unsigned char *)(param_1 + 0x56b) = 1;
      param_1[5] = 0;
    }
  }
  return 0;
}
