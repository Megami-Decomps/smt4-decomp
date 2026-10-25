/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001b4128` (_code @ 0x1b4128, 0xd8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0017dd84(void);
int globalCriticalSectionEnterForward(void);
int globalCriticalSectionLeaveForward(void);
int FUN_001963e0(void);
int __aeabi_memcpy4(int, unsigned int, unsigned int);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_3_stack;

extern int g_commandBufferCursor; /* 0x5b40e0 */
extern signed char DAT_0061a481; /* 0x61a481 */
extern signed char DAT_0061a482; /* 0x61a482 */
extern int DAT_0061a50c; /* 0x61a50c */
extern int DAT_0061a510; /* 0x61a510 */

/* Supplied declaration required: FUN_0017dd84. */
/* Supplied declaration required: globalCriticalSectionEnterForward. */
/* Supplied declaration required: globalCriticalSectionLeaveForward. */
/* Supplied declaration required: FUN_001963e0. */
/* Supplied declaration required: __aeabi_memcpy4. */


void FUN_001b4128(unsigned int param_1,unsigned int param_2,int param_3)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned char *puVar4;
  
  temp_v1 = DAT_0061a50c;
  temp_v0 = g_commandBufferCursor;
  temp_v2 = g_commandBufferCursor - *(int *)(DAT_0061a50c + 4);
  *(int *)(DAT_0061a50c + 0xc) = temp_v2;
  if (param_3 != 0) {
    __aeabi_memcpy4(temp_v0,param_1,param_2);
    g_commandBufferCursor = g_commandBufferCursor + (param_2 & 0xfffffffc);
  }
  else {
    if (*(int *)(temp_v1 + 0x14) != temp_v2) {
      FUN_0017dd84();
    }
    if (*(int *)(temp_v1 + 0x14) == *(int *)(temp_v1 + 0xc)) {
      puVar4 = (unsigned char *)(*(int *)(temp_v1 + 0x18) + *(int *)(temp_v1 + 0x20) * 0x1c);
      *puVar4 = 1;
      *(unsigned int *)(puVar4 + 8) = param_2;
      *(unsigned int *)(puVar4 + 4) = param_1;
      *(unsigned int *)(puVar4 + 0xc) = *(unsigned int *)(puVar4 + 0xc) | 2;
      globalCriticalSectionEnterForward();
      *(int *)(temp_v1 + 0x20) = *(int *)(temp_v1 + 0x20) + 1;
      if (((DAT_0061a510 == temp_v1) && (DAT_0061a482 != '\0')) && (DAT_0061a481 == '\0')) {
        DAT_0061a481 = '\x01';
        FUN_001963e0();
      }
      globalCriticalSectionLeaveForward();
      return;
    }
  }
  return;
}

} /* extern "C" */
