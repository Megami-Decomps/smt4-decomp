#include "common.h"
#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"

extern "C" {

typedef struct Obj {
    /* 0x0000 */ u8 unk0000[0x95CC];
    /* 0x95CC */ AsdMdlObject *model;
} Obj;

extern Obj *g_unite;

void uniteReleaseModel(void)
{
    AsdMdlObject **model = &g_unite->model;

    if (*model != NULL) {
        asdMdlManagerMarkDestroy(*model);
        asdMdlManagerDestroy(*model);
        *model = NULL;
    }
}

} /* extern "C" */
