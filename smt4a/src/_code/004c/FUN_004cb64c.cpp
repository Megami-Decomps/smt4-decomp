/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004cb64c` (_code @ 0x4cb64c, 0x248 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001568f8(...);
int FUN_003ed1f8(...);
int FUN_003efb68(...);
int FUN_003fc0b8(...);
int FUN_003fce8c(...);
int FUN_004ac0d4(...);
int FUN_004c9b64(...);
int FUN_004f7924(...);
int FUN_004f7fe8(...);

typedef struct fn_004cb64c_arg1 fn_004cb64c_arg1;
struct fn_004cb64c_arg1 {
    unsigned char pad_0x0[0x48];
    undefined4 field_0x48; /* +0x48 */
    unsigned char pad_0x4c[0xc];
    void *field_0x58; /* +0x58 */
    undefined4 field_0x5c; /* +0x5c */
    unsigned char pad_0x60[0xa];
    short field_0x6a; /* +0x6a */
};

extern unsigned int DAT_00573808; /* 0x573808 */
extern unsigned int DAT_0057a9c8; /* 0x57a9c8 */

/* Supplied declaration required: FUN_001568f8. */
extern unsigned int FUN_003ec620(int, unsigned int);
/* Supplied declaration required: FUN_003ed1f8. */
extern int FUN_003ef9e0(int, fn_004cb64c_arg1 *);
extern int FUN_003efad8(int, unsigned int);
/* Supplied declaration required: FUN_003efb68. */
/* Supplied declaration required: FUN_003fc0b8. */
extern int FUN_003fce08(unsigned int, unsigned int);
/* Supplied declaration required: FUN_003fce8c. */
extern int FUN_003fcf5c(unsigned int);
extern unsigned int FUN_00409fe8(unsigned int, unsigned int);
/* Supplied declaration required: FUN_004ac0d4. */
/* Supplied declaration required: FUN_004c9b64. */
/* Supplied declaration required: FUN_004f7924. */
/* Supplied declaration required: FUN_004f7fe8. */


void FUN_004cb64c(int param_1,fn_004cb64c_arg1 *param_2)

{
/* irregular: 9 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  
  if (((unsigned int)param_2->field_0x58 & 1) != 0) {
    temp_v0 = 0;
    do {
      temp_v3 = *(int *)(param_1 + 0x1ed4) + temp_v0 * 0x1d0;
      if (((*(unsigned int *)(temp_v3 + 0x50) & 1) != 0) && ((*(unsigned int *)(temp_v3 + 0x58) & 2) != 0)) {
        return;
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 0x6d);
    param_2->field_0x58 = (void *)(((unsigned int)param_2->field_0x58 & 0xfffffffe) | 0x12);
  }
  if (((unsigned int)param_2->field_0x58 & 2) != 0) {
    if (((unsigned int)param_2->field_0x58 & 0x10) != 0) {
      temp_v0 = FUN_003ef9e0(param_1,param_2);
      if (temp_v0 < 0) {
        temp_v0 = 0;
      }
      temp_v3 = param_1;
      FUN_001568f8(param_1,(int)param_2->field_0x6a);
      temp_v3 = temp_v3 + temp_v0 * 4;
      temp_v0 = FUN_003efad8(param_1,*(unsigned int *)(temp_v3 + 0xc));
      if (temp_v0 != 0) {
        param_2->field_0x5c = param_2->field_0x5c;
        param_2->field_0x58 = (void *)((unsigned int)param_2->field_0x58 | 0x300);
      }
      else {
        param_2->field_0x5c = param_2->field_0x5c;
        param_2->field_0x58 = (void *)((unsigned int)param_2->field_0x58 & 0xfffffcff);
        temp_v1 = FUN_00409fe8(*(unsigned int *)(temp_v3 + 0xc),1);
        FUN_003efb68(param_1,temp_v1);
        FUN_003ed1f8(param_1,(int)(short)*(unsigned int *)(temp_v3 + 0xc));
      }
      param_2->field_0x58 = (void *)((unsigned int)param_2->field_0x58 & 0xffffffef);
    }
    temp_v0 = FUN_003ef9e0(param_1,param_2);
    if (temp_v0 < 0) {
      temp_v0 = 0;
    }
    temp_v3 = param_1;
    FUN_001568f8(param_1,(int)param_2->field_0x6a);
    temp_v0 = temp_v3 + temp_v0 * 4;
    temp_v1 = FUN_003ec620(param_1,*(unsigned int *)(temp_v0 + 0xc));
    if (((unsigned int)param_2->field_0x58 & 0x100) == 0) {
      temp_v2 = FUN_003fcf5c(temp_v1);
      if (temp_v2 == 0) {
        if ((((unsigned int)param_2->field_0x58 & 4) != 0) && (((unsigned int)param_2->field_0x58 & 8) == 0)) {
          param_2->field_0x48 = 0;
          param_2->field_0x58 = (void *)((unsigned int)param_2->field_0x58 & 0xfffffffb);
        }
        return;
      }
      param_2->field_0x5c = param_2->field_0x5c;
      param_2->field_0x58 = (void *)((unsigned int)param_2->field_0x58 | 0x100);
      FUN_003fc0b8(temp_v1,7);
    }
    if (((unsigned int)param_2->field_0x58 & 0x200) == 0) {
      temp_v2 = FUN_003fce08(temp_v1,1);
      if (temp_v2 != 0) {
        FUN_003fce8c(temp_v1,1);
        param_2->field_0x5c = param_2->field_0x5c;
        param_2->field_0x58 = (void *)((unsigned int)param_2->field_0x58 | 0x200);
        FUN_004ac0d4(DAT_0057a9c8,*(unsigned short *)(temp_v3 + 2));
        FUN_004f7fe8(DAT_00573808,param_2,*(unsigned int *)(temp_v0 + 0xc));
        FUN_004f7924(DAT_00573808,param_2);
        FUN_004c9b64(param_1,param_2);
      }
    }
    else {
      FUN_004ac0d4(DAT_0057a9c8,*(unsigned short *)(temp_v3 + 2));
      FUN_004f7fe8(DAT_00573808,param_2,*(unsigned int *)(temp_v0 + 0xc));
      FUN_004f7924(DAT_00573808,param_2);
      FUN_004c9b64(param_1,param_2);
    }
  }
  if ((((unsigned int)param_2->field_0x58 & 4) != 0) && (((unsigned int)param_2->field_0x58 & 8) == 0)) {
    param_2->field_0x48 = 0;
    param_2->field_0x58 = (void *)((unsigned int)param_2->field_0x58 & 0xfffffffb);
  }
  return;
}

} /* extern "C" */
