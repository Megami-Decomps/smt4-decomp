/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00151cd8` (_code @ 0x151ce0, 0x174 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int aocTexExpandCompressedData(int, unsigned int, int);
int asdTextureEntryApply(int);
int FUN_002a6e2c(int, int);
int asdTextureCreate(void);
int asdMemFree(int);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_3_stack;

extern unsigned char LAB_00151e54; /* 0x151e54 */

/* Supplied declaration required: aocTexExpandCompressedData. */
/* Supplied declaration required: asdTextureEntryApply. */
/* Supplied declaration required: FUN_002a6e2c. */
/* Supplied declaration required: asdTextureCreate. */
extern int rt_memcmp(int, unsigned char *, unsigned int);
/* Supplied declaration required: asdMemFree. */


void FUN_00151cd8(int param_1,int param_2,int param_3)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  if (*(char *)(*(int *)(param_2 + 4) + 0xd) != '\0') {
    temp_v2 = 1;
    if ((*(unsigned int *)(param_2 + 0x10) & 0x10000) != 0) {
      temp_v2 = 3;
    }
    aocTexExpandCompressedData(param_1,temp_v2,0x80);
  }
  temp_v0 = rt_memcmp(param_1,&LAB_00151e54,4);
  if (temp_v0 == 0) {
    if (*(int *)(param_1 + 0x24) != 0) {
      *(unsigned int *)(param_2 + 8) = 0;
    }
    else {
      temp_v1 = (unsigned int)((*(unsigned int *)(param_2 + 0x10) & 0x10000) != 0);
      asdTextureCreate();
      *(unsigned int *)(param_2 + 8) = temp_v1;
      *(unsigned int *)(temp_v1 + 4) = *(unsigned int *)(param_1 + 8);
      *(unsigned int *)(*(int *)(param_2 + 8) + 0x14) = *(unsigned int *)(param_1 + 0xc);
      *(unsigned int *)(*(int *)(param_2 + 8) + 0x18) = *(unsigned int *)(param_1 + 0x10);
      *(unsigned int *)(*(int *)(param_2 + 8) + 0x1c) = *(unsigned int *)(param_1 + 0x18);
      *(unsigned int *)(*(int *)(param_2 + 8) + 0x20) = *(unsigned int *)(param_1 + 0x14);
      *(int *)(*(int *)(param_2 + 8) + 0x28) = param_3 - *(int *)(param_1 + 0x20);
      *(unsigned int *)(*(int *)(param_2 + 8) + 0x2c) = *(unsigned int *)(*(int *)(param_2 + 8) + 0x2c) | 0x10;
      if (*(int *)(param_1 + 4) == 1) {
        *(unsigned int *)(*(int *)(param_2 + 8) + 0x3c) = 1;
        *(unsigned int *)(*(int *)(param_2 + 8) + 0x40) = 1;
      }
      *(int *)(*(int *)(param_2 + 8) + 0x24) = *(int *)(param_1 + 0x20) + param_1;
    }
    temp_v1 = *(unsigned int *)(param_2 + 0x10);
    *(unsigned int *)(param_2 + 0x10) = (temp_v1 & 0xfffffffe) | 2;
    *(int *)(param_2 + 0xc) = param_1;
    if ((temp_v1 & 0x60) != 0) {
      if ((temp_v1 & 0x20) != 0) {
        FUN_002a6e2c(param_2,0x20000);
      }
      else {
        FUN_002a6e2c(param_2,0x30000);
      }
    }
    asdTextureEntryApply(param_2);
    return;
  }
  asdMemFree(param_1);
  return;
}

} /* extern "C" */
