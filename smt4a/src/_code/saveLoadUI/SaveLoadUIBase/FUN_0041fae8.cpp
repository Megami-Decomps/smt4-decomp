/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0041fae8` (_code @ 0x41fae8, 0x128 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00178b04(...);
int FUN_00215bd0(...);
int FUN_0023b45c(...);
int FUN_002c7e6c(...);
int FUN_002c8538(...);
int FUN_002c85b0(...);
int FUN_002f0384(...);
int FUN_003343f0(...);
int FUN_0033449c(...);
int FUN_003c12d8(...);
int FUN_003fd7b4(...);
int FUN_003fe86c(...);
int FUN_0040aa6c(...);
int FUN_0040aad4(...);
int FUN_0040ab7c(...);
int FUN_0040ace8(...);
int FUN_0045b538(...);

typedef struct fn_0041fae8_arg0 fn_0041fae8_arg0;
struct fn_0041fae8_arg0 {
    unsigned char pad_0x0[0x7];
    byte field_0x7; /* +0x7 */
    undefined4 field_0x8; /* +0x8 */
    undefined1 field_0xc; /* +0xc */
    undefined1 field_0xd; /* +0xd */
    unsigned char pad_0xe[0x4a];
    void *field_0x58; /* +0x58 */
    unsigned char pad_0x5c[0xc];
    undefined1 field_0x68; /* +0x68 */
    unsigned char pad_0x69[0x28b];
    int field_0x2f4; /* +0x2f4 */
};

extern unsigned int DAT_0056fcc0; /* 0x56fcc0 */

/* Supplied declaration required: FUN_00178b04. */
/* Supplied declaration required: FUN_00215bd0. */
/* Supplied declaration required: FUN_0023b45c. */
/* Supplied declaration required: FUN_002c7e6c. */
/* Supplied declaration required: FUN_002c8538. */
/* Supplied declaration required: FUN_002c85b0. */
/* Supplied declaration required: FUN_002f0384. */
/* Supplied declaration required: FUN_003343f0. */
/* Supplied declaration required: FUN_0033449c. */
/* Supplied declaration required: FUN_003c12d8. */
/* Supplied declaration required: FUN_003fd7b4. */
/* Supplied declaration required: FUN_003fe86c. */
/* Supplied declaration required: FUN_0040aa6c. */
/* Supplied declaration required: FUN_0040aad4. */
/* Supplied declaration required: FUN_0040ab7c. */
extern void *FUN_0040ac08(void);
/* Supplied declaration required: FUN_0040ace8. */
/* Supplied declaration required: FUN_0045b538. */


void FUN_0041fae8(fn_0041fae8_arg0 *param_1)

{
/* irregular: 17 native warning(s); review required */
  int temp_v0;
  void *pvVar2;
  
  FUN_002c7e6c();
  FUN_002c85b0(10);
  FUN_003343f0(1);
  FUN_0033449c(0);
  FUN_0023b45c(1);
  FUN_002c8538(1);
  FUN_002f0384(0);
  param_1->field_0x68 = 0;
  FUN_00215bd0();
  if (param_1->field_0x58 == (void *)0x0) {
    temp_v0 = 0x20;
    FUN_00178b04(0x20,"c:\\SMT4F\\SMT4F\\sdds4\\program\\saveLoadUI\\SaveLoadUIBase.cpp",0x930);
    pvVar2 = (void *)0x0;
    if (temp_v0 != 0) {
      pvVar2 = (void *)FUN_0040ac08();
    }
    param_1->field_0x58 = pvVar2;
    FUN_0040aa6c();
    FUN_0040ab7c(param_1->field_0x58,0);
    FUN_0040aad4(param_1->field_0x58,0);
    FUN_0045b538(*(int *)((int)param_1->field_0x58 + 0xc) + 0xc);
    temp_v0 = *(int *)((int)param_1->field_0x58 + 4);
    FUN_0040ace8(DAT_0056fcc0,temp_v0);
    FUN_003fe86c(temp_v0,0,2);
    FUN_003fd7b4(temp_v0);
    *(unsigned int *)(temp_v0 + 4) = *(unsigned int *)(temp_v0 + 4) | 1;
  }
  FUN_003c12d8(param_1->field_0x2f4 + 1,1);
  param_1->field_0xd = param_1->field_0x7;
  param_1->field_0x7 = 2;
  param_1->field_0x8 = 0;
  param_1->field_0xc = 0;
  return;
}

} /* extern "C" */
