/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ce3ec` (_code @ 0x2ce3ec, 0x74 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 2 slot(s), 4 byte(s) */
typedef struct {
    unsigned short sp1C; /* 0x1c: local_1c */
    unsigned short sp2C; /* 0x2c: local_2c */
} param_2_stack;

/* Supplied declaration required: FUN_00192608. */
/* Supplied declaration required: FUN_0048026c. */


int FUN_002ce3ec(unsigned short *param_1,unsigned short *param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned char temp_v3 [8];
  short temp_v4;
  unsigned char temp_v5 [8];
  short temp_v6;
  
  temp_v0 = (unsigned int)*param_1;
  FUN_00192608();
  temp_v1 = (unsigned int)*param_2;
  FUN_00192608();
  FUN_0048026c(*param_1,temp_v3);
  FUN_0048026c(*param_2,temp_v5);
  temp_v2 = ((int)temp_v6 + (int)*(char *)(temp_v1 + 0x33)) -
          ((int)temp_v4 + (int)*(char *)(temp_v0 + 0x33));
  if (temp_v2 == 0) {
    temp_v2 = (unsigned int)*(unsigned short *)(temp_v0 + 0x20) - (unsigned int)*(unsigned short *)(temp_v1 + 0x20);
  }
  return temp_v2;
}
