#include "common.h"

extern "C" {

extern void asdCecMaintainMessageBoxOnce(void);

/* Runs the CEC message box maintenance step (asdCecMaintainMessageBoxOnce). */
void cecMaintainMessageBox(void)
{
    asdCecMaintainMessageBoxOnce();
}

} /* extern "C" */
