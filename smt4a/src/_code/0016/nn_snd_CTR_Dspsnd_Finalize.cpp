/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_snd_CTR_Dspsnd_Finalize` (_code @ 0x16f6f8, 0xf0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00189788(int, char [8]);
int FUN_001897bc(int, unsigned short [2], int);
int FUN_0018985c(int, int);
int FUN_00189a04(int, short [2]);
int FUN_001bcd48(unsigned char *, int);
int rt_memcpy(int *, int, int);
int software_interrupt(int);

/* stack frame of param_2: 3 slot(s), 5 byte(s) */
typedef struct {
    unsigned char sp18; /* 0x18: local_18 */
    unsigned short sp1C; /* 0x1c: local_1c */
    unsigned short sp20; /* 0x20: local_20 */
} param_2_stack;

extern unsigned char LAB_004a95c0; /* 0x4a95c0 */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_00189788. */
/* Supplied declaration required: FUN_001897bc. */
/* Supplied declaration required: FUN_0018985c. */
/* Supplied declaration required: FUN_00189a04. */
/* Supplied declaration required: FUN_001bcd48. */
extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);
/* Supplied declaration required: rt_memcpy. */


void nn_snd_CTR_Dspsnd_Finalize(int *param_1,unsigned char param_2)

{
/* irregular: 7 native warning(s); review required */
  unsigned short temp_v0 [2];
  short temp_v1 [2];
  char temp_v2 [8];
  
  if (param_2) {
    temp_v0[0] = 3;
  }
  else {
    temp_v0[0] = 1;
  }
  FUN_001897bc(2,temp_v0,4);
  while( 1 ) {
    temp_v1[0] = 0;
    FUN_00189788(0,temp_v2);
    if (temp_v2[0] != '\0') {
      FUN_00189a04(0,temp_v1);
    }
    if (temp_v1[0] == 1) break;
    FUN_001bcd48(&LAB_004a95c0,0);
  }
  if (param_2) {
    rt_memcpy(param_1 + 6,param_1[0x42a],0x1080);
  }
  nn_os_CriticalSection_Enter((unsigned int)(param_1 + 2));
  *(unsigned char *)(param_1 + 0x4c6) = 0;
  if (*param_1 != 0) {
    software_interrupt(0x23);
    *param_1 = 0;
  }
  FUN_0018985c(*param_1,2);
  software_interrupt(0x23);
  param_1[1] = 0;
  nn_os_CriticalSection_Leave((unsigned int)(param_1 + 2));
  param_1[4] = -1;
  return;
}

} /* extern "C" */
