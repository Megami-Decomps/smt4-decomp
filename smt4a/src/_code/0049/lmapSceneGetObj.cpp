#include "romwright_types.h"

extern "C" {

extern unsigned int g_lmapScene; /* 0x581288 */
extern unsigned int DAT_00587f28; /* 0x587f28 */
extern unsigned char g_gameState; /* 0x5f15fc */


int lmapSceneGetObj(void)

{
  int *piVar1;
  int temp_v0;
  
  if ((*(signed char *)((unsigned char *)&g_gameState + 0x460)) != '\0') {
    piVar1 = (int *)&DAT_00587f28;
  }
  else {
    piVar1 = (int *)&g_lmapScene;
  }
  if ((*(signed char *)((unsigned char *)&g_gameState + 0x460)) != '\0') {
    temp_v0 = *piVar1 + 0x4c;
  }
  else {
    temp_v0 = *piVar1 + 0x1c;
  }
  return temp_v0;
}

} /* extern "C" */
