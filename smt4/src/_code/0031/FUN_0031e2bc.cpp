/* NON_MATCHING: the dictionary lookup (nw::ut::ResDicPatricia's GetIndex: wrapper on the stack, NULL-hoisted relative pointers) matches retail; retail keeps the index in r1 (armcc: r0), so the material entry is addressed as base + index * 16 with a written-back #40, and the resource dictionary's NULL test is not folded into the add. */
#include "gfx/NamedModelMaterial.h"

extern "C" u32 libc_strlen(const char *text);

/* unit-local: nw::ut::ResDicPatricia, a resource dictionary viewed through its data pointer (its GetIndex is
 * an NW header inline). */
struct NamedMaterialDic {
    NamedMaterialDictionary *data;

    NamedMaterialDic(NamedMaterialDictionary *dictionary) : data(dictionary) {}
    /* The index of `key`, or -1 when it is missing (ResDicPatricia::GetIndex). */
    inline s32 getIndex(const char *key) const;
};

extern "C" NamedMaterialDictionaryEntry *nw_ut_ResDicPatricia_Get(
    const NamedMaterialDic *dictionary, const char *name, u32 length);

inline s32 NamedMaterialDic::getIndex(const char *key) const
{
    if (data != NULL && key != NULL) {
        NamedMaterialDictionaryEntry *entry = nw_ut_ResDicPatricia_Get(this, key, libc_strlen(key));
        if (entry != NULL) {
            return entry - &data->nodes[1];
        }
    }
    return -1;
}

extern "C" void FUN_0031e2bc(NamedMaterialOwner *owner, const char *name, u8 value)
{
    NamedMaterialDic dictionary(owner->model->resource->materials.get());
    s32 index = dictionary.getIndex(name);
    if (index != -1) {
        NamedMaterialModel *model = owner->model;
        NamedModelMaterial *material;
        if (model->overridesBegin != model->overridesEnd) {
            material = &model->overridesBegin[index];
        } else {
            NamedMaterialDictionary *resourceDictionary = model->resource->materials.get();
            if (resourceDictionary) {
                material = resourceDictionary->nodes[index + 1].material.get();
            } else {
                material = NULL;
            }
        }
        material->flag = value;
    }
}
