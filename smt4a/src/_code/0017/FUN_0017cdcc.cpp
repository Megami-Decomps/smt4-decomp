/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0017cdcc` (_code @ 0x17cdcc, 0xb4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0017dd84(void);
int globalCriticalSectionEnterForward(void);
int globalCriticalSectionLeaveForward(void);
int FUN_001963e0(void);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

extern int g_commandBufferCursor; /* 0x5b40e0 */
extern signed char DAT_0061a481; /* 0x61a481 */
extern signed char DAT_0061a482; /* 0x61a482 */
extern int DAT_0061a50c; /* 0x61a50c */
extern int DAT_0061a510; /* 0x61a510 */

/* Supplied declaration required: FUN_0017dd84. */
/* Supplied declaration required: globalCriticalSectionEnterForward. */
/* Supplied declaration required: globalCriticalSectionLeaveForward. */
/* Supplied declaration required: FUN_001963e0. */


void FUN_0017cdcc(unsigned int param_1,unsigned int param_2)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned char *puVar3;
  
  temp_v0 = DAT_0061a50c;
  temp_v1 = g_commandBufferCursor - *(int *)(DAT_0061a50c + 4);
  *(int *)(DAT_0061a50c + 0xc) = temp_v1;
  if (*(int *)(temp_v0 + 0x14) != temp_v1) {
    FUN_0017dd84();
  }
  if (*(int *)(temp_v0 + 0x14) != *(int *)(temp_v0 + 0xc)) {
    return;
  }
  puVar3 = (unsigned char *)(*(int *)(temp_v0 + 0x18) + *(int *)(temp_v0 + 0x20) * 0x1c);
  *puVar3 = 1;
  *(unsigned int *)(puVar3 + 4) = param_1;
  *(unsigned int *)(puVar3 + 8) = param_2;
  *(unsigned int *)(puVar3 + 0xc) = *(unsigned int *)(puVar3 + 0xc) | 6;
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
