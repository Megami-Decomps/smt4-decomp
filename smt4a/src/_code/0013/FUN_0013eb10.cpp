/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013eb10` (_code @ 0x13eb10, 0xac bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0016ea8c(unsigned char *, int, int);
int FUN_002e6354(unsigned char *, int);
int nn_hid_CTR_PadReader_PadReader_sub_object(unsigned char *, unsigned int);

extern unsigned char *DAT_005b4000; /* 0x5b4000 */
extern unsigned int DAT_005b4008; /* 0x5b4008 */
extern unsigned int DAT_005b4018; /* 0x5b4018 */
extern unsigned char DAT_0063ff90; /* 0x63ff90 */
extern unsigned char DAT_0063ffa8; /* 0x63ffa8 */
extern unsigned int DAT_0063fff0; /* 0x63fff0 */
extern unsigned int DAT_0063fff4; /* 0x63fff4 */
extern unsigned int DAT_0063fff8; /* 0x63fff8 */
extern unsigned short DAT_0063fffc; /* 0x63fffc */
extern unsigned short DAT_0063fffe; /* 0x63fffe */
extern unsigned char DAT_00640000; /* 0x640000 */
extern unsigned char DAT_0064007c; /* 0x64007c */

extern unsigned int FUN_00159808(void);
/* Supplied declaration required: FUN_0016ea8c. */
/* Supplied declaration required: FUN_002e6354. */
extern int FUN_002eba64(unsigned int *);
/* Supplied declaration required: nn_hid_CTR_PadReader_PadReader_sub_object. */


void FUN_0013eb10(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  if (((DAT_005b4018 & 1) == 0) && (temp_v0 = FUN_002eba64(&DAT_005b4018), temp_v0 != 0)) {
    temp_v1 = FUN_00159808();
    nn_hid_CTR_PadReader_PadReader_sub_object(&DAT_0063ff90,temp_v1);
  }
  DAT_005b4000 = &DAT_0063ff90;
  DAT_0063ffa8 = 0;
  FUN_0016ea8c(&DAT_0063ff90,0x28,0x91);
  FUN_002e6354(&DAT_00640000,0x7c);
  FUN_002e6354(&DAT_0064007c,0x7c);
  DAT_0063fff0 = 0;
  DAT_0063fff4 = 0;
  DAT_0063fff8 = 0;
  DAT_0063fffc = 0;
  DAT_0063fffe = 0;
  DAT_005b4008 = 0;
  return;
}

} /* extern "C" */
