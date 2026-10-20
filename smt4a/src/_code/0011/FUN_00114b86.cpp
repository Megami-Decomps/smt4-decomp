/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00114b86` (_code @ 0x114b86, 0x6e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0012e100(int [2], int, int);
int sharedRefAddRef(unsigned int);
int FUN_002eb164(...);
int FUN_00300304(unsigned char [4], int, unsigned char [8]);

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp48; /* 0x48: local_48 */
} param_2_stack;

/* Supplied declaration required: FUN_0012e100. */
/* Supplied declaration required: sharedRefAddRef. */
/* Supplied declaration required: FUN_002eb164. */
extern int FUN_002ef00c(unsigned char *, unsigned char *);
extern int FUN_002f1334(unsigned char *, int);
/* Supplied declaration required: FUN_00300304. */
extern int wordRefsEqual_0030060c(unsigned char *, unsigned int *);


void FUN_00114b86(int param_1,unsigned int param_2)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1 [2];
  unsigned char temp_v2 [8];
  unsigned char temp_v3 [8];
  unsigned char temp_v4 [8];
  int temp_v5;
  unsigned char temp_v6 [4];
  unsigned char temp_v7 [12];
  
  FUN_002eb164(temp_v2);
  temp_v0 = FUN_002f1334(temp_v2,param_1 + 0x20);
  if (temp_v0 != 0) {
    FUN_002eb164(temp_v3,param_2);
    FUN_00300304(temp_v6,param_1 + 4,temp_v3);
    temp_v5 = *(unsigned int *)(param_1 + 0x14);
    temp_v0 = wordRefsEqual_0030060c(temp_v6,(unsigned int *)&temp_v5);
    if (temp_v0 != 0) {
      sharedRefAddRef(param_2);
      FUN_002eb164(temp_v4,param_2);
      temp_v0 = FUN_002ef00c(temp_v7,temp_v4);
      *(unsigned int *)(temp_v0 + 8) = 0;
      FUN_0012e100(temp_v1,param_1 + 4,temp_v0);
      *(unsigned int *)(temp_v1[0] + 0x18) = param_2;
    }
  }
  return;
}

} /* extern "C" */
