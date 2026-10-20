/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00272204` (_code @ 0x272204, 0x9c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int memAlloc(int, int, int, int, int, int);
int asdMemFree(void);
int rt_memcpy(void);

typedef struct fn_00272204_arg0 fn_00272204_arg0;
typedef struct fn_00272204_arg1 fn_00272204_arg1;
struct fn_00272204_arg0 {
    unsigned char pad_0x0[0x1c];
    undefined2 field_0x1c; /* +0x1c */
    unsigned char pad_0x1e[0x2];
    undefined4 field_0x20; /* +0x20 */
    int field_0x24; /* +0x24 */
    int field_0x28; /* +0x28 */
};
struct fn_00272204_arg1 {
    unsigned char pad_0x0[0x1];
    byte field_0x1; /* +0x1 */
    byte field_0x2; /* +0x2 */
    unsigned char pad_0x3[0xc];
    byte field_0xf; /* +0xf */
    byte field_0x10; /* +0x10 */
    byte field_0x11; /* +0x11 */
};

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

/* Supplied declaration required: memAlloc. */
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: rt_memcpy. */


void FUN_00272204(fn_00272204_arg0 *param_1,fn_00272204_arg1 *param_2,int param_3,unsigned short param_4
                 )

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  if (param_1->field_0x28 != 0) {
    asdMemFree();
    param_1->field_0x20 = 0;
    param_1->field_0x24 = 0;
    param_1->field_0x28 = 0;
  }
  temp_v0 = 0;
  if (param_2 != (fn_00272204_arg1 *)0x0) {
    temp_v0 = param_3;
  }
  if ((param_2 != (fn_00272204_arg1 *)0x0 && param_3 != 0) && -1 < temp_v0) {
    temp_v0 = 0x10000;
    memAlloc(0x10000,0x100,0,param_3,0x10,1);
    param_1->field_0x1c = param_4;
    param_1->field_0x28 = temp_v0;
    param_1->field_0x20 = temp_v0;
    param_1->field_0x24 = param_3;
    rt_memcpy();
    return;
  }
  return;
}

} /* extern "C" */
