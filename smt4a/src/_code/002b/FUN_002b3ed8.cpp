/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b3ed8` (_code @ 0x2b3ed8, 0xe0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int memAlloc(int, int, int, int, int, int);
int FUN_00300124(...);
int rt_memcpy_w(void);

/* stack frame of param_4: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_4_stack;

/* Supplied declaration required: memAlloc. */
/* Supplied declaration required: FUN_00300124. */
extern int FUN_00399c60(void);
/* Supplied declaration required: rt_memcpy_w. */


void FUN_002b3ed8(unsigned int *param_1,unsigned int *param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  
  temp_v0 = 0x10000;
  memAlloc(0x10000,0x100,0,0x68,0x10,1);
  temp_v1 = param_1[1];
  temp_v2 = param_1[2];
  temp_v3 = param_1[3];
  *(unsigned int *)(temp_v0 + 8) = *param_1;
  *(unsigned int *)(temp_v0 + 0xc) = temp_v1;
  *(unsigned int *)(temp_v0 + 0x10) = temp_v2;
  *(unsigned int *)(temp_v0 + 0x14) = temp_v3;
  temp_v1 = *param_2;
  temp_v2 = param_2[1];
  temp_v3 = param_2[2];
  temp_v4 = param_2[3];
  *(unsigned int *)(temp_v0 + 4) = 8;
  *(unsigned int *)(temp_v0 + 0x18) = temp_v1;
  *(unsigned int *)(temp_v0 + 0x1c) = temp_v2;
  *(unsigned int *)(temp_v0 + 0x20) = temp_v3;
  *(unsigned int *)(temp_v0 + 0x24) = temp_v4;
  *(unsigned int *)(temp_v0 + 0x28) = param_3;
  *(unsigned int *)(temp_v0 + 0x2c) = param_4;
  FUN_00300124(temp_v0,1);
  temp_v0 = FUN_00399c60();
  if (temp_v0 != 0) {
    temp_v1 = 0x10000;
    memAlloc(0x10000,0x100,0,0x68,0x10,1);
    rt_memcpy_w();
    FUN_00300124(temp_v1,2);
    return;
  }
  return;
}

} /* extern "C" */
