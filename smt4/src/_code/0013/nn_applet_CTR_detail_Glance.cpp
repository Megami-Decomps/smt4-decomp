/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_applet_CTR_detail_Glance` (_code @ 0x13bafc, 0x9c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002bb308(void);
int FUN_002bb378(void);
int software_interrupt(int);

/* stack frame of param_6: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp40; /* 0x40: local_40 */
} param_6_stack;

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
extern unsigned int FUN_001483ac(unsigned char *, unsigned int, unsigned int *, unsigned char *, unsigned int, int *, int *);
extern unsigned int FUN_002bb100(void);
/* Supplied declaration required: FUN_002bb308. */
/* Supplied declaration required: FUN_002bb378. */


unsigned int nn_applet_CTR_detail_Glance
               (unsigned char *param_1,unsigned int *param_2,unsigned char *param_3,unsigned int param_4,int *param_5,
               int *param_6)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned char temp_v3 [4];
  unsigned int uStack_2c;
  unsigned char temp_v4 [4];
  int iStack_24;
  
  FUN_002bb378();
  if (param_1 == (unsigned char *)0x0) {
    param_1 = temp_v3;
  }
  if (param_2 == (unsigned int *)0x0) {
    param_2 = &uStack_2c;
  }
  if (param_3 == (unsigned char *)0x0 || param_4 == 0) {
    param_3 = temp_v4;
    param_4 = 0;
  }
  if (param_5 == (int *)0x0) {
    param_5 = &iStack_24;
  }
  if (param_6 == (int *)0x0) {
    param_6 = &temp_v2;
  }
  temp_v2 = 0;
  temp_v0 = FUN_002bb100();
  temp_v1 = FUN_001483ac(param_1,temp_v0,param_2,param_3,param_4,param_5,param_6);
  if (temp_v2 != 0) {
    software_interrupt(0x23);
  }
  FUN_002bb308();
  return temp_v1;
}

} /* extern "C" */
