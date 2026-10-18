/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002eb108` (_code @ 0x2eb108, 0x56 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_002eb108_arg0 fn_002eb108_arg0;
struct fn_002eb108_arg0 {
    undefined4 field_0x0; /* +0x0 */
    unsigned char pad_0x4[0x124];
    undefined4 field_0x128; /* +0x128 */
    undefined4 field_0x12c; /* +0x12c */
    unsigned char pad_0x130[0x10];
    undefined4 field_0x140; /* +0x140 */
    undefined4 field_0x144; /* +0x144 */
};

/* stack frame of param_6: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_6_stack;

extern unsigned char DAT_0055b33c; /* 0x55b33c */

extern int FUN_002e760a(unsigned int);
extern unsigned int *FUN_003022b4(void);
extern unsigned int FUN_00302374(void);
/* Supplied declaration required: FUN_0030239c. */


unsigned int *
FUN_002eb108(fn_002eb108_arg0 *param_1,unsigned int param_2,unsigned int param_3,int param_4,
            unsigned int param_5,unsigned int param_6)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v2 = param_4;
  puVar1 = (unsigned int *)FUN_003022b4();
  *puVar1 = (unsigned int)&DAT_0055b33c;
  puVar1[0x4a] = 0;
  puVar1[0x4b] = 0;
  puVar1[0x50] = 0;
  puVar1[0x51] = 0;
  if (param_4 << 0x19 < 0) {
    temp_v0 = FUN_002e760a(0x28);
    temp_v1 = 0;
    if (temp_v0 != 0) {
      temp_v1 = FUN_00302374();
    }
  }
  else {
    temp_v1 = 0;
  }
  FUN_0030239c(puVar1,param_2,param_3,param_4,param_5,param_6,temp_v1,param_1,param_2,param_3,temp_v2);
  return puVar1;
}
