#include "addon/QuestScriptLoader.h"
#include "code/Code002c.h"
#include "util/MemoryHelpers_VariantB.h"
#include "script/scrScriptProcess.h"

extern "C" {


int buttonHelpCreate(void);
int titleSetSlotValueState2(int index, int value);

/* Resets the loader for entry 12 and updates slots 0/1 whose state is 3. */
void FUN_00289608(AocScriptHolder *task, u8 flag)
{
    task->showButtonHelp = flag;
    task->entry = 11;
    task->state = 0;
    if (task->script != NULL) {
        asdMemFree(task->script);
        task->script = NULL;
    }
    if (task->messages != NULL) {
        asdMemFree(task->messages);
        task->messages = NULL;
    }
    if (task->process != NULL) {
        scrScriptProcessDestroy(task->process);
        task->process = NULL;
    }
    if (task->showButtonHelp != 0) {
        buttonHelpCreate();
    }
    task->entry = 12;
    s32 firstState = FUN_002c2a04(0);
    if (firstState == 3) {
        titleSetSlotValueState2(0, 5);
    }
    if (FUN_002c2a04(1) == 3) {
        titleSetSlotValueState2(1, 5);
    }
}

} /* extern "C" */
