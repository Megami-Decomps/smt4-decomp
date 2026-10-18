/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002107c4` (_code @ 0x2107c4, 0xb4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_002107c4_arg0 fn_002107c4_arg0;
struct fn_002107c4_arg0 {
    unsigned char pad_0x0[0x4];
    undefined4 field_0x4; /* +0x4 */
    undefined4 field_0x8; /* +0x8 */
    undefined4 field_0xc; /* +0xc */
    undefined4 field_0x10; /* +0x10 */
    unsigned char pad_0x14[0x8];
    undefined4 field_0x1c; /* +0x1c */
};

extern int FUN_00126648(void);
extern int FUN_002b96f0(fn_002107c4_arg0 *, unsigned int);
/* Supplied declaration required: FUN_002c0a6c. */
/* Supplied declaration required: FUN_002c4360. */


unsigned int FUN_002107c4(fn_002107c4_arg0 *param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int *puVar5;
  
  temp_v0 = FUN_00126648();
  temp_v2 = 0;
  if (temp_v0 != 0) {
    temp_v3 = 0;
    if (temp_v3 < *(int *)(temp_v0 + 4)) {
      do {
        puVar5 = (unsigned int *)(*(int *)(temp_v0 + 0xc) + temp_v3 * 0x14);
        temp_v1 = FUN_002b96f0(param_1,*puVar5);
        if (((*(unsigned int *)(temp_v1 + 0x10) & 4) != 0) &&
           (temp_v1 = FUN_002b96f0(param_1,*puVar5), temp_v1 != 0)) {
          if (*(int *)(temp_v1 + 0xc) != 0) {
            FUN_002c4360();
            *(unsigned int *)(temp_v1 + 0xc) = 0;
          }
          if (*(int *)(temp_v1 + 8) != 0) {
            FUN_002c0a6c();
            *(unsigned int *)(temp_v1 + 8) = 0;
          }
          *(unsigned int *)(temp_v1 + 0x10) = 0;
          *(unsigned int *)(temp_v1 + 0x1c) = 0;
        }
        temp_v3 = temp_v3 + 1;
      } while (temp_v3 < *(int *)(temp_v0 + 4));
    }
    temp_v2 = 1;
  }
  return temp_v2;
}
