/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030f3a0` (_code @ 0x30f3a0, 0x78 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_0030f3a0_arg0 fn_0030f3a0_arg0;
struct fn_0030f3a0_arg0 {
    uint field_0x0; /* +0x0 */
    unsigned char pad_0x4[0x8];
    ushort field_0xc; /* +0xc */
    unsigned char pad_0xe[0xe];
    ushort field_0x1c; /* +0x1c */
    unsigned char pad_0x1e[0x2e];
    undefined4 field_0x4c; /* +0x4c */
};

extern int FUN_0024c5ec(fn_0030f3a0_arg0 *);
extern int FUN_0024c60c(void);
/* Supplied declaration required: FUN_0024fab8. */
/* Supplied declaration required: FUN_0024fd10. */
/* Supplied declaration required: FUN_00269404. */
/* Supplied declaration required: FUN_00269594. */
/* Supplied declaration required: FUN_0030f244. */


unsigned int * FUN_0030f3a0(fn_0030f3a0_arg0 *param_1)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  unsigned int temp_v1;
  
  temp_v0 = FUN_0024c60c();
  puVar2 = (unsigned int *)(temp_v0 + 0x1c);
  FUN_0024fd10();
  FUN_0024fab8();
  temp_v1 = (unsigned int)param_1->field_0xc;
  if (puVar2[0xc] != 0) {
    FUN_00269594();
  }
  FUN_00269404(temp_v1,*puVar2,temp_v0 + 0x1c);
  puVar2[0xc] = temp_v1;
  temp_v0 = FUN_0024c5ec(param_1);
  if (temp_v0 != 0) {
    FUN_0030f244(puVar2,param_1->field_0x1c);
  }
  return puVar2;
}
