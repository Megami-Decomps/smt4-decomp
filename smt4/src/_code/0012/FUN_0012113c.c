/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012113c` (_code @ 0x12113c, 0xf4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_7: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp50; /* 0x50: local_50 */
} param_7_stack;

extern int FUN_0012f59c(void);
/* Supplied declaration required: FUN_0012fa30. */
extern int FUN_0014204c(unsigned int, unsigned char *);
extern int FUN_002c3984(void);
extern unsigned int FUN_002c3994(void);
/* Supplied declaration required: nw_snd_internal_driver_StreamBufferPool_Initialize. */


unsigned int
FUN_0012113c(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,unsigned int param_5
            ,unsigned int param_6,unsigned int param_7)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned char temp_v4 [16];
  unsigned int temp_v5;
  unsigned char temp_v6 [16];
  int temp_v7;
  
  temp_v0 = FUN_0012f59c();
  if (temp_v0 != 0) {
    if (param_7 != 0) {
      temp_v1 = FUN_002c3994();
      temp_v0 = FUN_002c3984();
      if (param_6 < temp_v1) {
        return 0;
      }
      if (temp_v0 + temp_v1 < param_6 + param_7) {
        return 0;
      }
    }
    temp_v0 = param_1;
    FUN_0012fa30(param_1,param_2,param_4,param_5);
    if (temp_v0 != 0) {
      temp_v2 = FUN_0014204c(param_2,temp_v6);
      temp_v0 = 0;
      if (temp_v2 != 0) {
        temp_v0 = temp_v7;
      }
      if ((unsigned int)(temp_v0 * 0xa000) < param_7 || temp_v0 * 0xa000 - param_7 == 0) {
        temp_v0 = FUN_0014204c(param_2,temp_v4);
        temp_v3 = 0;
        if (temp_v0 != 0) {
          temp_v3 = temp_v5;
        }
        nw_snd_internal_driver_StreamBufferPool_Initialize(param_1 + 0x88,param_6,param_7,temp_v3);
        *(int *)(param_1 + 0xa0) = param_1 + 0xa4;
        *(unsigned int *)(param_1 + 0xbc) = param_3;
        return 1;
      }
    }
  }
  return 0;
}
