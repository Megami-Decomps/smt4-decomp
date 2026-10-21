/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023a724` (_code @ 0x23a724, 0x1e8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003dfa2c(unsigned int *, unsigned int *, int);
int FUN_003dfaf0(unsigned int *, unsigned int *);
int gpuEmitDepthBufferCommands(unsigned int *, unsigned int *, int, int);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_3_stack;

/* Supplied declaration required: FUN_003dfa2c. */
/* Supplied declaration required: FUN_003dfaf0. */
/* Supplied declaration required: gpuEmitDepthBufferCommands. */


unsigned int * FUN_0023a724(unsigned int *param_1,unsigned int *param_2,int param_3)

{
/* irregular: 3 native warning(s); review required */
  char temp_v0;
  unsigned char temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int *puVar5;
  unsigned int *puVar6;
  unsigned int *puVar7;
  int *piVar8;
  char *pcVar9;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned char temp_v9;
  unsigned char temp_v10;
  
  temp_v3 = 0;
  if (*(char *)(param_1 + 0x17) != '\0') {
    if (*(char *)((int)param_1 + 0x5d) != '\0') {
      if ((*(char *)((int)param_1 + 0x5d) == '\x01') && (*(char *)((int)param_1 + 0x5e) == '\x01'))
      {
        temp_v3 = 2;
      }
      else {
        temp_v3 = 1;
      }
    }
    else if (*(char *)((int)param_1 + 0x5e) == '\0') {
      temp_v3 = 2;
    }
    else {
      temp_v3 = 1;
    }
  }
  *param_2 = temp_v3;
  param_2[1] = 0xf0040;
  puVar5 = param_1;
  FUN_003dfa2c(param_1,param_2 + 2,0);
  if (*(char *)(param_1 + 4) != '\0') {
    *puVar5 = 0xe40000;
    puVar5[1] = 0x30100;
    puVar5[2] = 0x1010000;
    puVar5[3] = 0xf0101;
    puVar7 = puVar5 + 5;
    puVar5[4] = (unsigned int)*(unsigned char *)((int)param_1 + 0x11);
    puVar5 = puVar5 + 6;
    *puVar7 = 0xf0102;
  }
  puVar6 = param_1 + 6;
  gpuEmitDepthBufferCommands(puVar6,puVar5,0,1);
  *puVar6 = (unsigned int)(*(char *)(param_1 + 0xc) != '\0') | ((unsigned int)*(unsigned char *)((int)param_1 + 0x32) << 4) |
            ((unsigned int)*(unsigned char *)((int)param_1 + 0x31) << 8);
  puVar6[1] = 0x30104;
  puVar6[2] = (unsigned int)(*(char *)(param_1 + 0xe) != '\0') | ((unsigned int)*(unsigned char *)(param_1 + 0xf) << 4) |
              ((unsigned int)*(unsigned char *)((int)param_1 + 0x39) << 8) | (param_1[0x10] << 0x10) |
              (param_1[0x11] << 0x18);
  puVar6[3] = 0xf0105;
  puVar6[4] = ((unsigned int)*(unsigned char *)((int)param_1 + 0x49) << 4) |
              ((unsigned int)*(unsigned char *)((int)param_1 + 0x4a) << 8) | (unsigned int)*(unsigned char *)(param_1 + 0x12);
  puVar6[5] = 0xf0106;
  temp_v1 = *(unsigned char *)(param_1[0x16] + 0x50);
  if ((temp_v1 & 1) == 0) {
    temp_v6 = 0;
  }
  else {
    temp_v6 = 0x100;
  }
  if ((temp_v1 & 2) == 0) {
    temp_v7 = 0;
  }
  else {
    temp_v7 = 0x200;
  }
  if ((temp_v1 & 4) == 0) {
    temp_v8 = 0;
  }
  else {
    temp_v8 = 0x400;
  }
  if ((temp_v1 & 8) == 0) {
    temp_v4 = 0;
  }
  else {
    temp_v4 = 0x800;
  }
  if (*(char *)((int)param_1 + 0x55) == '\0') {
    temp_v5 = 0;
  }
  else {
    temp_v5 = 0x1000;
  }
  puVar6[6] = temp_v5 | (unsigned int)(*(char *)(param_1 + 0x15) != '\0') |
                       ((unsigned int)*(unsigned char *)((int)param_1 + 0x56) << 4) | temp_v6 | temp_v7 | temp_v8 |
                       temp_v4;
  puVar6[7] = 0xf0107;
  puVar7 = param_1 + 0x19;
  FUN_003dfaf0(puVar7,puVar6 + 8);
  piVar8 = (int *)(param_1 + 0x1f);
  puVar5 = puVar7;
  if (param_3 != 0) {
    *puVar7 = 1;
    puVar7[1] = 0xf0111;
    puVar5 = puVar7 + 4;
    puVar7[2] = 1;
    puVar7[3] = 0xf0110;
  }
  pcVar9 = (char *)*piVar8;
  if (pcVar9[0x18] != '\0') {
    *puVar5 = 0xf;
    puVar5[1] = 0x10112;
    puVar5[2] = 0xf;
    puVar5[3] = 0x10113;
    puVar5[4] = 0;
    puVar5[5] = 0x10114;
    puVar5[6] = 0;
    puVar5[7] = 0x10115;
    return puVar5 + 8;
  }
  temp_v0 = pcVar9[0x50];
  if (temp_v0 != '\0') {
    temp_v9 = temp_v0 == '\x0f';
    if (temp_v9) {
      temp_v0 = *pcVar9;
    }
    temp_v10 = temp_v9 && temp_v0 == '\0';
    if (temp_v9 && temp_v0 == '\0') {
      temp_v10 = pcVar9[0x10] == '\0';
    }
    if (!temp_v10) {
      temp_v3 = 0xf;
    }
    else {
      temp_v3 = 0;
    }
  }
  else {
    temp_v3 = 0;
  }
  *puVar5 = temp_v3;
  puVar5[1] = 0x10112;
  temp_v3 = 0;
  if (*(char *)(*piVar8 + 0x50) != '\0') {
    temp_v3 = 0xf;
  }
  puVar5[2] = temp_v3;
  temp_v7 = 0;
  puVar5[3] = 0x10113;
  temp_v2 = *piVar8;
  temp_v6 = 0;
  if (*(char *)(temp_v2 + 0x54) != '\0') {
    if (*(char *)(temp_v2 + 0x55) != '\0') {
      temp_v7 = 2;
      temp_v6 = temp_v7;
    }
    else if (*(char *)(temp_v2 + 0x50) != '\0') {
      temp_v7 = 2;
    }
  }
  if (*(char *)(temp_v2 + 0x38) != '\0') {
    if (*(char *)(temp_v2 + 0x39) != '\0') {
      temp_v7 = temp_v7 | 1;
      temp_v6 = temp_v6 | 1;
    }
    else if (*(char *)(temp_v2 + 0x50) != '\0') {
      temp_v7 = temp_v7 | 1;
    }
  }
  puVar5[4] = temp_v7;
  puVar5[5] = 0x10114;
  puVar5[6] = temp_v6;
  puVar5[7] = 0x10115;
  return puVar5 + 8;
}

} /* extern "C" */
