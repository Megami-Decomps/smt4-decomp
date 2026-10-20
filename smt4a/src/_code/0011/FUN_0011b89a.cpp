/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011b89a` (_code @ 0x11b89a, 0xd6 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001213a2(unsigned int);
int FUN_002e6e34(unsigned char [12], int);
int FUN_002e6e5c(unsigned char [12]);
int FUN_002eaa50(...);
int FUN_002eabe8(...);
int FUN_00311724(int);

/* stack frame of param_2: 3 slot(s), 10 byte(s) */
typedef struct {
    unsigned short sp18; /* 0x18: local_18 */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
} param_2_stack;

/* Supplied declaration required: FUN_001213a2. */
/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: FUN_002e6e5c. */
/* Supplied declaration required: FUN_002eaa50. */
/* Supplied declaration required: FUN_002eabe8. */
/* Supplied declaration required: FUN_00311724. */


void FUN_0011b89a(int param_1,unsigned int param_2)

{
/* irregular: 6 native warning(s); review required */
  unsigned short *puVar1;
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned short *puVar4;
  unsigned short *puVar5;
  int temp_v2;
  int temp_v3;
  unsigned char temp_v4 [12];
  unsigned short temp_v5;
  int temp_v6;
  int iStack_1c;
  unsigned int temp_v7;
  
  iStack_1c = param_1;
  temp_v7 = param_2;
  FUN_002e6e34(temp_v4,param_1 + 8);
  temp_v5 = temp_v7;
  for (puVar5 = *(unsigned short **)(param_1 + 0x40);
      (puVar5 != *(unsigned short **)(param_1 + 0x44) && (*puVar5 != temp_v5)); puVar5 = puVar5 + 6) {
  }
  if (*(unsigned short **)(param_1 + 0x44) != puVar5) {
    temp_v3 = *(int *)(puVar5 + 2);
    temp_v6 = param_1 + temp_v3 + 0x20;
    *(unsigned char *)(param_1 + temp_v3 + 0x3a) = 1;
    *(unsigned int *)(param_1 + 0x3c) = temp_v5;
    FUN_001213a2(*(unsigned int *)(puVar5 + 4));
    puVar1 = *(unsigned short **)(param_1 + 0x44);
    if (*(unsigned short **)(param_1 + 0x40) != puVar1) {
      puVar4 = puVar5 + 6;
      if (puVar1 != puVar4) {
        for (; puVar4 != puVar1; puVar4 = puVar4 + 6) {
          temp_v0 = *(unsigned int *)(puVar4 + 2);
          temp_v1 = *(unsigned int *)(puVar4 + 4);
          *(unsigned int *)puVar5 = *(unsigned int *)puVar4;
          *(unsigned int *)(puVar5 + 2) = temp_v0;
          *(unsigned int *)(puVar5 + 4) = temp_v1;
          puVar5 = puVar5 + 6;
        }
      }
      *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) - 0xc;
    }
    *(unsigned char *)(temp_v6 + 0x18) = 0;
    *(unsigned char *)(param_1 + 5) = 1;
    temp_v2 = temp_v3 * 4 + param_1;
    FUN_002eaa50(*(unsigned int *)(temp_v2 + 0x4c));
    temp_v3 = temp_v3 * 8 + param_1;
    *(unsigned short *)(temp_v3 + 0x54) = 0;
    *(unsigned int *)(temp_v3 + 0x58) = 0;
    *(unsigned char *)(temp_v6 + 0x1a) = 0;
    FUN_002eabe8(*(unsigned int *)(temp_v2 + 0x4c));
    FUN_002eaa50();
    for (puVar5 = *(unsigned short **)(param_1 + 100);
        (puVar5 != *(unsigned short **)(param_1 + 0x68) && (*puVar5 != temp_v5)); puVar5 = puVar5 + 4) {
    }
    FUN_00311724(param_1 + 100);
    *(unsigned int *)(param_1 + 0x3c) = 0xffffffff;
    FUN_002eabe8(param_1 + 0x70);
    *(unsigned char *)(param_1 + 5) = 0;
  }
  FUN_002e6e5c(temp_v4);
  return;
}

} /* extern "C" */
