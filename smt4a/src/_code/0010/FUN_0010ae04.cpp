/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010ae04` (_code @ 0x10ae04, 0x56 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6e34(unsigned char [12], unsigned int);
int FUN_002e6e5c(unsigned char [12]);
int FUN_002f3df8(int *, int);

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
} param_1_stack;

/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: FUN_002e6e5c. */
extern unsigned int FUN_002ea714(void);
/* Supplied declaration required: FUN_002f3df8. */
extern int wordRefsDiffer_002f3e5a(int *, unsigned int *);


unsigned int FUN_0010ae04(int param_1)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned char temp_v2 [12];
  int temp_v3;
  unsigned int temp_v4 [2];
  
  temp_v0 = FUN_002ea714();
  FUN_002e6e34(temp_v2,temp_v0);
  temp_v0 = 0;
  if ((int)(short)(*(short *)(param_1 + 0x30) - *(short *)(param_1 + 0x38)) <
      (int)(unsigned int)*(unsigned short *)(param_1 + 0x20)) {
    FUN_002f3df8(&temp_v3,param_1 + 4);
    temp_v4[0] = *(unsigned int *)(param_1 + 0x14);
    temp_v1 = wordRefsDiffer_002f3e5a(&temp_v3,temp_v4);
    if (temp_v1 != 0) {
      *(short *)(param_1 + 0x30) = *(short *)(param_1 + 0x30) + 1;
      temp_v0 = *(unsigned int *)(temp_v3 + 0x18);
    }
  }
  FUN_002e6e5c(temp_v2);
  return temp_v0;
}

} /* extern "C" */
