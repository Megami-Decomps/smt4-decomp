/* NON_MATCHING: dictionary wrapper, cached null pointer and relative entry addressing use different registers/instructions; 51 built versus 50 retail rows. */
#include "gfx/NamedModelMaterial.h"

extern "C" u32 libc_strlen(const char *text);
extern "C" NamedMaterialDictionaryEntry *nw_ut_ResDicPatricia_Get(
    NamedMaterialDictionary **dictionary, const char *name, u32 length);

extern "C" void FUN_0031e2bc(NamedMaterialOwner *owner, const char *name, u8 value)
{
    NamedMaterialDictionary *dictionary = static_cast<NamedMaterialDictionary *>(
        owner->model->resource->materials.get());
    if (dictionary && name) {
        u32 length = libc_strlen(name);
        NamedMaterialDictionaryEntry *entry = nw_ut_ResDicPatricia_Get(&dictionary, name, length);
        if (entry) {
            s32 index = entry - &dictionary->entries[0];
            if (index != -1) {
                NamedMaterialModel *model = owner->model;
                NamedModelMaterial *material;
                if (model->overridesBegin != model->overridesEnd) {
                    material = &model->overridesBegin[index];
                } else {
                    NamedMaterialDictionary *resourceDictionary =
                        static_cast<NamedMaterialDictionary *>(model->resource->materials.get());
                    if (resourceDictionary) {
                        material = static_cast<NamedModelMaterial *>(resourceDictionary->entries[index].material.get());
                    } else {
                        material = NULL;
                    }
                }
                material->flag = value;
            }
        }
    }
}
