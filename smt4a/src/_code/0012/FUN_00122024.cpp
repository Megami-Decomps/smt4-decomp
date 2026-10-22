/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00122024` (_code @ 0x122024, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003039f4(unsigned int *, int);
int _ZN9Obj55b10412initCapacityEj(unsigned int *, unsigned int);

typedef struct fn_00122024_arg0 fn_00122024_arg0;
struct fn_00122024_arg0 {
    undefined4 field_0x0; /* +0x0 */
    unsigned char pad_0x4[0x8];
    undefined4 field_0xc; /* +0xc */
    undefined4 field_0x10; /* +0x10 */
    undefined4 field_0x14; /* +0x14 */
    undefined4 field_0x18; /* +0x18 */
    undefined4 field_0x1c; /* +0x1c */
};

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_4_stack;

extern unsigned char DAT_0055b10c; /* 0x55b10c */

extern unsigned int *_ZN9Obj5593b8C1Ev(fn_00122024_arg0 *);
/* Supplied declaration required: FUN_003039f4. */
/* Supplied declaration required: _ZN9Obj55b10412initCapacityEj. */
extern unsigned int wordRefCompare(int, unsigned int *);


unsigned int *
FUN_00122024(fn_00122024_arg0 *param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v1 = param_4;
  puVar1 = (unsigned int *)_ZN9Obj5593b8C1Ev(param_1);
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  *puVar1 = (unsigned int)&DAT_0055b10c;
  temp_v1 = *(unsigned int *)(param_2 + 0xc);
  temp_v0 = wordRefCompare(param_2 + 0x18,(unsigned int *)&temp_v1);
  _ZN9Obj55b10412initCapacityEj(puVar1,temp_v0);
  FUN_003039f4(puVar1,param_2);
  return puVar1;
}

} /* extern "C" */
