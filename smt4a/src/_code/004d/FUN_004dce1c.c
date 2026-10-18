/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004dce1c` (_code @ 0x4dce1c, 0x294 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

extern unsigned int DAT_00571248; /* 0x571248 */
extern unsigned int DAT_0057124c; /* 0x57124c */
extern unsigned int DAT_00571260; /* 0x571260 */
extern unsigned int DAT_00571264; /* 0x571264 */
extern unsigned int DAT_00571288; /* 0x571288 */
extern unsigned int DAT_0057128c; /* 0x57128c */
extern int DAT_00571508; /* 0x571508 */
extern int DAT_00573808; /* 0x573808 */
extern int DAT_00573898; /* 0x573898 */

extern int FUN_001633a0(unsigned int);
extern int FUN_002626e0(void);
/* Supplied declaration required: FUN_00408184. */
/* Supplied declaration required: FUN_004c67d0. */
/* Supplied declaration required: FUN_004d7a70. */
/* Supplied declaration required: FUN_004d7fe4. */
extern int FUN_004d84e8(int);
extern int FUN_004f2708(int, int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_004f9450. */
/* Supplied declaration required: FUN_004fb670. */
/* Supplied declaration required: FUN_004fbeac. */
/* Supplied declaration required: FUN_004fd508. */
/* Supplied declaration required: FUN_004feecc. */


void FUN_004dce1c(int *param_1,unsigned int *param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 goto(s); 9 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  
  param_2[0x15b] = 0;
  temp_v5 = *param_1;
  temp_v7 = DAT_00571264 & *(unsigned int *)(temp_v5 + 0x45a4);
  if (((DAT_00571260 & *(unsigned int *)(temp_v5 + 0x45a0)) == 0 && temp_v7 == 0) &&
     ((*(unsigned int *)(temp_v5 + 0x10c) & 0x40000) != 0)) {
    if ((*param_2 & 0x2000) == 0) {
      FUN_004fbeac(0,param_2,0,5,0);
      return;
    }
  }
  else if ((*param_2 & 0x2000) == 0) {
    if ((-1 < *(int *)(DAT_00571508 + 0x7cc)) &&
       (temp_v5 = FUN_004f2708(DAT_00571508,temp_v5,1,temp_v7,param_4), temp_v5 != 0)) {
      FUN_004fb670(0,0);
    }
    FUN_004feecc(1,0);
  }
  temp_v5 = 0;
  FUN_004fd508(0,param_2,0xf,param_2[9]);
  FUN_004c67d0();
  temp_v1 = FUN_001633a0(99);
  temp_v0 = *(char *)(*param_1 + 0x45ba) + '\x01';
  *(char *)(*param_1 + 0x45ba) = temp_v0;
  if (temp_v0 == -1) {
    temp_v0 = -1;
  }
  *(char *)(*param_1 + 0x45ba) = temp_v0;
  if ((*(unsigned int *)(DAT_00573808 + 0x339c) & 0x400) != 0) {
    FUN_004f9450();
  }
  temp_v2 = *(int *)(*param_1 + 0x2358);
  temp_v3 = FUN_002626e0();
  temp_v4 = *param_1;
  if (*(int *)(temp_v4 + 0xa8) != 4) {
    if (((*(unsigned int *)(temp_v4 + 0x45a4) & DAT_00571264) == 0 &&
        (*(unsigned int *)(temp_v4 + 0x45a0) & DAT_00571260) == 0) &&
        (temp_v3 != 0 || (temp_v2 != 3 && temp_v5 <= temp_v1))) {
LAB_004dd034:
      FUN_00408184(5,1);
      *(unsigned int *)(*param_1 + 0xa8) = 0;
      temp_v5 = *param_1;
      temp_v6 = DAT_00571248 | *(unsigned int *)(temp_v5 + 0x45a0);
      temp_v7 = DAT_0057124c | *(unsigned int *)(temp_v5 + 0x45a4);
      *(unsigned int *)(temp_v5 + 0x45a4) = temp_v7;
      *(unsigned int *)(temp_v5 + 0x45a0) = temp_v6;
      temp_v5 = *param_1;
      temp_v6 = temp_v6 | DAT_00571288;
      *(unsigned int *)(temp_v5 + 0x45a4) = temp_v7 | DAT_0057128c;
      *(unsigned int *)(temp_v5 + 0x45a0) = temp_v6;
      FUN_004fbeac(0,param_2,0,1,0);
      return;
    }
  }
  else if ((*(unsigned int *)(temp_v4 + 0x10c) & 0x40000) != 0) {
    *(unsigned int *)(temp_v4 + 0xa8) = 0;
    goto LAB_004dd034;
  }
  FUN_00408184(4,1);
  *(unsigned int *)(*param_1 + 0xa8) = 4;
  temp_v5 = FUN_004d84e8(DAT_00573898);
  if (temp_v5 != 0) {
    return;
  }
  temp_v5 = DAT_00573898;
  FUN_004d7a70(DAT_00573898,6,0xffffffff,0);
  if (temp_v5 != 0) {
    FUN_004d7fe4(DAT_00573898);
    return;
  }
  FUN_004fbeac(0,param_2,0,1,0);
  return;
}
