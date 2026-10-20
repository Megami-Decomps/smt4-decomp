/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0017ced4` (_code @ 0x17ced4, 0x9c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int globalCriticalSectionEnterForward(void);
int globalCriticalSectionLeaveForward(void);
int FUN_001963e0(void);

/* stack frame of param_7: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_7_stack;

extern signed char DAT_0061a481; /* 0x61a481 */
extern signed char DAT_0061a482; /* 0x61a482 */
extern int DAT_0061a50c; /* 0x61a50c */
extern int DAT_0061a510; /* 0x61a510 */

/* Supplied declaration required: globalCriticalSectionEnterForward. */
/* Supplied declaration required: globalCriticalSectionLeaveForward. */
/* Supplied declaration required: FUN_001963e0. */


void FUN_0017ced4(unsigned int param_1,int param_2,int param_3,unsigned int param_4,int param_5,
                 int param_6,unsigned int param_7)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned char *puVar2;
  
  temp_v0 = DAT_0061a50c;
  puVar2 = (unsigned char *)(*(int *)(DAT_0061a50c + 0x18) + *(int *)(DAT_0061a50c + 0x20) * 0x1c);
  *puVar2 = 4;
  *(unsigned int *)(puVar2 + 4) = param_1;
  *(unsigned int *)(puVar2 + 8) = param_4;
  *(unsigned int *)(puVar2 + 0xc) = param_7;
  *(short *)(puVar2 + 0x10) = (short)(param_3 >> 4);
  *(short *)(puVar2 + 0x12) = (short)(param_2 >> 4);
  *(short *)(puVar2 + 0x14) = (short)(param_6 >> 4);
  *(short *)(puVar2 + 0x16) = (short)(param_5 >> 4);
  globalCriticalSectionEnterForward();
  *(int *)(temp_v0 + 0x20) = *(int *)(temp_v0 + 0x20) + 1;
  if (((DAT_0061a510 == temp_v0) && (DAT_0061a482 != '\0')) && (DAT_0061a481 == '\0')) {
    DAT_0061a481 = '\x01';
    FUN_001963e0();
  }
  globalCriticalSectionLeaveForward();
  return;
}

} /* extern "C" */
