/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00159468` (_code @ 0x159468, 0x118 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int sysFatalBreak(void);
int nn_os_SharedMemoryBlock_AttachAndMap(unsigned int *, int, int, int);

/* stack frame of param_2: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
} param_2_stack;

extern signed char DAT_005c0ac0; /* 0x5c0ac0 */
extern unsigned int g_ipcServiceInitResult; /* 0x5c14bc */

extern int FUN_0016f06c(unsigned int *, unsigned int *, unsigned int *, unsigned int *, unsigned int *, unsigned int *);
extern unsigned int FUN_0016f864(unsigned int);
extern int FUN_0016f988(unsigned int *, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: sysFatalBreak. */
extern unsigned int libc_strlen(unsigned int);
/* Supplied declaration required: nn_os_SharedMemoryBlock_AttachAndMap. */


unsigned int FUN_00159468(unsigned int *param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  
  temp_v3 = 0;
  temp_v4 = 0;
  temp_v5 = 0;
  temp_v6 = 0;
  temp_v7 = 0;
  temp_v8 = 0;
  if (DAT_005c0ac0 != '\0') {
    temp_v0 = 0xe0a04ff9;
  }
  else {
    temp_v1 = FUN_0016f864(0);
    if ((temp_v1 & 0x3ff) != 0x3f9 && (int)temp_v1 < 0) {
      sysFatalBreak();
    }
    temp_v0 = libc_strlen(param_2);
    temp_v2 = FUN_0016f988(&g_ipcServiceInitResult,param_2,temp_v0,0);
    if (temp_v2 < 0) {
      sysFatalBreak();
    }
    temp_v2 = FUN_0016f06c((unsigned int *)&temp_v3,(unsigned int *)&temp_v4,(unsigned int *)&temp_v5,(unsigned int *)&temp_v6,(unsigned int *)&temp_v7,(unsigned int *)&temp_v8);
    if (temp_v2 < 0) {
      sysFatalBreak();
    }
    nn_os_SharedMemoryBlock_AttachAndMap(param_1 + 0xb,temp_v3,0x2b0,1);
    temp_v2 = param_1[0xd];
    param_1[1] = temp_v2;
    param_1[8] = temp_v2 + 0x158;
    param_1[3] = temp_v2 + 0xa8;
    param_1[5] = temp_v2 + 0x108;
    param_1[10] = temp_v2 + 0x238;
    *param_1 = temp_v4;
    param_1[2] = temp_v5;
    param_1[4] = temp_v6;
    param_1[7] = temp_v7;
    param_1[9] = temp_v8;
    DAT_005c0ac0 = '\x01';
    temp_v0 = 0;
  }
  return temp_v0;
}

} /* extern "C" */
