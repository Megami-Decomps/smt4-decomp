/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00416d30` (_code @ 0x416d30, 0x120 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00100388. */
extern unsigned int FUN_0014bf3c(unsigned short, unsigned int);
/* Supplied declaration required: FUN_00180118. */
/* Supplied declaration required: FUN_00184310. */
extern int FUN_00187010(unsigned int);
extern unsigned int FUN_00187180(unsigned int, unsigned int);
extern unsigned int FUN_00192748(unsigned int);
extern char *FUN_00192798(void);
/* Supplied declaration required: FUN_002804b0. */
/* Supplied declaration required: FUN_002e342c. */
/* Supplied declaration required: FUN_003180c4. */


void FUN_00416d30(int param_1)

{
/* irregular: 6 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  char *pcVar5;
  unsigned int temp_v4;
  unsigned char temp_v5 [32];
  unsigned char temp_v6 [68];
  
  FUN_002804b0("battle/Result.bf",param_1 + 0x18,0);
  FUN_002804b0("battle/ResultMsg.mbm",param_1 + 0x20,0);
  if ((-1 < (int)*(unsigned int *)(param_1 + 0x34)) &&
     (temp_v1 = FUN_00187010(*(unsigned int *)(param_1 + 0x34) & 0xffff), temp_v1 != 0)) {
    temp_v2 = (unsigned int)*(unsigned short *)(temp_v1 + 0x62);
    FUN_00180118(temp_v2);
    FUN_002e342c(temp_v5,temp_v2);
    FUN_003180c4(8,temp_v5);
    temp_v3 = FUN_0014bf3c(*(unsigned short *)(temp_v1 + 0x62),0);
    FUN_002e342c(temp_v5,temp_v3);
    FUN_003180c4(0x10,temp_v5);
    FUN_002804b0("battle/DevilLvUp.bf",param_1 + 0x24,0);
    temp_v2 = (unsigned int)*(unsigned short *)(temp_v1 + 0x62);
    FUN_00184310();
    temp_v0 = *(char *)(temp_v2 + 0x38);
    temp_v3 = FUN_00187180(0x25,0);
    pcVar5 = (char *)FUN_00192798();
    temp_v2 = FUN_00192748(temp_v3);
    temp_v4 = 0;
    if (temp_v4 < temp_v2) {
      do {
        if (*pcVar5 == temp_v0) {
          FUN_00100388(temp_v6,"battle/DevilMsg/%s.mbm",pcVar5 + 1);
          FUN_002804b0(temp_v6,param_1 + 0x2c,0);
          return;
        }
        temp_v4 = temp_v4 + 1;
        pcVar5 = pcVar5 + 0x20;
      } while (temp_v4 < temp_v2);
    }
    pcVar5 = (char *)0x0;
    FUN_00100388(temp_v6,"battle/DevilMsg/%s.mbm",pcVar5 + 1);
    FUN_002804b0(temp_v6,param_1 + 0x2c,0);
  }
  return;
}
