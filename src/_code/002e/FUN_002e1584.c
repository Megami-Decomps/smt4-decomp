/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e1584` (_code @ 0x2e1584, 0x144 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_3: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_3_stack;

extern int DAT_0044ea00; /* 0x44ea00 */

/* Supplied declaration required: FUN_002bef14. */
/* Supplied declaration required: FUN_002bf460. */
/* Supplied declaration required: FUN_002bf558. */
/* Supplied declaration required: FUN_002bf710. */
extern int FUN_002c5fa4(unsigned int, unsigned int, unsigned int);


void FUN_002e1584(int param_1,int param_2,unsigned int param_3)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int *piVar5;
  
  FUN_002bef14();
  FUN_002bf558(2,0x39,0xb,param_2,param_3,0x74);
  FUN_002bf710();
  temp_v0 = DAT_0044ea00;
  temp_v1 = FUN_002c5fa4(6,1,0);
  piVar5 = (int *)(temp_v0 + 0x12ac);
  temp_v2 = *piVar5;
  temp_v3 = piVar5[temp_v2 + 2];
  *piVar5 = temp_v2 + 1;
  piVar5[temp_v2 + 3] = temp_v1;
  if (*(char *)(temp_v0 + 0x12c4) != '\0' || temp_v3 != temp_v1) {
    (**(romwright_code **)(temp_v0 + 0x12c8))();
    *(unsigned char *)(temp_v0 + 0x12c4) = 0;
  }
  FUN_002bf558(2,0x39,0xc,param_2,param_3,0x75);
  temp_v0 = DAT_0044ea00;
  piVar5 = (int *)(DAT_0044ea00 + 0x12ac);
  temp_v1 = *piVar5;
  temp_v2 = piVar5[temp_v1 + 2];
  *piVar5 = temp_v1 - 1;
  if (*(char *)(temp_v0 + 0x12c4) != '\0' || temp_v2 != piVar5[temp_v1 + 1]) {
    (**(romwright_code **)(temp_v0 + 0x12c8))(piVar5[temp_v1 + 1]);
    *(unsigned char *)(temp_v0 + 0x12c4) = 0;
  }
  FUN_002bef14();
  FUN_002bf710();
  FUN_002bf460(2,0x39,0x92,*(int *)(param_1 + 4) + param_2,param_3,0x76);
  return;
}
