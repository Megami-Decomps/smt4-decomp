/* NON_MATCHING: screen construction still retains its base across the triplet reset calls. */
#include "mikado/mikadoMain.h"
#include "classes/SelectionState.h"
#include "classes/Obj55ca08.h"
#include "shard/Shard004B.h"
#include "shard/S2UiTexLoader.h"
#include <new>
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"

extern "C" {
extern MikadoGlobals g_mikado;
void asdOperatorDelete(void *);
void clearThreeHalfwords(u16 *);
void FUN_004b6fc4(UiScreen *);
void FUN_0019e290(void *);
void menu4CSetValue42(Menu4C *, const void *);
void uiTextScreenRunPhaseUpdate(UiScreen *);
}

extern "C" u32 FUN_002bd1f4()
{
    struct SelectionTriplet {
        u16 values[3];
        SelectionTriplet() { clearThreeHalfwords(values); }
    };
    /* Keep the extended screen and globals local rather than enlarge shared prefixes. */
    struct MikadoWindow {
        u8 active;
        u8 prefix01[0xF];
        u8 enabled;
        u8 prefix11[0xF];
        u32 flags;
        u8 completed;
        u8 prefix25[0x17];
        SelectionTriplet initialSelection;
        SelectionTriplet requestedSelection;
        u8 prefix48[0x54];
        SelectionFlags selection;
        u8 prefixAB[0x65];
        Obj55ca08 touchSelection;
        u8 tail14C[0x1120];

        MikadoWindow() : active(0), enabled(0), flags(0) {}
        static void operator delete(void *memory) { asdOperatorDelete(memory); }
    };
    struct ScreenWork {
        u32 task;
        u8 done;
        u8 state;
        u8 padding[2];
        MikadoWindow *window;
    };
    struct ScreenGlobals {
        MikadoGlobals shared;
        u32 firstSelection;
        u32 thirdSelection;
    };
    ScreenGlobals *globals = reinterpret_cast<ScreenGlobals *>(&g_mikado);
    ScreenWork *work = reinterpret_cast<ScreenWork *>(globals->shared.work);

    switch (work->state) {
    case 0: {
        work->window = new (asdOperatorNew(sizeof(MikadoWindow))) MikadoWindow;
        FUN_004b6fc4(reinterpret_cast<UiScreen *>(work->window));
        SelectionTriplet selection;
        selection.values[0] = globals->firstSelection;
        selection.values[2] = globals->thirdSelection;
        menu4CSetValue42(reinterpret_cast<Menu4C *>(work->window), &selection);
        work->state = 1;
        break;
    }
    case 1:
        uiTextScreenRunPhaseUpdate(reinterpret_cast<UiScreen *>(work->window));
        if (work->window->completed)
            work->state = 2;
        break;
    case 2:
        work->state = 3;
        work->done = 1;
        if (work->window != NULL) {
            FUN_0019e290(work->window);
            delete work->window;
            work->window = NULL;
        }
        break;
    case 3:
        return static_cast<u32>(-1);
    }
    return 0;
}
