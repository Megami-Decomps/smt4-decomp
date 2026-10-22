/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004715a8` (_code @ 0x4715a8, 0xc8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int __aeabi_vec_ctor_nocookie_nodtor(...);
int asdOperatorNewE(...);
int FUN_00429f38(...);
int FUN_004701d8(...);

typedef struct fn_004715a8_arg0 fn_004715a8_arg0;
struct fn_004715a8_arg0 {
    unsigned char pad_0x0[0x310];
    undefined4 field_0x310; /* +0x310 */
    unsigned char pad_0x314[0x4];
    undefined4 field_0x318; /* +0x318 */
    unsigned char pad_0x31c[0x128];
    unsigned char field_0x444; /* +0x444 */
    unsigned char pad_0x445[0x7];
    int field_0x44c; /* +0x44c */
};

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern int g_aocMain; /* 0x570260 */

extern int objGetFlagBit16(void);
extern int asdOperatorDeleteB(void);
/* Supplied declaration required: __aeabi_vec_ctor_nocookie_nodtor. */
/* Supplied declaration required: asdOperatorNewE. */
/* Supplied declaration required: FUN_00429f38. */
extern int FUN_0046bc7c(fn_004715a8_arg0 *, unsigned int);
/* Supplied declaration required: FUN_004701d8. */


void FUN_004715a8(fn_004715a8_arg0 *param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = 0;
  if (param_1->field_0x44c != 0) {
    temp_v0 = asdOperatorDeleteB();
    param_1->field_0x44c = 0;
  }
  *(unsigned int *)&param_1->field_0x444 = 0;
  FUN_00429f38();
  if (temp_v0 != 0) {
    temp_v0 = objGetFlagBit16();
    if (temp_v0 != 0) {
      temp_v0 = FUN_0046bc7c(param_1,0x33);
      *(int *)&param_1->field_0x444 = temp_v0;
      if (0 < *(int *)&param_1->field_0x444) {
        temp_v0 = temp_v0 << 4;
        asdOperatorNewE();
        if (temp_v0 != 0) {
          __aeabi_vec_ctor_nocookie_nodtor();
        }
        param_1->field_0x44c = temp_v0;
      }
      FUN_004701d8(param_1,0x33,*(unsigned int *)&param_1->field_0x444,param_1->field_0x44c);
      return;
    }
  }
  else {
    *(unsigned int *)(g_aocMain + 0x754) = *(unsigned int *)(g_aocMain + 0x754) & 0xfffeffff;
  }
  return;
}

} /* extern "C" */
