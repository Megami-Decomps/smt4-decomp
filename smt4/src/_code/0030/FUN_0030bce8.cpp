/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030bce8` (_code @ 0x30bce8, 0xa0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002497f8(unsigned int [3], unsigned int *);
int FUN_002498ec(void);
int FUN_002503d4(...);

/* stack frame of param_2: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;

/* Supplied declaration required: FUN_002497f8. */
/* Supplied declaration required: FUN_002498ec. */
/* Supplied declaration required: FUN_002503d4. */
extern int idIsAbove400(unsigned int);


void FUN_0030bce8(unsigned short *param_1,unsigned short *param_2)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4 [3];
  unsigned int temp_v5;
  
  temp_v0 = (unsigned int)*param_1;
  FUN_002498ec();
  temp_v1 = (unsigned int)*param_2;
  FUN_002498ec();
  temp_v4[0] = (unsigned int)*(unsigned short *)(temp_v0 + 0x26);
  temp_v4[1] = 0;
  temp_v4[2] = (unsigned int)*(unsigned short *)(temp_v1 + 0x26);
  temp_v5 = 0;
  temp_v2 = idIsAbove400(temp_v4[0]);
  if (temp_v2 != 0) {
    temp_v2 = 99;
  }
  else {
    temp_v2 = FUN_002503d4(temp_v4[0]);
  }
  temp_v3 = idIsAbove400(temp_v4[2]);
  if (temp_v3 != 0) {
    temp_v3 = 99;
  }
  else {
    temp_v3 = FUN_002503d4();
  }
  if (temp_v3 == temp_v2) {
    FUN_002497f8(temp_v4,temp_v4 + 2);
  }
  return;
}

} /* extern "C" */
