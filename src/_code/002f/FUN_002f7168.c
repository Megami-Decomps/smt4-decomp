/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f7168` (_code @ 0x2f7168, 0x118 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} void_stack;

extern int FUN_00249b0c(void);
/* Supplied declaration required: FUN_00249b54. */
extern unsigned int FUN_00249bac(void);
/* Supplied declaration required: FUN_0028df54. */
/* Supplied declaration required: FUN_00293c98. */
/* Supplied declaration required: FUN_00296f60. */
extern int FUN_002c615c(int, int);


unsigned int FUN_002f7168(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int *puVar4;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8 [6];
  
  temp_v0 = FUN_00296f60(0);
  FUN_00296f60(1);
  temp_v1 = FUN_00249bac();
  temp_v5 = 0;
  temp_v6 = 0;
  FUN_00249b54(temp_v1,temp_v8,&temp_v7);
  temp_v4 = temp_v8[0];
  if (temp_v8[0] < temp_v7 + temp_v8[0]) {
    do {
      temp_v2 = FUN_00293c98();
      puVar4 = (unsigned int *)(*(int *)(temp_v2 + 0x1fc0) + temp_v4 * 0x288);
      temp_v3 = *puVar4;
      if ((((temp_v3 & 0x10) == 0) && ((temp_v3 & 1) != 0)) && ((temp_v3 & 0x40) == 0)) {
        temp_v5 = temp_v5 + *(short *)((int)puVar4 + 0x1b6);
        temp_v6 = temp_v6 + (short)puVar4[0x6d];
      }
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < temp_v8[0] + temp_v7);
  }
  temp_v4 = FUN_00293c98();
  if (*(char *)(temp_v4 + 0x49c5) != '\0') {
    FUN_00293c98();
    temp_v4 = FUN_00249b0c();
    if (temp_v4 != 0) {
      temp_v5 = temp_v5 + *(short *)(temp_v4 + 0x1b6);
      temp_v6 = temp_v6 + *(short *)(temp_v4 + 0x1b4);
    }
  }
  temp_v4 = FUN_002c615c(temp_v6 * 100,temp_v5);
  FUN_0028df54(temp_v4 <= temp_v0);
  return 1;
}
