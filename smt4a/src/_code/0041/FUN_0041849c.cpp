/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0041849c` (_code @ 0x41849c, 0xe8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001ad9b4(void);

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
} param_2_stack;

extern int gameFlagsGetBlock(void);
extern int gameFlagBlockGet(void);
/* Supplied declaration required: FUN_001ad9b4. */
extern unsigned int FUN_001ba3d4(short *);


void FUN_0041849c(short *param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned short temp_v3;
  short *psVar5;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  
  temp_v1 = gameFlagsGetBlock();
  temp_v7 = 0;
  do {
    temp_v2 = gameFlagBlockGet();
    if ((*(unsigned char *)(temp_v2 + (temp_v7 & 0xffff) * 4 + 0x2a0) & 2) != 0) {
      temp_v3 = temp_v7;
      FUN_001ad9b4();
      if ((temp_v3 != 0) && (*(char *)(temp_v3 + 6) == '\0')) {
        temp_v2 = 0;
        do {
          temp_v6 = temp_v3 + temp_v2 * 8;
          psVar5 = (short *)(temp_v6 + 0x100);
          temp_v0 = *psVar5;
          if (temp_v0 == 1) {
            psVar5 = (short *)(unsigned int)*(unsigned short *)(temp_v6 + 0x102);
          }
          if ((temp_v0 == 1 && psVar5 == param_1) &&
             (temp_v4 = FUN_001ba3d4(param_1), temp_v4 < *(unsigned int *)(temp_v6 + 0x104))) {
            temp_v5 = gameFlagBlockGet();
            temp_v5 = temp_v5 + (temp_v7 & 0xffff) * 4;
            *(unsigned char *)(temp_v5 + 0x2a2) = *(unsigned char *)(temp_v5 + 0x2a2) | 2;
            if (param_2 + temp_v4 >= *(unsigned int *)(temp_v6 + 0x104)) {
              *(short *)(temp_v1 + 0x1096) = (short)(int)param_1;
            }
            else {
              *(short *)(temp_v1 + 0x1094) = (short)(int)param_1;
            }
          }
          temp_v2 = temp_v2 + 1;
        } while (temp_v2 < 4);
      }
    }
    temp_v7 = temp_v7 + 1;
  } while ((int)temp_v7 < 400);
  return;
}

} /* extern "C" */
