/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002cfdd0` (_code @ 0x2cfdd0, 0xf8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0024b888(int, int, int, int, int, int);

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

/* Supplied declaration required: FUN_0024b888. */
extern int FUN_002939f4(void);
extern int FUN_00296cc8(unsigned int);
extern int FUN_002a8764(void);


unsigned int FUN_002cfdd0(void)

{
/* irregular: 1 goto(s); 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  
  temp_v0 = FUN_00296cc8(0);
  temp_v1 = FUN_002939f4();
  if ((temp_v0 >= 0x6d) && (*(short *)(temp_v1 + 0x1fc4) < 4)) {
    temp_v5 = 0;
    do {
      temp_v4 = *(unsigned int *)(*(int *)(temp_v1 + 0x1e98) + temp_v5 * 0x114 + 0x50);
      if ((temp_v4 & 1) == 0 && (temp_v4 & 0x80) == 0) {
        if (temp_v5 < 0) {
          return 1;
        }
        temp_v2 = FUN_002a8764();
        temp_v3 = 0;
        temp_v1 = -1;
        if (*(unsigned char *)(temp_v2 + 0x910b) == 0) {
          FUN_0024b888(0,0,0,temp_v1,temp_v5,1);
          return 1;
        }
        goto LAB_002cfe74;
      }
      temp_v5 = temp_v5 + 1;
    } while (temp_v5 < 4);
  }
  return 1;
  while (temp_v3 = temp_v3 + 1, temp_v1 = -1, temp_v3 < (int)(unsigned int)*(unsigned char *)(temp_v2 + 0x910b)) {
LAB_002cfe74:
    temp_v1 = temp_v3;
    if ((int)*(char *)(temp_v2 + temp_v3 + 0x90f0) == temp_v0 - 0x6d) break;
  }
  FUN_0024b888(0,0,0,temp_v1,temp_v5,1);
  return 1;
}

} /* extern "C" */
