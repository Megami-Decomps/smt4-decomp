#include "romwright_types.h"

extern "C" {

extern unsigned int DAT_0044e368; /* 0x44e368 */

extern unsigned int nn_applet_CTR_detail_CloseApplication(unsigned char *, unsigned int, unsigned int);


void FUN_00103c84(void)

{
  nn_applet_CTR_detail_CloseApplication(0x0,0,DAT_0044e368);
  return;
}

} /* extern "C" */
