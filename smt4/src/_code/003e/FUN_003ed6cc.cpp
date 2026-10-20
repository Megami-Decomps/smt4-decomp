/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ed6cc` (_code @ 0x3ed6cc, 0x74 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int __aeabi_vec_ctor_nocookie_nodtor(unsigned char *, unsigned char *, int, int);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_3_stack;

extern unsigned char LAB_0033b5a0; /* 0x33b5a0 */
extern int FUN_00348784(...); /* 0x348784 */
extern unsigned int DAT_0044ea68; /* 0x44ea68 */
extern unsigned int DAT_0044ea6c; /* 0x44ea6c */
extern unsigned int DAT_004d4924; /* 0x4d4924 */
extern unsigned int DAT_004d4928; /* 0x4d4928 */
extern unsigned int DAT_004d492c; /* 0x4d492c */
extern unsigned int DAT_004d4930; /* 0x4d4930 */
extern unsigned int DAT_004d4934; /* 0x4d4934 */
extern unsigned int DAT_004d4938; /* 0x4d4938 */
extern unsigned int DAT_004d493c; /* 0x4d493c */
extern unsigned int DAT_004d4940; /* 0x4d4940 */
extern unsigned int DAT_004d4944; /* 0x4d4944 */
extern unsigned char DAT_004d494c; /* 0x4d494c */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: __aeabi_vec_ctor_nocookie_nodtor. */


unsigned long long FUN_003ed6cc(unsigned int param_1,unsigned int param_2,int param_3)

{
/* irregular: 2 native warning(s); review required */
  unsigned char *puVar1;
  
  *(unsigned int *)(param_3 + 8) = param_1;
  *(unsigned int *)(param_3 + 0xc) = param_2;
  DAT_0044ea68 = 0;
  DAT_0044ea6c = 0;
  DAT_004d4924 = 0;
  DAT_004d4928 = 0x42c80000;
  DAT_004d492c = 0x44a00000;
  DAT_004d4930 = 0;
  DAT_004d4934 = 0;
  DAT_004d4938 = 0;
  DAT_004d493c = 0;
  DAT_004d4940 = 0x3f800000;
  DAT_004d4944 = 0;
  puVar1 = &DAT_004d494c;
  __aeabi_vec_ctor_nocookie_nodtor(&DAT_004d494c,&LAB_0033b5a0,0x544,2);
  return romwright_piece_4_4(FUN_00348784,puVar1 + -4);
}

} /* extern "C" */
