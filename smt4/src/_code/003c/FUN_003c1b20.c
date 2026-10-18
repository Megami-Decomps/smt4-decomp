/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c1b20` (_code @ 0x3c1b20, 0x124 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
} param_3_stack;

/* Supplied declaration required: FUN_0026e630. */
/* Supplied declaration required: FUN_00299370. */
/* Supplied declaration required: FUN_002c0c74. */
extern int FUN_002c0cc4(unsigned int);
extern unsigned int FUN_002c0cec(unsigned int, unsigned int);
/* Supplied declaration required: FUN_003c219c. */


void FUN_003c1b20(int param_1,int param_2,int param_3)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int uStack_2c;
  unsigned int temp_v4;
  unsigned int uStack_24;
  
  temp_v0 = FUN_002c0cec(9,0);
  FUN_002c0c74();
  temp_v1 = FUN_002c0cc4(temp_v0);
  temp_v3 = *(unsigned int *)(temp_v1 + 5);
  temp_v4 = (unsigned int)*(unsigned char *)(temp_v1 + 0xb) | ((unsigned int)*(unsigned char *)(temp_v1 + 0xc) << 0x10) |
             ((unsigned int)*(unsigned char *)(temp_v1 + 0xd) << 0x18);
  uStack_24 = 0;
  uStack_2c = (unsigned int)*(unsigned char *)(temp_v1 + 9) | ((unsigned int)*(unsigned char *)(temp_v1 + 10) << 0x10);
  temp_v1 = 0;
  do {
    if (*(char *)(param_1 + 0x76) == 'c') break;
    if (param_3 != 0) {
      temp_v2 = 0;
      do {
        FUN_003c219c(param_1 + 0xe,&temp_v3,0);
        temp_v2 = temp_v2 + 1;
      } while (temp_v2 < 5);
    }
    *(char *)(param_1 + 0x76) = *(char *)(param_1 + 0x76) + '\x01';
    FUN_0026e630(10);
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < param_2);
  FUN_00299370(0);
  *(unsigned short *)(param_1 + 0x2a) = *(unsigned short *)(param_1 + 0x1c);
  *(unsigned short *)(param_1 + 0x2c) = *(unsigned short *)(param_1 + 0x1e);
  *(unsigned short *)(param_1 + 0x72) = 0;
  return;
}
