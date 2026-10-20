/* NON_MATCHING: instructions are identical; only the switch jump table is compared as relocations (__switch$$) against retail's resolved words */
/* Classifies the DataStore's progress by its state: 0 = starting, 1 = state 7, 2 = working, 3 = finished, 5 = not running or in an error. */
#include "common.h"
#include "network/DataStore/DataStoreMain.h"

extern "C" {

int jobFind(u32 task);                /* nonzero while the task exists */

extern DataStoreCtrl *g_dataStore;

u32 dataStoreGetProgress(void)
{
    if (g_dataStore != NULL && jobFind(g_dataStore->task) != 0 && g_dataStore->work->unk0d == 0) {
        switch (g_dataStore->work->state) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
            return 0;
        case 7:
            return 1;
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        case 13:
            return 2;
        case 14:
        case 15:
            return 3;
        }
    }
    return 5;
}

} /* extern "C" */
