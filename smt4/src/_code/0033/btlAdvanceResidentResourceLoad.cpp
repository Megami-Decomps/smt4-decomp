#include "battle/BtlResidentLoader.h"
#include "common.h"
#include <stddef.h>
#include "shard/W6_W6Match1_CriticalSection.h"
#include "battle/BtlMainGlobals.h"
#include "battle/btlMain.h"
#include "script/scrScriptProcess.h"

#define LOADER_DONE 1

extern "C" {

/* Advances the battle loader one or more steps under its lock: each step waits for the previous
 * resource to arrive, requests the next, and the last steps finish the load. */
void btlAdvanceResidentResourceLoad(void *argument)
{
    BtlMainState *loader = static_cast<BtlMainState *>(argument);
    ScopedCriticalLock lock(btlLoaderGetLock(loader));
    do {
        switch (loader->residentLoad.step) {
        case 0:
            FUN_00394cc4();
            loader->residentLoad.step++;
        case 1:
            if (jyoucyuEnsureResidentEntry() == 0) {
                break;
            }
            loader->residentResources.legionMessages = g_btlMainState.legionMessages;
            loader->residentResources.legionMessageTable = g_btlMainState.legionMessageTable;
            loader->residentResources.legionScript = g_btlMainState.legionScript;
            loader->residentResources.process = scrScriptProcessCreate(loader->residentResources.legionScript, loader->residentResources.legionMessages);
            loader->residentResources.process->mode = 0;
            loader->residentLoad.step++;
        case 2:
            if (loader->residentResources.legionScript == 0) {
                break;
            }
            loader->residentResources.commonMessages = g_btlMainState.commonMessages;
            loader->residentLoad.step++;
        case 3:
            if (loader->residentResources.commonMessages == 0) {
                break;
            }
            loader->residentResources.talkSystemMessages = g_btlMainState.talkSystemMessages;
            loader->residentLoad.step++;
        case 4:
            if (loader->residentResources.talkSystemMessages == 0) {
                break;
            }
            loader->residentResources.talkBaseData = g_btlMainState.talkBaseData;
            loader->residentLoad.step++;
        case 5:
            if (loader->residentResources.talkBaseData == 0) {
                break;
            }
            loader->residentResources.subQuestGuestMessages = g_btlMainState.subQuestGuestMessages;
            loader->residentLoad.step++;
        case 6:
            if (loader->residentResources.subQuestGuestMessages == 0) {
                break;
            }
            loader->residentResources.systematicTable = g_btlMainState.systematicTable;
            loader->residentLoad.step++;
        case 7:
            if (loader->residentResources.systematicTable == 0) {
                break;
            }
            loader->residentResources.bossDeadTable = g_btlMainState.bossDeadTable;
            loader->residentLoad.step++;
        case 8:
            if (loader->residentResources.bossDeadTable == 0) {
                break;
            }
            loader->residentLoad.step++;
        case 9:
            if (resourceFindActiveIndex(0x3E) == 0) {
                break;
            }
            loader->residentLoad.step++;
        case 10:
            FUN_00328d2c();
            loader->residentLoad.step++;
        case 11:
            FUN_00328fa4();
            loader->residentLoad.step++;
        case 12:
            loader->residentLoad.step++;
        case 13:
            // Finish the terminal transition before publishing completion to the main task.
            loader->residentLoad.step++;
            loader->residentLoad.flags |= LOADER_DONE;
        }
    } while ((loader->residentLoad.flags & LOADER_DONE) == 0);
}

} /* extern "C" */
