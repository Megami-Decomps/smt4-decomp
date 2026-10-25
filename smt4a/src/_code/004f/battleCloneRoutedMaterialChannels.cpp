/* NON_MATCHING: material channel/timing copies and kind-bit setters inline differently, changing the frame and loop-register allocation. */
#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"
#include "shard/W6_W6Match7_MaterialAnimationFlags.h"

extern "C" {
void handleSlotRelease(MaterialMergeOwner *owner, s32 slot);
s32 idSetFindSubjectIndex(BtlMainStateA *battle, const BattleRosterRecordA *record);
const MaterialMergeVariants *FUN_001568f8(BtlMainStateA *battle, s32 group);
MaterialMergeModel *FUN_00178b04(u32 bytes, const char *file, u32 line);
MaterialMergeModel *modelListInit(MaterialMergeModel *model);
void moriModelContentCopyBody(MaterialMergeModel *destination, const MaterialMergeModel *source, u32 flags);

/* Clone a matching model and transfer the routed material animation channels. */
void battleCloneRoutedMaterialChannels(MaterialMergeOwner *owner, u32 kind, s32 slot)
{
    if (kind == 0 || kind == 22) {
        return;
    }
    handleSlotRelease(owner, slot);
    const BattleRosterRecordA *record = &btlGetMainState()->roster[slot];
    s32 group = record->render.group;
    if (owner->state.slots[slot].handle >= 0) {
        return;
    }
    s32 variant = idSetFindSubjectIndex(btlGetMainState(), record);
    if (variant < 0) {
        variant = 0;
    }
    const MaterialMergeVariants *variants = FUN_001568f8(btlGetMainState(), group);
    if (variants == NULL) {
        return;
    }
    for (s32 originalIndex = 0; originalIndex < 50; ++originalIndex) {
        const MaterialMergeOriginal *original = &owner->models.originals[originalIndex];
        if (variants->keys[variant] != original->key ||
            btlGetMainState()->roster[slot].modelMatch.key != original->context) {
            continue;
        }
        MaterialMergeModel *model = FUN_00178b04(sizeof(MaterialMergeModel),
            "c:\\SMT4F\\SMT4F\\sdds4\\program\\battle\\btlEffect.cpp", 0x65C);
        if (model != NULL) {
            model = modelListInit(model);
        }
        owner->models.results[slot].model = model;
        moriModelContentCopyBody(model, original->model, 0);
        s32 count = original->model->resource->metadata->count;
        for (s32 nodeIndex = 0; nodeIndex < count; ++nodeIndex) {
            MaterialMergeNode *destination = &owner->models.results[slot].model->resource->nodes[nodeIndex];
            const MaterialMergeNode *source = &original->model->resource->nodes[nodeIndex];
            for (s32 groupIndex = 0; groupIndex < 50; ++groupIndex) {
                const MaterialMergeGroup *routes = &owner->routing.groups[groupIndex];
                for (s32 routeIndex = 0; routeIndex < routes->count; ++routeIndex) {
                    s32 channel = routes->routes[routeIndex].channel;
                    if (routes->routes[routeIndex].node != nodeIndex) {
                        continue;
                    }
                    switch (channel) {
                    case 0:
                        if ((source->flags & 0x1000) != 0) {
                            destination->flags |= 0x1000;
                        }
                        destination->timing[0] = source->timing[0];
                        materialMergeSetKind(destination, 1, routes->mode == 12);
                        break;
                    case 1:
                        if ((source->flags & 0x2000) != 0) {
                            destination->flags |= 0x2000;
                        }
                        destination->timing[1] = source->timing[1];
                        materialMergeSetKind(destination, 2, routes->mode == 12);
                        break;
                    case 2:
                        if ((source->flags & 0x4000) != 0) {
                            destination->flags |= 0x4000;
                        }
                        destination->timing[2] = source->timing[2];
                        materialMergeSetKind(destination, 4, routes->mode == 12);
                        break;
                    }
                    destination->channels[channel] = source->channels[channel];
                }
            }
        }
        owner->models.results[slot].group = group;
        return;
    }
}
}
