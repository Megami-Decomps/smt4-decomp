#include "Model/MoriModelContent.h"

struct BattleModelHolder {
    MoriModelContent *content; // 0x00
};

extern "C" {
void *asdMemoryAllocTraced(u32, const char *, s32);

// Lazily create a model content holder and copy the source's body into it.
void btlModelCopyContentIfMissing(BattleModelHolder *destination, const BattleModelHolder *source)
{
    if (destination->content == NULL) {
        MoriModelContent *content = (MoriModelContent *)asdMemoryAllocTraced(0x20,
            "c:\\SMT4F\\SMT4F\\sdds4\\program\\battle\\btlModel.cpp", 0x95);
        if (content != NULL)
            content = modelListInit(content);
        destination->content = content;
        moriModelContentCopyBody(content, source->content, 0);
    }
}
}
