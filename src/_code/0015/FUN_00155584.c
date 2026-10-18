/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00155584` (_code @ 0x155584, 0x60 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002a84ec(int, int);
extern unsigned int *FUN_002acbd8(void);


int FUN_00155584(int param_1)

{
  int temp_v0;
  unsigned int *puVar2;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  
  if (*(char *)(param_1 + 300) == '\0') {
    temp_v0 = FUN_002a84ec(param_1 + 0xfc,param_1 + 0x8c);
    if (temp_v0 == 0) {
      puVar2 = (unsigned int *)FUN_002acbd8();
      temp_v1 = puVar2[1];
      temp_v2 = puVar2[2];
      temp_v3 = puVar2[3];
      temp_v4 = puVar2[4];
      temp_v5 = puVar2[5];
      temp_v6 = puVar2[6];
      temp_v7 = puVar2[7];
      *(unsigned int *)(param_1 + 0xfc) = *puVar2;
      *(unsigned int *)(param_1 + 0x100) = temp_v1;
      *(unsigned int *)(param_1 + 0x104) = temp_v2;
      *(unsigned int *)(param_1 + 0x108) = temp_v3;
      *(unsigned int *)(param_1 + 0x10c) = temp_v4;
      *(unsigned int *)(param_1 + 0x110) = temp_v5;
      *(unsigned int *)(param_1 + 0x114) = temp_v6;
      *(unsigned int *)(param_1 + 0x118) = temp_v7;
      temp_v1 = puVar2[8];
      temp_v2 = puVar2[9];
      temp_v3 = puVar2[10];
      *(unsigned int *)(param_1 + 0x128) = puVar2[0xb];
      *(unsigned int *)(param_1 + 0x11c) = temp_v1;
      *(unsigned int *)(param_1 + 0x120) = temp_v2;
      *(unsigned int *)(param_1 + 0x124) = temp_v3;
    }
    *(unsigned char *)(param_1 + 300) = 1;
  }
  return param_1 + 0xfc;
}
