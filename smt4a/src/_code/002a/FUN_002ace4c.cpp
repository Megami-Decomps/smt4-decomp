/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ace4c` (_code @ 0x2ace4c, 0x170 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001677c0(void);
int FUN_001835b4(int, int, int, int, int, unsigned int);

typedef int romwright_code(...);
/* stack frame of param_5: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp38; /* 0x38: local_38 */
} param_5_stack;

extern int DAT_0059dbb4; /* 0x59dbb4 */

/* Supplied declaration required: FUN_001677c0. */
extern int FUN_00169294(unsigned int, unsigned int, unsigned int);
extern int FUN_001834a4(unsigned int, int);
/* Supplied declaration required: FUN_001835b4. */


void FUN_002ace4c(int param_1,int param_2,int param_3,unsigned int param_4,int param_5)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int *piVar5;
  
  temp_v1 = FUN_001834a4(0x11,param_1 + 0x2d);
  temp_v0 = DAT_0059dbb4;
  temp_v2 = FUN_00169294(6,1,0);
  piVar5 = (int *)(temp_v0 + 0x12b8);
  temp_v3 = piVar5[*piVar5 + 2];
  piVar5[*piVar5 + 2] = temp_v2;
  if (*(char *)(temp_v0 + 0x12d0) != '\0' || temp_v3 != temp_v2) {
    (**(romwright_code **)(temp_v0 + 0x12d4))();
    *(unsigned char *)(temp_v0 + 0x12d0) = 0;
  }
  if (param_5 != 0) {
    FUN_001677c0();
    FUN_001835b4(2,0x11,0x10,*(short *)(temp_v1 + 8) + param_2,*(short *)(temp_v1 + 10) + param_3,
                 param_4);
    FUN_001677c0();
  }
  else {
    FUN_001677c0();
    FUN_001835b4(2,0x11,0xf,*(short *)(temp_v1 + 8) + param_2,*(short *)(temp_v1 + 10) + param_3,param_4
                );
    FUN_001677c0();
  }
  temp_v0 = DAT_0059dbb4;
  temp_v1 = FUN_00169294(6,7,0);
  piVar5 = (int *)(temp_v0 + 0x12b8);
  temp_v2 = piVar5[*piVar5 + 2];
  piVar5[*piVar5 + 2] = temp_v1;
  if (*(char *)(temp_v0 + 0x12d0) != '\0' || temp_v2 != temp_v1) {
    (**(romwright_code **)(temp_v0 + 0x12d4))();
    *(unsigned char *)(temp_v0 + 0x12d0) = 0;
  }
  return;
}

} /* extern "C" */
