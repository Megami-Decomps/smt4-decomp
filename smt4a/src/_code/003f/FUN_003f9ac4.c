/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f9ac4` (_code @ 0x3f9ac4, 0x140 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp48; /* 0x48: local_48 */
} param_3_stack;

/* Supplied declaration required: FUN_001986c4. */
/* Supplied declaration required: FUN_00198848. */
/* Supplied declaration required: FUN_0019eb14. */
/* Supplied declaration required: FUN_00522a08. */


unsigned char FUN_003f9ac4(int param_1,unsigned int *param_2,int param_3)

{
/* irregular: irregular input(s): in_s0; 4 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int *puVar4;
  unsigned char temp_v3;
  float in_s0;
  int temp_v4;
  unsigned int uStack_44;
  unsigned int uStack_40;
  unsigned int uStack_3c;
  unsigned int uStack_38;
  unsigned int uStack_34;
  unsigned int temp_v5;
  unsigned int uStack_2c;
  unsigned int temp_v6;
  
  temp_v2 = *(int *)(*(int *)(*(int *)(param_1 + 0x34) + 0x90) + param_3 * 4);
  temp_v1 = *(int *)(*(int *)(*(int *)(param_1 + 0x34) + 0x48) + param_3 * 4);
  temp_v0 = *(char *)(temp_v2 + 0x1a);
  puVar4 = *(unsigned int **)(temp_v1 + 0x34);
  temp_v3 = temp_v0 == -1;
  if (temp_v3) {
    temp_v0 = *(char *)(temp_v2 + 0x1c);
  }
  if ((temp_v3 && temp_v0 == -1) && (*(unsigned char *)(temp_v2 + 0x1e) == 0xff)) {
    temp_v3 = 0;
  }
  else {
    temp_v4 = *(unsigned int *)(temp_v1 + 4);
    uStack_44 = *(unsigned int *)(temp_v1 + 8);
    uStack_40 = *(unsigned int *)(temp_v1 + 0xc);
    uStack_3c = *(unsigned int *)(temp_v1 + 0x10);
    uStack_38 = *(unsigned int *)(temp_v1 + 0x14);
    uStack_34 = *(unsigned int *)(temp_v1 + 0x18);
    temp_v5 = *(unsigned int *)(temp_v1 + 0x1c);
    uStack_2c = *(unsigned int *)(temp_v1 + 0x20);
    temp_v6 = *(unsigned int *)(temp_v1 + 0x24);
    if (*(unsigned char *)(temp_v2 + 0x1a) != 0xff) {
      FUN_001986c4(*(unsigned int *)(*(int *)(temp_v2 + 0xc) + (unsigned int)*(unsigned char *)(temp_v2 + 0x1a) * 4),
                   &temp_v4);
    }
    if (*(unsigned char *)(temp_v2 + 0x1c) != 0xff) {
      FUN_00522a08(*(unsigned int *)(*(int *)(temp_v2 + 0xc) + (unsigned int)*(unsigned char *)(temp_v2 + 0x1c) * 4),
                   param_2 + 0xd);
    }
    if (*(unsigned char *)(temp_v2 + 0x1e) != 0xff) {
      FUN_00198848(*(unsigned int *)(*(int *)(temp_v2 + 0xc) + (unsigned int)*(unsigned char *)(temp_v2 + 0x1e) * 4),
                   param_2 + 0xe);
    }
    *param_2 = temp_v5;
    param_2[1] = uStack_2c;
    param_2[2] = temp_v6;
    param_2[10] = *puVar4;
    param_2[0xb] = puVar4[1];
    param_2[0xc] = puVar4[2];
    *(float *)&param_2[9] = (float)puVar4[3] * 57.295776f;
    FUN_0019eb14(param_2);
    in_s0 = *(float *)(param_1 + 0x38) + in_s0;
    *(float *)(param_1 + 0x38) = in_s0;
    temp_v3 = in_s0 <= *(float *)(temp_v2 + 8);
    if (*(float *)(temp_v2 + 8) < in_s0) {
      *(unsigned int *)(param_1 + 0x38) = 0;
    }
  }
  return temp_v3;
}
