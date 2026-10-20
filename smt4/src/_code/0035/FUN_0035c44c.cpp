/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035c44c` (_code @ 0x35c44c, 0xf4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
/* stack frame of param_4: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_4_stack;


unsigned int FUN_0035c44c(int *param_1,unsigned int *param_2,unsigned int *param_3,romwright_code *param_4)

{
/* irregular: irregular input(s): in_r12 */
  int temp_v0;
  unsigned int temp_v1;
  int *piVar3;
  int *piVar4;
  romwright_code *in_r12;
  unsigned char temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  
  temp_v4 = 0;
  temp_v5 = 0;
  while( 1 ) {
    temp_v0 = (unsigned int)*(unsigned char *)(*param_1 + 8) * 8;
    piVar4 = (int *)(temp_v0 + 0x472b40);
    temp_v1 = *(unsigned int *)(temp_v0 + 0x472b44);
    temp_v2 = (temp_v1 & 1) == 0;
    if (temp_v2) {
      param_4 = (romwright_code *)*piVar4;
    }
    piVar3 = (int *)((int)param_1 + ((int)temp_v1 >> 1));
    if (!temp_v2) {
      param_4 = *(romwright_code **)(*piVar3 + *piVar4);
    }
    temp_v3 = *param_3;
    temp_v1 = (*param_4)(piVar3,&temp_v5,&temp_v3);
    if (temp_v1 == 1) {
      *param_2 = *param_3;
      return 0;
    }
    if (temp_v1 != 0) {
      return temp_v1;
    }
    temp_v0 = (unsigned int)*(unsigned char *)(*param_1 + 8) * 8;
    piVar4 = (int *)(temp_v0 + 0x472bd8);
    temp_v1 = *(unsigned int *)(temp_v0 + 0x472bdc);
    temp_v2 = (temp_v1 & 1) == 0;
    if (temp_v2) {
      in_r12 = (romwright_code *)*piVar4;
    }
    piVar3 = (int *)((int)param_1 + ((int)temp_v1 >> 1));
    if (!temp_v2) {
      in_r12 = *(romwright_code **)(*piVar3 + *piVar4);
    }
    temp_v3 = *param_3;
    param_4 = (romwright_code *)&temp_v6;
    temp_v6 = temp_v5;
    temp_v1 = (*in_r12)(piVar3,&temp_v4,&temp_v3);
    if (temp_v1 >= 2) break;
    *param_3 = temp_v4;
  }
  return temp_v1;
}

} /* extern "C" */
