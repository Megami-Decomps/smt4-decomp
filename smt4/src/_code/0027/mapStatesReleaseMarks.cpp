#include "romwright_types.h"

extern "C" {

int asdMdlManagerMarkDestroy(void);

extern int g_mapStateSlots; /* 0x44cd88 */

/* Supplied declaration required: asdMdlManagerMarkDestroy. */


void mapStatesReleaseMarks(void)

{
  char *p;
  int i;
  
  i = 0;
  do {
    p = (char *)(g_mapStateSlots + i * 0x4c) + 0x9d8;
    if (*p != '\0' && p[0x34] != '\0' && *(int *)(p + 0x30) != 0) {
      asdMdlManagerMarkDestroy();
    }
    i = i + 1;
  } while (i < 3);
  i = 0;
  do {
    p = (char *)(g_mapStateSlots + i * 0x4c) + 0x58;
    if (*p != '\0' && p[0x2c] != '\0' && p[0x34] != '\0' && *(int *)(p + 0x30) != 0) {
      asdMdlManagerMarkDestroy();
    }
    i = i + 1;
  } while (i < 0x20);
  i = 0;
  do {
    if (*(int *)(g_mapStateSlots + i * 8 + 0x1c) != 0) {
      asdMdlManagerMarkDestroy();
    }
    i = i + 1;
  } while (i < 8);
  return;
}

} /* extern "C" */
