/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c6902` (_code @ 0x2c6902, 0x64 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_3_stack;

extern unsigned int FUN_002c6864(unsigned int, unsigned int);
extern unsigned int FUN_002c6966(void);
extern int FUN_002c6a04(void);


unsigned int FUN_002c6902(unsigned int param_1,unsigned int param_2,char *param_3)

{
  unsigned char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned char *pbVar6;
  unsigned int temp_v5;
  
  if ((param_2 != 0) && (param_2 >> 5 == 0)) {
    if (param_3 != (char *)0x0) {
      if (*param_3 != '*') {
        temp_v2 = FUN_002c6966();
        return temp_v2;
      }
      pbVar6 = (unsigned char *)(param_3 + 1);
      temp_v4 = 0;
      do {
        temp_v5 = 0;
        temp_v3 = 0;
        do {
          temp_v0 = *pbVar6;
          pbVar6 = pbVar6 + 1;
          if (temp_v0 < 0x3a) {
            temp_v1 = -0x30;
          }
          else {
            temp_v1 = -0x57;
          }
          temp_v5 = (temp_v5 << 4) | ((unsigned int)temp_v0 + temp_v1);
          temp_v3 = temp_v3 + 1;
        } while (temp_v3 < 8);
        if (((1 << (temp_v4 & 0xff)) & param_2) != 0) {
          temp_v3 = FUN_002c6a04();
          *(unsigned int *)(temp_v3 + temp_v4 * 4) = temp_v5;
        }
        temp_v4 = temp_v4 + 1;
      } while ((int)temp_v4 < 5);
    }
    temp_v2 = FUN_002c6864(param_1,param_2);
    return temp_v2;
  }
  return 0;
}
