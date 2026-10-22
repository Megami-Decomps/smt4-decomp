#include "saveLoadUI/SaveLoadState.h"

extern "C" {


extern u8 asdFsIsSdCardDetected(void);

extern SaveLoadProcessA g_saveLoadProcess; /* 0x57f6bc */

/* Refreshes the save/load process SD-card detection flag. */
void saveLoadProcessUpdateSdCardDetection(void)
{
    g_saveLoadProcess.sdCardDetected = asdFsIsSdCardDetected();
}

}
