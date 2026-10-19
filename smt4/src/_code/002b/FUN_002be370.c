/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002be370` (_code @ 0x2be370, 0x1dc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_5: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_5_stack;

/* Supplied declaration required: FUN_002ae238. */
/* Supplied declaration required: FUN_002ae2c0. */
extern unsigned int FUN_002ae3c4(void);
/* Supplied declaration required: FUN_002ae9ec. */
/* Supplied declaration required: FUN_002b4670. */
/* Supplied declaration required: FUN_002b63ac. */
/* Supplied declaration required: FUN_002bf288. */


void FUN_002be370(unsigned int param_1,unsigned int param_2,unsigned int param_3,int param_4,int param_5)

{
/* irregular: 17 unstructured edge(s); 5 goto(s); 6 native warning(s); review required */
  unsigned short temp_v0;
  unsigned char temp_v1;
  unsigned int temp_v2;
  unsigned short *puVar4;
  int temp_v3;
  unsigned int temp_v4;
  
  temp_v4 = 0;
  temp_v1 = 0;
  temp_v2 = FUN_002ae3c4();
  switch(temp_v2) {
  case 0:
    FUN_002ae238();
    if (*(char *)(param_1 + 0x53) == '\0') {
      temp_v4 = 0x3ff;
    }
    else {
      temp_v4 = FUN_002ae2c0();
    }
  default:
    FUN_002ae9ec(2,0x13,temp_v4,param_2,param_3,param_4);
    if (temp_v1) {
      FUN_002bf288(2,0x13,0x417,param_2,param_3,param_4 + 1);
    }
    return;
  case 1:
    FUN_002b4670();
    temp_v4 = FUN_002ae2c0(*(unsigned char *)(param_1 + 0x6c));
    FUN_002ae9ec(2,0x13,temp_v4,param_2,param_3,param_4);
    if (temp_v1) {
      FUN_002bf288(2,0x13,0x417,param_2,param_3,param_4 + 1);
    }
    return;
  case 2:
    temp_v4 = 0x3f7;
    if (param_5 == 0) break;
    puVar4 = (unsigned short *)FUN_002b63ac();
    temp_v0 = *puVar4;
joined_r0x002be4f0:
    if (temp_v0 != param_1) break;
    temp_v1 = 1;
    break;
  case 3:
    temp_v4 = 0x3f8;
    if (param_5 == 0) break;
    temp_v3 = FUN_002b63ac();
    temp_v0 = *(unsigned short *)(temp_v3 + 2);
joined_r0x002be470:
    if (temp_v0 != param_1) break;
    temp_v1 = 1;
    break;
  case 4:
    temp_v4 = 0x3fa;
    if (param_5 == 0) break;
    temp_v3 = FUN_002b63ac();
    temp_v0 = *(unsigned short *)(temp_v3 + 6);
    goto joined_r0x002be470;
  case 5:
    temp_v4 = 0x3fb;
    if (param_5 == 0) break;
    temp_v3 = FUN_002b63ac();
    temp_v0 = *(unsigned short *)(temp_v3 + 8);
    goto joined_r0x002be4f0;
  case 6:
    temp_v4 = 0x3fc;
    if (param_5 == 0) break;
    temp_v3 = FUN_002b63ac();
    temp_v0 = *(unsigned short *)(temp_v3 + 10);
    goto joined_r0x002be4f0;
  case 7:
    temp_v4 = 0x3fd;
    if (param_5 == 0) break;
    temp_v3 = FUN_002b63ac();
    temp_v0 = *(unsigned short *)(temp_v3 + 0xc);
    goto joined_r0x002be4f0;
  case 8:
    temp_v4 = 0x3f9;
    if (param_5 == 0) break;
    temp_v3 = FUN_002b63ac();
    temp_v0 = *(unsigned short *)(temp_v3 + 4);
    goto joined_r0x002be4f0;
  case 9:
  case 10:
    temp_v4 = 0x3fe;
    FUN_002ae9ec(2,0x13,temp_v4,param_2,param_3,param_4);
    if (temp_v1) {
      FUN_002bf288(2,0x13,0x417,param_2,param_3,param_4 + 1);
    }
    return;
  }
  FUN_002ae9ec(2,0x13,temp_v4,param_2,param_3,param_4);
  if (temp_v1) {
    FUN_002bf288(2,0x13,0x417,param_2,param_3,param_4 + 1);
  }
  return;
}
