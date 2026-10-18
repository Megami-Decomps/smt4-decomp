/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fc580` (_code @ 0x2fc580, 0x1a0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_6: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_6_stack;

extern int FUN_0024eed4(int, unsigned int);
/* Supplied declaration required: FUN_002a515c. */
/* Supplied declaration required: FUN_002a8978. */
/* Supplied declaration required: FUN_002a8ab0. */
/* Supplied declaration required: FUN_002bf8d4. */
/* Supplied declaration required: FUN_002c0ac8. */
extern int FUN_002c0ba8(unsigned int);


void FUN_002fc580(int param_1,unsigned int param_2,int param_3,unsigned int param_4,unsigned int param_5,
                 unsigned int param_6)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  unsigned int temp_v1;
  
  temp_v1 = param_4;
  temp_v0 = FUN_002c0ba8(0x522);
  if ((temp_v0 != 0) && (param_1 == 0)) {
    return;
  }
  puVar2 = (unsigned int *)FUN_002c0ac8(param_1);
  *(unsigned char *)(puVar2 + 0xc) = 1;
  FUN_002a8978();
  puVar2[2] = param_2;
  temp_v0 = FUN_0024eed4(param_1,param_2);
  if (temp_v0 == 0) {
    puVar2[9] = 0;
    if (puVar2[0x1e] != 0) {
      puVar2[0x1e] = 1;
      return;
    }
    *(unsigned char *)(puVar2 + 0xc) = 0;
    puVar2[10] = 0;
    return;
  }
  if (temp_v0 == 1) {
    FUN_002a8ab0(puVar2,2,0);
    puVar2[0x1e] = 2;
    return;
  }
  if (temp_v0 != 2) {
    if (temp_v0 != 3) {
      return;
    }
    FUN_002a8ab0(puVar2,5,0);
    temp_v0 = FUN_002c0ac8(param_1);
    *(unsigned int *)(temp_v0 + 0x78) = 1;
    *(unsigned int *)(temp_v0 + 0x4c) = *(unsigned int *)(temp_v0 + 0x34);
    *(unsigned int *)(temp_v0 + 0x50) = *(unsigned int *)(temp_v0 + 0x38);
    *(unsigned int *)(temp_v0 + 0x54) = *(unsigned int *)(temp_v0 + 0x3c);
    FUN_002a515c(puVar2 + 0x10,puVar2[2],*(unsigned int *)(temp_v0 + 0x38),temp_v1);
    return;
  }
  if (param_3 != 0) {
    if (param_3 != 1) {
      if (param_3 == 2) {
        FUN_002bf8d4(*puVar2,param_4,param_5,param_6,0xffffffff);
        FUN_002a8ab0(puVar2,7,0);
        puVar2[0x1e] = 2;
        return;
      }
      if (param_3 != 3) {
        puVar2[0x1e] = 2;
        return;
      }
      FUN_002bf8d4(*puVar2,param_4,param_5,param_6,0xffffffff);
    }
    FUN_002a8ab0(puVar2,6,0);
  }
  else {
    FUN_002a8ab0(puVar2,7,0);
  }
  puVar2[0x1e] = 2;
  return;
}
