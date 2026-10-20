/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010979e` (_code @ 0x10979e, 0x86 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int sharedRefRelease(int);
int FUN_002f2a22(undefined4, int);

typedef struct fn_0010979e_arg0 fn_0010979e_arg0;
struct fn_0010979e_arg0 {
    unsigned char pad_0x0[0x4];
    byte field_0x4; /* +0x4 */
    unsigned char pad_0x5[0x3c];
    byte field_0x41; /* +0x41 */
    unsigned char pad_0x42[0x2];
    void *field_0x44; /* +0x44 */
    unsigned char pad_0x48[0x9];
    undefined1 field_0x51; /* +0x51 */
    unsigned char pad_0x52[0xee];
    undefined4 field_0x140; /* +0x140 */
};

extern int FUN_00121398(fn_0010979e_arg0 *, void *);
/* Supplied declaration required: sharedRefRelease. */
/* Supplied declaration required: FUN_002f2a22. */


int FUN_0010979e(fn_0010979e_arg0 *param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int *puVar2;
  int temp_v1;
  int temp_v2;
  fn_0010979e_arg0 *pfVar5;
  int temp_v3;
  
  puVar2 = (unsigned int *)param_1->field_0x44;
  temp_v0 = 0;
  temp_v3 = puVar2[0xe];
  *puVar2 = 0;
  puVar2[1] = 0;
  *(unsigned int *)((int)param_1->field_0x44 + 0x38) = 0;
  pfVar5 = param_1;
  if ((temp_v3 != 0) && (param_1->field_0x4 != 3)) {
    temp_v1 = FUN_00121398(param_1,param_1->field_0x44);
    temp_v2 = *(int *)((int)pfVar5->field_0x44 + 8);
    if (temp_v1 == 0) {
      *(int *)(temp_v3 + 0x10) = temp_v2;
    }
    if (param_1->field_0x41 != 0) {
      if ((((pfVar5->field_0x4 == 0) || (pfVar5->field_0x4 == 1)) && (temp_v1 == 0)) && (temp_v2 != 0))
      {
        temp_v0 = 1;
      }
    }
    else {
      pfVar5->field_0x4 = 3;
    }
  }
  *(unsigned char *)((int)pfVar5->field_0x44 + 0x34) = 0;
  param_1->field_0x51 = 0;
  if (!temp_v0) {
    if (temp_v3 != 0) {
      if (pfVar5->field_0x140 != 0) {
        FUN_002f2a22(pfVar5->field_0x140,temp_v3);
      }
      else {
        sharedRefRelease(temp_v3);
      }
    }
    return 0;
  }
  return temp_v3;
}

} /* extern "C" */
