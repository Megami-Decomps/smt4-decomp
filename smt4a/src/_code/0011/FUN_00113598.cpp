/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00113598` (_code @ 0x113598, 0x7a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int strInit(unsigned char [12]);
int FUN_002ea658(unsigned char [12]);
int FUN_002ec934(unsigned int, int, unsigned int);
int strDestroy(unsigned char [12]);
int FUN_002ee54c(unsigned char [8]);
int FUN_002f6bfc(unsigned char [12], unsigned int, unsigned char [12]);
int FUN_002fde5c(unsigned char [8]);
int FUN_002fde8c(unsigned char [8], unsigned int, unsigned int);

/* stack frame of param_3: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp50; /* 0x50: local_50 */
} param_3_stack;

/* Supplied declaration required: strInit. */
/* Supplied declaration required: FUN_002ea658. */
/* Supplied declaration required: FUN_002ec934. */
/* Supplied declaration required: strDestroy. */
extern unsigned int FUN_002ecaee(unsigned int);
/* Supplied declaration required: FUN_002ee54c. */
/* Supplied declaration required: FUN_002f6bfc. */
/* Supplied declaration required: FUN_002fde5c. */
extern unsigned int FUN_002fde84(unsigned int);
/* Supplied declaration required: FUN_002fde8c. */


void FUN_00113598(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 8 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned char temp_v2 [8];
  unsigned int temp_v3;
  unsigned char temp_v4 [12];
  int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  unsigned char temp_v8 [12];
  
  FUN_002fde5c(temp_v2);
  temp_v0 = FUN_002fde84(param_2);
  temp_v1 = FUN_002ecaee(param_2);
  FUN_002fde8c(temp_v2,temp_v1,temp_v0);
  temp_v0 = FUN_002fde84(param_3);
  temp_v1 = FUN_002ecaee(param_3);
  FUN_002fde8c(temp_v2,temp_v1,temp_v0);
  FUN_002ea658(temp_v8);
  strInit(temp_v4);
  FUN_002f6bfc(temp_v8,temp_v3,temp_v4);
  FUN_002ec934(param_1,temp_v5 + temp_v7,temp_v6);
  strDestroy(temp_v4);
  FUN_002ee54c(temp_v2);
  return;
}

} /* extern "C" */
