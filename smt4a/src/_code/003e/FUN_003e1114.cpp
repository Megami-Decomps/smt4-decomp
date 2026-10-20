/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e1114` (_code @ 0x3e1114, 0x98 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003e03b0(...);
int FUN_003f12d4(...);

typedef struct fn_003e1114_arg1 fn_003e1114_arg1;
struct fn_003e1114_arg1 {
    unsigned char pad_0x0[0x3];
    byte field_0x3; /* +0x3 */
    unsigned char pad_0x4[0x30];
    undefined4 field_0x34; /* +0x34 */
    unsigned char pad_0x38[0x32];
    short field_0x6a; /* +0x6a */
    unsigned char pad_0x6c[0x358];
    unsigned char field_0x3c4; /* +0x3c4 */
    unsigned char pad_0x3c5[0x3f];
    void *field_0x404; /* +0x404 */
};

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

/* Supplied declaration required: FUN_003e03b0. */
extern int FUN_003f0f2c(fn_003e1114_arg1 *);
/* Supplied declaration required: FUN_003f12d4. */


void FUN_003e1114(unsigned int *param_1,fn_003e1114_arg1 *param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = 4;
  do {
    if (*(char *)(*(int *)&param_2[7].field_0x3c4 + temp_v0 * 0x408 + 0x23a) != '\0') {
      FUN_003f12d4(param_2,1);
      *param_1 = 7;
      param_1[4] = 0;
      param_1[3] = 0;
      temp_v0 = FUN_003f0f2c(param_2);
      if (temp_v0 == 0) {
        return;
      }
      break;
    }
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 0x36);
  param_1[4] = 0;
  *param_1 = 8;
  param_1[3] = 0;
  FUN_003e03b0(param_1,param_2);
  return;
}

} /* extern "C" */
