/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0032725c` (_code @ 0x32725c, 0xf0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int textFormatBuffer(...);
int FUN_00261424(void);

/* stack frame of param_3: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp48; /* 0x48: local_48 */
} param_3_stack;

extern unsigned char LAB_00327350; /* 0x327350 */
extern unsigned char LAB_00327380; /* 0x327380 */

/* Supplied declaration required: textFormatBuffer. */
/* Supplied declaration required: FUN_00261424. */
extern short *dataTable4CGetEntry(unsigned int);


void FUN_0032725c(unsigned int param_1,unsigned int param_2,int param_3)

{
/* irregular: 2 native warning(s); review required */
  short *psVar1;
  int temp_v0;
  unsigned int temp_v1;
  char temp_v2 [4];
  char acStack_3c [4];
  char acStack_38 [4];
  char acStack_34 [4];
  char acStack_30 [4];
  char acStack_2c [4];
  char acStack_28 [4];
  char acStack_24 [4];
  char temp_v3 [4];
  char acStack_1c [4];
  
  temp_v2[0] = 'G';
  temp_v2[1] = '\x15';
  temp_v2[2] = 'V';
  temp_v2[3] = '\0';
  acStack_3c[0] = -5;
  acStack_3c[1] = '\x13';
  acStack_3c[2] = 'V';
  acStack_3c[3] = '\0';
  acStack_38[0] = 'j';
  acStack_38[1] = '\x0e';
  acStack_38[2] = 'V';
  acStack_38[3] = '\0';
  acStack_34[0] = -0x42;
  acStack_34[1] = '\x13';
  acStack_34[2] = 'V';
  acStack_34[3] = '\0';
  acStack_30[0] = '\x18';
  acStack_30[1] = '\r';
  acStack_30[2] = 'V';
  acStack_30[3] = '\0';
  acStack_2c[0] = -0x2b;
  acStack_2c[1] = '\x13';
  acStack_2c[2] = 'V';
  acStack_2c[3] = '\0';
  acStack_28[0] = -0x69;
  acStack_28[1] = '\x13';
  acStack_28[2] = 'V';
  acStack_28[3] = '\0';
  acStack_24[0] = -0x1a;
  acStack_24[1] = '\x13';
  acStack_24[2] = 'V';
  acStack_24[3] = '\0';
  temp_v3[0] = '3';
  temp_v3[1] = '\x14';
  temp_v3[2] = 'V';
  temp_v3[3] = '\0';
  acStack_1c[0] = '\x12';
  acStack_1c[1] = '\x14';
  acStack_1c[2] = 'V';
  acStack_1c[3] = '\0';
  psVar1 = (short *)dataTable4CGetEntry(param_1);
  if (param_3 == -1) {
    temp_v0 = FUN_00261424();
    if (temp_v0 != 0) {
      temp_v1 = FUN_00261424();
      textFormatBuffer(param_2,&LAB_00327350,temp_v1,param_1,*(unsigned int *)(temp_v2 + *psVar1 * 4));
      return;
    }
    textFormatBuffer(param_2,&LAB_00327380,param_1,*(unsigned int *)(temp_v2 + *psVar1 * 4));
    return;
  }
  if (param_3 != 0) {
    textFormatBuffer(param_2,&LAB_00327350,param_3,param_1,*(unsigned int *)(temp_v2 + *psVar1 * 4));
    return;
  }
  textFormatBuffer(param_2,&LAB_00327380,param_1,*(unsigned int *)(temp_v2 + *psVar1 * 4));
  return;
}

} /* extern "C" */
