/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b4828` (_code @ 0x2b4828, 0x44 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0013c584(unsigned char [4]);
int FUN_0013c5f4(unsigned char [16], unsigned char [4]);
int FUN_0013c684(void);
int FUN_0013c6b4(void);
int FUN_00147390(void);

/* stack frame of param_1: 2 slot(s), 5 byte(s) */
typedef struct {
    unsigned char spBC; /* 0xbc: local_bc */
    unsigned int spF9C; /* 0xf9c: local_f9c */
} param_1_stack;

/* Supplied declaration required: FUN_0013c584. */
/* Supplied declaration required: FUN_0013c5f4. */
/* Supplied declaration required: FUN_0013c684. */
/* Supplied declaration required: FUN_0013c6b4. */
/* Supplied declaration required: FUN_00147390. */


void FUN_002b4828(unsigned int param_1)

{
/* irregular: 5 native warning(s); review required */
  unsigned char temp_v0 [4];
  unsigned int temp_v1;
  unsigned char temp_v2;
  unsigned char temp_v3 [16];
  
  FUN_0013c584(temp_v0);
  temp_v2 = 0;
  temp_v1 = param_1;
  FUN_00147390();
  FUN_0013c684();
  FUN_0013c6b4();
  FUN_0013c5f4(temp_v3,temp_v0);
  return;
}

} /* extern "C" */
