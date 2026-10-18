/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003de758` (_code @ 0x3de758, 0x114 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_3_stack;

extern int DAT_00434290; /* 0x434290 */

/* Supplied declaration required: FUN_0022699c. */
extern int FUN_002939f4(void);


unsigned int FUN_003de758(short param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  
  temp_v0 = FUN_002939f4();
  temp_v3 = 4;
  do {
    temp_v4 = *(int *)(temp_v0 + 0x1e98) + temp_v3 * 0x114;
    temp_v1 = *(unsigned int *)(temp_v4 + 0x50);
    if (((temp_v1 & 1) != 0 && (temp_v1 & 2) != 0) && (temp_v1 & 0x10000) != 0) {
      if (*(int *)(temp_v4 + 100) == 0x4c4c4cff) {
        temp_v5 = *(unsigned int *)(temp_v4 + 0x68);
        temp_v2 = DAT_00434290;
        FUN_0022699c(DAT_00434290,(int)param_1,0,param_2);
        *(unsigned char *)(temp_v2 + 5) = *(unsigned char *)(temp_v2 + 5) | 4;
        *(int *)(temp_v2 + 0x14) = temp_v4;
        *(unsigned char *)(temp_v2 + 4) = 0x21;
        *(unsigned int *)(temp_v2 + 0x28) = param_3;
        *(unsigned int *)(temp_v2 + 0x4c) = temp_v5;
      }
      else {
        temp_v2 = DAT_00434290;
        FUN_0022699c(DAT_00434290,(int)param_1,0,param_2);
        *(unsigned char *)(temp_v2 + 5) = *(unsigned char *)(temp_v2 + 5) | 4;
        *(int *)(temp_v2 + 0x14) = temp_v4;
        *(unsigned char *)(temp_v2 + 4) = 0x22;
        *(unsigned int *)(temp_v2 + 0x28) = param_3;
        *(unsigned int *)(temp_v2 + 0x4c) = 0xff;
      }
      *(unsigned int *)(temp_v4 + 0x50) = *(unsigned int *)(temp_v4 + 0x50) & 0xfffeffff;
    }
    temp_v3 = temp_v3 + 1;
  } while (temp_v3 < 0x36);
  return 1;
}
