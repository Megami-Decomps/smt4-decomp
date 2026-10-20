/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00105254` (_code @ 0x105254, 0x74 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001079d8(void);
int FUN_00108c5c(unsigned int, unsigned int);
int FUN_0010bdb0(void);
int FUN_0010e614(void);
int FUN_00131a2c(unsigned int);
int FUN_002c2968(unsigned int, unsigned int);
int FUN_002c29c4(unsigned char *);

extern unsigned int DAT_00464b0c; /* 0x464b0c */
extern unsigned int DAT_00464b7c; /* 0x464b7c */
extern unsigned int DAT_00464b84; /* 0x464b84 */
extern unsigned char DAT_004dae3c; /* 0x4dae3c */
extern unsigned char DAT_004dae48; /* 0x4dae48 */

/* Supplied declaration required: FUN_001079d8. */
/* Supplied declaration required: FUN_00108c5c. */
/* Supplied declaration required: FUN_0010bdb0. */
/* Supplied declaration required: FUN_0010e614. */
/* Supplied declaration required: FUN_00131a2c. */
/* Supplied declaration required: FUN_002c2968. */
/* Supplied declaration required: FUN_002c29c4. */


void FUN_00105254(unsigned int param_1,unsigned int param_2)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  
  FUN_002c29c4(&DAT_004dae3c);
  FUN_002c29c4(&DAT_004dae48);
  FUN_00108c5c(param_1,param_2);
  FUN_001079d8();
  FUN_0010e614();
  FUN_0010bdb0();
  temp_v0 = 0;
  do {
    FUN_002c2968((&DAT_00464b7c)[temp_v0],(&DAT_00464b84)[temp_v0]);
    FUN_00131a2c((&DAT_00464b7c)[temp_v0]);
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 2);
  DAT_00464b0c = 0;
  return;
}

} /* extern "C" */
