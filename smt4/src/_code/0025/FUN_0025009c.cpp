/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0025009c` (_code @ 0x25009c, 0x78 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002569fc(void);
int FUN_002a2c7c(void);
int FUN_003f6c7c(void);

extern unsigned int DAT_004ea91c; /* 0x4ea91c */
extern unsigned int DAT_004ea920; /* 0x4ea920 */
extern unsigned int DAT_004ea924; /* 0x4ea924 */
extern unsigned int DAT_004ea928; /* 0x4ea928 */
extern unsigned int DAT_004ea95c; /* 0x4ea95c */
extern unsigned int DAT_004ea960; /* 0x4ea960 */
extern unsigned int DAT_004ea964; /* 0x4ea964 */
extern unsigned int DAT_004ea96c; /* 0x4ea96c */
extern unsigned int DAT_004ea970; /* 0x4ea970 */
extern unsigned int DAT_004ea974; /* 0x4ea974 */
extern unsigned int DAT_004ea97c; /* 0x4ea97c */
extern unsigned int DAT_004ea980; /* 0x4ea980 */
extern unsigned int DAT_004ea984; /* 0x4ea984 */

/* Supplied declaration required: FUN_002569fc. */
/* Supplied declaration required: FUN_002a2c7c. */
/* Supplied declaration required: FUN_003f6c7c. */


void FUN_0025009c(unsigned int *param_1,unsigned int *param_2)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  FUN_002569fc();
  DAT_004ea91c = *param_2;
  DAT_004ea920 = param_2[1];
  DAT_004ea924 = param_2[2];
  DAT_004ea928 = param_2[3];
  FUN_003f6c7c();
  FUN_002a2c7c();
  temp_v1 = DAT_004ea964;
  temp_v0 = DAT_004ea960;
  *param_1 = DAT_004ea95c;
  param_1[1] = temp_v0;
  param_1[2] = temp_v1;
  temp_v1 = DAT_004ea970;
  temp_v0 = DAT_004ea96c;
  param_1[6] = DAT_004ea974;
  param_1[4] = temp_v0;
  param_1[5] = temp_v1;
  temp_v1 = DAT_004ea980;
  temp_v0 = DAT_004ea97c;
  param_1[10] = DAT_004ea984;
  param_1[8] = temp_v0;
  param_1[9] = temp_v1;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  return;
}

} /* extern "C" */
