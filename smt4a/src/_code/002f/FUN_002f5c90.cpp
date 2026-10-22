/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f5c90` (_code @ 0x2f5c90, 0x8e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_5: 2 slot(s), 5 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned char sp30; /* 0x30: local_30 */
} param_5_stack;

extern int streamSkip(unsigned int, unsigned int);
extern int streamReadBytes(unsigned int, int, unsigned int);
extern int _ZN9Obj55933cC1Et(unsigned char *, unsigned short);


unsigned int
FUN_002f5c90(unsigned int param_1,unsigned int param_2,int param_3,unsigned int *param_4,unsigned int *param_5)

{
  int temp_v0;
  unsigned int temp_v1;
  unsigned char temp_v2 [8];
  unsigned int uStack_24;
  unsigned int temp_v3;
  int iStack_1c;
  unsigned int *puStack_18;
  
  uStack_24 = param_1;
  temp_v3 = param_2;
  iStack_1c = param_3;
  puStack_18 = param_4;
  temp_v0 = streamSkip(param_2,2);
  temp_v1 = 0;
  if (temp_v0 != 0) {
    if (*(char *)(param_3 + 0x89) != '\0') {
      *(unsigned char *)(param_3 + 0x89) = 1;
      temp_v0 = streamSkip(temp_v3,0xc);
      if (temp_v0 == 0) {
        return 0;
      }
      *param_4 = (unsigned int)*(unsigned char *)(param_3 + 0x69);
      *param_5 = (unsigned int)*(unsigned short *)(param_3 + 0x6a);
    }
    else {
      temp_v0 = streamReadBytes(temp_v3,param_3 + 0x68,0xc);
      if (temp_v0 == 0) {
        return 0;
      }
      *(unsigned char *)(param_3 + 0x24) = 1;
      *param_4 = (unsigned int)*(unsigned char *)(param_3 + 0x69);
      *param_5 = (unsigned int)*(unsigned short *)(param_3 + 0x6a);
      *(unsigned char *)(param_3 + 0x25) = *(unsigned char *)(param_3 + 0x6c);
      *(unsigned char *)(param_3 + 0x26) = *(unsigned char *)(param_3 + 0x6d);
      *(unsigned short *)(param_3 + 0x3c) = *(unsigned short *)(param_3 + 0x6e);
      *(unsigned char *)(param_3 + 0x65) = *(unsigned char *)(param_3 + 0x70);
      *(unsigned char *)(param_3 + 0x84) = *(unsigned char *)(param_3 + 0x71);
      temp_v0 = _ZN9Obj55933cC1Et(temp_v2,*(unsigned short *)(param_3 + 0x72));
      *(unsigned short *)(param_3 + 0x44) = *(unsigned short *)(temp_v0 + 4);
    }
    temp_v1 = 1;
  }
  return temp_v1;
}

} /* extern "C" */
