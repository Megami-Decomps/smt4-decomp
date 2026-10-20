/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001631b8` (_code @ 0x1631b8, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00162e30(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int DAT_00640118; /* 0x640118 */

/* Supplied declaration required: FUN_00162e30. */
extern int FUN_00164a9c(void);


unsigned int FUN_001631b8(void)

{
/* irregular: 1 goto(s); 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  
  temp_v1 = FUN_00164a9c();
  temp_v2 = *(unsigned int *)(temp_v1 + 4);
  if (temp_v2 == 0) {
    return 0;
  }
  for (temp_v1 = *(int *)(DAT_00640118 + (temp_v2 >> 0x14) * 8); temp_v1 != 0;
      temp_v1 = *(int *)(temp_v1 + 0x4c)) {
    if (*(unsigned int *)(temp_v1 + 0x24) == (temp_v2 & 0xfffff)) goto LAB_00163218;
  }
  temp_v1 = 0;
LAB_00163218:
  switch(*(unsigned char *)(temp_v1 + 0x98)) {
  default:
    return 0;
  case 1:
  case 2:
  case 3:
    *(unsigned short *)(temp_v1 + 0x36) = 0;
    temp_v0 = *(int *)(temp_v1 + 0x58);
    while (temp_v0 != 0) {
      temp_v3 = *(int *)(temp_v0 + 0x5c);
      *(unsigned short *)(temp_v0 + 0x36) = *(unsigned short *)(temp_v1 + 0x36);
      FUN_00162e30();
      temp_v0 = temp_v3;
    }
    switch(*(unsigned char *)(temp_v1 + 0x98)) {
    case 1:
    case 2:
    case 3:
      *(unsigned char *)(temp_v1 + 0x98) = 4;
    }
    return 1;
  case 4:
  case 5:
    *(unsigned short *)(temp_v1 + 0x36) = 0;
    temp_v0 = *(int *)(temp_v1 + 0x58);
    while (temp_v0 != 0) {
      temp_v3 = *(int *)(temp_v0 + 0x5c);
      *(unsigned short *)(temp_v0 + 0x36) = *(unsigned short *)(temp_v1 + 0x36);
      FUN_00162e30();
      temp_v0 = temp_v3;
    }
  }
  switch(*(unsigned char *)(temp_v1 + 0x98)) {
  default:
    return 1;
  case 1:
  case 2:
  case 3:
    *(unsigned char *)(temp_v1 + 0x98) = 4;
    return 1;
  }
}

} /* extern "C" */
