#include "common.h"
#include "shard/W9_W9Match8_WorkRecords.h"
#include "test/BustupViewer.h"

extern "C" {
s32 FUN_001517b4(s32, s32);
s32 sysPlaySe(s32);
s32 FUN_00183e58(void);
s32 slotSetRequest(s32, s32, s32);
s32 msgWindowReset(void);
s32 FUN_002bf4f4(s32);
s32 pickObjStart(PickObjectEndPrefixA *, const char *);
s32 scrRunOpcodesStub(u32);
s32 messageMainIsWindowActive(void);
s32 screenFadeIsBusy(void);
}

extern "C" void eventUpdatePickedObjectEndScript(PickObjectEndPrefixA *object)
{
    switch (object->phase) {
    case 0:
        pickObjStart(object, "qc_end");
        sysPlaySe(0xa0);
        ++object->phase;
        return;

    case 1:
        FUN_002bf4f4(0);
        if (scrRunOpcodesStub(*object->script) == 2) {
            slotSetRequest(0, 10, 0xff);
            slotSetRequest(1, 10, 0xff);
            FUN_00183e58();
            ++object->phase;
            return;
        }
        if (FUN_001517b4(1, 1) != 0 &&
            messageMainIsWindowActive() != 0) {
            msgWindowReset();
        }
        return;

    case 2:
        if (screenFadeIsBusy() == 0 && FUN_002e19f8() != 0) {
            object->state = 0x12;
            object->phase = 0;
        }
        return;

    default:
        return;
    }
}
