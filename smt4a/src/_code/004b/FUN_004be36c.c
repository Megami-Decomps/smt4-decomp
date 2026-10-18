/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004be36c` (_code @ 0x4be36c, 0x12c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_3: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_3_stack;

extern int DAT_0059dbb4; /* 0x59dbb4 */

/* Supplied declaration required: FUN_001677c0. */
extern int FUN_00169294(unsigned int, unsigned int, unsigned int);
extern int FUN_001834a4(unsigned int, int);
/* Supplied declaration required: FUN_001835b4. */


void FUN_004be36c(int param_1,int param_2,int param_3)

{
/* irregular: 2 native warning(s); review required */
  short temp_v0;
  short temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int *piVar6;
  
  if ((-1 < *(int *)(param_1 + 0x32c)) && (*(int *)(param_1 + 8) != 2)) {
    temp_v2 = FUN_001834a4(0x11,*(int *)(param_1 + 0x32c) + 0xae);
    temp_v0 = *(short *)(temp_v2 + 8);
    temp_v1 = *(short *)(temp_v2 + 10);
    FUN_001677c0();
    temp_v2 = DAT_0059dbb4;
    temp_v3 = FUN_00169294(6,1,0);
    piVar6 = (int *)(temp_v2 + 0x12b8);
    temp_v4 = piVar6[*piVar6 + 2];
    piVar6[*piVar6 + 2] = temp_v3;
    if (*(char *)(temp_v2 + 0x12d0) != '\0' || temp_v4 != temp_v3) {
      (**(romwright_code **)(temp_v2 + 0x12d4))();
      *(unsigned char *)(temp_v2 + 0x12d0) = 0;
    }
    FUN_001835b4(2,0x11,0x10,temp_v0 + param_2,param_3 + temp_v1,0x79);
    temp_v2 = DAT_0059dbb4;
    temp_v3 = FUN_00169294(6,7,0);
    piVar6 = (int *)(temp_v2 + 0x12b8);
    temp_v4 = piVar6[*piVar6 + 2];
    piVar6[*piVar6 + 2] = temp_v3;
    if (*(char *)(temp_v2 + 0x12d0) != '\0' || temp_v4 != temp_v3) {
      (**(romwright_code **)(temp_v2 + 0x12d4))();
      *(unsigned char *)(temp_v2 + 0x12d0) = 0;
    }
    FUN_001677c0();
    return;
  }
  return;
}
