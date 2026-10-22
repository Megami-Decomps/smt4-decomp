/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039c744` (_code @ 0x39c744, 0xf8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0020b908(int, int);
int uniteStartOrQueueRequest(int);
int FUN_002a7b74(void);
int FUN_003857b4(int);
int soundChannelRequestIfEnabled(unsigned int, int, int);
int soundChannelStopAll(int);
int linkHolderClearFlag(int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern unsigned int *g_unite; /* 0x57f290 */

extern int gameGetSlotRecord(void);
/* Supplied declaration required: FUN_0020b908. */
/* Supplied declaration required: uniteStartOrQueueRequest. */
extern int FUN_0026140c(void);
/* Supplied declaration required: FUN_002a7b74. */
extern int lmapSceneGetScript(void);
/* Supplied declaration required: FUN_003857b4. */
/* Supplied declaration required: soundChannelRequestIfEnabled. */
/* Supplied declaration required: soundChannelStopAll. */
/* Supplied declaration required: linkHolderClearFlag. */
extern unsigned int FUN_004dad8c(unsigned int);


void FUN_0039c744(void)

{
/* irregular: 7 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  puVar1 = g_unite;
  temp_v0 = FUN_0026140c();
  soundChannelStopAll(0);
  soundChannelRequestIfEnabled(puVar1[0x123],0,0x3c);
  if ((-1 < *(short *)(temp_v0 + 0x20)) &&
     ((temp_v1 = gameGetSlotRecord(), temp_v1 == 0 || (*(short *)(temp_v1 + 0x62) != *(short *)(temp_v0 + 0x24)))
     )) {
    *(short *)(temp_v0 + 0x20) = -1;
    *(unsigned short *)(temp_v0 + 0x24) = 0;
  }
  if ((-1 < *(short *)(temp_v0 + 0x22)) &&
     ((temp_v1 = gameGetSlotRecord(), temp_v1 == 0 || (*(short *)(temp_v1 + 0x62) != *(short *)(temp_v0 + 0x26)))
     )) {
    *(unsigned short *)(temp_v0 + 0x22) = 0xffff;
    *(unsigned short *)(temp_v0 + 0x26) = 0;
  }
  temp_v2 = FUN_004dad8c(*puVar1);
  puVar1[0x2429] = temp_v2;
  puVar1[0x246c] = 0;
  FUN_002a7b74();
  uniteStartOrQueueRequest(0x12);
  FUN_0020b908(0x25,1);
  temp_v0 = lmapSceneGetScript();
  if (temp_v0 != 0) {
    FUN_003857b4(1);
    linkHolderClearFlag(temp_v0);
    return;
  }
  return;
}

} /* extern "C" */
