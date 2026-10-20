/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00321fc8` (_code @ 0x321fc8, 0xfc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int memAlloc(int, int, int, int, int, int);
int FUN_00271be0(unsigned int, unsigned int);
int FUN_002e6dd4(void);
int asdEffectTextureCreate(void);

typedef struct fn_00321fc8_arg0 fn_00321fc8_arg0;
struct fn_00321fc8_arg0 {
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

/* Supplied declaration required: memAlloc. */
/* Supplied declaration required: FUN_00271be0. */
extern unsigned int *FUN_002721e4(fn_00321fc8_arg0 *);
extern unsigned int FUN_002b41c4(void);
/* Supplied declaration required: FUN_002e6dd4. */
extern unsigned int FUN_0037a7f4(unsigned int *);
extern unsigned int *FUN_0037a834(unsigned int);
/* Supplied declaration required: asdEffectTextureCreate. */


unsigned int FUN_00321fc8(fn_00321fc8_arg0 *param_1)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_002b41c4();
  temp_v1 = (unsigned int)param_1->field_0xc;
  FUN_00271be0(temp_v1,temp_v0);
  puVar2 = (unsigned int *)FUN_002721e4(param_1);
  if (puVar2 == (unsigned int *)0x0) {
    return temp_v1;
  }
  if (*(char *)(*(int *)(temp_v1 + 0x18) * 0x18 + 0x5c1088) == '\0') {
    return temp_v1;
  }
  temp_v2 = (unsigned int)param_1->field_0x1c;
  puVar3 = (unsigned int *)0x10000;
  memAlloc(0x10000,0x100,0,0xc,0x10,1);
  FUN_002e6dd4();
  *puVar3 = temp_v2;
  puVar3[1] = 1;
  if (temp_v2 != 1) {
    if (temp_v2 != 4) {
      if (temp_v2 != 9) {
        *(unsigned int **)(temp_v1 + 0x28) = puVar3;
        return temp_v1;
      }
      asdEffectTextureCreate();
    }
    else {
      puVar2 = (unsigned int *)FUN_0037a834(*puVar2 & 0xffff);
    }
    puVar3[2] = (unsigned int)puVar2;
  }
  else {
    temp_v2 = FUN_0037a7f4(puVar2);
    puVar3[2] = temp_v2;
  }
  *(unsigned int **)(temp_v1 + 0x28) = puVar3;
  return temp_v1;
}

} /* extern "C" */
