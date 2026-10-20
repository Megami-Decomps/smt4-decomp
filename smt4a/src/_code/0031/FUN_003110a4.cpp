/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003110a4` (_code @ 0x3110a4, 0x74 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002feac0(int, int *);
int FUN_002fec68(unsigned char *, int);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

extern int rt_malloc(unsigned int);
extern int FUN_002e995c(int);
extern int FUN_002f5928(unsigned char *, unsigned int);
/* Supplied declaration required: FUN_002feac0. */
/* Supplied declaration required: FUN_002fec68. */


int FUN_003110a4(unsigned char *param_1,unsigned int param_2,int param_3,int param_4)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1 = param_1 + 4;
  temp_v4 = param_4;
  FUN_002fec68(param_1,param_3);
  param_1 = param_1 + 0x20;
  FUN_002fec68(param_1,param_3);
  *(unsigned int *)(param_1 + 0x20) = 0;
  *(unsigned int *)(param_1 + 0x24) = 0x554;
  temp_v0 = FUN_002f5928(param_1 + 0x28,0x100000);
  *(unsigned int *)(temp_v0 + 0x30) = 0;
  *(unsigned int *)(temp_v0 + 0x34) = param_2;
  for (temp_v3 = 0; temp_v3 < param_3; temp_v3 = temp_v3 + 1) {
    temp_v1 = rt_malloc(0x30);
    temp_v2 = 0;
    if (temp_v1 != 0) {
      temp_v1 = FUN_002e995c(temp_v1 + 4);
      temp_v2 = temp_v1 - 4;
      *(unsigned int *)(temp_v1 + 0x24) = 0;
      *(unsigned int *)(temp_v1 + 0x28) = 0;
    }
    temp_v4 = temp_v2;
    FUN_002feac0(temp_v0 - 0x28,&temp_v4);
  }
  *(unsigned int *)(temp_v0 + 0x38) = 0;
  *(unsigned int *)(temp_v0 + 0x3c) = 0;
  return temp_v0 - 0x4c;
}

} /* extern "C" */
