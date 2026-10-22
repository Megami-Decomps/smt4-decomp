/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c2890` (_code @ 0x2c2890, 0xbc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0012316c(unsigned int, unsigned int);
int FUN_001233d4(unsigned int, unsigned int *);
int asdGfxSetCmdBufferUnk38(unsigned char *);
int asdGfxSetCmdBufferState(int, int);
int asdGxMarkSubmissionReady(void);
int nngxBindCmdlist(unsigned int);
int asdModelResetCommandBuffer(void);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_4_stack;

extern unsigned char LAB_001192c4; /* 0x1192c4 */
extern int DAT_004c632c; /* 0x4c632c */

/* Supplied declaration required: FUN_0012316c. */
/* Supplied declaration required: FUN_001233d4. */
/* Supplied declaration required: asdGfxSetCmdBufferUnk38. */
/* Supplied declaration required: asdGfxSetCmdBufferState. */
/* Supplied declaration required: asdGxMarkSubmissionReady. */
/* Supplied declaration required: nngxBindCmdlist. */
/* Supplied declaration required: asdModelResetCommandBuffer. */


/* WARNING: Removing unreachable block (ram,0x001233b8) */

void FUN_002c2890(unsigned int *param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 8 native warning(s); review required */
  unsigned int temp_v0;
  
  param_1[5] = 0;
  param_1[2] = param_2;
  param_1[3] = param_3;
  param_1[4] = param_4;
  temp_v0 = 0;
  if (param_2 != 0) {
    do {
      param_1[temp_v0] = 0;
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < (unsigned int)param_1[2]);
  }
  FUN_001233d4(param_1[2],param_1);
  temp_v0 = 0;
  if (temp_v0 < (unsigned int)param_1[2]) {
    do {
      nngxBindCmdlist(param_1[temp_v0]);
      FUN_0012316c(param_1[3],param_1[4]);
      asdGfxSetCmdBufferState(0x200,0x300);
      asdModelResetCommandBuffer();
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < (unsigned int)param_1[2]);
  }
  nngxBindCmdlist(*param_1);
  asdGxMarkSubmissionReady();
  asdGfxSetCmdBufferUnk38(&LAB_001192c4);
  if (DAT_004c632c != 0) {
    *(unsigned char *)(DAT_004c632c + 0x3c) = 1;
  }
  return;
}

} /* extern "C" */
