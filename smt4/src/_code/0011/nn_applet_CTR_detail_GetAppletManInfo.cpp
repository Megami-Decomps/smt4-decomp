/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_applet_CTR_detail_GetAppletManInfo` (_code @ 0x1102c8, 0x84 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0011d798(int, unsigned char [4], int *, int *, unsigned int [2]);
int nn_applet_CTR_detail_CloseSession(void);
int FUN_002bb378(void);
int FUN_002c131c(void);

/* stack frame of param_5: 5 slot(s), 17 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned char sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_5_stack;

/* Supplied declaration required: FUN_0011d798. */
/* Supplied declaration required: nn_applet_CTR_detail_CloseSession. */
/* Supplied declaration required: FUN_002bb378. */
/* Supplied declaration required: FUN_002c131c. */


void nn_applet_CTR_detail_GetAppletManInfo
               (int param_1,unsigned char *param_2,unsigned int *param_3,unsigned int *param_4,
               unsigned int *param_5)

{
/* irregular: 4 native warning(s); review required */
  unsigned char temp_v0 [4];
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3 [2];
  
  FUN_002bb378();
  FUN_0011d798(param_1,temp_v0,&temp_v1,&temp_v2,temp_v3);
  if (param_1 < 0) {
    FUN_002c131c();
  }
  nn_applet_CTR_detail_CloseSession();
  if (param_2 != (unsigned char *)0x0) {
    *param_2 = temp_v0[0];
  }
  if (param_3 != (unsigned int *)0x0) {
    *param_3 = temp_v1;
  }
  if (param_4 != (unsigned int *)0x0) {
    *param_4 = temp_v2;
  }
  if (param_5 != (unsigned int *)0x0) {
    *param_5 = temp_v3[0];
  }
  return;
}

} /* extern "C" */
