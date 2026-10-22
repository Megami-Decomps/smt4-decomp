/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00354a20` (_code @ 0x354a20, 0xf4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int recordValidatePair(int, int, unsigned int);
int _ZN18WindowStatusResultC1Ej(...);
int FUN_0035f774(unsigned char *, char [16], int, int, unsigned int, unsigned int);

/* stack frame of param_3: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp50; /* 0x50: local_50 */
} param_3_stack;

extern char s_sys_ECardStatus_0044e4c8[16]; /* 0x44e4c8 */

extern unsigned char libc_toupper(void);
/* Supplied declaration required: recordValidatePair. */
extern int FUN_0023a1f8(int);
extern int legacyResourceIdRemap(unsigned int *);
/* Supplied declaration required: _ZN18WindowStatusResultC1Ej. */
extern int FUN_00354834(int);
/* Supplied declaration required: FUN_0035f774. */


void FUN_00354a20(unsigned int *param_1,int param_2,int param_3)

{
/* irregular: 3 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  unsigned char *puVar3;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int uStack_44;
  unsigned char temp_v4 [36];
  
  temp_v1 = FUN_0023a1f8(param_2);
  if (-1 < temp_v1) {
    temp_v2 = 0;
    do {
      if (*(char *)(param_3 + temp_v2) == '\0') break;
      temp_v0 = libc_toupper();
      temp_v4[temp_v2] = temp_v0;
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 0x1f);
    temp_v4[temp_v2] = 0;
    puVar3 = temp_v4;
    FUN_0035f774(puVar3,s_sys_ECardStatus_0044e4c8,3,param_2 + 4,*(unsigned int *)(param_2 + 8),
                 *(unsigned int *)(param_2 + 0xc));
    _ZN18WindowStatusResultC1Ej(&temp_v3,puVar3);
    recordValidatePair(param_2,temp_v3,uStack_44);
    temp_v1 = legacyResourceIdRemap((unsigned int *)&temp_v3);
    if (temp_v1 < 0) {
      *param_1 = temp_v3;
      param_1[1] = uStack_44;
      return;
    }
    temp_v1 = FUN_00354834(param_2);
    if (-1 < temp_v1) {
      _ZN18WindowStatusResultC1Ej(param_1,0);
      return;
    }
  }
  _ZN18WindowStatusResultC1Ej(param_1,temp_v1);
  return;
}

} /* extern "C" */
