/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00428220` (_code @ 0x428220, 0xc8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001028b8(unsigned char [20], int, unsigned char *, unsigned int, unsigned int, unsigned int);
int FUN_00195fc8(void);
int FUN_00439a04(void);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_4_stack;

extern unsigned char LAB_004282e8; /* 0x4282e8 */

/* Supplied declaration required: FUN_001028b8. */
/* Supplied declaration required: FUN_00195fc8. */
/* Supplied declaration required: FUN_00439a04. */


void FUN_00428220(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned char temp_v4 [20];
  
  switch(*(unsigned char *)(param_1 + 0x10)) {
  case 0:
    temp_v2 = 0x8c;
    break;
  case 1:
    temp_v2 = 0xd;
    break;
  default:
    temp_v2 = 0;
    break;
  case 3:
    temp_v2 = 0x10;
    break;
  case 4:
    temp_v2 = 0x30;
  }
  temp_v3 = *(unsigned int *)(param_1 + 0xc);
  temp_v0 = *(unsigned char *)(param_1 + 0x11);
  temp_v1 = 0;
  if (*(char *)(param_1 + 0x12) != '\0') {
    if (*(char *)(param_1 + 0x12) == '\x01') {
      temp_v1 = 2;
    }
    else {
      FUN_00195fc8();
      temp_v1 = 0;
    }
  }
  FUN_001028b8(temp_v4,0x11,&LAB_004282e8,param_4,
               (temp_v1 << 0x1c) | (unsigned int)temp_v0 | ((temp_v3 & 0xfffff) << 8),temp_v2 | 0x40000);
  FUN_00439a04();
  return;
}

} /* extern "C" */
