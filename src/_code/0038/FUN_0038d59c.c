/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038d59c` (_code @ 0x38d59c, 0x174 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_2_stack;

extern int DAT_00432fc8; /* 0x432fc8 */

extern int FUN_0023a24c(int);
extern int FUN_002a1578(int);
/* Supplied declaration required: FUN_002b49f4. */
/* Supplied declaration required: FUN_002bad80. */
extern unsigned int *FUN_002bb09c(unsigned char *);
/* Supplied declaration required: FUN_0038b470. */
extern int FUN_0038b600(int);
/* Supplied declaration required: FUN_0038b664. */
/* Supplied declaration required: FUN_0039444c. */


void FUN_0038d59c(unsigned char *param_1,int param_2)

{
/* irregular: 5 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int *puVar2;
  unsigned int *puVar3;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int *puVar7;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned int uStack_1c;
  
  *param_1 = 1;
  puVar2 = (unsigned int *)FUN_002bb09c(param_1 + 4);
  puVar2[2] = 0;
  puVar7 = puVar2 + -1;
  puVar2[3] = 0;
  puVar3 = (unsigned int *)FUN_002bad80(&temp_v4,0);
  temp_v3 = puVar3[1];
  *puVar2 = *puVar3;
  puVar2[1] = temp_v3;
  temp_v2 = DAT_00432fc8;
  temp_v1 = *(int *)(param_2 + 4);
  if (temp_v1 != 0) {
    if (temp_v1 != 1) {
      if ((temp_v1 == 2) && (temp_v2 = FUN_0038b600(DAT_00432fc8), temp_v2 != 0)) {
        *(unsigned int *)(param_2 + 4) = 3;
        *(unsigned char *)puVar7 = 0;
        return;
      }
    }
    else {
      FUN_0038b664();
      if (temp_v2 == 0) {
        *(unsigned int *)(param_2 + 4) = 3;
        *(unsigned char *)puVar7 = 0;
        return;
      }
      *(unsigned int *)(param_2 + 4) = 2;
    }
  }
  else {
    temp_v4 = -0x181c0001;
    temp_v1 = param_2 + 0x18;
    FUN_0039444c(temp_v1,&temp_v4,&temp_v5);
    if (temp_v1 != 0) {
      temp_v1 = FUN_0023a24c(temp_v2 + 0x80);
      if (temp_v1 < 0) {
        FUN_0038b470(&temp_v6,temp_v2);
        *(unsigned int *)(param_2 + 0xc) = temp_v6;
        *(unsigned int *)(param_2 + 0x10) = uStack_1c;
        temp_v2 = FUN_002a1578(param_2 + 0xc);
        if (temp_v2 < 0) {
          temp_v3 = *(unsigned int *)(param_2 + 0x10);
          *puVar2 = *(unsigned int *)(param_2 + 0xc);
          puVar2[1] = temp_v3;
          *(unsigned char *)puVar7 = 100;
          return;
        }
      }
      *(unsigned int *)(param_2 + 4) = 1;
      return;
    }
    if (temp_v4 < 0) {
      puVar3 = (unsigned int *)FUN_002bad80(&temp_v6);
      temp_v3 = puVar3[1];
      *puVar2 = *puVar3;
      puVar2[1] = temp_v3;
      if (temp_v5 == 0) {
        temp_v0 = 0x66;
      }
      else {
        FUN_002b49f4(temp_v2);
        temp_v0 = 0x67;
      }
      *(unsigned char *)puVar7 = temp_v0;
      return;
    }
  }
  return;
}
