/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00207ee8` (_code @ 0x207ee8, 0x74 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002630e0(int *, int, unsigned int, int *);

/* stack frame of void: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp28; /* 0x28: local_28 */
} void_stack;

extern unsigned int DAT_00472550; /* 0x472550 */
extern unsigned int DAT_00472554; /* 0x472554 */
extern unsigned int DAT_00472558; /* 0x472558 */
extern unsigned int DAT_0047255c; /* 0x47255c */
extern unsigned int DAT_004ea91c; /* 0x4ea91c */
extern unsigned int DAT_004ea920; /* 0x4ea920 */
extern unsigned int DAT_004ea924; /* 0x4ea924 */
extern unsigned int DAT_004ea928; /* 0x4ea928 */

/* Supplied declaration required: FUN_002630e0. */
extern unsigned int FUN_002c501c(void);


void FUN_00207ee8(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int uStack_24;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  
  temp_v0 = FUN_002c501c();
  DAT_00472550 = DAT_004ea91c;
  DAT_00472554 = DAT_004ea920;
  DAT_00472558 = DAT_004ea924;
  DAT_0047255c = DAT_004ea928;
  temp_v3 = DAT_004ea91c;
  temp_v4 = DAT_004ea920;
  temp_v5 = DAT_004ea924;
  FUN_002630e0(&temp_v1,0,temp_v0,&temp_v3);
  DAT_004ea91c = temp_v1;
  DAT_004ea920 = uStack_24;
  DAT_004ea924 = temp_v2;
  DAT_004ea928 = 0;
  return;
}

} /* extern "C" */
