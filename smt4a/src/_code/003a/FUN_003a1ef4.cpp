/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a1ef4` (_code @ 0x3a1ef4, 0x88 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00167ab4(int, int, int, int, int, int);
int FUN_002e6dd4(void);

typedef struct fn_003a1ef4_arg0 fn_003a1ef4_arg0;
struct fn_003a1ef4_arg0 {
    unsigned char pad_0x0[0x20];
    int field_0x20; /* +0x20 */
    int field_0x24; /* +0x24 */
    unsigned char pad_0x28[0x90];
    int field_0xb8; /* +0xb8 */
};

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

/* Supplied declaration required: FUN_00167ab4. */
/* Supplied declaration required: FUN_002e6dd4. */


unsigned int * FUN_003a1ef4(fn_003a1ef4_arg0 *param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = param_1->field_0x20;
  if (temp_v0 == 0) {
    temp_v0 = param_1->field_0xb8;
  }
  temp_v1 = temp_v0 * param_1->field_0x24;
  if (temp_v1 >= 101) {
    temp_v1 = 100;
  }
  puVar1 = (unsigned int *)0x10000;
  FUN_00167ab4(0x10000,0x100,0,0x38,0x10,1);
  FUN_002e6dd4();
  puVar1[1] = 0xffffffff;
  *puVar1 = temp_v1;
  puVar1[2] = 0x3f800000;
  *(unsigned short *)(puVar1 + 0xd) = 1;
  return puVar1;
}

} /* extern "C" */
