/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00310888` (_code @ 0x310888, 0x94 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00114ce8(...);
int FUN_002f4ffc(...);
int FUN_003026b0(...);
int FUN_00310224(...);

typedef struct fn_00310888_arg1 fn_00310888_arg1;
struct fn_00310888_arg1 {
    undefined4 field_0x0; /* +0x0 */
    undefined4 field_0x4; /* +0x4 */
    undefined4 field_0x8; /* +0x8 */
    undefined1 field_0xc; /* +0xc */
    unsigned char pad_0xd[0x3];
    void *field_0x10; /* +0x10 */
    int field_0x14; /* +0x14 */
    unsigned char pad_0x18[0x60];
    undefined4 field_0x78; /* +0x78 */
};

/* stack frame of param_2: 8 slot(s), 29 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned char spB4; /* 0xb4: local_b4 */
    unsigned int spB8; /* 0xb8: local_b8 */
} param_2_stack;

extern unsigned char DAT_00558dd4; /* 0x558dd4 */
extern unsigned char DAT_00559748; /* 0x559748 */

/* Supplied declaration required: FUN_00114ce8. */
extern int FUN_002ea974(unsigned char *);
/* Supplied declaration required: FUN_002f4ffc. */
extern int FUN_002fd5d4(unsigned int *, unsigned char *);
/* Supplied declaration required: FUN_003026b0. */
extern unsigned int *FUN_00306e84(fn_00310888_arg1 *, unsigned int);
/* Supplied declaration required: FUN_00310224. */


void FUN_00310888(unsigned int param_1,fn_00310888_arg1 *param_2)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  void *pvVar3;
  unsigned int temp_v1;
  unsigned char *temp_v2;
  unsigned char temp_v3;
  unsigned char temp_v4 [104];
  unsigned int temp_v5;
  unsigned char *temp_v6;
  unsigned int temp_v7;
  unsigned char *temp_v8;
  unsigned char *temp_v9;
  unsigned int temp_v10;
  fn_00310888_arg1 *pfStack_18;
  
  temp_v10 = param_1;
  pfStack_18 = param_2;
  FUN_00310224(param_2);
  temp_v7 = 0;
  FUN_003026b0(temp_v10,&temp_v7);
  temp_v8 = &DAT_00559748;
  temp_v9 = temp_v4;
  temp_v6 = &DAT_00558dd4;
  for (temp_v1 = 0; temp_v1 < temp_v7; temp_v1 = temp_v1 + 1) {
    temp_v2 = temp_v8;
    temp_v3 = 0;
    temp_v0 = FUN_002ea974(temp_v9);
    *(unsigned char **)(temp_v0 - 8) = temp_v6;
    FUN_00114ce8(temp_v10,&temp_v2);
    pvVar3 = param_2->field_0x10;
    puVar2 = (unsigned int *)FUN_00306e84(param_2,0);
    puVar2[2] = (unsigned int)temp_v8;
    *(unsigned char *)(puVar2 + 3) = temp_v3;
    temp_v0 = FUN_002fd5d4(puVar2 + 4,temp_v9);
    *(unsigned int *)(temp_v0 + 0x68) = temp_v5;
    *(unsigned char **)(temp_v0 - 8) = temp_v6;
    *puVar2 = (unsigned int)pvVar3;
    puVar2[1] = *(unsigned int *)((int)pvVar3 + 4);
    **(int **)((int)pvVar3 + 4) = (int)puVar2;
    *(unsigned int **)((int)pvVar3 + 4) = puVar2;
    param_2->field_0x14 = param_2->field_0x14 + 1;
    FUN_002f4ffc(&temp_v2);
  }
  return;
}

} /* extern "C" */
