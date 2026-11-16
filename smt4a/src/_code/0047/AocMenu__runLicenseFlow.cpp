/* NON_MATCHING: typed rewrite of the license flow (281 vs 293 rows): retail keeps three RequestParameters temporaries (60-byte frame) and assigns constants/globals to different registers; step order, handler lifetime and the shared result ladder follow retail. */
#include "classes/AocMenu.h"
#include "addon/aocMain.h"
#include "test/BustupViewer.h"
#include "util/BitsAndBytes.h"

/* The status operation the menu is polling: slot 1 is its deleting destructor, slot 3 reads the pending result. */
class AocLicenseHandler {
public:
    virtual ~AocLicenseHandler();
    virtual void vfunc08();
    virtual RequestParameters poll();

    /* 0x04 */ u32 words[4];
    /* 0x14 */ u32 detail;
};

/* The license menu's work. */
struct AocLicenseMenu {
    /* 0x000 */ u32 flags;
    /* 0x004 */ s32 state;
    /* 0x008 */ s32 step;
    /* 0x00C */ s32 counter;
    /* 0x010 */ u8 unk010[0x1F8];
    /* 0x208 */ AocLicenseHandler *handler;
    /* 0x20C */ u8 handlerStorage[4];
    /* 0x210 */ RequestParameters result;
};

/* The add-on main block's selected-record pointer and the cleared licence data. */
struct AocLicenseMain {
    /* 0x000 */ u8 unk000[0x688];
    /* 0x688 */ u8 *selected;
    /* 0x68C */ u8 unk68C[8];
    /* 0x694 */ u32 request[16];
    /* 0x6D4 */ u8 text[0x80];
};
typedef char AocLicenseMainOffsets[
    offsetof(AocLicenseMain, selected) == 0x688 && offsetof(AocLicenseMain, request) == 0x694 &&
    offsetof(AocLicenseMain, text) == 0x6d4 ? 1 : -1];

extern "C" {
extern AocLicenseMain *g_aocMain;

void sysMemClear(void *destination, u32 size);
AocLicenseHandler *windowCreateStatusOperation(u8 *storage, s32 kind);
void FUN_00476e58(AocLicenseMenu *menu, s32 first, s32 second);
void aocMenuSetButtonHelp(AocLicenseMenu *menu, s32 selection, s32 mode);
void jobFlagsWorkStop(AocLicenseMenu *menu);
void FUN_0047bc90(AocLicenseMenu *menu, RequestParameters *parameters);
void aocLoadingTaskStart(AocLicenseMenu *menu, s32 value);
s32 isEmptyString(const RequestParameters *result);

/* Releases the polled operation, if any. */
static __inline void releaseHandler(AocLicenseMenu *menu)
{
    if (menu->handler != NULL) {
        delete menu->handler;
    }
}

/* Starts the status operation of the given kind in the menu's embedded storage. */
static __inline void startHandler(AocLicenseMenu *menu, s32 kind)
{
    AocLicenseHandler *created = windowCreateStatusOperation(menu->handlerStorage, kind);
    menu->handler = created;
}

/* Per-frame update of the license flow: starts its status operations, polls them and reports the result. */
void AocMenu::runLicenseFlow()
{
    AocLicenseMenu *menu = reinterpret_cast<AocLicenseMenu *>(this);
    RequestParameters result;
    AocLicenseMain *aocMain = g_aocMain;
    switch (menu->step) {
    case 0:
        if (buttonHelpStateIsNot3() == 0) {
            return;
        }
        if ((menu->flags & 0x200) == 0) {
            return;
        }
        startHandler(menu, 0);
        menu->step = 1;
        return;
    case 1:
        if ((menu->flags & 0x200) == 0) {
            return;
        }
        result = menu->handler->poll();
        if (isEmptyString(&result) != 0) {
            menu->step = 2;
            return;
        }
        if (byteIsAtLeast100(reinterpret_cast<const u8 *>(&result)) == 0) {
            return;
        }
        jobFlagsWorkStop(menu);
        break;
    case 2:
        releaseHandler(menu);
        startHandler(menu, 6);
        menu->step = 3;
        aocLoadingTaskStart(menu, 1);
        return;
    case 3:
        result = menu->handler->poll();
        if (isEmptyString(&result) != 0) {
            releaseHandler(menu);
            aocLoadingTaskStart(menu, 0);
            startHandler(menu, 0);
            menu->step = 4;
            return;
        }
        if (byteIsAtLeast100(reinterpret_cast<const u8 *>(&result)) == 0) {
            return;
        }
        jobFlagsWorkStop(menu);
        menu->step = 9999;
        menu->result = result;
        return;
    case 4:
        if ((menu->flags & 0x200) == 0) {
            return;
        }
        result = menu->handler->poll();
        if (isEmptyString(&result) != 0) {
            menu->step = 5;
            aocLoadingTaskStart(menu, 1);
            return;
        }
        if (byteIsAtLeast100(reinterpret_cast<const u8 *>(&result)) == 0) {
            return;
        }
        jobFlagsWorkStop(menu);
        break;
    case 5:
        releaseHandler(menu);
        startHandler(menu, 7);
        menu->handler->detail = *reinterpret_cast<u16 *>(aocMain->selected + 0x9aa);
        menu->step = 6;
        return;
    case 6:
        result = menu->handler->poll();
        if (isEmptyString(&result) != 0) {
            menu->state = 10;
            menu->step = 0;
            if (menu->handler != NULL) {
                delete menu->handler;
                menu->handler = NULL;
            }
            AocLicenseMain *main = g_aocMain;
            for (s32 index = 0; index < 16; ++index) {
                main->request[index] = 0;
            }
            sysMemClear(main->text, 0x80);
            return;
        }
        if (byteIsAtLeast100(reinterpret_cast<const u8 *>(&result)) == 0) {
            return;
        }
        jobFlagsWorkStop(menu);
        break;
    case 7:
        menu->counter--;
        if (menu->counter > 0) {
            return;
        }
        menu->state = 6;
        menu->step = 0;
        if (menu->handler != NULL) {
            delete menu->handler;
            menu->handler = NULL;
        }
        aocMenuSetButtonHelp(menu, 2, 1);
        return;
    case 9999:
        FUN_00476e58(menu, 14, 6);
        if (menu->state != 6) {
            return;
        }
        aocMenuSetButtonHelp(menu, 2, 1);
        return;
    }
    switch (result.kind) {
    case 0x67:
        menu->step = 7;
        menu->counter = 3;
        return;
    case 0x66: {
        RequestParameters copy = result;
        FUN_0047bc90(menu, &copy);
        return;
    }
    default:
        menu->step = 9999;
        menu->result = result;
        return;
    }
}

}
