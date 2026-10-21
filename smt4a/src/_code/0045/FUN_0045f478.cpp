/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0045f478` (_code @ 0x45f478, 0x1ac bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int listAppendNode(int, int);
int FUN_0017fc38(int *);
int objectCommandReserveWords(int, int);

typedef int romwright_code(...);
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern int objectCommandQueueGet(void);
/* Supplied declaration required: listAppendNode. */
/* Supplied declaration required: FUN_0017fc38. */
/* Supplied declaration required: objectCommandReserveWords. */


void FUN_0045f478(int *param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  float temp_v4;
  float temp_v5;
  float temp_v6;
  float temp_v7;
  float temp_v8;
  float temp_v9;
  float temp_v10;
  float temp_v11;
  int temp_v12;
  
  (**(romwright_code **)(*param_1 + 0x2c))(param_1);
  temp_v6 = 0.0f;
  temp_v4 = temp_v6;
  if (*(char *)((int)param_1 + 0xa2) != '\x02') {
    temp_v4 = (float)param_1[0x32] * 1.0f;
    temp_v5 = *(float *)(param_1[4] + 0x3c) * temp_v4;
    FUN_0017fc38(param_1 + 0x2e);
    temp_v5 = temp_v4 * temp_v5;
    FUN_0017fc38(param_1 + 0x1a);
    temp_v5 = temp_v4 * temp_v5;
    FUN_0017fc38(param_1 + 0x1e);
    temp_v5 = temp_v4 * temp_v5;
    FUN_0017fc38(param_1 + 0x22);
    temp_v4 = (float)param_1[0x16] * (float)param_1[0xc] * temp_v4 * temp_v5;
  }
  temp_v0 = param_1[4];
  temp_v8 = (float)param_1[0xf] + (float)param_1[0x3a];
  temp_v3 = (int)*(char *)((int)param_1 + 0x9e);
  temp_v12 = param_1[0x36];
  temp_v9 = (float)param_1[0x17] * (float)param_1[0xd] * (float)param_1[0x34];
  temp_v5 = (float)param_1[0x18] + (float)param_1[0xe] + (float)param_1[0x33];
  temp_v11 = (float)param_1[0x19] +
           *(float *)(temp_v0 + 0x40) + (float)param_1[0x11] + (float)param_1[0x35];
  if (temp_v3 == -1) {
    temp_v3 = *(int *)(temp_v0 + 0x44);
    temp_v12 = *(int *)(temp_v0 + 0x48);
    if (temp_v3 == -1) {
      temp_v3 = param_1[0x13];
      temp_v12 = param_1[0x12];
    }
  }
  temp_v10 = *(float *)(temp_v0 + 0x4c) + (float)param_1[0x37];
  temp_v7 = temp_v6 + (float)param_1[0x39] + *(float *)(temp_v0 + 0x54);
  temp_v6 = temp_v6 + (float)param_1[0x38] + *(float *)(temp_v0 + 0x50) + (float)param_1[0x10];
  temp_v1 = objectCommandQueueGet();
  temp_v0 = temp_v1;
  objectCommandReserveWords(temp_v1,0xf);
  *(unsigned int *)(temp_v0 + 0xc) = *(unsigned int *)(temp_v1 + 0x184);
  *(unsigned char *)(temp_v0 + 4) = 8;
  temp_v2 = (**(romwright_code **)(*param_1 + 0x20))(param_1);
  *(unsigned int *)(temp_v0 + 0x10) = temp_v2;
  *(float *)(temp_v0 + 0x14) = temp_v4;
  *(float *)(temp_v0 + 0x18) = temp_v9;
  *(float *)(temp_v0 + 0x24) = temp_v11;
  *(float *)(temp_v0 + 0x1c) = temp_v5;
  *(float *)(temp_v0 + 0x20) = temp_v8;
  *(int *)(temp_v0 + 0x28) = temp_v3;
  *(int *)(temp_v0 + 0x2c) = temp_v12;
  *(float *)(temp_v0 + 0x30) = temp_v10;
  *(float *)(temp_v0 + 0x34) = temp_v6;
  *(float *)(temp_v0 + 0x38) = temp_v7;
  listAppendNode(temp_v1,temp_v0);
  return;
}

} /* extern "C" */
