/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f13c2` (_code @ 0x2f13c2, 0x7c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_3: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp28; /* 0x28: local_28 */
} param_3_stack;

extern int FUN_002e7168(int, unsigned int);
extern int FUN_002eb530(int);
extern int FUN_002eb5e8(unsigned char *, unsigned int);
extern int FUN_002f4258(void);


int FUN_002f13c2(int param_1,unsigned int param_2,unsigned int param_3)

{
  unsigned short temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned char temp_v3 [8];
  int temp_v4;
  int iStack_20;
  unsigned int uStack_1c;
  unsigned int temp_v5;
  
  *(unsigned int *)(param_1 + 4) = 0;
  *(unsigned int *)(param_1 + 0x14) = 0;
  *(unsigned int *)(param_1 + 0x18) = 0;
  *(unsigned char *)(param_1 + 0x1c) = 0;
  *(char *)(param_1 + 0x1d) = (char)param_2;
  *(unsigned int *)(param_1 + 0x10) = 0;
  *(unsigned int *)(param_1 + 0xc) = 0;
  *(unsigned int *)(param_1 + 8) = 0;
  iStack_20 = param_1;
  uStack_1c = param_2;
  temp_v5 = param_3;
  temp_v1 = FUN_002f4258();
  *(int *)(param_1 + 0x14) = temp_v1;
  *(unsigned int *)(temp_v1 + 4) = 0;
  *(int *)(*(int *)(param_1 + 0x14) + 8) = *(int *)(param_1 + 0x14);
  *(int *)(*(int *)(param_1 + 0x14) + 0xc) = *(int *)(param_1 + 0x14);
  temp_v1 = FUN_002eb530(param_1 + 0x24);
  temp_v1 = FUN_002eb530(temp_v1 + 8);
  temp_v1 = FUN_002eb530(temp_v1 + 8);
  temp_v1 = FUN_002e7168(temp_v1 + 0x10,0x20000000);
  *(short *)(temp_v1 - 0x24) = (short)param_2;
  temp_v4 = temp_v1 - 0x20;
  temp_v2 = FUN_002eb5e8(temp_v3,1);
  temp_v0 = *(unsigned short *)(temp_v2 + 4);
  *(unsigned short *)(temp_v4 + 4) = temp_v0;
  *(unsigned short *)(temp_v1 - 0x14) = temp_v0;
  *(unsigned short *)(temp_v1 - 0xc) = temp_v0;
  *(unsigned int *)(temp_v1 - 8) = 0;
  *(unsigned int *)(temp_v1 - 4) = temp_v5;
  return temp_v1 - 0x44;
}

} /* extern "C" */
