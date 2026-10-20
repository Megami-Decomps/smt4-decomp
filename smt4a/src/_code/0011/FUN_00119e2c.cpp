/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00119e2c` (_code @ 0x119e2c, 0xa0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002fbc1a(...);
int streamExtractU8(...);
int streamReadWord(...);
int FUN_00306ce4(...);

typedef struct fn_00119e2c_arg0 fn_00119e2c_arg0;
struct fn_00119e2c_arg0 {
    unsigned char pad_0x0[0x4];
    byte field_0x4; /* +0x4 */
    unsigned char pad_0x5[0x3];
    void *field_0x8; /* +0x8 */
    undefined4 field_0xc; /* +0xc */
};

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

/* Supplied declaration required: FUN_002fbc1a. */
/* Supplied declaration required: streamExtractU8. */
/* Supplied declaration required: streamReadWord. */
/* Supplied declaration required: FUN_00306ce4. */


void FUN_00119e2c(fn_00119e2c_arg0 *param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 4 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v2 = param_4;
  FUN_00306ce4();
  temp_v2 = (unsigned int)param_1->field_0x4;
  if (temp_v2 == 0) {
    *(unsigned char *)(param_2 + 5) = param_1->field_0x4;
    temp_v0 = *(char *)((int)&param_1[3].field_0x8 + 3);
    if (((temp_v0 != '\0') ||
        ((streamExtractU8(param_1,param_2 + 5), param_1->field_0x4 == 0 &&
         (streamReadWord(param_1,&temp_v2), param_1->field_0x4 == 0)))) &&
       ((temp_v1 = param_1->field_0xc, param_1->field_0x4 == 0 &&
        ((((FUN_002fbc1a(param_1,param_2 + 8), param_1->field_0x4 == 0 &&
           (streamReadWord(param_1,param_2 + 0x10), param_1->field_0x4 == 0)) &&
          (streamExtractU8(param_1,param_2 + 0x14), param_1->field_0x4 == 0)) &&
         ((streamReadWord(param_1,param_2 + 0x18), param_1->field_0x4 == 0 && (temp_v0 == '\0')))))))) {
      temp_v2 = temp_v1 + temp_v2;
      if ((temp_v2 < (unsigned int)param_1->field_0xc) ||
         (*(unsigned int *)((int)param_1->field_0x8 + 0x10) < temp_v2)) {
        param_1->field_0x4 = 1;
        return;
      }
      param_1->field_0xc = temp_v2;
    }
  }
  return;
}

} /* extern "C" */
