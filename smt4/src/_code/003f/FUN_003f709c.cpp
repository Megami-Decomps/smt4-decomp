/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f709c` (_code @ 0x3f709c, 0x5c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef struct fn_003f709c_arg0 fn_003f709c_arg0;
struct fn_003f709c_arg0 {
    unsigned char pad_0x0[0x4];
    int field_0x4; /* +0x4 */
    byte field_0x8; /* +0x8 */
    byte field_0x9; /* +0x9 */
    char field_0xa; /* +0xa */
};

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_3_stack;

extern unsigned int nn_fnd_ExpHeapBase_Allocate(unsigned int, unsigned int, int, unsigned char, int, unsigned char);
extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);


unsigned int FUN_003f709c(fn_003f709c_arg0 *param_1,unsigned int param_2,int param_3)

{
  unsigned char temp_v0;
  unsigned char temp_v1;
  unsigned char temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  
  temp_v5 = param_1->field_0x4;
  temp_v0 = param_1->field_0x8;
  temp_v1 = param_1->field_0x9;
  temp_v2 = (unsigned char)param_1->field_0xa;
  temp_v4 = temp_v5 + 0x58;
  nn_os_CriticalSection_Enter(temp_v4);
  temp_v3 = nn_fnd_ExpHeapBase_Allocate(temp_v5,param_2,param_3,temp_v0,(unsigned int)temp_v1,temp_v2);
  nn_os_CriticalSection_Leave(temp_v4);
  return temp_v3;
}

} /* extern "C" */
