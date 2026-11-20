#include "common.h"
#include "Model/MoriModelContent.h"
#include "map/LmapMainGlobals.h"

extern "C" {

extern char DAT_00531310[];     /* "c:\\SMT4F\\SMT4F\\sdds4\\program\\map\\lmapMain.cpp" */

void *asdMemoryAllocTraced(u32 size, const char *file, int line);   /* allocate with source location */
void FUN_00416168(Obj557d00 *first, Obj557d00 *second);
void FUN_003ca5a4(void);

static inline void linkModelContent(MoriModelContent *base, MoriModelContent *content)
{
    FUN_0040ab9c(base, content->resource);
}

// Rebuilds the map's model content from the pending request and links it to the base content.
void lmapRebuildModelContent(void)
{
    LmapMainStateA *state = g_lmapMainState;
    if (state != NULL) {
        u32 pending = state->modelRequest;
        void *mem = asdMemoryAllocTraced(0x20, DAT_00531310, 0x265d);
        if (mem != NULL) {
            mem = modelListInit(mem);
        }
        state->model = static_cast<MoriModelContent *>(mem);
        moriModelContentSetRequestFirst(state->model, 0x10000);
        moriModelContentSetRequestSecond(state->model, 0x20000);
        FUN_0040a9a0(state->model, pending);
        linkModelContent(state->baseModel, state->model);
        FUN_00416168(state->model->resource, state->baseModel->resource);
        moriModelContentCreateBinding(state->model);
        state->modelRequest = 0;
        FUN_003ca5a4();
    }
}

}
