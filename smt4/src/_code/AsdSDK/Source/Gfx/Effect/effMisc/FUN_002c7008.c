/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c7008` (_code @ 0x2c7008, 0xfc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_002c7008_arg0 fn_002c7008_arg0;
struct fn_002c7008_arg0 {
    undefined4 field_0x0; /* +0x0 */
    unsigned char pad_0x4[0x8];
    ushort field_0xc; /* +0xc */
    unsigned char pad_0xe[0xe];
    ushort field_0x1c; /* +0x1c */
};

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

/* Supplied declaration required: FUN_001d2158. */
extern unsigned int *FUN_0024c3c8(unsigned int);
extern unsigned int *FUN_0024c3d8(fn_002c7008_arg0 *);
extern unsigned int FUN_0024c3f8(void);
extern unsigned int FUN_0028c814(unsigned int *);
/* Supplied declaration required: FUN_0028c854. */
/* Supplied declaration required: FUN_002c32a0. */
/* Supplied declaration required: FUN_002c3944. */


unsigned int FUN_002c7008(fn_002c7008_arg0 *param_1)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_0024c3f8();
  temp_v1 = (unsigned int)param_1->field_0xc;
  FUN_001d2158(temp_v1,temp_v0);
  puVar2 = (unsigned int *)FUN_0024c3d8(param_1);
  if (puVar2 == (unsigned int *)0x0) {
    return temp_v1;
  }
  if (*(char *)(*(int *)(temp_v1 + 0x18) * 0x18 + 0x472490) == '\0') {
    return temp_v1;
  }
  temp_v2 = (unsigned int)param_1->field_0x1c;
  puVar3 = (unsigned int *)0x10000;
  FUN_002c32a0(0x10000,0x100,0,0xc,0x10,1);
  FUN_002c3944();
  *puVar3 = temp_v2;
  puVar3[1] = 1;
  if (temp_v2 != 1) {
    if (temp_v2 != 4) {
      if (temp_v2 != 9) {
        *(unsigned int **)(temp_v1 + 0x28) = puVar3;
        return temp_v1;
      }
      FUN_0028c854();
    }
    else {
      puVar2 = (unsigned int *)FUN_0024c3c8(*puVar2 & 0xffff);
    }
    puVar3[2] = (unsigned int)puVar2;
  }
  else {
    temp_v2 = FUN_0028c814(puVar2);
    puVar3[2] = temp_v2;
  }
  *(unsigned int **)(temp_v1 + 0x28) = puVar3;
  return temp_v1;
}
