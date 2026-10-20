/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00409e78` (_code @ 0x409e78, 0xe4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0019a0fc(unsigned int, unsigned char [48], unsigned int);
int nn_math_ARMv6_MTX34CopyAsm(...);

/* stack frame of param_3: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
} param_3_stack;

extern int g_renderCtx; /* 0x59dbb4 */
extern unsigned int DAT_005c4c2c; /* 0x5c4c2c */
extern unsigned int DAT_0064c054; /* 0x64c054 */
extern unsigned int DAT_0064c058; /* 0x64c058 */
extern unsigned int DAT_0064c05c; /* 0x64c05c */
extern unsigned int DAT_0064c060; /* 0x64c060 */
extern unsigned int DAT_0064c064; /* 0x64c064 */
extern unsigned int DAT_0064c068; /* 0x64c068 */
extern unsigned int DAT_0064c06c; /* 0x64c06c */
extern unsigned int DAT_0064c070; /* 0x64c070 */
extern unsigned int DAT_0064c074; /* 0x64c074 */
extern unsigned int DAT_0064c078; /* 0x64c078 */
extern unsigned int DAT_0064c07c; /* 0x64c07c */
extern unsigned int DAT_0064c080; /* 0x64c080 */

extern int FUN_00199f84(unsigned char *, int);
/* Supplied declaration required: FUN_0019a0fc. */
extern int __cxa_guard_acquire(unsigned int *);
/* Supplied declaration required: nn_math_ARMv6_MTX34CopyAsm. */


void FUN_00409e78(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3 [48];
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned char temp_v8 [60];
  
  if (*(int *)(g_renderCtx + 0x6fc) != 0) {
    temp_v0 = FUN_00199f84(temp_v8,*(int *)(g_renderCtx + 0x6fc) + 0x38);
    temp_v2 = 0x3f800000;
    temp_v1 = 0;
    if (temp_v0 == 0) {
      if (((DAT_005c4c2c & 1) == 0) && (temp_v0 = __cxa_guard_acquire(&DAT_005c4c2c), temp_v0 != 0)) {
        DAT_0064c054 = temp_v2;
        DAT_0064c058 = temp_v1;
        DAT_0064c05c = temp_v1;
        DAT_0064c060 = temp_v1;
        DAT_0064c064 = temp_v1;
        DAT_0064c068 = temp_v2;
        DAT_0064c06c = temp_v1;
        DAT_0064c070 = temp_v1;
        DAT_0064c074 = temp_v1;
        DAT_0064c078 = temp_v1;
        DAT_0064c07c = temp_v2;
        DAT_0064c080 = temp_v1;
      }
      nn_math_ARMv6_MTX34CopyAsm(temp_v8,&DAT_0064c054);
    }
    nn_math_ARMv6_MTX34CopyAsm(temp_v3,temp_v8);
    temp_v4 = temp_v1;
    temp_v5 = temp_v1;
    temp_v6 = temp_v1;
    temp_v7 = temp_v2;
    FUN_0019a0fc(param_2,temp_v3,param_3);
  }
  return;
}

} /* extern "C" */
