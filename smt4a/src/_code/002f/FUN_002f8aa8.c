/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f8aa8` (_code @ 0x2f8aa8, 0x86 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp2C; /* 0x2c: local_2c */
} param_2_stack;

/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: FUN_002e6e5c. */
/* Supplied declaration required: FUN_002e9318. */
extern int FUN_002ee774(unsigned int **, unsigned int *);
/* Supplied declaration required: FUN_002ee938. */
extern int FUN_002ee96a(unsigned char *, unsigned char *);
/* Supplied declaration required: FUN_002fd624. */
/* Supplied declaration required: FUN_0030fe84. */


void FUN_002f8aa8(int param_1,unsigned int param_2)

{
/* irregular: 6 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned char temp_v3 [12];
  unsigned int *temp_v4;
  unsigned char temp_v5 [8];
  unsigned char temp_v6 [8];
  unsigned int temp_v7 [2];
  
  FUN_002e6e34(temp_v3,param_1 + 0x58);
  temp_v4 = *(unsigned int **)(param_1 + 0x98);
  do {
    temp_v4 = (unsigned int *)*temp_v4;
    temp_v7[0] = *(unsigned int *)(param_1 + 0x98);
    temp_v2 = FUN_002ee774(&temp_v4,temp_v7);
    if (temp_v2 == 0) {
      FUN_0030fe84(param_1 + 0x54);
      break;
    }
    FUN_002ee938(temp_v6,param_2);
    FUN_002ee938(temp_v5,temp_v4 + 2);
    temp_v2 = FUN_002ee96a(temp_v5,temp_v6);
    if (temp_v2 != 0) {
      temp_v2 = FUN_002fd624(temp_v4 + 2);
      temp_v1 = FUN_002fd624(param_2);
      if (temp_v2 != temp_v1) {
        temp_v0 = 0;
      }
      else {
        temp_v0 = 1;
      }
    }
    else {
      temp_v0 = 0;
    }
    FUN_002e9318(temp_v5);
    FUN_002e9318(temp_v6);
  } while (!temp_v0);
  FUN_002e6e5c(temp_v3);
  return;
}
