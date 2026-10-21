#include "Model/MoriModelContent.h"

struct BattleModelHolder {
    MoriModelContent *content; // 0x00
};

extern "C" {
void *FUN_00178b04(u32, const char *, s32);
MoriModelContent *modelListInit(void *);
void moriModelContentCopyBody(MoriModelContent *, MoriModelContent *, u32);

// Lazily create a model content holder and copy the source's body into it.
void FUN_004d8724(BattleModelHolder *destination, const BattleModelHolder *source)
{
    if (destination->content == NULL) {
        MoriModelContent *content = (MoriModelContent *)FUN_00178b04(0x20,
            "c:\\SMT4F\\SMT4F\\sdds4\\program\\battle\\btlModel.cpp", 0x95);
        if (content != NULL)
            content = modelListInit(content);
        destination->content = content;
        moriModelContentCopyBody(content, source->content, 0);
    }
}
}
