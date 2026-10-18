/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00353550` (_code @ 0x353550, 0x80 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00353550_arg0 fn_00353550_arg0;
struct fn_00353550_arg0 {
    unsigned char pad_0x0[0xc];
    uint field_0xc; /* +0xc */
    byte field_0x10; /* +0x10 */
    byte field_0x11; /* +0x11 */
};

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

extern unsigned char LAB_003535d0; /* 0x3535d0 */

/* Supplied declaration required: FUN_002522f8. */
/* Supplied declaration required: FUN_0035fb7c. */


void FUN_00353550(fn_00353550_arg0 *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4
                 )

{
/* irregular: 3 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int temp_v1;
  unsigned char temp_v2 [24];
  
  temp_v0 = param_1->field_0x10;
  if (temp_v0 == 0) {
    temp_v1 = 0x8c;
  }
  else if (temp_v0 == 1) {
    temp_v1 = 0xd;
  }
  else if ((temp_v0 == 2) || (temp_v0 != 3)) {
    temp_v1 = 0;
  }
  else {
    temp_v1 = 0x10;
  }
  FUN_002522f8(temp_v2,0x11,&LAB_003535d0,param_4,
               (unsigned int)param_1->field_0x11 | ((param_1->field_0xc & 0xff0fffff) << 8),temp_v1 | 0x40000)
  ;
  FUN_0035fb7c();
                    /* WARNING: Treating indirect jump as return */
  return;
}
