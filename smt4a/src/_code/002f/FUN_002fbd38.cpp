/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fbd38` (_code @ 0x2fbd38, 0x8e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e74c4(unsigned char [32], int *, int, unsigned int);
int FUN_002e7614(...);
int FUN_002e9318(unsigned char [8]);
int FUN_002ea658(unsigned char [16]);
int FUN_002eb588(int *);
int FUN_002ec9f4(...);
int FUN_002f6be2(unsigned char [8], int *);
int FUN_002f6bf0(int);
int FUN_002f6bfc(unsigned char [16], unsigned char [32], unsigned char [36]);
int FUN_002f7b9c(unsigned char [8], unsigned char [36]);
int FUN_002fbde4(int, int, unsigned char *, int);

/* stack frame of param_1: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
} param_1_stack;

extern unsigned char LAB_002fbdc8; /* 0x2fbdc8 */

/* Supplied declaration required: FUN_002e74c4. */
/* Supplied declaration required: FUN_002e7614. */
/* Supplied declaration required: FUN_002e9318. */
/* Supplied declaration required: FUN_002ea658. */
/* Supplied declaration required: FUN_002eb588. */
/* Supplied declaration required: FUN_002ec9f4. */
/* Supplied declaration required: FUN_002f6be2. */
/* Supplied declaration required: FUN_002f6bf0. */
/* Supplied declaration required: FUN_002f6bfc. */
/* Supplied declaration required: FUN_002f7b9c. */
/* Supplied declaration required: FUN_002fbde4. */


int FUN_002fbd38(int param_1)

{
/* irregular: 11 native warning(s); review required */
  unsigned char temp_v0 [32];
  unsigned char temp_v1 [36];
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  unsigned char temp_v7 [8];
  unsigned char temp_v8 [16];
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_002eb588(&temp_v3);
    temp_v6 = temp_v4;
    temp_v5 = temp_v3;
    FUN_002e7614(temp_v0,8);
    FUN_002ea658(temp_v8);
    FUN_002e7614(temp_v1,0x10);
    FUN_002e74c4(temp_v0,&temp_v5,8,0xffffffff);
    FUN_002f6bfc(temp_v8,temp_v0,temp_v1);
    temp_v2 = 0;
    FUN_002f7b9c(temp_v7,temp_v1);
    FUN_002f6be2(temp_v7,&temp_v2);
    FUN_002e9318(temp_v7);
    FUN_002fbde4(param_1 + 0xf,0x29,&LAB_002fbdc8,temp_v2);
    *(unsigned char *)(param_1 + 0x37) = 0;
    FUN_002f6bf0(temp_v2);
    FUN_002ec9f4(temp_v1);
    FUN_002ec9f4(temp_v0);
  }
  return param_1 + 0xf;
}

} /* extern "C" */
