#include "romwright_types.h"
#include "map/MapSceneAccess_Smt4a.h"

extern "C" {

int dataTableGet(int, int);
int dataTableGetCount(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

/* Supplied declaration required: dataTableGet. */
/* Supplied declaration required: dataTableGetCount. */


void MapNaviTable_GetAreaCount(void)

{
/* irregular: 2 native warning(s); review required */
  dataTableGet(0x2b,2);
  dataTableGetCount();
  return;
}

} /* extern "C" */
