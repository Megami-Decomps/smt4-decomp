#include "common.h"

extern "C" {

int FUN_00152bec(void);
int asdMdlManagerDestroy(int handle);

typedef struct Obj {
    /* 0x0000 */ u8 unk0000[0x95CC];
    /* 0x95CC */ int model;
} Obj;

extern Obj *DAT_0043dd68;

void FUN_002e333c(void)
{
    int *model = &DAT_0043dd68->model;

    if (*model != 0) {
        FUN_00152bec();
        asdMdlManagerDestroy(*model);
        *model = 0;
    }
}

} /* extern "C" */
