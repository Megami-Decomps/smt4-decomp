/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00123860` (_code @ 0x123860, 0x58 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00123844(unsigned char [8], unsigned int);
int wstrcpyU16(unsigned int, unsigned int);
int onlineStringDestroy(unsigned char [8]);
int onlineSockAddrFormatIpv4(unsigned int, unsigned char [256], int);
int FUN_002ea2e8(unsigned char [4]);
int FUN_002ea3a8(unsigned char [4]);
int wideBufferAppend(...);
int wideBufferAppendHolderValue(unsigned int, unsigned char [8]);
int FUN_0030f090(unsigned int, unsigned char [32], int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp344; /* 0x344: local_344 */
} param_2_stack;

extern unsigned char LAB_001238b8; /* 0x1238b8 */

/* Supplied declaration required: FUN_00123844. */
/* Supplied declaration required: wstrcpyU16. */
/* Supplied declaration required: onlineStringDestroy. */
/* Supplied declaration required: onlineSockAddrFormatIpv4. */
/* Supplied declaration required: FUN_002ea2e8. */
/* Supplied declaration required: FUN_002ea3a8. */
/* Supplied declaration required: wideBufferAppend. */
/* Supplied declaration required: wideBufferAppendHolderValue. */
/* Supplied declaration required: FUN_0030f090. */


void FUN_00123860(unsigned int param_1,unsigned int param_2)

{
/* irregular: 9 native warning(s); review required */
  unsigned int temp_v0;
  unsigned char temp_v1 [4];
  unsigned int temp_v2;
  unsigned char temp_v3 [256];
  unsigned char temp_v4 [8];
  unsigned char temp_v5 [32];
  
  onlineSockAddrFormatIpv4(param_1,temp_v3,0x80);
  FUN_0030f090(param_1,temp_v5,0x10);
  FUN_002ea2e8(temp_v1);
  FUN_00123844(temp_v4,param_1);
  temp_v0 = wideBufferAppend(temp_v1,temp_v3);
  temp_v0 = wideBufferAppend(temp_v0,&LAB_001238b8);
  wideBufferAppendHolderValue(temp_v0,temp_v4);
  onlineStringDestroy(temp_v4);
  wstrcpyU16(param_2,temp_v2);
  FUN_002ea3a8(temp_v1);
  return;
}

} /* extern "C" */
