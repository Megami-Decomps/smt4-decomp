/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00110b58` (_code @ 0x110b58, 0x6a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int onlineStringConstruct(unsigned char [12], unsigned int);
int onlineStringDestroy(unsigned char [12]);
int FUN_002ea2e8(unsigned char [4]);
int FUN_002ea3a8(unsigned char [4]);
int wideBufferAppend(...);
int FUN_002f6be2(unsigned char [12], int *);
int operatorDeleteArrayNullable(int);
int FUN_002fbd0a(int, unsigned int, int, int);

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp228; /* 0x228: local_228 */
    unsigned int sp230; /* 0x230: local_230 */
} param_2_stack;

extern unsigned char LAB_00110bc8; /* 0x110bc8 */
extern unsigned char DAT_00537f3c; /* 0x537f3c */

extern int wstrlen(int);
/* Supplied declaration required: onlineStringConstruct. */
/* Supplied declaration required: onlineStringDestroy. */
/* Supplied declaration required: FUN_002ea2e8. */
/* Supplied declaration required: FUN_002ea3a8. */
/* Supplied declaration required: wideBufferAppend. */
/* Supplied declaration required: FUN_002f6be2. */
/* Supplied declaration required: operatorDeleteArrayNullable. */
extern unsigned int wideBufferAppendHolderValue(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002fbd0a. */


void FUN_00110b58(int param_1,unsigned int param_2)

{
/* irregular: 8 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned char temp_v3 [4];
  unsigned int temp_v4;
  unsigned char temp_v5 [12];
  
  FUN_002ea2e8(temp_v3);
  temp_v0 = wideBufferAppend(temp_v3,&DAT_00537f3c);
  temp_v0 = wideBufferAppend(temp_v0,&LAB_00110bc8);
  temp_v0 = wideBufferAppendHolderValue(temp_v0,param_2);
  temp_v0 = wideBufferAppend(temp_v0,&LAB_00110bc8);
  wideBufferAppend(temp_v0,&DAT_00537f3c);
  onlineStringConstruct(temp_v5,temp_v4);
  FUN_002f6be2(temp_v5,&temp_v2);
  temp_v1 = wstrlen(temp_v2);
  FUN_002fbd0a(param_1,*(unsigned int *)(param_1 + 4),temp_v2,temp_v1 + temp_v2);
  operatorDeleteArrayNullable(temp_v2);
  onlineStringDestroy(temp_v5);
  FUN_002ea3a8(temp_v3);
  return;
}

} /* extern "C" */
