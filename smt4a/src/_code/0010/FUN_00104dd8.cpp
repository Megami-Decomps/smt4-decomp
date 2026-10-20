/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00104dd8` (_code @ 0x104dd8, 0x3a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6e34(unsigned char [12], unsigned int);
int FUN_002e6e5c(unsigned char [12]);
int FUN_002eb300(unsigned char [4], int, int *);
int FUN_002eb310(int, int *);

/* stack frame of param_3: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
} param_3_stack;

/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: FUN_002e6e5c. */
extern unsigned int FUN_002ea714(void);
/* Supplied declaration required: FUN_002eb300. */
/* Supplied declaration required: FUN_002eb310. */


void FUN_00104dd8(int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  unsigned char temp_v1 [12];
  int temp_v2;
  unsigned int temp_v3;
  unsigned char temp_v4 [4];
  int iStack_18;
  int temp_v5;
  unsigned int uStack_10;
  
  iStack_18 = param_1;
  temp_v5 = param_2;
  uStack_10 = param_3;
  temp_v0 = FUN_002ea714();
  FUN_002e6e34(temp_v1,temp_v0);
  temp_v2 = temp_v5;
  temp_v3 = param_3;
  FUN_002eb300(temp_v4,param_1 + 200,&temp_v2);
  FUN_002eb310(param_1 + 0xe4,&temp_v5);
  FUN_002e6e5c(temp_v1);
  return;
}

} /* extern "C" */
