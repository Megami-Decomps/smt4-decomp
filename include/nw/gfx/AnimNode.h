/* nw::gfx animation nodes (the part the model code uses): a node reports its runtime type
 * through the third vtable slot, and the types chain to their base through `base`, so a
 * checked down-cast walks that chain. An AnimBlender is a group of member nodes; an
 * AnimEvaluator plays one animation binding. */
#ifndef NW_GFX_ANIMNODE_H
#define NW_GFX_ANIMNODE_H

#include "common.h"
#include "nw/ut/RuntimeTypeInfo.h"


/* The runtime type records of AnimBlender and AnimEvaluator. */
extern "C" nw::ut::RuntimeTypeInfo DAT_00471f30;
extern "C" nw::ut::RuntimeTypeInfo DAT_0044e7f0;

namespace nw {

namespace gfx {

class AnimNode {
public:
    virtual ~AnimNode() = 0;
    virtual const ut::RuntimeTypeInfo *getRuntimeTypeInfo() const = 0;   /* slot 2 */
};

/* A value the animation data is checked against: slot 6 returns the member count. */
class AnimTargetSource {
public:
    virtual void vfunc00() = 0;
    virtual void vfunc04() = 0;
    virtual void vfunc08() = 0;
    virtual void vfunc0c() = 0;
    virtual void vfunc10() = 0;
    virtual void vfunc14() = 0;
    virtual s32 GetCount() const = 0;
};

/* The animated model: the two sources its animations bind against. */
struct AnimTargetModel {
    /* 0x000 */ u8 unk000[0x258];
    /* 0x258 */ AnimTargetSource *materialSource;
    /* 0x25C */ u8 unk25c[4];
    /* 0x260 */ AnimTargetSource *boneSource;
};

/* What an evaluator was built for: the counts the target model must offer. */
struct AnimBinding {
    /* 0x00 */ u8 unk00[0x28];
    /* 0x28 */ s32 boneCount;
    /* 0x2C */ s32 materialCount;
};

class AnimBlender : public AnimNode {
public:
    /* 0x04 */ u8 unk04[0x10];
    /* 0x14 */ AnimNode **membersBegin;
    /* 0x18 */ AnimNode **membersEnd;

    static const ut::RuntimeTypeInfo *getTypeInfoStatic() { return &DAT_00471f30; }
};

class AnimEvaluator : public AnimNode {
public:
    /* 0x04 */ u8 unk04[0x50];
    /* 0x54 */ AnimBinding *binding;

    static const ut::RuntimeTypeInfo *getTypeInfoStatic() { return &DAT_0044e7f0; }
};

}  // namespace gfx
}  // namespace nw

#endif
