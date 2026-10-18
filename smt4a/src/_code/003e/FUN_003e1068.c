/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e1068` (_code @ 0x3e1068, 0xac bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_003e1068_arg1 fn_003e1068_arg1;
struct fn_003e1068_arg1 {
    unsigned char pad_0x0[0x3];
    byte field_0x3; /* +0x3 */
    unsigned char pad_0x4[0x66];
    short field_0x6a; /* +0x6a */
    unsigned char pad_0x6c[0x84];
    undefined4 field_0xf0; /* +0xf0 */
    unsigned char pad_0xf4[0x72];
    ushort field_0x166; /* +0x166 */
};

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

/* Supplied declaration required: FUN_003e1454. */
/* Supplied declaration required: FUN_003e9b74. */
/* Supplied declaration required: FUN_003eaa9c. */
extern int FUN_003eca48(fn_003e1068_arg1 *, unsigned short);
extern int FUN_003eccd0(fn_003e1068_arg1 *);
extern int FUN_003ece50(fn_003e1068_arg1 *);
/* Supplied declaration required: FUN_003f0e20. */


void FUN_003e1068(unsigned int *param_1,fn_003e1068_arg1 *param_2)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  fn_003e1068_arg1 *pfVar2;
  
  temp_v0 = FUN_003eccd0(param_2);
  if ((((temp_v0 != 0) &&
       (pfVar2 = param_2, FUN_003f0e20(param_2,(int)*(short *)(temp_v0 + 0x6a)),
       pfVar2 != (fn_003e1068_arg1 *)0x0)) &&
      (temp_v0 = FUN_003eca48(param_2,pfVar2->field_0x166), temp_v0 != 0)) &&
     ((*(unsigned char *)(temp_v0 + 3) & 2) != 0)) {
    FUN_003e9b74(param_2);
    *param_1 = 0x10;
    param_1[4] = 0;
    param_1[3] = 0;
    temp_v0 = FUN_003ece50(param_2);
    if (temp_v0 == 0) {
      return;
    }
    FUN_003eaa9c(param_2);
  }
  param_1[4] = 0;
  param_1[3] = 0;
  *param_1 = 0x14;
  FUN_003e1454(param_1,param_2);
  return;
}
