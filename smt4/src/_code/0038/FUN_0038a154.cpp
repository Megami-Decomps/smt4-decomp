/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038a154` (_code @ 0x38a154, 0x8c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002a2e08(unsigned int);
int FUN_002a2f08(unsigned int, unsigned char [4]);
int FUN_002a301c(unsigned char [4]);
int FUN_002ba81c(unsigned char [132], unsigned int, int);
int libc_strlen(unsigned int);

/* stack frame of param_5: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int spAC; /* 0xac: local_ac */
    unsigned int spB0; /* 0xb0: local_b0 */
    unsigned int spC0; /* 0xc0: local_c0 */
    unsigned int spD4; /* 0xd4: local_d4 */
} param_5_stack;

/* Supplied declaration required: FUN_002a2e08. */
/* Supplied declaration required: FUN_002a2f08. */
/* Supplied declaration required: FUN_002a301c. */
/* Supplied declaration required: FUN_002ba81c. */
/* Supplied declaration required: libc_strlen. */


void FUN_0038a154(unsigned int param_1,unsigned int param_2,unsigned int *param_3,unsigned int param_4,
                 unsigned long long param_5)

{
/* irregular: 5 native warning(s); review required */
  unsigned char temp_v0 [4];
  unsigned int temp_v1;
  unsigned int *temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned char temp_v5 [132];
  unsigned int temp_v6;
  
  libc_strlen(param_2);
  FUN_002a301c(temp_v0);
  FUN_002ba81c(temp_v5,param_2,0x40);
  temp_v4 = (unsigned int)param_5;
  temp_v6 = (unsigned int)((unsigned long long)param_5 >> 0x20);
  temp_v1 = temp_v1 | 1;
  if (param_3 != (unsigned int *)0x0) {
    *param_3 = 0;
  }
  temp_v2 = param_3;
  temp_v3 = param_4;
  FUN_002a2f08(param_1,temp_v0);
  FUN_002a2e08(param_1);
  return;
}

} /* extern "C" */
