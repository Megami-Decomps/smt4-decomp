#include "common.h"

extern "C" void asdMdlManagerUpdate(void);

/* Run the model manager callback and report success. */
extern "C" s32 modelManagerUpdateCallback(void)
{
    asdMdlManagerUpdate();
    return 0;
}
