#include "shard/NaviMain.h"
#include "event/bustupEvent/BustupTex.h"

/* Local view: the resource flag is inside NaviMainA's opaque panel union. */
struct NaviMapSelectionView {
    u8 unk00000[0xC];
    u8 localMap;
    u8 unk0000D[0xB];
    u32 selection;
    u8 unk0001C[0x20629];
    s8 specialTexturesLoaded; /* 0x20645 */
};
extern "C" {
u32 FUN_004931c4(void);
void asdTMTexTableReleaseNode(s32, s32);
void FUN_0049105c(NaviMainA *, s32);
void FUN_0048cee0(NaviMainA *, s32);
}

/* Switch the navigation texture set before dispatching the selected map kind. */
extern "C" void FUN_0048821c(NaviMainA *navigation, s32 mapId)
{
    NaviMapSelectionView *view = (NaviMapSelectionView *)navigation;
    view->selection = 0;
    if (mapId >= 100) {
        view->localMap = 0;
        if (FUN_004931c4() == 0 && view->specialTexturesLoaded == 0) {
            FUN_0014afd0(19, 6);
            view->specialTexturesLoaded = 1;
        }
        FUN_0049105c(navigation, mapId);
    } else {
        view->localMap = 1;
        if (FUN_004931c4() == 0 && view->specialTexturesLoaded == 1) {
            asdTMTexTableReleaseNode(19, 6);
            view->specialTexturesLoaded = 0;
        }
        FUN_0048cee0(navigation, mapId);
    }
}
