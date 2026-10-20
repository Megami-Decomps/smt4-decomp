/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002adf00` (_code @ 0x2adf00, 0x124 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00145e54(unsigned int *);
int FUN_00145f44(unsigned int *);
int FUN_0014d08c(int);
int FUN_002a8638(int, unsigned int *, unsigned int *, unsigned int *, unsigned int *);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

/* Supplied declaration required: FUN_00145e54. */
/* Supplied declaration required: FUN_00145f44. */
extern unsigned int *FUN_0014cfe8(int);
extern unsigned int *FUN_0014d018(int);
/* Supplied declaration required: FUN_0014d08c. */
/* Supplied declaration required: FUN_002a8638. */
extern unsigned int *FUN_002a86a4(int);


void FUN_002adf00(unsigned int *param_1,int param_2)

{
/* irregular: irregular input(s): in_s0; 4 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int *puVar2;
  int temp_v1;
  unsigned int in_s0;
  
  temp_v1 = *(int *)(param_2 + 8);
  *param_1 = *(unsigned int *)(temp_v1 + 0x58);
  param_1[1] = *(unsigned int *)(temp_v1 + 0x68);
  param_1[2] = *(unsigned int *)(temp_v1 + 0x78);
  temp_v0 = *(unsigned int *)(*(int *)(temp_v1 + 8) + 0xb4);
  if (temp_v0 != 0) {
    if (temp_v0 != 1) {
      if (temp_v0 == 2) {
        puVar2 = (unsigned int *)FUN_002a86a4(temp_v1);
        param_1[0xe] = *puVar2;
        param_1[0xf] = puVar2[1];
        param_1[0x10] = puVar2[2];
        FUN_00145f44(param_1);
      }
    }
    else {
      puVar2 = (unsigned int *)FUN_0014d018(temp_v1);
      param_1[3] = *puVar2;
      param_1[4] = puVar2[1];
      param_1[5] = puVar2[2];
      puVar2 = (unsigned int *)FUN_0014cfe8(temp_v1);
      param_1[6] = *puVar2;
      param_1[7] = puVar2[1];
      param_1[8] = puVar2[2];
    }
  }
  else {
    puVar2 = (unsigned int *)FUN_0014d018(temp_v1);
    param_1[3] = *puVar2;
    param_1[4] = puVar2[1];
    param_1[5] = puVar2[2];
    FUN_0014d08c(temp_v1);
    param_1[0xd] = in_s0;
    FUN_00145e54(param_1);
  }
  FUN_002a8638(temp_v1,param_1 + 9,param_1 + 0xc,param_1 + 10,param_1 + 0xb);
  *(float *)&param_1[9] = (float)param_1[9] * 57.295776f;
  return;
}

} /* extern "C" */
