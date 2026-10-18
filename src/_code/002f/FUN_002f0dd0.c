/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f0dd0` (_code @ 0x2f0dd0, 0x110 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp30; /* 0x30: local_30 */
} void_stack;

extern int FUN_002499b4(void);
/* Supplied declaration required: FUN_002499fc. */
extern unsigned int FUN_00249a54(void);
/* Supplied declaration required: FUN_0028dcb0. */
/* Supplied declaration required: FUN_002939f4. */
/* Supplied declaration required: FUN_00296cc8. */
extern int FUN_002c5f60(int, int);


unsigned int FUN_002f0dd0(void)

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
  int temp_v7 [3];
  int temp_v8 [4];
  
  temp_v0 = FUN_00296cc8(0);
  FUN_00296cc8(1);
  temp_v1 = FUN_00249a54();
  temp_v5 = 0;
  temp_v6 = 0;
  FUN_002499fc(temp_v1,temp_v8,temp_v7);
  temp_v4 = temp_v8[0];
  if (temp_v8[0] < temp_v7[0] + temp_v8[0]) {
    do {
      temp_v2 = FUN_002939f4();
      puVar4 = (unsigned int *)(*(int *)(temp_v2 + 0x1fc0) + temp_v4 * 0x288);
      temp_v3 = *puVar4;
      if ((((temp_v3 & 0x10) == 0) && ((temp_v3 & 1) != 0)) && ((temp_v3 & 0x40) == 0)) {
        temp_v6 = temp_v6 + 1;
        temp_v5 = temp_v5 + (unsigned int)(unsigned short)puVar4[0x73];
      }
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < temp_v8[0] + temp_v7[0]);
  }
  temp_v4 = FUN_002939f4();
  if (*(char *)(temp_v4 + 0x49c5) != '\0') {
    FUN_002939f4();
    temp_v4 = FUN_002499b4();
    if (temp_v4 != 0) {
      temp_v6 = temp_v6 + 1;
      temp_v5 = temp_v5 + (unsigned int)*(unsigned short *)(temp_v4 + 0x1cc);
    }
  }
  temp_v4 = FUN_002c5f60(temp_v5,temp_v6);
  FUN_0028dcb0(temp_v0 <= temp_v4);
  return 1;
}
