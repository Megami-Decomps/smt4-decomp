/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001469a8` (_code @ 0x1469a8, 0x84 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0016236c(...);
int FUN_0017e1c0(unsigned char *, int);
int FUN_002e3140(void);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern unsigned char g_nnosAddressSpaceManagerApplication; /* 0x62d630 */

/* Supplied declaration required: FUN_0016236c. */
/* Supplied declaration required: FUN_0017e1c0. */
/* Supplied declaration required: FUN_002e3140. */


unsigned int FUN_001469a8(int param_1)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned char *puVar2;
  unsigned int temp_v1;
  int temp_v2;
  unsigned char temp_v3 [4];
  
  temp_v2 = *(int *)(param_1 + 8);
  if (temp_v2 == 0) {
    temp_v0 = 0;
  }
  else {
    temp_v0 = *(unsigned int *)(param_1 + 0x14);
    temp_v1 = *(unsigned int *)(param_1 + 0xc);
    FUN_0017e1c0(&g_nnosAddressSpaceManagerApplication,param_1);
    puVar2 = temp_v3;
    FUN_0016236c(puVar2,temp_v2,temp_v0,temp_v1,5,3);
    if ((int)puVar2 < 0) {
      FUN_002e3140();
    }
    puVar2 = temp_v3;
    FUN_0016236c(puVar2,temp_v0,0,temp_v1,6,3);
    if ((int)puVar2 < 0) {
      FUN_002e3140();
    }
  }
  return temp_v0;
}

} /* extern "C" */
