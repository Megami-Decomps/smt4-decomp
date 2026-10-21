/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00113f00` (_code @ 0x113f00, 0x9c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int maxValueTrackerUpdate(unsigned int);
void FUN_002e32a4(int kind, ...);
int __aeabi_uidivmod(unsigned int, unsigned int);

typedef struct fn_00113f00_arg0 fn_00113f00_arg0;
struct fn_00113f00_arg0 {
    unsigned char pad_0x0[0x8];
    int field_0x8; /* +0x8 */
    int field_0xc; /* +0xc */
    unsigned char pad_0x10[0x8];
    int field_0x18; /* +0x18 */
    uint field_0x1c; /* +0x1c */
    unsigned char field_0x20; /* +0x20 */
    unsigned char pad_0x21[0x63];
    int field_0x84; /* +0x84 */
    int field_0x88; /* +0x88 */
};

/* stack frame of param_2: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_2_stack;

extern unsigned char LAB_00113f9c; /* 0x113f9c */

/* Supplied declaration required: maxValueTrackerUpdate. */
/* Supplied declaration required: FUN_002e32a4. */
extern unsigned int FUN_002ea704(void);
extern int FUN_002f14a8(int, unsigned int);
/* Supplied declaration required: __aeabi_uidivmod. */


unsigned int FUN_00113f00(fn_00113f00_arg0 *param_1,int *param_2)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int *piVar6;
  unsigned int temp_v6;
  
  temp_v6 = 0;
  if (param_1->field_0x84 != 0) {
    temp_v6 = 0;
    temp_v0 = FUN_002ea704();
    for (temp_v5 = 0; temp_v5 < param_1->field_0x1c; temp_v5 = temp_v5 + 1) {
      __aeabi_uidivmod(param_1->field_0x18 + temp_v5,*(unsigned int *)&param_1->field_0x20);
      temp_v1 = (param_1->field_0xc - param_1->field_0x8) >> 2;
      if (temp_v1 <= temp_v4) {
        FUN_002e32a4(9,&LAB_00113f9c,&LAB_00113f9c,temp_v4,temp_v1);
      }
      piVar6 = *(int **)(param_1->field_0x8 + temp_v4 * 4);
      temp_v2 = *piVar6;
      temp_v3 = FUN_002f14a8(temp_v2,1);
      if (((temp_v3 != 0) && (temp_v3 = FUN_002f14a8(temp_v2,2), temp_v3 == 0)) &&
         (param_1->field_0x84 < *param_2 - piVar6[10])) {
        *(unsigned char *)(temp_v2 + 0x1c) = *(unsigned char *)(temp_v2 + 0x1c) | 2;
        param_1->field_0x88 = param_1->field_0x88 + 1;
        maxValueTrackerUpdate(temp_v0);
        temp_v6 = 1;
      }
    }
  }
  return temp_v6;
}

} /* extern "C" */
