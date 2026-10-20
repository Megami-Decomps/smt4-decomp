/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0028f4b4` (_code @ 0x28f4b4, 0x1b4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002aea44(unsigned char [6]);
int FUN_002aea50(int *, int *, int);
int VectorSignedToFloat(...);

typedef int romwright_code(...);
/* stack frame of param_2: 4 slot(s), 13 byte(s) */
typedef struct {
    unsigned char sp3A; /* 0x3a: local_3a */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
} param_2_stack;

extern int DAT_00464a70; /* 0x464a70 */
extern unsigned int *DAT_00464a74; /* 0x464a74 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_002aea44. */
/* Supplied declaration required: FUN_002aea50. */
extern int libc_strlen(int);


void FUN_0028f4b4(int param_1,unsigned int *param_2)

{
/* irregular: irregular input(s): in_fpscr; 3 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  romwright_code *pcVar5;
  int *piVar6;
  unsigned char temp_v3;
  unsigned int in_fpscr;
  int temp_v4;
  romwright_code *temp_v5;
  unsigned int temp_v6;
  unsigned char temp_v7 [6];
  char temp_v8;
  
  FUN_002aea44(temp_v7);
  puVar1 = (unsigned int *)&DAT_00464a70;
  if (DAT_00464a70 != 0) {
    puVar1 = DAT_00464a74;
  }
  if ((DAT_00464a70 != 0 && param_2 < puVar1) &&
     (temp_v0 = DAT_00464a70 + (int)param_2 * 0x2c, temp_v0 != 0)) {
    piVar6 = *(int **)(temp_v0 + 8);
    FUN_002aea50(&temp_v4,piVar6,0x30);
    temp_v4 = param_1;
    temp_v0 = libc_strlen(param_1);
    pcVar5 = temp_v5;
    if ((temp_v6 & 1) != 0) {
      pcVar5 = *(romwright_code **)((unsigned char *)temp_v5 + *(int *)((int)&temp_v4 + ((int)temp_v6 >> 1)));
    }
    temp_v1 = (*pcVar5)();
    temp_v2 = temp_v4 - param_1;
    while (temp_v2 <= temp_v0) {
      temp_v2 = (**(romwright_code **)(*piVar6 + 0x44))(piVar6,temp_v1);
      if (temp_v2 != 0) {
        (**(romwright_code **)(*piVar6 + 0x40))(piVar6,temp_v7,temp_v1);
        temp_v3 = (temp_v6 & 1) == 0;
        pcVar5 = (romwright_code *)(int)temp_v8;
        if (temp_v3) {
          pcVar5 = temp_v5;
        }
        VectorSignedToFloat((romwright_code *)(int)temp_v8,(unsigned char)(in_fpscr >> 0x16) & 3);
        if (!temp_v3) {
          pcVar5 = *(romwright_code **)((unsigned char *)temp_v5 + *(int *)((int)&temp_v4 + ((int)temp_v6 >> 1)));
        }
        temp_v1 = (*pcVar5)();
      }
      else {
        pcVar5 = temp_v5;
        if ((temp_v6 & 1) != 0) {
          pcVar5 = *(romwright_code **)((unsigned char *)temp_v5 + *(int *)((int)&temp_v4 + ((int)temp_v6 >> 1)));
        }
        temp_v1 = (*pcVar5)();
        VectorSignedToFloat((int)temp_v8,(unsigned char)(in_fpscr >> 0x16) & 3);
      }
      temp_v2 = temp_v4 - param_1;
    }
    return;
  }
  return;
}

} /* extern "C" */
