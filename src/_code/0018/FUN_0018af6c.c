/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0018af6c` (_code @ 0x18af6c, 0x17c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of void: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} void_stack;

extern int DAT_0043daa8; /* 0x43daa8 */
extern int DAT_0044ea00; /* 0x44ea00 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_002b7a10. */
/* Supplied declaration required: FUN_002ba46c. */
/* Supplied declaration required: FUN_002bef14. */
/* Supplied declaration required: FUN_002bf710. */
/* Supplied declaration required: FUN_002c1d3c. */
/* Supplied declaration required: FUN_002c3ba8. */
extern int FUN_002c5f7c(unsigned int, unsigned int);


unsigned int FUN_0018af6c(void)

{
/* irregular: irregular input(s): in_fpscr; 7 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int *piVar5;
  unsigned int in_fpscr;
  float temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  
  temp_v5 = 0x3f800000;
  temp_v6 = 0x3f800000;
  temp_v7 = 0x3f800000;
  temp_v8 = 0x3f800000;
  switch(*(unsigned int *)(DAT_0043daa8 + 0xd28)) {
  case 3:
  case 4:
  case 5:
    if (*(char *)(DAT_0043daa8 + 0xd62) != '\0') {
      FUN_002bef14();
      FUN_002c3ba8(DAT_0044ea00);
      temp_v0 = DAT_0044ea00;
      temp_v1 = FUN_002c5f7c(1,0);
      piVar5 = (int *)(temp_v0 + 0x124c);
      temp_v2 = *piVar5;
      temp_v3 = piVar5[temp_v2 + 2];
      *piVar5 = temp_v2 + 1;
      piVar5[temp_v2 + 3] = temp_v1;
      if (*(char *)(temp_v0 + 0x1264) != '\0' || temp_v3 != temp_v1) {
        (**(romwright_code **)(temp_v0 + 0x1268))();
        *(unsigned char *)(temp_v0 + 0x1264) = 0;
      }
      temp_v5 = 0;
      temp_v6 = 0;
      temp_v7 = 0;
      temp_v8 = 0x3f000000;
      FUN_002c1d3c(DAT_0044ea00,0);
      temp_v4 = 0.35f;
      FUN_002ba46c(DAT_0044ea00);
      VectorSignedToFloat((int)temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_002b7a10(&temp_v5);
      FUN_002bf710();
      temp_v0 = DAT_0044ea00;
      piVar5 = (int *)(DAT_0044ea00 + 0x124c);
      temp_v1 = *piVar5;
      temp_v2 = piVar5[temp_v1 + 2];
      *piVar5 = temp_v1 - 1;
      if (*(char *)(temp_v0 + 0x1264) != '\0' || temp_v2 != piVar5[temp_v1 + 1]) {
        (**(romwright_code **)(temp_v0 + 0x1268))();
        *(unsigned char *)(temp_v0 + 0x1264) = 0;
      }
    }
  }
  return 0;
}
