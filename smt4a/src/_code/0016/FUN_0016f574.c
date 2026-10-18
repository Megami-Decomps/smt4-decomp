/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0016f574` (_code @ 0x16f574, 0x16c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp28; /* 0x28: local_28 */
} param_2_stack;

extern unsigned char DAT_006449d0; /* 0x6449d0 */
extern unsigned char DAT_00647708; /* 0x647708 */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_0017fd20. */
/* Supplied declaration required: FUN_00188b60. */
/* Supplied declaration required: FUN_00189804. */
extern int FUN_00189830(int *);
extern int FUN_0018985c(int, unsigned int);
/* Supplied declaration required: FUN_00189de4. */
/* Supplied declaration required: FUN_00189fe0. */
/* Supplied declaration required: FUN_0018a28c. */
/* Supplied declaration required: FUN_0018a520. */
/* Supplied declaration required: FUN_001afd94. */
/* Supplied declaration required: FUN_001bd5f8. */
extern int FUN_001c6e20(void);
/* Supplied declaration required: FUN_002e3140. */


int FUN_0016f574(int *param_1,int param_2)

{
/* irregular: 11 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  int temp_v1 [2];
  int temp_v2 [3];
  
  piVar2 = temp_v1;
  temp_v0 = FUN_001c6e20();
  if (temp_v0 == 0) {
    return -0x375f57ff;
  }
  if ((char)param_1[0x4c6] == '\0') {
    temp_v1[0] = 0;
    if (*param_1 != 0) {
      piVar2 = (int *)0xe0a0183b;
    }
    else {
      FUN_0017fd20(temp_v1,1);
      if (-1 < (int)piVar2) {
        piVar2 = (int *)0x0;
        *param_1 = temp_v1[0];
      }
    }
    if ((int)piVar2 < 0) {
      FUN_002e3140();
    }
    temp_v0 = FUN_0018985c(*param_1,2);
    if (temp_v0 < 0) {
      if (*param_1 == 0) {
        return temp_v0;
      }
      software_interrupt(0x23);
      *param_1 = 0;
      return temp_v0;
    }
    temp_v2[0] = 0;
    temp_v0 = FUN_00189830(temp_v2);
    if ((temp_v0 < 0) || (temp_v2[0] == 0)) {
      return temp_v0;
    }
    param_1[1] = temp_v2[0];
    FUN_00189804(0x2000);
    FUN_00188b60(param_1 + 2);
    FUN_0018a520(param_1,param_2);
    if (param_2 != 0) {
      FUN_00189de4(&DAT_006449d0);
      FUN_0018a28c(&DAT_00647708);
      FUN_001bd5f8();
      FUN_001afd94();
      FUN_00189fe0();
    }
    else {
      *(unsigned char *)(param_1 + 0x56b) = 1;
      param_1[5] = 0;
    }
  }
  return 0;
}
