/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003dfa2c` (_code @ 0x3dfa2c, 0xb4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
} param_3_stack;


unsigned int * FUN_003dfa2c(char *param_1,unsigned int *param_2,int param_3)

{
  char temp_v0;
  int temp_v1;
  int *piVar3;
  unsigned int *puVar4;
  char *pcVar5;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned char temp_v5;
  unsigned char temp_v6;
  
  temp_v0 = *param_1;
  *param_2 = 0xe40100;
  if (temp_v0 != '\0') {
    param_2[1] = 0x30100;
    param_2[2] = (*(unsigned int *)(param_1 + 1) & 0xffffff) | ((unsigned int)(unsigned char)param_1[5] << 0x14) |
                 ((unsigned int)(unsigned char)param_1[4] << 0x18) | ((unsigned int)(unsigned char)param_1[6] << 0x1c);
    param_2[3] = 0xf0101;
    param_2[4] = 6;
    param_2[5] = 0xf0102;
    param_2[6] = (*(unsigned int *)(param_1 + 7) & 0xffffff) | ((unsigned int)(unsigned char)param_1[10] << 0x18);
    puVar4 = param_2 + 8;
    param_2[7] = 0xf0103;
  }
  else {
    param_2[1] = 0x30100;
    param_2[2] = 0x1010000;
    puVar4 = param_2 + 4;
    param_2[3] = 0xf0101;
  }
  if (param_3 == 0) {
    return puVar4;
  }
  piVar3 = (int *)(*(int *)(param_1 + 0xc) + 0x7c);
  *puVar4 = 1;
  puVar4[1] = 0xf0111;
  puVar4[2] = 1;
  puVar4[3] = 0xf0110;
  pcVar5 = (char *)*piVar3;
  if (pcVar5[0x18] != '\0') {
    puVar4[4] = 0xf;
    puVar4[5] = 0x10112;
    puVar4[6] = 0xf;
    puVar4[7] = 0x10113;
    puVar4[8] = 0;
    puVar4[9] = 0x10114;
    puVar4[10] = 0;
    puVar4[0xb] = 0x10115;
    return puVar4 + 0xc;
  }
  temp_v0 = pcVar5[0x50];
  if (temp_v0 != '\0') {
    temp_v5 = temp_v0 == '\x0f';
    if (temp_v5) {
      temp_v0 = *pcVar5;
    }
    temp_v6 = temp_v5 && temp_v0 == '\0';
    if (temp_v5 && temp_v0 == '\0') {
      temp_v6 = pcVar5[0x10] == '\0';
    }
    if (!temp_v6) {
      temp_v2 = 0xf;
    }
    else {
      temp_v2 = 0;
    }
  }
  else {
    temp_v2 = 0;
  }
  puVar4[4] = temp_v2;
  puVar4[5] = 0x10112;
  temp_v2 = 0;
  if (*(char *)(*piVar3 + 0x50) != '\0') {
    temp_v2 = 0xf;
  }
  puVar4[6] = temp_v2;
  temp_v3 = 0;
  puVar4[7] = 0x10113;
  temp_v1 = *piVar3;
  temp_v4 = 0;
  if (*(char *)(temp_v1 + 0x54) != '\0') {
    if (*(char *)(temp_v1 + 0x55) != '\0') {
      temp_v3 = 2;
      temp_v4 = temp_v3;
    }
    else if (*(char *)(temp_v1 + 0x50) != '\0') {
      temp_v3 = 2;
    }
  }
  if (*(char *)(temp_v1 + 0x38) != '\0') {
    if (*(char *)(temp_v1 + 0x39) != '\0') {
      temp_v3 = temp_v3 | 1;
      temp_v4 = temp_v4 | 1;
    }
    else if (*(char *)(temp_v1 + 0x50) != '\0') {
      temp_v3 = temp_v3 | 1;
    }
  }
  puVar4[8] = temp_v3;
  puVar4[9] = 0x10114;
  puVar4[10] = temp_v4;
  puVar4[0xb] = 0x10115;
  return puVar4 + 0xc;
}
