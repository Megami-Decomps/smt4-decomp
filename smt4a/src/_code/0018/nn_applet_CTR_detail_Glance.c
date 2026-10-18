/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_applet_CTR_detail_Glance` (_code @ 0x18bcb4, 0x9c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_6: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp40; /* 0x40: local_40 */
} param_6_stack;

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
extern unsigned int FUN_0018b70c(void);
/* Supplied declaration required: FUN_0018b868. */
/* Supplied declaration required: FUN_0018b964. */
extern unsigned int FUN_001a35e0(unsigned char *, unsigned int, unsigned char *, unsigned char *, int, unsigned char *, int *);


unsigned int
nn_applet_CTR_detail_Glance
          (unsigned char *param_1,unsigned char *param_2,unsigned char *param_3,int param_4,
          unsigned char *param_5,int *param_6)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned char temp_v2 [4];
  unsigned char temp_v3 [4];
  unsigned char temp_v4 [4];
  unsigned char temp_v5 [4];
  
  FUN_0018b868();
  if (param_1 == (unsigned char *)0x0) {
    param_1 = temp_v2;
  }
  if (param_2 == (unsigned char *)0x0) {
    param_2 = temp_v3;
  }
  if (param_3 == (unsigned char *)0x0 || param_4 == 0) {
    param_3 = temp_v4;
    param_4 = 0;
  }
  if (param_5 == (unsigned char *)0x0) {
    param_5 = temp_v5;
  }
  if (param_6 == (int *)0x0) {
    param_6 = &temp_v1;
  }
  temp_v1 = 0;
  temp_v0 = FUN_0018b70c();
  temp_v0 = FUN_001a35e0(param_1,temp_v0,param_2,param_3,param_4,param_5,param_6);
  if (temp_v1 != 0) {
    software_interrupt(0x23);
  }
  FUN_0018b964();
  return temp_v0;
}
