/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004abc68` (_code @ 0x4abc68, 0x158 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_4: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_4_stack;

extern int DAT_0059dbb4; /* 0x59dbb4 */

/* Supplied declaration required: FUN_001677c0. */
extern int FUN_00169294(unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_0018152c. */
extern int FUN_001834a4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_001835b4. */


void FUN_004abc68(unsigned int param_1,int param_2,int param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int *piVar3;
  int temp_v2;
  
  FUN_001677c0();
  FUN_001835b4(2,0xc,0x83,param_2,param_3,0xb);
  FUN_001835b4(2,0xc,0x84,param_2,param_3,0x10);
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
    FUN_001835b4(2,0xc,temp_v2 + 0x80,param_2,param_3,0x15);
    temp_v0 = DAT_0059dbb4;
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 3);
  temp_v2 = FUN_00169294(6,7,0);
  piVar3 = (int *)(temp_v0 + 0x12b8);
  temp_v1 = piVar3[*piVar3 + 2];
  piVar3[*piVar3 + 2] = temp_v2;
  if (*(char *)(temp_v0 + 0x12d0) != '\0' || temp_v1 != temp_v2) {
    (**(romwright_code **)(temp_v0 + 0x12d4))();
    *(unsigned char *)(temp_v0 + 0x12d0) = 0;
  }
  temp_v2 = FUN_001834a4(0xc,0x85);
  FUN_0018152c(param_4,*(short *)(temp_v2 + 8) + param_2,*(short *)(temp_v2 + 10) + param_3,0x1a,0);
  FUN_001677c0();
  return;
}
