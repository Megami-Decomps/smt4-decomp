#include "common.h"
#include "code/Code003c_Smt4a.h"

extern "C" {

void saveLoadUiRestoreBackups(void);

/* Forwards to saveLoadUiRestoreBackups, the function that follows it. */
void FUN_003c91e8(void)
{
    saveLoadUiRestoreBackups();
}

} /* extern "C" */
