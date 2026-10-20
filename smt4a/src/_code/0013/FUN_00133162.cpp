/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00133162` (_code @ 0x133162, 0xc0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6e14(int);
int vectorCount8_002f1352(int *);
int FUN_00307cc0(...);
int FUN_00307ce2(...);
int FUN_0030fe08(int *, int, int);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_3_stack;

extern int rt_malloc(void);
/* Supplied declaration required: FUN_002e6e14. */
/* Supplied declaration required: vectorCount8_002f1352. */
/* Supplied declaration required: FUN_00307cc0. */
/* Supplied declaration required: FUN_00307ce2. */
/* Supplied declaration required: FUN_0030fe08. */


void FUN_00133162(int *param_1,int param_2,int param_3)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  int *piVar7;
  
  temp_v0 = param_1[2];
  temp_v4 = *param_1;
  piVar7 = param_1;
  temp_v3 = param_2;
  temp_v1 = vectorCount8_002f1352(param_1);
  if (temp_v1 < (unsigned int)((temp_v0 - temp_v4) >> 3)) {
    temp_v0 = param_1[1];
    param_1[1] = temp_v0 + 8;
    FUN_00307ce2(param_1,temp_v0);
    temp_v3 = temp_v0;
    while (param_2 != temp_v3 - 8) {
      *(unsigned short *)(temp_v0 - 4) = *(unsigned short *)(temp_v3 - 0xc);
      temp_v0 = temp_v0 - 8;
      temp_v3 = temp_v3 - 8;
    }
    *(unsigned short *)(param_2 + 4) = *(unsigned short *)(param_3 + 4);
    return;
  }
  temp_v2 = vectorCount8_002f1352(param_1);
  temp_v5 = (temp_v2 >> 1) + temp_v2 + (temp_v2 >> 3);
  temp_v1 = temp_v2 + 0x20;
  if (temp_v2 + 0x20 <= temp_v5) {
    temp_v1 = temp_v5;
  }
  temp_v0 = rt_malloc();
  FUN_00307cc0(*param_1,param_2,temp_v0,param_1,piVar7,temp_v3);
  FUN_00307ce2(param_1,((param_2 - *param_1) & 0xfffffff8U) + temp_v0,param_3);
  FUN_00307cc0(param_2,param_1[1],((param_2 - *param_1) & 0xfffffff8U) + temp_v0 + 8,param_1);
  temp_v3 = vectorCount8_002f1352(param_1);
  FUN_0030fe08(param_1,*param_1,param_1[1]);
  FUN_002e6e14(*param_1);
  *param_1 = temp_v0;
  param_1[2] = temp_v1 * 8 + temp_v0;
  param_1[1] = temp_v3 * 8 + temp_v0 + 8;
  return;
}

} /* extern "C" */
