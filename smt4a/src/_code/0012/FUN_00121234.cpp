#include "romwright_types.h"

extern "C" {

extern unsigned int g_listenerTable; /* 0x594ad8 */


unsigned int FUN_00121234(void)

{
  return g_listenerTable;
}

} /* extern "C" */
