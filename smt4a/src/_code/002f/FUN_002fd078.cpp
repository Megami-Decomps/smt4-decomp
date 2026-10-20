/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fd078` (_code @ 0x2fd078, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef struct fn_002fd078_arg0 fn_002fd078_arg0;
typedef struct fn_002fd078_arg1 fn_002fd078_arg1;
struct fn_002fd078_arg0 {
    unsigned char pad_0x0[0xc];
    int field_0xc; /* +0xc */
    int field_0x10; /* +0x10 */
    unsigned char pad_0x14[0x4];
    int field_0x18; /* +0x18 */
};
struct fn_002fd078_arg1 {
    unsigned char pad_0x0[0xc];
    int field_0xc; /* +0xc */
    int field_0x10; /* +0x10 */
    unsigned char pad_0x14[0x4];
    int field_0x18; /* +0x18 */
};

extern int FUN_0030ef8c(int, int);


unsigned int FUN_002fd078(fn_002fd078_arg0 *param_1,fn_002fd078_arg1 *param_2)

{
  int temp_v0;
  
  if ((param_1->field_0x10 == param_2->field_0x10) &&
     (temp_v0 = FUN_0030ef8c(param_2->field_0xc + param_2->field_0x18,
                           param_1->field_0xc + param_1->field_0x18), temp_v0 == 0)) {
    return 1;
  }
  return 0;
}

} /* extern "C" */
