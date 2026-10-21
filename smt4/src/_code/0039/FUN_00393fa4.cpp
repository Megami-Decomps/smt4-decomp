/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00393fa4` (_code @ 0x393fa4, 0x170 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int aocTexExpandCompressedData(int, unsigned int, int);
int asdTextureEntryApply(int);
int FUN_002a6e2c(int, int);
int asdTextureCreate(void);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

extern unsigned char LAB_00394114; /* 0x394114 */

/* Supplied declaration required: aocTexExpandCompressedData. */
/* Supplied declaration required: asdTextureEntryApply. */
/* Supplied declaration required: FUN_002a6e2c. */
/* Supplied declaration required: asdTextureCreate. */
extern int rt_memcmp(int, unsigned char *, unsigned int);


void FUN_00393fa4(unsigned int *param_1,int *param_2)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  
  temp_v4 = *param_2;
  temp_v5 = param_2[2];
  temp_v3 = *(int *)*param_1;
  if (*(char *)(*(int *)(temp_v3 + 4) + 0xd) != '\0') {
    temp_v2 = 1;
    if ((*(unsigned int *)(temp_v3 + 0x10) & 0x10000) != 0) {
      temp_v2 = 3;
    }
    aocTexExpandCompressedData(temp_v4,temp_v2,0x80);
  }
  temp_v0 = rt_memcmp(temp_v4,&LAB_00394114,4);
  if (temp_v0 != 0) {
    return;
  }
  if (*(int *)(temp_v4 + 0x24) != 0) {
    *(unsigned int *)(temp_v3 + 8) = 0;
  }
  else {
    temp_v1 = (unsigned int)((*(unsigned int *)(temp_v3 + 0x10) & 0x10000) != 0);
    asdTextureCreate();
    *(unsigned int *)(temp_v3 + 8) = temp_v1;
    *(unsigned int *)(temp_v1 + 4) = *(unsigned int *)(temp_v4 + 8);
    *(unsigned int *)(*(int *)(temp_v3 + 8) + 0x14) = *(unsigned int *)(temp_v4 + 0xc);
    *(unsigned int *)(*(int *)(temp_v3 + 8) + 0x18) = *(unsigned int *)(temp_v4 + 0x10);
    *(unsigned int *)(*(int *)(temp_v3 + 8) + 0x1c) = *(unsigned int *)(temp_v4 + 0x18);
    *(unsigned int *)(*(int *)(temp_v3 + 8) + 0x20) = *(unsigned int *)(temp_v4 + 0x14);
    *(int *)(*(int *)(temp_v3 + 8) + 0x28) = temp_v5 - *(int *)(temp_v4 + 0x20);
    *(unsigned int *)(*(int *)(temp_v3 + 8) + 0x2c) = *(unsigned int *)(*(int *)(temp_v3 + 8) + 0x2c) | 0x10;
    if (*(int *)(temp_v4 + 4) == 1) {
      *(unsigned int *)(*(int *)(temp_v3 + 8) + 0x3c) = 1;
      *(unsigned int *)(*(int *)(temp_v3 + 8) + 0x40) = 1;
    }
    *(int *)(*(int *)(temp_v3 + 8) + 0x24) = *(int *)(temp_v4 + 0x20) + temp_v4;
  }
  temp_v1 = *(unsigned int *)(temp_v3 + 0x10);
  *(unsigned int *)(temp_v3 + 0x10) = (temp_v1 & 0xfffffffe) | 2;
  *(int *)(temp_v3 + 0xc) = temp_v4;
  if ((temp_v1 & 0x60) != 0) {
    if ((temp_v1 & 0x20) != 0) {
      FUN_002a6e2c(temp_v3,0x20000);
    }
    else {
      FUN_002a6e2c(temp_v3,0x30000);
    }
  }
  asdTextureEntryApply(temp_v3);
  return;
}

} /* extern "C" */
