#include "romwright_types.h"
#include "shard/MapNaviTable_GetCategoryCount.h"

extern "C" {

int dataTableGetCount(void);
int dataTableGet(int, int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

/* Supplied declaration required: dataTableGetCount. */
/* Supplied declaration required: dataTableGet. */


s32 MapNaviTable_GetCategoryCount(void *arg0)

{
/* irregular: 2 native warning(s); review required */
  dataTableGet(0x2b,0);
  dataTableGetCount();
  return;
}

} /* extern "C" */
