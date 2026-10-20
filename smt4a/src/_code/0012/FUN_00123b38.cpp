/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00123b38` (_code @ 0x123b38, 0x66 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int strInit(unsigned char [32]);
int onlineStringDestroy(unsigned char [12]);
int constructObj0055affc(unsigned char [12]);
int strDestroy(unsigned char [32]);
int FUN_002f4e90(unsigned char [59], unsigned char [32]);
int FUN_002f4f00(unsigned char [59]);
int FUN_002fbc1a(int, unsigned char [12]);
int FUN_00310fa6(int, unsigned char [32]);

typedef int romwright_code(...);
/* stack frame of param_3: 1 slot(s), 1 byte(s) */
typedef struct {
    unsigned char sp45; /* 0x45: local_45 */
} param_3_stack;

extern unsigned int FUN_00123a7c(unsigned int, unsigned char *, int);
/* Supplied declaration required: strInit. */
/* Supplied declaration required: onlineStringDestroy. */
/* Supplied declaration required: constructObj0055affc. */
/* Supplied declaration required: strDestroy. */
/* Supplied declaration required: FUN_002f4e90. */
/* Supplied declaration required: FUN_002f4f00. */
/* Supplied declaration required: FUN_002fbc1a. */
/* Supplied declaration required: FUN_00310fa6. */


void FUN_00123b38(unsigned int param_1,int param_2,unsigned int *param_3)

{
/* irregular: 8 native warning(s); review required */
  unsigned int temp_v0;
  unsigned char temp_v1 [59];
  unsigned char temp_v2;
  unsigned char temp_v3 [32];
  unsigned char temp_v4 [12];
  
  constructObj0055affc(temp_v4);
  FUN_002fbc1a(param_2,temp_v4);
  temp_v0 = FUN_00123a7c(param_1,temp_v4,(int)*(char *)(param_2 + 0x3b));
  *param_3 = temp_v0;
  strInit(temp_v3);
  FUN_00310fa6(param_2,temp_v3);
  FUN_002f4e90(temp_v1,temp_v3);
  temp_v2 = *(unsigned char *)(param_2 + 0x3b);
  (**(romwright_code **)(*(int *)*param_3 + 0x1c))((int *)*param_3,temp_v1);
  FUN_002f4f00(temp_v1);
  strDestroy(temp_v3);
  onlineStringDestroy(temp_v4);
  return;
}

} /* extern "C" */
