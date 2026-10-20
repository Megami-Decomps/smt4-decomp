/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010f06c` (_code @ 0x10f06c, 0xf4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00127570(int, int);
int FUN_002fa010(int, int);
int FUN_002fa01c(unsigned int);
int rt_memcpy(int, int, int);

typedef struct fn_0010f06c_arg1 fn_0010f06c_arg1;
struct fn_0010f06c_arg1 {
    unsigned char pad_0x0[0xc];
    int field_0xc; /* +0xc */
    int field_0x10; /* +0x10 */
    unsigned char pad_0x14[0x4];
    int field_0x18; /* +0x18 */
};

/* stack frame of param_3: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp24; /* 0x24: local_24 */
} param_3_stack;

/* Supplied declaration required: FUN_00127570. */
/* Supplied declaration required: FUN_002fa010. */
/* Supplied declaration required: FUN_002fa01c. */
/* Supplied declaration required: rt_memcpy. */


unsigned int FUN_0010f06c(int param_1,fn_0010f06c_arg1 *param_2,int param_3)

{
/* irregular: 1 goto(s); 4 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  
  temp_v4 = param_2->field_0x18;
  temp_v3 = param_2->field_0xc;
  temp_v1 = (unsigned int)*(unsigned char *)(temp_v3 + temp_v4);
  temp_v5 = 0;
  temp_v2 = param_2->field_0x10;
  if (temp_v1 == 0) {
    *(int *)(param_3 + 0x10) = temp_v2 - 1;
    rt_memcpy(*(int *)(param_3 + 0xc) + *(int *)(param_3 + 0x18),temp_v3 + temp_v4 + 1,
              param_2->field_0x10 - 1);
    return 0;
  }
  temp_v0 = 0;
  if (temp_v1 != 0xff) {
    if (temp_v1 * temp_v2 > (unsigned int)(*(int *)(param_3 + 0x14) - *(int *)(param_3 + 0x18))) {
      temp_v2 = temp_v1 * temp_v2 * 2;
      FUN_002fa010(param_3,temp_v2);
    }
  }
  else {
    temp_v2 = temp_v2 * 0x41a;
    FUN_002fa010(param_3,temp_v2);
  }
  temp_v6 = 0;
  while( 1 ) {
    FUN_002fa01c(*(unsigned int *)(param_1 + 0x120));
    *(int *)(*(int *)(param_1 + 0x120) + 0x10) = *(int *)(param_3 + 0x14) - *(int *)(param_3 + 0x18)
    ;
    *(int *)(*(int *)(param_1 + 0x120) + 0xc) = *(int *)(param_3 + 0xc) + *(int *)(param_3 + 0x18);
    *(int *)(*(int *)(param_1 + 0x120) + 4) = param_2->field_0x10;
    temp_v2 = param_2->field_0xc + param_2->field_0x18;
    **(int **)(param_1 + 0x120) = temp_v2;
    **(int **)(param_1 + 0x120) = temp_v2 + 1;
    *(int *)(*(int *)(param_1 + 0x120) + 4) = *(int *)(*(int *)(param_1 + 0x120) + 4) - 1;
    temp_v2 = *(int *)(param_1 + 0x120);
    FUN_00127570(temp_v2,4);
    if ((*(int *)(*(int *)(param_1 + 0x120) + 0x10) != 0 || temp_v2 != 0) && (temp_v2 != -5)) break;
    FUN_002fa010(param_3,(*(int *)(param_3 + 0x14) - *(int *)(param_3 + 0x18)) * 2);
    temp_v6 = temp_v6 + 1;
    if ((temp_v6 >= 2) || (temp_v2 != 0)) goto LAB_0010f128;
  }
  temp_v0 = 1;
LAB_0010f128:
  if (temp_v2 != 1) {
    if (temp_v2 == 0 && !temp_v0) {
      temp_v5 = 2;
    }
    else {
      temp_v5 = 1;
    }
  }
  else {
    *(unsigned int *)(param_3 + 0x10) = *(unsigned int *)(*(int *)(param_1 + 0x120) + 0x14);
  }
  return temp_v5;
}

} /* extern "C" */
