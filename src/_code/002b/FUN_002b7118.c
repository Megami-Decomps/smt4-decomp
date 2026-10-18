/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b7118` (_code @ 0x2b7118, 0xe0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_2: 4 slot(s), 13 byte(s) */
typedef struct {
    unsigned char sp2A; /* 0x2a: local_2a */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_2_stack;

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_002aecd8. */
/* Supplied declaration required: FUN_002aece4. */
extern int FUN_002aed40(unsigned int);


int FUN_002b7118(int param_1,unsigned int param_2)

{
/* irregular: irregular input(s): in_fpscr; 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int *piVar3;
  romwright_code *pcVar4;
  int temp_v2;
  int *piVar6;
  unsigned int in_fpscr;
  float temp_v3;
  int temp_v4;
  romwright_code *temp_v5;
  unsigned int temp_v6;
  unsigned char temp_v7 [6];
  char temp_v8;
  
  temp_v0 = FUN_002aed40(param_2);
  piVar6 = *(int **)(temp_v0 + 8);
  temp_v2 = 0;
  temp_v0 = 0;
  FUN_002aece4(&temp_v4,piVar6,0x30);
  FUN_002aecd8(temp_v7);
  temp_v4 = param_1;
  piVar3 = (int *)((int)&temp_v4 + ((int)temp_v6 >> 1));
  pcVar4 = temp_v5;
  if ((temp_v6 & 1) != 0) {
    pcVar4 = *(romwright_code **)(temp_v5 + *piVar3);
  }
  while (temp_v1 = (*pcVar4)(), temp_v1 != 0 && temp_v1 != 10) {
    (**(romwright_code **)(*piVar6 + 0x40))(piVar6,temp_v7);
    temp_v2 = temp_v2 + 1;
    temp_v0 = temp_v0 + temp_v8;
    piVar3 = (int *)((unsigned int)((int)&temp_v4 + ((int)temp_v6 >> 1)) >> 8);
    pcVar4 = *(romwright_code **)(temp_v5 + *piVar3);
  }
  if (0 < temp_v2) {
    temp_v3 = (float)VectorSignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v0 = (int)temp_v3;
  }
  return temp_v0;
}
