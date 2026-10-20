/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0017352c` (_code @ 0x17352c, 0x90 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0018eba4(unsigned int, unsigned char [48], unsigned int, int, unsigned int *);
int nn_math_ARMv6_MTX34MultAsm(int, unsigned int, unsigned char [48]);

typedef struct fn_0017352c_arg0 fn_0017352c_arg0;
struct fn_0017352c_arg0 {
    unsigned char pad_0x0[0x8];
    int field_0x8; /* +0x8 */
    int field_0xc; /* +0xc */
    unsigned char pad_0x10[0x4];
    int field_0x14; /* +0x14 */
};

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp58; /* 0x58: local_58 */
} param_3_stack;

/* Supplied declaration required: FUN_0018eba4. */
/* Supplied declaration required: nn_math_ARMv6_MTX34MultAsm. */


void FUN_0017352c(fn_0017352c_arg0 *param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  int temp_v1;
  int temp_v2;
  unsigned char temp_v3 [48];
  
  temp_v1 = param_1->field_0x8;
  temp_v0 = 0;
  if (temp_v0 < temp_v1) {
    do {
      puVar2 = (unsigned int *)(param_1->field_0xc + temp_v0 * 0x40);
      if ((*puVar2 & 0x70000) != 0) {
        temp_v2 = param_1->field_0x14 + temp_v0 * 0x30;
        FUN_0018eba4(*puVar2,temp_v3,param_2,temp_v2,puVar2 + 4);
        nn_math_ARMv6_MTX34MultAsm(temp_v2,param_3,temp_v3);
        *puVar2 = *puVar2 | 2;
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < temp_v1);
  }
  return;
}

} /* extern "C" */
