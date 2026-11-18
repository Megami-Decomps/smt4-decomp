#include "romwright_types.h"
#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"

extern "C" {

extern int g_mapStateSlots; /* 0x44cd88 */



void mapStatesReleaseMarks(void)

{
  char *p;
  int i;
  
  i = 0;
  do {
    p = (char *)(g_mapStateSlots + i * 0x4c) + 0x9d8;
    if (*p != '\0' && p[0x34] != '\0' && *(int *)(p + 0x30) != 0) {
      asdMdlManagerMarkDestroy(*(AsdMdlObject **)(p + 0x30));
    }
    i = i + 1;
  } while (i < 3);
  i = 0;
  do {
    p = (char *)(g_mapStateSlots + i * 0x4c) + 0x58;
    if (*p != '\0' && p[0x2c] != '\0' && p[0x34] != '\0' && *(int *)(p + 0x30) != 0) {
      asdMdlManagerMarkDestroy(*(AsdMdlObject **)(p + 0x30));
    }
    i = i + 1;
  } while (i < 0x20);
  i = 0;
  do {
    if (*(int *)(g_mapStateSlots + i * 8 + 0x1c) != 0) {
      asdMdlManagerMarkDestroy(*(AsdMdlObject **)(g_mapStateSlots + i * 8 + 0x1c));
    }
    i = i + 1;
  } while (i < 8);
  return;
}

} /* extern "C" */
