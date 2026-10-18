/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001562fc` (_code @ 0x1562fc, 0x100 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_3_stack;

extern unsigned char DAT_004e6f64; /* 0x4e6f64 */

/* Supplied declaration required: FUN_00153640. */
extern int FUN_002b5954(void);


void FUN_001562fc(int param_1,int param_2,unsigned short *param_3)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned short temp_v1;
  unsigned char temp_v2;
  
  *(unsigned char *)(param_1 + param_2 + 6) = param_3[1] != 0;
  temp_v0 = FUN_002b5954();
  temp_v1 = *param_3;
  temp_v2 = (temp_v1 & 1) != 0;
  if (temp_v2) {
    temp_v1 = param_3[1];
  }
  temp_v0 = temp_v0 + param_2 * 0x34;
  if (temp_v2) {
    *(unsigned short *)(temp_v0 + 0x2a) = temp_v1;
  }
  if ((*param_3 & 4) != 0) {
    *(unsigned short *)(temp_v0 + 0x2e) = param_3[3];
    *(unsigned short *)(temp_v0 + 0x44) = param_3[0xe];
    *(unsigned short *)(temp_v0 + 0x46) = param_3[0xf];
    *(unsigned short *)(temp_v0 + 0x48) = param_3[0x10];
    *(unsigned short *)(temp_v0 + 0x4a) = param_3[0x11];
    *(unsigned short *)(temp_v0 + 0x4c) = param_3[0x12];
    *(unsigned short *)(temp_v0 + 0x4e) = param_3[0x13];
    *(unsigned short *)(temp_v0 + 0x50) = param_3[0x14];
    *(unsigned short *)(temp_v0 + 0x52) = param_3[0x15];
    *(unsigned short *)(temp_v0 + 0x54) = param_3[0x16];
    *(unsigned short *)(temp_v0 + 0x56) = param_3[0x17];
    *(unsigned short *)(temp_v0 + 0x58) = param_3[0x18];
    *(unsigned short *)(temp_v0 + 0x5a) = param_3[0x19];
  }
  if ((*param_3 & 2) != 0) {
    *(unsigned int *)(temp_v0 + 0x30) = *(unsigned int *)(param_3 + 4);
    *(unsigned int *)(temp_v0 + 0x34) = *(unsigned int *)(param_3 + 6);
    *(unsigned int *)(temp_v0 + 0x38) = *(unsigned int *)(param_3 + 8);
    *(unsigned int *)(temp_v0 + 0x3c) = *(unsigned int *)(param_3 + 10);
    *(unsigned int *)(temp_v0 + 0x40) = *(unsigned int *)(param_3 + 0xc);
  }
  FUN_00153640(&DAT_004e6f64);
  return;
}
