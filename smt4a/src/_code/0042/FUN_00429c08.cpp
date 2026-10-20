/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00429c08` (_code @ 0x429c08, 0xf4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001b57a8(...);
int FUN_004283f0(int, int, unsigned int);
int FUN_004395fc(unsigned char *, char [16], int, int, unsigned int, unsigned int);

/* stack frame of param_3: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp50; /* 0x50: local_50 */
} param_3_stack;

extern char s_sys_ECardStatus_005892a4[16]; /* 0x5892a4 */

extern unsigned char FUN_00100790(void);
/* Supplied declaration required: FUN_001b57a8. */
extern int FUN_001d25ec(unsigned int *);
extern int FUN_004283cc(int);
/* Supplied declaration required: FUN_004283f0. */
extern int FUN_00429a1c(int);
/* Supplied declaration required: FUN_004395fc. */


void FUN_00429c08(unsigned int *param_1,int param_2,int param_3)

{
/* irregular: 3 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  unsigned char *puVar3;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int uStack_44;
  unsigned char temp_v4 [36];
  
  temp_v1 = FUN_004283cc(param_2);
  if (-1 < temp_v1) {
    temp_v2 = 0;
    do {
      if (*(char *)(param_3 + temp_v2) == '\0') break;
      temp_v0 = FUN_00100790();
      temp_v4[temp_v2] = temp_v0;
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 0x1f);
    temp_v4[temp_v2] = 0;
    puVar3 = temp_v4;
    FUN_004395fc(puVar3,s_sys_ECardStatus_005892a4,3,param_2 + 4,*(unsigned int *)(param_2 + 8),
                 *(unsigned int *)(param_2 + 0xc));
    FUN_001b57a8(&temp_v3,puVar3);
    FUN_004283f0(param_2,temp_v3,uStack_44);
    temp_v1 = FUN_001d25ec((unsigned int *)&temp_v3);
    if (temp_v1 < 0) {
      *param_1 = temp_v3;
      param_1[1] = uStack_44;
      return;
    }
    temp_v1 = FUN_00429a1c(param_2);
    if (-1 < temp_v1) {
      FUN_001b57a8(param_1,0);
      return;
    }
  }
  FUN_001b57a8(param_1,temp_v1);
  return;
}

} /* extern "C" */
