/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004ecd7c` (_code @ 0x4ecd7c, 0x168 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_2_stack;

extern unsigned int DAT_00571148; /* 0x571148 */
extern unsigned int DAT_0057114c; /* 0x57114c */
extern unsigned int DAT_00571168; /* 0x571168 */
extern unsigned int DAT_0057116c; /* 0x57116c */
extern unsigned int DAT_00571178; /* 0x571178 */
extern unsigned int DAT_0057117c; /* 0x57117c */
extern unsigned int DAT_00571230; /* 0x571230 */
extern unsigned int DAT_00571234; /* 0x571234 */

/* Supplied declaration required: FUN_00203d04. */
extern int FUN_002619e0(void);
/* Supplied declaration required: FUN_00272584. */
/* Supplied declaration required: FUN_004c8b10. */


void FUN_004ecd7c(int *param_1,int param_2)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int *puVar7;
  
  temp_v0 = *param_1;
  temp_v5 = -1;
  temp_v2 = 0;
  if (!((*(unsigned int *)(temp_v0 + 0x45a0) & DAT_00571230) == 0 &&
       (DAT_00571234 & *(unsigned int *)(temp_v0 + 0x45a4)) == 0)) {
    do {
      puVar7 = (unsigned int *)(*(int *)(temp_v0 + 0x1ffc) + temp_v2 * 0x408);
      temp_v3 = *puVar7;
      temp_v4 = puVar7[1];
      if (((((temp_v3 & DAT_00571148) != 0 || (temp_v4 & DAT_0057114c) != 0) &&
           ((temp_v3 & DAT_00571178) == 0 && (temp_v4 & DAT_0057117c) == 0)) && (-1 < (short)puVar7[2]))
         && ((temp_v4 & DAT_0057116c) != 0 || (temp_v3 & DAT_00571168) != 0)) {
        temp_v5 = (int)(short)puVar7[2];
        break;
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 0x6d);
  }
  else {
    do {
      temp_v1 = (int)*(short *)(*(int *)(temp_v0 + 0x1ed4) + temp_v2 * 0x1d0 + 0x68);
      if ((-1 < temp_v1) && (*(char *)(temp_v1 + param_2 + 0x38) != '\0')) {
        temp_v5 = (int)*(short *)(*(int *)(temp_v0 + 0x1ed4) + temp_v2 * 0x1d0 + 0x6a);
        break;
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 0x6d);
  }
  temp_v0 = FUN_002619e0();
  if (temp_v0 != 0) {
    FUN_00203d04(1);
  }
  FUN_004c8b10();
  FUN_00272584(*param_1,param_2,0,temp_v5);
  return;
}
