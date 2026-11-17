#include "Model/MoriModelContent.h"
extern "C" {
void *asdLoadFileSyncNoContext(const char *name, u32 flags, u32 mode, u32 alignment);

/* Loads the content's model file by name (128-byte aligned). */
void resourceOwnerLoadFileSync(MoriModelContent *content, const char *name)
{
    content->file = asdLoadFileSyncNoContext(name, 0, 1, 128);
}
}
