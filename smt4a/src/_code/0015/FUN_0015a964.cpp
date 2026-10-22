/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0015a964` (_code @ 0x15a964, 0xbc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001a2b80(unsigned int);
int FUN_001a2e74(unsigned int, int);
int FUN_001a30ec(unsigned int *);
int FUN_001a3220(unsigned int *, int);
int FUN_001a3338(unsigned int, int, unsigned int *, int, unsigned int);
int __aeabi_vec_ctor_nocookie_nodtor(int *, unsigned char *, int, int);

/* stack frame of param_1: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp40; /* 0x40: local_40 */
} param_1_stack;

extern unsigned char LAB_001a2a68; /* 0x1a2a68 */
extern unsigned int DAT_005891bc; /* 0x5891bc */
extern unsigned int DAT_0061a60c; /* 0x61a60c */
extern unsigned char DAT_0061a610; /* 0x61a610 */
extern unsigned int DAT_0061a61c; /* 0x61a61c */
extern unsigned int DAT_0061a628; /* 0x61a628 */

/* Supplied declaration required: FUN_001a2b80. */
/* Supplied declaration required: FUN_001a2e74. */
/* Supplied declaration required: FUN_001a30ec. */
/* Supplied declaration required: FUN_001a3220. */
/* Supplied declaration required: FUN_001a3338. */
/* Supplied declaration required: __aeabi_vec_ctor_nocookie_nodtor. */
extern void nn_applet_CTR_detail_GetDisplayInfo(unsigned int);


unsigned int FUN_0015a964(unsigned int param_1)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  int iStack_2c;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  __aeabi_vec_ctor_nocookie_nodtor(&temp_v0,&LAB_001a2a68,0x10,2);
  nn_applet_CTR_detail_GetDisplayInfo((unsigned int)&temp_v0);
  FUN_001a2b80(param_1);
  DAT_0061a61c = temp_v1;
  DAT_0061a628 = temp_v2;
  DAT_0061a610 = temp_v0 != iStack_2c;
  FUN_001a30ec(&DAT_0061a60c);
  FUN_001a3338(param_1,0x10,&DAT_0061a60c,0x20,DAT_005891bc);
  FUN_001a2e74(param_1,0);
  FUN_001a3220(&DAT_0061a60c,0x20);
  return 0;
}

} /* extern "C" */
