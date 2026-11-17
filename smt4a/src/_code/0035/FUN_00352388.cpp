/* NON_MATCHING: retail copies the home vectors through VFP registers component by component (x apart from y/z); struct assignment here copies them with ldm/stm */
#include "map/LmapViewGlobals.h"
#include "classes/Obj557af8.h"

extern "C" {

void FUN_00292b84(void);
s32 mapStateGet(void);
void settings5BSetValue(s32 value);

/* Destroys the view's owned object and resets its eye and target (current and previous) to the home pose. */
void FUN_00352388(void)
{
    LmapViewA *view;

    if (DAT_005806a0.view->clip != NULL) {
        delete DAT_005806a0.view->clip;
        DAT_005806a0.view->clip = NULL;
    }
    view = DAT_005806a0.view;
    view->target = view->homeTarget;
    view->eye = view->homeEye;
    view->savedTarget = view->homeTarget;
    view->savedEye = view->homeEye;
    view->unk2B8 = 0;
    view->unk304 = 0;
    FUN_00292b84();
    if (mapStateGet()) {
        settings5BSetValue(1);
    }
}

} /* extern "C" */
