/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00485108` (_code @ 0x485108, 0x190 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_3: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_3_stack;

extern int DAT_0059dbb4; /* 0x59dbb4 */

/* Supplied declaration required: FUN_001677c0. */
extern int FUN_00169294(unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_001835b4. */


void FUN_00485108(int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int *piVar3;
  int temp_v2;
  
  FUN_001677c0();
  FUN_001835b4(2,0x23,0x153,param_2,param_3,0x1f);
  FUN_001835b4(2,0x23,0x154,param_2,param_3,0x1f);
  FUN_001835b4(2,0x23,0x150,param_2,param_3,0x24);
  FUN_001677c0();
  temp_v2 = DAT_0059dbb4;
  temp_v0 = FUN_00169294(6,1,0);
  piVar3 = (int *)(temp_v2 + 0x12b8);
  temp_v1 = piVar3[*piVar3 + 2];
  piVar3[*piVar3 + 2] = temp_v0;
  if (*(char *)(temp_v2 + 0x12d0) != '\0' || temp_v1 != temp_v0) {
    (**(romwright_code **)(temp_v2 + 0x12d4))();
    *(unsigned char *)(temp_v2 + 0x12d0) = 0;
  }
  temp_v2 = 0;
  do {
    FUN_001835b4(2,0x23,temp_v2 + 0x155,param_2,param_3,0x29);
    temp_v0 = DAT_0059dbb4;
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 4);
  temp_v2 = FUN_00169294(6,7,0);
  piVar3 = (int *)(temp_v0 + 0x12b8);
  temp_v1 = piVar3[*piVar3 + 2];
  piVar3[*piVar3 + 2] = temp_v2;
  if (*(char *)(temp_v0 + 0x12d0) != '\0' || temp_v1 != temp_v2) {
    (**(romwright_code **)(temp_v0 + 0x12d4))();
    *(unsigned char *)(temp_v0 + 0x12d0) = 0;
  }
  if (0 < *(short *)(param_1 + 0x560)) {
    FUN_001835b4(2,0x23,0x159,param_2,param_3,0x29);
  }
  FUN_001677c0();
  return;
}
