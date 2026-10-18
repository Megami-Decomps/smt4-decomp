/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0026c464` (_code @ 0x26c464, 0x114 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_3_stack;

/* Supplied declaration required: FUN_00258de0. */
extern short FUN_0029a924(unsigned short);
extern short FUN_0029a9d4(unsigned short, unsigned int);
extern int FUN_002a8740(void);
extern int FUN_002a8764(void);
/* Supplied declaration required: FUN_002ae164. */
extern int FUN_002b63ac(void);


unsigned int FUN_0026c464(int param_1,int param_2,int param_3)

{
/* irregular: 2 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned char temp_v5;
  
  FUN_002ae164();
  if (param_2 != 0) {
    temp_v1 = param_1;
    FUN_00258de0(param_1,0xffffffff,param_2,param_3,0);
    temp_v5 = temp_v1 == 0;
    temp_v1 = FUN_002a8764();
    temp_v4 = 0;
    do {
      temp_v3 = (int)*(char *)(temp_v1 + temp_v4 + 0x90f0);
      if ((-1 < temp_v3) &&
         (temp_v2 = param_1, FUN_00258de0(param_1,temp_v3,param_2,param_3,0), temp_v2 == 0)) {
        temp_v5 = 1;
      }
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < 0x18);
    if (temp_v5) {
      if (param_3 == 0) {
        if (param_1 < 0) {
          temp_v1 = FUN_002b63ac();
          temp_v0 = FUN_0029a9d4(*(unsigned short *)(param_2 + 0x20),1);
          temp_v0 = *(short *)(temp_v1 + 0x2c) - temp_v0;
          *(short *)(temp_v1 + 0x2c) = temp_v0;
        }
        else {
          temp_v1 = FUN_002a8740();
          temp_v0 = FUN_0029a924(*(unsigned short *)(param_2 + 0x20));
          temp_v0 = *(short *)(temp_v1 + 0x2c) - temp_v0;
          *(short *)(temp_v1 + 0x2c) = temp_v0;
        }
        if (temp_v0 < 0) {
          *(unsigned short *)(temp_v1 + 0x2c) = 0;
        }
      }
      return 0;
    }
  }
  return 1;
}
