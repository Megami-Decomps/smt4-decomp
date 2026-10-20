/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00313590` (_code @ 0x313590, 0x15c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0024b77c(int);
int FUN_0024b830(int);
int FUN_002c32a0(int, int, int, int, int, int);
int VectorSignedToFloat(int, int);
int aeabi_uidivmod(void);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp48; /* 0x48: local_48 */
} param_1_stack;

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_0024b77c. */
/* Supplied declaration required: FUN_0024b830. */
/* Supplied declaration required: FUN_002c32a0. */
/* Supplied declaration required: aeabi_uidivmod. */


int FUN_00313590(int *param_1)

{
/* irregular: irregular input(s): in_fpscr; 6 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int *puVar4;
  int temp_v4;
  unsigned int in_fpscr;
  float temp_v5;
  float temp_v6;
  float temp_v7;
  float temp_v8;
  float temp_v9;
  float temp_v10;
  float temp_v11;
  unsigned int temp_v12;
  unsigned long long temp_v13;
  
  temp_v4 = *param_1;
  temp_v0 = 0x10000;
  FUN_002c32a0(0x10000,0x100,0,temp_v4 * 0x34,0x10,1);
  temp_v3 = 0;
  if (0 < temp_v4) {
    temp_v12 = 0xc0490fdb;
    temp_v10 = 0.5f;
    temp_v11 = 2.0f;
    temp_v13 = 0x408487ee;
    do {
      puVar4 = (unsigned int *)(temp_v0 + temp_v3 * 0x34);
      FUN_0024b77c(0);
      aeabi_uidivmod();
      *puVar4 = temp_v1;
      puVar4[1] = temp_v12;
      puVar4[4] = param_1[4];
      puVar4[5] = param_1[5];
      temp_v2 = param_1[3];
      *(char *)(puVar4 + 3) = (char)temp_v2;
      *(char *)((int)puVar4 + 0xd) = (char)((unsigned int)temp_v2 >> 8);
      *(char *)((int)puVar4 + 0xe) = (char)((unsigned int)temp_v2 >> 0x10);
      *(char *)((int)puVar4 + 0xf) = (char)((unsigned int)temp_v2 >> 0x18);
      temp_v9 = (float)param_1[9];
      temp_v5 = (float)VectorSignedToFloat(param_1[10],(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v7 = temp_v5 * temp_v10;
      FUN_0024b830(0);
      temp_v5 = (temp_v5 - temp_v10) * temp_v11;
      temp_v8 = (float)param_1[7] + temp_v9 * temp_v5;
      FUN_0024b830(0);
      temp_v6 = (float)param_1[8];
      *(float *)&puVar4[7] = temp_v8;
      temp_v3 = temp_v3 + 1;
      temp_v6 = temp_v6 + temp_v9 * (temp_v5 - temp_v10) * temp_v11;
      *(float *)&puVar4[8] = temp_v6;
      puVar4[9] = temp_v8 - temp_v7;
      puVar4[10] = temp_v6 - temp_v7;
      puVar4[0xb] = temp_v8 + temp_v7;
      puVar4[0xc] = temp_v6 + temp_v7;
      puVar4[1] = (int)temp_v13;
    } while (temp_v3 < temp_v4);
  }
  return temp_v0;
}

} /* extern "C" */
