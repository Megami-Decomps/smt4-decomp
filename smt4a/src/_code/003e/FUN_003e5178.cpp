/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e5178` (_code @ 0x3e5178, 0x140 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00184310(void);
int FUN_002a6894(unsigned short *);
int FUN_002e6354(unsigned short *, int);
int FUN_004bcd90(unsigned short *);
int VectorSignedToFloat(int, int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern int FUN_0018416c(unsigned short);
/* Supplied declaration required: FUN_00184310. */
extern int FUN_0019e52c(unsigned short);
/* Supplied declaration required: FUN_002a6894. */
/* Supplied declaration required: FUN_002e6354. */
/* Supplied declaration required: FUN_004bcd90. */


void FUN_003e5178(unsigned short *param_1,int param_2)

{
/* irregular: irregular input(s): in_fpscr; 5 native warning(s); review required */
  int temp_v0;
  short temp_v1;
  unsigned char temp_v2;
  unsigned int in_fpscr;
  float temp_v3;
  
  FUN_002e6354(param_1,300);
  temp_v0 = FUN_0019e52c(param_1[0x96]);
  temp_v2 = param_2 == 0;
  if (temp_v2) {
    param_2 = temp_v0;
  }
  if (!temp_v2 || param_2 != 0) {
    param_1[0x31] = (short)param_2;
    FUN_00184310();
    param_1[0x32] = *(unsigned short *)(param_2 + 6);
    *param_1 = *(unsigned short *)(param_2 + 0x18);
    param_1[1] = *(unsigned short *)(param_2 + 0x1a);
    param_1[2] = *(unsigned short *)(param_2 + 0x1e);
    param_1[4] = *(unsigned short *)(param_2 + 0x22);
    param_1[5] = *(unsigned short *)(param_2 + 0x24);
    param_1[6] = *(unsigned short *)(param_2 + 0x26);
    param_1[3] = *(unsigned short *)(param_2 + 0x20);
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = *(unsigned short *)(param_2 + 0x1e);
    param_1[0x12] = *(unsigned short *)(param_2 + 0x22);
    param_1[0x13] = *(unsigned short *)(param_2 + 0x24);
    param_1[0x14] = *(unsigned short *)(param_2 + 0x26);
    param_1[0x11] = *(unsigned short *)(param_2 + 0x20);
    param_1[0x1a] = *(unsigned short *)(param_2 + 0x40);
    param_1[0x1b] = *(unsigned short *)(param_2 + 0x42);
    param_1[0x1c] = *(unsigned short *)(param_2 + 0x44);
    param_1[0x1d] = *(unsigned short *)(param_2 + 0x46);
    param_1[0x1e] = *(unsigned short *)(param_2 + 0x48);
    param_1[0x1f] = *(unsigned short *)(param_2 + 0x4a);
    param_1[0x20] = *(unsigned short *)(param_2 + 0x4c);
    param_1[0x21] = *(unsigned short *)(param_2 + 0x4e);
    FUN_004bcd90(param_1);
    temp_v1 = param_1[7];
    temp_v0 = FUN_0018416c(param_1[0x31]);
    if (temp_v0 != 0) {
      temp_v3 = (float)VectorSignedToFloat((int)temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v1 = (short)(int)(temp_v3 * 1.25f);
    }
    param_1[0x15] = temp_v1;
    param_1[0x16] = param_1[8];
    FUN_002a6894(param_1);
    return;
  }
  return;
}

} /* extern "C" */
