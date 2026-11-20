/* NON_MATCHING: same calls, constants, control flow and frame size (140) as retail; 157 raw / 135 shape rows
 * differ. Retail keeps the step at [sp,#112], the second step's temporary at [sp,#104] and the alignment at
 * [sp,#120] (here 104, 120 and 112); it copies the temporary into the step and the failed step into the result
 * one word at a time in a block both failures share, where this build uses ldrd/strd and predicates the first
 * copy; it forms the addresses of the sizes and of the result inside each arm (here before the branch), sets the
 * `1` argument register before the size call, and stores the uniform array's pointer and count with one `stm`. */
#include <stdio.h>
#include <new>
#include "Model/ModelUnitBuffers.h"
#include "AsdSDK/AsdDebug.h"
#include "nn/Result.h"
#include "shard/W5_W5Match7_FlagBanks.h"
#include "util/MemoryHelpers_Smt4a.h"

/* unit-local: the sizes resourceCalculateWorkspaceSizes fills exist only while this function runs */
struct PartWorkspaceSizes {
    PartWorkspaceSizes()
        : sceneBytes(0), deviceBytes(0), nodeBytes(0), animationBytes(0), materialBytes(0), extraBytes(0),
          unk18(0), unk1C(0), unk20(0), unk24(0), unk28(0), unk2C(0), unk30(0), unk34(0), unk38(0), unk3C(0),
          unk40(0), unk44(0), unk48(0), unk4C(0), unk50(0), unk54(0), unk58(0), unk5C(0)
    {
    }
    /* 0x00 */ u32 sceneBytes;   /* [0], [2]-[5]: summed for the object memory */
    /* 0x04 */ u32 deviceBytes;   /* the device memory */
    /* 0x08 */ u32 nodeBytes;
    /* 0x0C */ u32 animationBytes;
    /* 0x10 */ u32 materialBytes;
    /* 0x14 */ u32 extraBytes;
    /* 0x18 */ u32 unk18;
    /* 0x1C */ u32 unk1C;
    /* 0x20 */ u32 unk20;
    /* 0x24 */ u32 unk24;
    /* 0x28 */ u32 unk28;
    /* 0x2C */ u32 unk2C;
    /* 0x30 */ u32 unk30;
    /* 0x34 */ u32 unk34;
    /* 0x38 */ u32 unk38;
    /* 0x3C */ u32 unk3C;
    /* 0x40 */ u32 unk40;
    /* 0x44 */ u32 unk44;
    /* 0x48 */ u32 unk48;
    /* 0x4C */ u32 unk4C;
    /* 0x50 */ u32 unk50;
    /* 0x54 */ u32 unk54;
    /* 0x58 */ u32 unk58;
    /* 0x5C */ u32 unk5C;
};

/* unit-local: what each build step returns, the memory left for the next step and its result. The empty
 * destructor makes it a class whose temporaries are real objects, as retail's are: it returns the second
 * step into a temporary and copies it. */
struct PartBuildResult {
    ~PartBuildResult() {}
    /* 0x00 */ void *memory;
    /* 0x04 */ nn::Result result;
};

