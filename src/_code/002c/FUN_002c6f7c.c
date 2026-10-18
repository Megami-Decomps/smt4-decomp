/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c6f7c` (_code @ 0x2c6f7c, 0xfc bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_002c6f7c_arg0 fn_002c6f7c_arg0;
struct fn_002c6f7c_arg0 {
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

/* Supplied declaration required: FUN_001d2058. */
extern unsigned int *FUN_0024c5dc(unsigned int);
extern unsigned int *FUN_0024c5ec(fn_002c6f7c_arg0 *);
extern unsigned int FUN_0024c60c(void);
extern unsigned int FUN_0028ca7c(unsigned int *);
/* Supplied declaration required: FUN_0028cabc. */
extern unsigned int *FUN_002c34a4(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c3b48. */


unsigned int FUN_002c6f7c(fn_002c6f7c_arg0 *param_1)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_0024c60c();
  temp_v1 = (unsigned int)param_1->field_0xc;
  FUN_001d2058(temp_v1,temp_v0);
  puVar2 = (unsigned int *)FUN_0024c5ec(param_1);
  if (puVar2 == (unsigned int *)0x0) {
    return temp_v1;
  }
  if (*(char *)(*(int *)(temp_v1 + 0x18) * 0x18 + 0x472490) == '\0') {
    return temp_v1;
  }
  temp_v2 = (unsigned int)param_1->field_0x1c;
  puVar3 = (unsigned int *)FUN_002c34a4(0x10000,0x100,0,0xc,0x10,1);
  FUN_002c3b48(puVar3,0xc);
  *puVar3 = temp_v2;
  puVar3[1] = 1;
  if (temp_v2 != 1) {
    if (temp_v2 != 4) {
      if (temp_v2 != 9) {
        *(unsigned int **)(temp_v1 + 0x28) = puVar3;
        return temp_v1;
      }
      FUN_0028cabc();
    }
    else {
      puVar2 = (unsigned int *)FUN_0024c5dc(*puVar2 & 0xffff);
    }
    puVar3[2] = (unsigned int)puVar2;
  }
  else {
    temp_v2 = FUN_0028ca7c(puVar2);
    puVar3[2] = temp_v2;
  }
  *(unsigned int **)(temp_v1 + 0x28) = puVar3;
  return temp_v1;
}
