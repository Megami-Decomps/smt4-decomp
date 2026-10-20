/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00359c78` (_code @ 0x359c78, 0x144 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00164b5c(int, int, int, int, unsigned int, int);
int FUN_001677c0(void);
int FUN_001835b4(int, int, int, int, unsigned int, int);
int FUN_00183bb0(void);

typedef int romwright_code(...);
/* stack frame of param_3: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_3_stack;

extern int DAT_0059dbb4; /* 0x59dbb4 */

/* Supplied declaration required: FUN_00164b5c. */
/* Supplied declaration required: FUN_001677c0. */
extern int FUN_00169294(unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: FUN_00183bb0. */


void FUN_00359c78(int param_1,int param_2,unsigned int param_3)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int *piVar5;
  
  FUN_00183bb0();
  FUN_00164b5c(2,0x2e,0xb,param_2,param_3,0x6a);
  FUN_001677c0();
  temp_v0 = DAT_0059dbb4;
  temp_v1 = FUN_00169294(6,1,0);
  piVar5 = (int *)(temp_v0 + 0x12b8);
  temp_v2 = *piVar5;
  temp_v3 = piVar5[temp_v2 + 2];
  *piVar5 = temp_v2 + 1;
  piVar5[temp_v2 + 3] = temp_v1;
  if (*(char *)(temp_v0 + 0x12d0) != '\0' || temp_v3 != temp_v1) {
    (**(romwright_code **)(temp_v0 + 0x12d4))();
    *(unsigned char *)(temp_v0 + 0x12d0) = 0;
  }
  FUN_00164b5c(2,0x2e,0xc,param_2,param_3,0x6b);
  temp_v0 = DAT_0059dbb4;
  piVar5 = (int *)(DAT_0059dbb4 + 0x12b8);
  temp_v1 = *piVar5;
  temp_v2 = piVar5[temp_v1 + 2];
  *piVar5 = temp_v1 - 1;
  if (*(char *)(temp_v0 + 0x12d0) != '\0' || temp_v2 != piVar5[temp_v1 + 1]) {
    (**(romwright_code **)(temp_v0 + 0x12d4))(piVar5[temp_v1 + 1]);
    *(unsigned char *)(temp_v0 + 0x12d0) = 0;
  }
  FUN_00183bb0();
  FUN_001677c0();
  FUN_001835b4(2,0x2e,0x92,*(int *)(param_1 + 4) + param_2,param_3,0x6c);
  return;
}

} /* extern "C" */
