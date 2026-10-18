/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ff5e8` (_code @ 0x2ff5e8, 0x158 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

extern int FUN_00249b0c(void);
/* Supplied declaration required: FUN_00249b54. */
extern unsigned int FUN_00249bac(void);
/* Supplied declaration required: FUN_0028df54. */
/* Supplied declaration required: FUN_00293c98. */
/* Supplied declaration required: FUN_00296f60. */


unsigned int FUN_002ff5e8(void)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int *puVar6;
  unsigned int temp_v5;
  int temp_v6;
  unsigned char temp_v7;
  int temp_v8;
  int temp_v9 [2];
  
  temp_v0 = FUN_00296f60(0);
  FUN_00296f60(1);
  temp_v1 = FUN_00249bac();
  temp_v2 = FUN_00296f60(2);
  temp_v6 = 0;
  if (temp_v2 == 0) {
    temp_v6 = 7;
  }
  else if (temp_v2 == 1) {
    temp_v6 = 10;
  }
  else if (temp_v2 == 2) {
    temp_v6 = 0xb;
  }
  temp_v3 = FUN_00296f60(3);
  FUN_00249b54(temp_v1,&temp_v8,temp_v9);
  temp_v2 = temp_v8;
  if (temp_v8 < temp_v9[0] + temp_v8) {
    do {
      temp_v4 = FUN_00293c98();
      puVar6 = (unsigned int *)(*(int *)(temp_v4 + 0x1fc0) + temp_v2 * 0x288);
      temp_v5 = *puVar6;
      if (((temp_v5 & 0x10) == 0) && ((temp_v5 & 1) != 0)) {
        temp_v7 = (temp_v5 & 0x40) == 0;
        if (temp_v7) {
          temp_v5 = (unsigned int)*(unsigned short *)((int)puVar6 + 0xce);
        }
        if ((temp_v7 && temp_v5 == temp_v0) && (*(short *)((int)puVar6 + temp_v6 * 2 + 0x72) == temp_v3)) {
          FUN_0028df54(1);
          return 1;
        }
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < temp_v8 + temp_v9[0]);
  }
  temp_v2 = FUN_00293c98();
  if (*(char *)(temp_v2 + 0x49c5) != '\0') {
    FUN_00293c98();
    temp_v2 = FUN_00249b0c();
    if (((temp_v2 != 0) && (*(unsigned short *)(temp_v2 + 0xce) == temp_v0)) &&
       (*(short *)(temp_v2 + temp_v6 * 2 + 0x72) == temp_v3)) {
      FUN_0028df54(1);
      return 1;
    }
  }
  FUN_0028df54(0);
  return 1;
}
