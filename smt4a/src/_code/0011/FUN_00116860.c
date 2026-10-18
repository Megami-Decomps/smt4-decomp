/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00116860` (_code @ 0x116860, 0xd2 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
} param_2_stack;

/* Supplied declaration required: FUN_00133126. */
extern int FUN_002ee9da(int);
/* Supplied declaration required: FUN_00300900. */
/* Supplied declaration required: FUN_00300934. */
/* Supplied declaration required: FUN_0030093c. */
/* Supplied declaration required: FUN_00302698. */
/* Supplied declaration required: FUN_003026b0. */
/* Supplied declaration required: FUN_003026bc. */


void FUN_00116860(int param_1,int param_2)

{
/* irregular: 7 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4 [2];
  int temp_v5;
  int temp_v6;
  unsigned char temp_v7 [4];
  int temp_v8;
  unsigned char temp_v9 [8];
  
  *(unsigned char *)(param_2 + 4) = 0;
  temp_v0 = *(char *)(param_1 + 0x3b);
  temp_v3 = 0;
  if ((((temp_v0 != '\0') ||
       ((FUN_00300900(param_1,param_2 + 4), *(char *)(param_1 + 4) == '\0' &&
        (FUN_00300934(param_1,&temp_v3), *(char *)(param_1 + 4) == '\0')))) &&
      (temp_v5 = *(int *)(param_1 + 0xc), *(char *)(param_1 + 4) == '\0')) &&
     (FUN_0030093c(param_1,param_2 + 8), *(char *)(param_1 + 4) == '\0')) {
    temp_v6 = param_2 + 0x70;
    FUN_00302698();
    temp_v4[0] = 0;
    FUN_003026b0(param_1,temp_v4);
    for (temp_v2 = 0; temp_v2 < temp_v4[0]; temp_v2 = temp_v2 + 1) {
      FUN_00300900(param_1,temp_v7);
      temp_v8 = *(unsigned int *)(temp_v6 + 0x10);
      FUN_00133126(temp_v9,temp_v6,&temp_v8,temp_v7);
    }
    if ((((*(char *)(param_1 + 4) == '\0') &&
         (FUN_0030093c(param_1,param_2 + 0x88), *(char *)(param_1 + 4) == '\0')) &&
        ((*(char *)(param_2 + 4) == '\0' ||
         (FUN_003026bc(param_1,param_2 + 0xf0), *(char *)(param_1 + 4) == '\0')))) &&
       (temp_v0 == '\0')) {
      if (((unsigned int)(temp_v5 + temp_v3) < *(unsigned int *)(param_1 + 0xc)) ||
         (temp_v1 = FUN_002ee9da(param_1), temp_v1 == 0)) {
        *(unsigned char *)(param_1 + 4) = 1;
      }
    }
  }
  return;
}
