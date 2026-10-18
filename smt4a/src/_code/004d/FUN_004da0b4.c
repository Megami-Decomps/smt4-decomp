/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004da0b4` (_code @ 0x4da0b4, 0x90 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_004da0b4_arg0 fn_004da0b4_arg0;
struct fn_004da0b4_arg0 {
    unsigned char pad_0x0[0x62];
    ushort field_0x62; /* +0x62 */
    unsigned char pad_0x64[0xc8];
    undefined2 field_0x12c; /* +0x12c */
    ushort field_0x12e; /* +0x12e */
};

/* stack frame of param_4: 1 slot(s), 2 byte(s) */
typedef struct {
    unsigned short sp10; /* 0x10: local_10 */
} param_4_stack;

extern int FUN_00168518(int, unsigned short);
extern int FUN_0019a7dc(void);
/* Supplied declaration required: FUN_001fef70. */


unsigned short FUN_004da0b4(fn_004da0b4_arg0 *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v2 = param_4;
  temp_v0 = FUN_0019a7dc();
  temp_v1 = FUN_0019a7dc();
  if ((*(short *)(temp_v1 + 0x62) != 0) && (*(short *)(temp_v1 + 300) != 0)) {
    temp_v0 = FUN_00168518((int)*(short *)(temp_v0 + 300),*(unsigned short *)(temp_v0 + 0x12e));
    temp_v2 = (unsigned int)(*(unsigned short *)(temp_v0 + (int)param_1 * 2 + 0x28) & 0xfc00);
  }
  else {
    FUN_001fef70(&temp_v2,temp_v0,param_1);
  }
  return (unsigned short)temp_v2 >> 10;
}
