/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023466c` (_code @ 0x23466c, 0x118 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;

extern unsigned int *DAT_0058104c; /* 0x58104c */

extern unsigned int FUN_00187180(unsigned int, unsigned int);
extern int FUN_0018719c(void);
/* Supplied declaration required: FUN_00192748. */
/* Supplied declaration required: FUN_00192798. */
extern int FUN_00365bc4(int);
/* Supplied declaration required: FUN_003fd63c. */


void FUN_0023466c(int param_1,int param_2)

{
/* irregular: 3 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int *piVar7;
  unsigned char temp_v5;
  
  temp_v0 = FUN_00187180(0x43,0);
  FUN_00192798();
  temp_v1 = FUN_00192748(temp_v0);
  temp_v4 = 0;
  if ((int)temp_v4 < temp_v1) {
    do {
      temp_v0 = FUN_00187180(0x43,0);
      temp_v2 = FUN_00192798();
      temp_v3 = FUN_00192748(temp_v0);
      piVar7 = (int *)0x0;
      if (temp_v4 < temp_v3) {
        piVar7 = (int *)(temp_v2 + temp_v4 * 0x20);
      }
      temp_v2 = piVar7[1];
      temp_v5 = temp_v2 == 7;
      if (temp_v5) {
        temp_v2 = *piVar7;
      }
      if ((((temp_v5 && temp_v2 == param_1) &&
           (((short)piVar7[2] == 0 || (temp_v2 = FUN_0018719c(), temp_v2 != 0)))) &&
          ((*(short *)((int)piVar7 + 10) == 0 || (temp_v2 = FUN_0018719c(), temp_v2 == 0)))) &&
         ((short)piVar7[3] == param_2)) {
        temp_v1 = FUN_00365bc4((int)(short)piVar7[4]);
        puVar1 = DAT_0058104c;
        DAT_0058104c[1] = 0;
        *puVar1 = 9;
        temp_v2 = *piVar7;
        puVar1[5] = temp_v1 + 0x24;
        puVar1[6] = temp_v2;
        puVar1[7] = temp_v1 + 4;
        FUN_003fd63c((int)*(short *)((int)piVar7 + 10),1);
        return;
      }
      temp_v4 = temp_v4 + 1;
    } while ((int)temp_v4 < temp_v1);
  }
  return;
}
