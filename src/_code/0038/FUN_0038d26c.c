/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038d26c` (_code @ 0x38d26c, 0x124 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp38; /* 0x38: local_38 */
} param_2_stack;

extern int FUN_0038cdf4(); /* 0x38cdf4 */
extern unsigned char LAB_003f7150; /* 0x3f7150 */
extern unsigned char LAB_003f71f4; /* 0x3f71f4 */
extern unsigned char LAB_003f7238; /* 0x3f7238 */
extern int DAT_00432fc8; /* 0x432fc8 */

/* Supplied declaration required: FUN_00234a3c. */
extern int FUN_002a1578(int);
extern unsigned int *FUN_002bad80(int *, unsigned int);
extern unsigned int *FUN_002bb09c(unsigned char *);
/* Supplied declaration required: FUN_002bce50. */
/* Supplied declaration required: FUN_002c5468. */


void FUN_0038d26c(unsigned char *param_1,int param_2)

{
/* irregular: 4 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int *puVar2;
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3 [5];
  unsigned char *temp_v4;
  unsigned char *temp_v5;
  unsigned char *temp_v6;
  int temp_v7;
  
  *param_1 = 1;
  puVar1 = (unsigned int *)FUN_002bb09c(param_1 + 4);
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar2 = (unsigned int *)FUN_002bad80(temp_v3,0);
  temp_v2 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = temp_v2;
  temp_v0 = DAT_00432fc8;
  if (*(int *)(param_2 + 4) != 0) {
    if (*(int *)(param_2 + 4) == 1) {
      temp_v0 = DAT_00432fc8 + 0x88;
      FUN_00234a3c();
      if (temp_v0 != 0) {
        temp_v0 = FUN_002a1578(param_2 + 0xc);
        if (temp_v0 >= 0) {
          *(unsigned char *)(puVar1 + -1) = 0;
        }
        else {
          temp_v2 = *(unsigned int *)(param_2 + 0x10);
          *puVar1 = *(unsigned int *)(param_2 + 0xc);
          puVar1[1] = temp_v2;
          *(unsigned char *)(puVar1 + -1) = 100;
        }
        *(unsigned int *)(param_2 + 4) = 2;
        return;
      }
    }
  }
  else {
    *(unsigned int *)(param_2 + 4) = 1;
    temp_v1 = temp_v0 + 0x88;
    temp_v0 = *(int *)(temp_v0 + 0x94);
    temp_v3[4] = 4;
    temp_v4 = &LAB_003f7150;
    temp_v5 = &LAB_003f7238;
    temp_v6 = &LAB_003f71f4;
    temp_v3[3] = 0;
    temp_v3[0] = *(int *)(temp_v0 + 0xc) + *(int *)(temp_v0 + 8);
    temp_v3[1] = 0x11;
    temp_v3[2] = 0xfffffffe;
    temp_v7 = param_2;
    FUN_002bce50(temp_v1,temp_v3 + 4,FUN_0038cdf4,&temp_v7);
    if (((temp_v1 & 0x7e00000) != 0x600000) && ((int)temp_v1 < 0)) {
      FUN_002c5468();
    }
  }
  return;
}
