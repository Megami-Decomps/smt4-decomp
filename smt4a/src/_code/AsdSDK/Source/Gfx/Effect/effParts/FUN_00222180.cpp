/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00222180` (_code @ 0x222180, 0xb8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00167ab4(int, int, int, int, int, int);

typedef struct fn_00222180_arg0 fn_00222180_arg0;
struct fn_00222180_arg0 {
    unsigned char pad_0x0[0x4];
    ushort field_0x4; /* +0x4 */
    unsigned char pad_0x6[0x2];
    undefined4 field_0x8; /* +0x8 */
    ushort field_0xc; /* +0xc */
    unsigned char pad_0xe[0xe];
    ushort field_0x1c; /* +0x1c */
};

typedef int romwright_code(...);
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

/* Supplied declaration required: FUN_00167ab4. */


unsigned int * FUN_00222180(fn_00222180_arg0 *param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned short temp_v0;
  unsigned int *puVar2;
  unsigned int temp_v1;
  
  temp_v0 = param_1->field_0x4;
  puVar2 = (unsigned int *)0x10000;
  FUN_00167ab4(0x10000,0x100,0,0x2c,0x10,1);
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  puVar2[10] = 0;
  *puVar2 = 0xdc;
  *(unsigned short *)(puVar2 + 1) = temp_v0;
  *(unsigned short *)(puVar2 + 3) = param_1->field_0xc;
  *(unsigned short *)(puVar2 + 7) = param_1->field_0x1c;
  temp_v1 = (**(romwright_code **)((unsigned int)temp_v0 * 0x44 + 0x5b3288))(param_1->field_0x8);
  puVar2[2] = temp_v1;
  return puVar2;
}

} /* extern "C" */
