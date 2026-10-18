/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0041c45c` (_code @ 0x41c45c, 0x108 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_2: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_2_stack;

extern int DAT_0059dbb4; /* 0x59dbb4 */

/* Supplied declaration required: FUN_00164b5c. */
/* Supplied declaration required: FUN_001677c0. */
extern int FUN_00169294(unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_00183bb0. */


void FUN_0041c45c(int *param_1,int param_2)

{
/* irregular: 3 native warning(s); review required */
  short temp_v0;
  short temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  int *piVar9;
  
  temp_v2 = DAT_0059dbb4;
  temp_v0 = *(short *)(param_2 + 8);
  temp_v1 = *(short *)(param_2 + 10);
  temp_v6 = *param_1;
  temp_v7 = param_1[1];
  temp_v3 = FUN_00169294(6,1,0);
  piVar9 = (int *)(temp_v2 + 0x12b8);
  temp_v4 = *piVar9;
  temp_v5 = piVar9[temp_v4 + 2];
  *piVar9 = temp_v4 + 1;
  piVar9[temp_v4 + 3] = temp_v3;
  if (*(char *)(temp_v2 + 0x12d0) != '\0' || temp_v5 != temp_v3) {
    (**(romwright_code **)(temp_v2 + 0x12d4))();
    *(unsigned char *)(temp_v2 + 0x12d0) = 0;
  }
  FUN_001677c0();
  FUN_00183bb0();
  FUN_00164b5c(2,0x2b,6,temp_v6 + temp_v0,temp_v7 + temp_v1,2);
  temp_v2 = DAT_0059dbb4;
  piVar9 = (int *)(DAT_0059dbb4 + 0x12b8);
  temp_v3 = *piVar9;
  temp_v4 = piVar9[temp_v3 + 2];
  *piVar9 = temp_v3 - 1;
  if (*(char *)(temp_v2 + 0x12d0) != '\0' || temp_v4 != piVar9[temp_v3 + 1]) {
    (**(romwright_code **)(temp_v2 + 0x12d4))();
    *(unsigned char *)(temp_v2 + 0x12d0) = 0;
  }
  FUN_001677c0();
  return;
}
