#include "common.h"

extern "C" {

int asdMdlManagerMarkDestroy(void);
int asdMdlManagerDestroy(int handle);

typedef struct Obj {
    /* 0x0000 */ u8 unk0000[0x95CC];
    /* 0x95CC */ int model;
} Obj;

extern Obj *g_unite;

void uniteReleaseModel(void)
{
    int *model = &g_unite->model;

    if (*model != 0) {
        asdMdlManagerMarkDestroy();
        asdMdlManagerDestroy(*model);
        *model = 0;
    }
}

} /* extern "C" */