extern "C" {

void resourceCalculateWorkspaceSizes(UnitModelPart *part, PartWorkspaceSizes *sizes, u32 *alignment);
PartBuildResult FUN_005078e4(UnitModelPart *part, void *object, void *memory, void *deviceMemory, PartWorkspaceSizes *sizes);
PartBuildResult FUN_005074e8(UnitModelPart *part, UnitNodeTable *nodes, void *memory, PartWorkspaceSizes *sizes);
PartBuildResult FUN_00507868(UnitModelPart *part, void *object, void *memory, PartWorkspaceSizes *sizes);
void FUN_0018eb44(UnitNodeTable *nodes);
void FUN_001c3bb8(u32 program, UnitUniformSlot *slot, const char *name);

/* Builds the part's scene object, the node table and the animation object, one after the other in
 * `memory`, stopping at the first step that fails. */
static __inline PartBuildResult buildPartObjects(UnitModelPart *part, void *sceneObject, UnitNodeTable *nodes,
                                                 void *animationObject, void *memory, void *deviceMemory,
                                                 PartWorkspaceSizes *sizes)
{
    PartBuildResult step = FUN_005078e4(part, sceneObject, memory, deviceMemory, sizes);

    if (nnResultIsFailure(step.result)) {
        return step;
    }
    step = FUN_005074e8(part, nodes, step.memory, sizes);
    if (nnResultIsFailure(step.result)) {
        return step;
    }
    return FUN_00507868(part, animationObject, step.memory, sizes);
}

/* Attaches `part` to the unit: allocates the memory its objects need and builds them (on the parent's
 * node table when the unit has a parent), then looks up the shader uniforms of each of its materials and
 * keeps its name. */
void moriModelUnitAttachPart(ModelUnitBuffers *unit, UnitModelPart *part)
{
    unit->part = part;

    u32 alignment = 0x40;
    PartWorkspaceSizes sizes;
    resourceCalculateWorkspaceSizes(unit->part, &sizes, &alignment);
    asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\Model\\MoriModelUnit.cpp", 151);
    unit->objectMemory = asdMemoryAllocAligned(
        0x100, 0x100, 0, sizes.sceneBytes + sizes.nodeBytes + sizes.animationBytes + sizes.materialBytes + sizes.extraBytes, 4, 1);
    asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\Model\\MoriModelUnit.cpp", 152);
    unit->deviceMemory = asdMemoryAllocAligned(0x10000, 0x100, 0, sizes.deviceBytes, 4, 1);

    if (unit->parent != NULL) {
        buildPartObjects(unit->part, unit->sceneObject, &unit->parent->ownNodes, unit->animationObject, unit->objectMemory,
                         unit->deviceMemory, &sizes);
        unit->nodes = &unit->parent->ownNodes;
    } else {
        buildPartObjects(unit->part, unit->sceneObject, &unit->ownNodes, unit->animationObject, unit->objectMemory,
                         unit->deviceMemory, &sizes);
        unit->nodes = &unit->ownNodes;
    }
    FUN_0018eb44(unit->nodes);

    /* one set of uniforms for each material */
    u32 bytes = unit->part->materialCount * sizeof(UnitMaterialUniforms);
    asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\Model\\MoriModelUnit.cpp", 184);
    unit->uniforms.data = (UnitMaterialUniforms *)asdMemoryAlloc(0x100, 0x100, 0, bytes, 1);
    unit->uniforms.count = bytes / sizeof(UnitMaterialUniforms);
    for (u32 i = 0; i < unit->uniforms.count; i++) {
        new (&unit->uniforms.data[i]) UnitMaterialUniforms;
    }

    UnitMaterialUniforms *end = unit->uniforms.data + unit->uniforms.count;
    UnitMaterialUniforms *begin = unit->uniforms.data;
    for (UnitMaterialUniforms *uniforms = begin; end != uniforms; ++uniforms) {
        u32 program = unit->part->materials[uniforms - begin].data->shader->program;

        FUN_001c3bb8(program, &uniforms->worldMatrix, "WrldMtx");
        FUN_001c3bb8(program, &uniforms->normalMatrix, "NormMtx");
        FUN_001c3bb8(program, &uniforms->projectionMatrix, "ProjMtx");
        FUN_001c3bb8(program, &uniforms->viewMatrix, "ViewMtx");
        FUN_001c3bb8(program, &uniforms->universalRegister, "UnivReg");
        FUN_001c3bb8(program, &uniforms->lightCount, "LightCt");
        FUN_001c3bb8(program, &uniforms->hemisphereGround, "HslGCol");
        FUN_001c3bb8(program, &uniforms->hemisphereSky, "HslSCol");
        FUN_001c3bb8(program, &uniforms->hemisphereDirection, "HslSDir");
        FUN_001c3bb8(program, &uniforms->materialAmbient, "MatAmbi");
        FUN_001c3bb8(program, &uniforms->materialDiffuse, "MatDiff");
    }
    sprintf(unit->name, unit->part->name);
}

} /* extern "C" */
