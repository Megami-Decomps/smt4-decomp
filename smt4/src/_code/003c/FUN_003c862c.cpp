/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c862c` (_code @ 0x3c862c, 0x90 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0022e354(...);

typedef struct fn_003c862c_arg0 fn_003c862c_arg0;
struct fn_003c862c_arg0 {
    unsigned char pad_0x0[0x46];
    ushort field_0x46; /* +0x46 */
    unsigned char pad_0x48[0x5bc];
    undefined2 field_0x604; /* +0x604 */
    ushort field_0x606; /* +0x606 */
};

/* stack frame of param_4: 1 slot(s), 2 byte(s) */
typedef struct {
    unsigned short sp10; /* 0x10: local_10 */
} param_4_stack;

/* Supplied declaration required: FUN_0022e354. */
extern int FUN_002b6a54(int, unsigned short);
extern int FUN_002b6b20(void);


unsigned short FUN_003c862c(fn_003c862c_arg0 *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v2 = param_4;
  temp_v0 = FUN_002b6b20();
  temp_v1 = FUN_002b6b20();
  if ((*(short *)(temp_v1 + 0x46) != 0) && (*(short *)(temp_v1 + 0x604) != 0)) {
    temp_v0 = FUN_002b6a54((int)*(short *)(temp_v0 + 0x604),*(unsigned short *)(temp_v0 + 0x606));
    temp_v2 = (unsigned int)(*(unsigned short *)(temp_v0 + (int)param_1 * 2 + 0x24) & 0xfc00);
  }
  else {
    FUN_0022e354(&temp_v2,temp_v0,param_1);
  }
  return (unsigned short)temp_v2 >> 10;
}

} /* extern "C" */
