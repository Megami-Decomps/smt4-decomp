/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ff928` (_code @ 0x2ff928, 0x124 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} void_stack;

extern int FUN_00249b0c(void);
/* Supplied declaration required: FUN_00249b54. */
extern unsigned int FUN_00249bac(void);
/* Supplied declaration required: FUN_0028df54. */
/* Supplied declaration required: FUN_00293c98. */
/* Supplied declaration required: FUN_00296f60. */


unsigned int FUN_002ff928(void)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int *puVar5;
  unsigned int temp_v4;
  int temp_v5;
  unsigned char temp_v6;
  int temp_v7;
  int temp_v8 [5];
  
  temp_v0 = FUN_00296f60(0);
  temp_v1 = FUN_00296f60(1);
  FUN_00296f60(2);
  temp_v2 = FUN_00249bac();
  FUN_00249b54(temp_v2,temp_v8,&temp_v7);
  temp_v5 = temp_v8[0];
  if (temp_v8[0] < temp_v7 + temp_v8[0]) {
    do {
      temp_v3 = FUN_00293c98();
      puVar5 = (unsigned int *)(*(int *)(temp_v3 + 0x1fc0) + temp_v5 * 0x288);
      temp_v4 = *puVar5;
      if (((temp_v4 & 0x10) == 0) && ((temp_v4 & 1) != 0)) {
        temp_v6 = (temp_v4 & 0x40) == 0;
        if (temp_v6) {
          temp_v4 = (unsigned int)*(unsigned short *)((int)puVar5 + 0xce);
        }
        if ((temp_v6 && temp_v4 == temp_v0) && (temp_v1 <= (int)(unsigned int)(unsigned short)puVar5[0x73])) {
          FUN_0028df54(1);
          return 1;
        }
      }
      temp_v5 = temp_v5 + 1;
    } while (temp_v5 < temp_v8[0] + temp_v7);
  }
  temp_v5 = FUN_00293c98();
  if (*(char *)(temp_v5 + 0x49c5) != '\0') {
    FUN_00293c98();
    temp_v5 = FUN_00249b0c();
    if (((temp_v5 != 0) && (*(unsigned short *)(temp_v5 + 0xce) == temp_v0)) &&
       (temp_v1 <= (int)(unsigned int)*(unsigned short *)(temp_v5 + 0x1cc))) {
      FUN_0028df54(1);
      return 1;
    }
  }
  FUN_0028df54(0);
  return 1;
}
