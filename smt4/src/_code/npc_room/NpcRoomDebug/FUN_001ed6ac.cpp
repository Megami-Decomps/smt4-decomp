/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001ed6ac` (_code @ 0x1ed6ac, 0x108 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0026dcd4(int);
int FUN_002a03d8(...);
int asdMemFree(unsigned int *);
int jobStop(unsigned int, int);

extern unsigned int *g_npcRoomDebug; /* 0x44d1b0 */

extern int npcRoomIsDone(void);
/* Supplied declaration required: FUN_0026dcd4. */
/* Supplied declaration required: FUN_002a03d8. */
extern int FUN_002b8cec(unsigned int);
extern int FUN_002bfde4(unsigned int);
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: jobStop. */


unsigned int FUN_001ed6ac(void)

{
/* irregular: 4 native warning(s); review required */
  short temp_v0;
  unsigned int *puVar2;
  int temp_v1;
  
  puVar2 = g_npcRoomDebug;
  temp_v1 = g_npcRoomDebug[1];
  if (temp_v1 != 0) {
    if (temp_v1 != 1) {
      if ((temp_v1 == 2) && (g_npcRoomDebug != (unsigned int *)0x0)) {
        jobStop(*g_npcRoomDebug,0);
        asdMemFree(puVar2);
        g_npcRoomDebug = (unsigned int *)0x0;
      }
    }
    else {
      temp_v1 = npcRoomIsDone();
      if (temp_v1 != 0) {
        FUN_002a03d8(0,1);
        FUN_002a03d8(1);
        puVar2[1] = puVar2[1] + 1;
      }
    }
  }
  else {
    temp_v1 = FUN_002b8cec(3);
    if ((temp_v1 != 0) && (*(unsigned short *)(puVar2 + 2) < 999)) {
      *(unsigned short *)(puVar2 + 2) = *(unsigned short *)(puVar2 + 2) + 1;
    }
    temp_v1 = FUN_002b8cec(4);
    temp_v0 = 0;
    if (temp_v1 != 0) {
      temp_v0 = *(short *)(puVar2 + 2);
    }
    if (temp_v1 != 0 && temp_v0 != 0) {
      *(short *)(puVar2 + 2) = temp_v0 - 1;
    }
    temp_v1 = FUN_002bfde4(0);
    if (temp_v1 != 0) {
      FUN_0026dcd4(*(unsigned short *)(puVar2 + 2));
      puVar2[1] = puVar2[1] + 1;
    }
  }
  return 0;
}

} /* extern "C" */
