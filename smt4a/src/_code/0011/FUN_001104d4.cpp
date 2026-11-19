#include "romwright_types.h"

#include "sys/AtomicCounter.h"

extern "C" {


extern s32 DAT_00594b1c; /* 0x594b1c */



void FUN_001104d4(void)

{
/* irregular: 1 native warning(s); review required */
  atomicAddS32(&DAT_00594b1c, -1);
  return;
}

} /* extern "C" */
