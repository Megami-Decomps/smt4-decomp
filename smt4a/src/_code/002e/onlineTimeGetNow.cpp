/* NON_MATCHING: romwright 0.5.0 decompilation of `onlineTimeGetNow` (_code @ 0x2eb588, 0x2e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002ebadc(int *, int);
int FUN_002ebbfc(int *);

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp10; /* 0x10: local_10 */
} param_4_stack;

extern unsigned char g_flagBlock; /* 0x594958 */
extern unsigned int DAT_00594b30; /* 0x594b30 */
extern unsigned int DAT_00594b34; /* 0x594b34 */

/* Supplied declaration required: FUN_002ebadc. */
/* Supplied declaration required: FUN_002ebbfc. */


void onlineTimeGetNow(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = param_3;
  temp_v1 = param_4;
  if ((*(signed char *)((unsigned char *)&g_flagBlock + 0xa)) != '\0') {
    FUN_002ebadc(&temp_v0,0);
  }
  else {
    FUN_002ebbfc(&temp_v0);
  }
  DAT_00594b34 = temp_v1;
  DAT_00594b30 = temp_v0;
  *param_1 = temp_v0;
  param_1[1] = temp_v1;
  return;
}

} /* extern "C" */
